// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop___024root.h"

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__13(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__13\n"); );
    // Body
    vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T 
        = (0xffU & (((5U == (IData)(vlSelf->io_op))
                      ? ((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
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
                                              - vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                             - (IData)(1U))))
                              : ((0x1c0U & ((- (IData)(
                                                       (1U 
                                                        & ((- 
                                                            (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                             - (IData)(4U))) 
                                                           >> 5U)))) 
                                            << 6U)) 
                                 | (0x3fU & (- (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                - (IData)(4U))))))
                          : 0U) : 0U) + ((IData)(vlSelf->PvuTop__DOT___GEN_52)
                                          ? 0U : (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___comptree_io_result_o))));
    vlSelf->PvuTop__DOT___GEN_107 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h41d5b416__0)
                                      ? (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T)
                                      : 0U);
    vlSelf->PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0 
        = ((5U == (IData)(vlSelf->io_op)) & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T) 
                                             >> 7U));
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                         ? (~ ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T) 
                                               >> 2U))
                                         : 0x1fU)) : 
                     ((IData)(2U) + ((5U == (IData)(vlSelf->io_op))
                                      ? ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T) 
                                         >> 2U) : 0U))) 
                    - (IData)(2U)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__14(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__14\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2 = 0;
    // Body
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_3_T_2 
        = (0x3fffffffU & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i 
                              << 0x10U) : vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i));
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2 
        = (0x3fffffffU & ((8U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2 
        = (0x3fffffffU & ((4U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2 
        = (0x3fffffffU & ((2U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o 
        = (0x3fffffffU & ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__15(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__15\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2 = 0;
    // Body
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_3_T_2 
        = (0x3fffffffU & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i 
                              << 0x10U) : vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i));
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2 
        = (0x3fffffffU & ((8U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2 
        = (0x3fffffffU & ((4U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2 
        = (0x3fffffffU & ((2U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o 
        = (0x3fffffffU & ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__16(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__16\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_0_T_2 = 0;
    // Body
    PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_3_T_2 
        = (0x3fffffffU & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_1__io_operand_i 
                              << 0x10U) : vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_1__io_operand_i));
    PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_2_T_2 
        = (0x3fffffffU & ((8U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_1_T_2 
        = (0x3fffffffU & ((4U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_0_T_2 
        = (0x3fffffffU & ((2U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o 
        = (0x3fffffffU & ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__17(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__17\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_0_T_2 = 0;
    // Body
    PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_3_T_2 
        = (0x3fffffffU & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_1__io_operand_i 
                              << 0x10U) : vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_1__io_operand_i));
    PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_2_T_2 
        = (0x3fffffffU & ((8U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_1_T_2 
        = (0x3fffffffU & ((4U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_0_T_2 
        = (0x3fffffffU & ((2U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o 
        = (0x3fffffffU & ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__18(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__18\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_0_T_2 = 0;
    // Body
    PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_3_T_2 
        = (0x3fffffffU & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_2__io_operand_i 
                              << 0x10U) : vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_2__io_operand_i));
    PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_2_T_2 
        = (0x3fffffffU & ((8U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_1_T_2 
        = (0x3fffffffU & ((4U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_0_T_2 
        = (0x3fffffffU & ((2U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o 
        = (0x3fffffffU & ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__19(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__19\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_0_T_2 = 0;
    // Body
    PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_3_T_2 
        = (0x3fffffffU & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_2__io_operand_i 
                              << 0x10U) : vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_2__io_operand_i));
    PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_2_T_2 
        = (0x3fffffffU & ((8U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_1_T_2 
        = (0x3fffffffU & ((4U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_0_T_2 
        = (0x3fffffffU & ((2U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o 
        = (0x3fffffffU & ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__20(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__20\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_3_T_2 
        = (0x3fffffffU & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_3__io_operand_i 
                              << 0x10U) : vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_3__io_operand_i));
    PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_2_T_2 
        = (0x3fffffffU & ((8U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_1_T_2 
        = (0x3fffffffU & ((4U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_0_T_2 
        = (0x3fffffffU & ((2U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o 
        = (0x3fffffffU & ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__frac_norm_sub__DOT__shifter_3__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__21(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__21\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_3_T_2 
        = (0x3fffffffU & ((0x10U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_3__io_operand_i 
                              << 0x10U) : vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_3__io_operand_i));
    PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_2_T_2 
        = (0x3fffffffU & ((8U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_1_T_2 
        = (0x3fffffffU & ((4U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_0_T_2 
        = (0x3fffffffU & ((2U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o 
        = (0x3fffffffU & ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U])
                           ? (PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__frac_norm_add__DOT__shifter_3__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__22(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__22\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hbe2a2ad7__0;
    VlWide<3>/*95:0*/ __Vtemp_h2079ab9e__0;
    // Body
    __Vtemp_hbe2a2ad7__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hbe2a2ad7__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h2079ab9e__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hbe2a2ad7__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hbe2a2ad7__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h2079ab9e__0[2U])))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | ((((0x10000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                 ? 0x1cU : 0x1dU) << 0x11U) | ((((0x4000000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x1aU
                                                  : 0x1bU) 
                                                << 0xcU) 
                                               | ((((0x1000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0x18U
                                                     : 0x19U) 
                                                   << 7U) 
                                                  | ((((0x400000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x16U
                                                        : 0x17U) 
                                                      << 2U) 
                                                     | (((0x100000U 
                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                          ? 0x14U
                                                          : 0x15U) 
                                                        >> 3U))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__23(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__23\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h2248054a__0;
    // Body
    __Vtemp_h2248054a__0 = (((IData)((0U != (0x30000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                           << 0x1cU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x300000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h2248054a__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__24(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__24\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc292476d__0;
    VlWide<3>/*95:0*/ __Vtemp_hc691c38a__0;
    // Body
    __Vtemp_hc292476d__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hc292476d__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hc691c38a__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hc292476d__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hc292476d__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hc691c38a__0[2U])))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | ((((0x10000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                 ? 0x1cU : 0x1dU) << 0x11U) | ((((0x4000000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x1aU
                                                  : 0x1bU) 
                                                << 0xcU) 
                                               | ((((0x1000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0x18U
                                                     : 0x19U) 
                                                   << 7U) 
                                                  | ((((0x400000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x16U
                                                        : 0x17U) 
                                                      << 2U) 
                                                     | (((0x100000U 
                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)
                                                          ? 0x14U
                                                          : 0x15U) 
                                                        >> 3U))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__25(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__25\n"); );
    // Init
    IData/*31:0*/ __Vtemp_hd1cc9bd3__0;
    // Body
    __Vtemp_hd1cc9bd3__0 = (((IData)((0U != (0x30000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                           << 0x1cU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x300000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_hd1cc9bd3__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__26(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__26\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he1f0002e__0;
    VlWide<3>/*95:0*/ __Vtemp_h8871b88e__0;
    // Body
    __Vtemp_he1f0002e__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_he1f0002e__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h8871b88e__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_he1f0002e__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_he1f0002e__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h8871b88e__0[2U])))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | ((((0x10000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                 ? 0x1cU : 0x1dU) << 0x11U) | ((((0x4000000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x1aU
                                                  : 0x1bU) 
                                                << 0xcU) 
                                               | ((((0x1000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0x18U
                                                     : 0x19U) 
                                                   << 7U) 
                                                  | ((((0x400000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x16U
                                                        : 0x17U) 
                                                      << 2U) 
                                                     | (((0x100000U 
                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                          ? 0x14U
                                                          : 0x15U) 
                                                        >> 3U))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__27(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__27\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h165eb601__0;
    // Body
    __Vtemp_h165eb601__0 = (((IData)((0U != (0x30000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                           << 0x1cU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x300000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h165eb601__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__28(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__28\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h119cec92__0;
    VlWide<3>/*95:0*/ __Vtemp_h0e73f44b__0;
    // Body
    __Vtemp_h119cec92__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h119cec92__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h0e73f44b__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h119cec92__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h119cec92__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h0e73f44b__0[2U])))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | ((((0x10000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                 ? 0x1cU : 0x1dU) << 0x11U) | ((((0x4000000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x1aU
                                                  : 0x1bU) 
                                                << 0xcU) 
                                               | ((((0x1000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0x18U
                                                     : 0x19U) 
                                                   << 7U) 
                                                  | ((((0x400000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x16U
                                                        : 0x17U) 
                                                      << 2U) 
                                                     | (((0x100000U 
                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp)
                                                          ? 0x14U
                                                          : 0x15U) 
                                                        >> 3U))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__29(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__29\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h390fb3e6__0;
    // Body
    __Vtemp_h390fb3e6__0 = (((IData)((0U != (0x30000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                           << 0x1cU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x300000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h390fb3e6__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__30(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__30\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hbf6cbdaf__0;
    VlWide<3>/*95:0*/ __Vtemp_h2fbde4ae__0;
    // Body
    __Vtemp_hbf6cbdaf__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hbf6cbdaf__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h2fbde4ae__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hbf6cbdaf__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hbf6cbdaf__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h2fbde4ae__0[2U])))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | ((((0x10000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                 ? 0x1cU : 0x1dU) << 0x11U) | ((((0x4000000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x1aU
                                                  : 0x1bU) 
                                                << 0xcU) 
                                               | ((((0x1000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0x18U
                                                     : 0x19U) 
                                                   << 7U) 
                                                  | ((((0x400000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x16U
                                                        : 0x17U) 
                                                      << 2U) 
                                                     | (((0x100000U 
                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                          ? 0x14U
                                                          : 0x15U) 
                                                        >> 3U))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__31(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__31\n"); );
    // Init
    IData/*31:0*/ __Vtemp_hb3099be3__0;
    // Body
    __Vtemp_hb3099be3__0 = (((IData)((0U != (0x30000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                           << 0x1cU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x300000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_hb3099be3__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__32(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__32\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha55e74c3__0;
    VlWide<3>/*95:0*/ __Vtemp_h59e6ad46__0;
    // Body
    __Vtemp_ha55e74c3__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_ha55e74c3__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h59e6ad46__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_ha55e74c3__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_ha55e74c3__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h59e6ad46__0[2U])))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | ((((0x10000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                 ? 0x1cU : 0x1dU) << 0x11U) | ((((0x4000000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x1aU
                                                  : 0x1bU) 
                                                << 0xcU) 
                                               | ((((0x1000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0x18U
                                                     : 0x19U) 
                                                   << 7U) 
                                                  | ((((0x400000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x16U
                                                        : 0x17U) 
                                                      << 2U) 
                                                     | (((0x100000U 
                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp)
                                                          ? 0x14U
                                                          : 0x15U) 
                                                        >> 3U))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__33(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__33\n"); );
    // Init
    IData/*31:0*/ __Vtemp_he3109e79__0;
    // Body
    __Vtemp_he3109e79__0 = (((IData)((0U != (0x30000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                           << 0x1cU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x300000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_he3109e79__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__34(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__34\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hd89d654a__0;
    VlWide<3>/*95:0*/ __Vtemp_hb3e97967__0;
    // Body
    __Vtemp_hd89d654a__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hd89d654a__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hb3e97967__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hd89d654a__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hd89d654a__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hb3e97967__0[2U])))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | ((((0x10000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                 ? 0x1cU : 0x1dU) << 0x11U) | ((((0x4000000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x1aU
                                                  : 0x1bU) 
                                                << 0xcU) 
                                               | ((((0x1000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0x18U
                                                     : 0x19U) 
                                                   << 7U) 
                                                  | ((((0x400000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x16U
                                                        : 0x17U) 
                                                      << 2U) 
                                                     | (((0x100000U 
                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                          ? 0x14U
                                                          : 0x15U) 
                                                        >> 3U))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__35(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__35\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h369b7232__0;
    // Body
    __Vtemp_h369b7232__0 = (((IData)((0U != (0x30000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                           << 0x1cU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x300000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h369b7232__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__36(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__36\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5dac8f95__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a4b6e59__0;
    // Body
    __Vtemp_h5dac8f95__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h5dac8f95__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h3a4b6e59__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h5dac8f95__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h5dac8f95__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_h3a4b6e59__0[2U])))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U]) 
           | ((((0x10000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                 ? 0x1cU : 0x1dU) << 0x11U) | ((((0x4000000U 
                                                  & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x1aU
                                                  : 0x1bU) 
                                                << 0xcU) 
                                               | ((((0x1000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0x18U
                                                     : 0x19U) 
                                                   << 7U) 
                                                  | ((((0x400000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0x16U
                                                        : 0x17U) 
                                                      << 2U) 
                                                     | (((0x100000U 
                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp)
                                                          ? 0x14U
                                                          : 0x15U) 
                                                        >> 3U))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__37(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__37\n"); );
    // Init
    IData/*31:0*/ __Vtemp_hb2e22455__0;
    // Body
    __Vtemp_hb2e22455__0 = (((IData)((0U != (0x30000000U 
                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                             << 0x1dU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc000000U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                           << 0x1cU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1bU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1aU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x300000U 
                                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x19U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x18U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x17U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x16U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x15U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x14U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x13U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x12U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x11U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x10U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_hb2e22455__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__51(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__51\n"); );
    // Init
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2 = 0;
    QData/*58:0*/ PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2 = 0;
    // Body
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 
        = (0x7ffffffffffffffULL & ((0x20U & (((IData)(5U) 
                                              - vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                             - (IData)(1U)))
                                    ? (vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                                       >> 0x20U) : vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i));
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2 
        = (0x7ffffffffffffffULL & ((0x20U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                             - (IData)(4U)))
                                    ? (vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                                       << 0x20U) : vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i));
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 
        = (0x7ffffffffffffffULL & ((0x10U & (((IData)(5U) 
                                              - vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                             - (IData)(1U)))
                                    ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2 
                                       >> 0x10U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_4_T_2));
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2 
        = (0x7ffffffffffffffULL & ((0x10U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                             - (IData)(4U)))
                                    ? (PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2 
                                       << 0x10U) : PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_4_T_2));
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 
        = (0x7ffffffffffffffULL & ((8U & (((IData)(5U) 
                                           - vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                          - (IData)(1U)))
                                    ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2 
                                       >> 8U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2 
        = (0x7ffffffffffffffULL & ((8U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                          - (IData)(4U)))
                                    ? (PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2 
                                       << 8U) : PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_3_T_2));
    PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 
        = (0x7ffffffffffffffULL & ((4U & (((IData)(5U) 
                                           - vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                          - (IData)(1U)))
                                    ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2 
                                       >> 4U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2 
        = (0x7ffffffffffffffULL & ((4U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                          - (IData)(4U)))
                                    ? (PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2 
                                       << 4U) : PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_2_T_2));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
        = (0x7ffffffffffffffULL & ((2U & (((IData)(5U) 
                                           - vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                          - (IData)(1U)))
                                    ? (PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2 
                                       >> 2U) : PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
        = (0x7ffffffffffffffULL & ((2U & (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                          - (IData)(4U)))
                                    ? (PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2 
                                       << 2U) : PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_1_T_2));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__52(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__52\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hfbda02e6__0;
    VlWide<3>/*95:0*/ __Vtemp_he1f80e73__0;
    VlWide<3>/*95:0*/ __Vtemp_hc9465c38__0;
    VlWide<4>/*127:0*/ __Vtemp_hc8e00bb3__0;
    VlWide<5>/*159:0*/ __Vtemp_h2405ea5a__0;
    VlWide<5>/*159:0*/ __Vtemp_h1919d06d__0;
    VlWide<6>/*191:0*/ __Vtemp_hb053c44f__0;
    VlWide<6>/*191:0*/ __Vtemp_h1b45b072__0;
    VlWide<6>/*191:0*/ __Vtemp_h61dc3abe__0;
    VlWide<8>/*255:0*/ __Vtemp_h4f161967__0;
    VlWide<9>/*287:0*/ __Vtemp_h4c4b4e18__0;
    VlWide<9>/*287:0*/ __Vtemp_h9e29cdba__0;
    VlWide<11>/*351:0*/ __Vtemp_h5106e3f3__0;
    VlWide<12>/*383:0*/ __Vtemp_hc0bc8215__0;
    // Body
    __Vtemp_hfbda02e6__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                         >> 0x13U)))
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xeU) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x12U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            (0x3fU 
                                                             & ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                            >> 0x11U)))
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 6U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x14U) 
                                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xcU)))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0x3fU 
                                                                & ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                               >> 0xfU)))
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                     << 6U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1aU))
                                                                    : 
                                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xdU)))
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0x12U) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0xeU))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xcU) 
                                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x14U)))))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (0x3fU 
                                                                      & ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xbU)))
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x1eU) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 2U))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x18U) 
                                                                          | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 8U)))))) 
                                                     << 0x1eU) 
                                                    | (QData)((IData)(
                                                                      ((0x3f000000U 
                                                                        & (((1U 
                                                                             & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 9U)))
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                              << 0xaU) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x16U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 4U) 
                                                                             | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                           << 0x18U)) 
                                                                       | ((0xfc0000U 
                                                                           & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 7U)))
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x10U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x3f000U 
                                                                              & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 5U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 4U))) 
                                                                                << 0xcU)) 
                                                                             | ((0xfc0U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x18U))) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 6U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xcU))))))))))))))));
    __Vtemp_hfbda02e6__0[1U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x15U)))
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 2U) | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1eU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1cU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 4U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x3fU 
                                                              & ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                             >> 0x13U)))
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xeU) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x12U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (0x3fU 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0x11U)))
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x1aU) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 6U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x14U) 
                                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xcU)))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xfU)))
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                         << 6U) 
                                                                        | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1aU))
                                                                        : 
                                                                       vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (0x3fU 
                                                                       & ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xdU)))
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0x12U) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0xeU))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xcU) 
                                                                           | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x14U)))))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xbU)))
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 2U))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x18U) 
                                                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 8U)))))) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          ((0x3f000000U 
                                                                            & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 9U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x16U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                               << 0x18U)) 
                                                                           | ((0xfc0000U 
                                                                               & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 7U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x10U))) 
                                                                                << 0x12U)) 
                                                                              | ((0x3f000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 5U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 4U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x18U))) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 6U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xcU))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_he1f80e73__0[2U] = ((0x3f00U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x19U)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0xaU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 0x16U))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                  << 4U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 0x1cU))) 
                                            << 8U)) 
                                | ((0xfcU & (((1U & (IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x17U)))
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x16U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xaU))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x10U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0x10U))) 
                                             << 2U)) 
                                   | (3U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x15U)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 2U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1eU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1cU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 4U))) 
                                            >> 4U))));
    __Vtemp_hc9465c38__0[2U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x1fU)))
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                       << 6U) | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                 >> 0x1aU))
                                   : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U]) 
                                 << 0x1aU) | ((0x3f00000U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x1dU)))
                                                    ? 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                     << 0x12U) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                       >> 0xeU))
                                                    : 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                     << 0xcU) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                       >> 0x14U))) 
                                                  << 0x14U)) 
                                              | ((0xfc000U 
                                                  & (((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                        << 0x1eU) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                          >> 2U))
                                                       : 
                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                        << 0x18U) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                          >> 8U))) 
                                                     << 0xeU)) 
                                                 | __Vtemp_he1f80e73__0[2U])));
    __Vtemp_hc8e00bb3__0[3U] = ((0x3f000U & (((1U & (IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x25U)))
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                   << 2U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                     >> 0x1eU))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                     >> 4U))) 
                                             << 0xcU)) 
                                | ((0xfc0U & (((1U 
                                                & (IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x23U)))
                                                ? (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0xeU) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0x12U))
                                                : (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 8U) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0x18U))) 
                                              << 6U)) 
                                   | (0x3fU & ((1U 
                                                & (IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x21U)))
                                                ? (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 6U))
                                                : (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0x14U) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0xcU))))));
    __Vtemp_h2405ea5a__0[3U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x2bU)))
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                       >> 2U)) : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                   << 0x18U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                     >> 8U))) 
                                 << 0x1eU) | ((0x3f000000U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x29U)))
                                                    ? 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                     << 0xaU) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                       >> 0x16U))
                                                    : 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                     << 4U) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                       >> 0x1cU))) 
                                                  << 0x18U)) 
                                              | ((0xfc0000U 
                                                  & (((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                  >> 0x27U)))
                                                       ? 
                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                        << 0x16U) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                          >> 0xaU))
                                                       : 
                                                      ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                        << 0x10U) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                          >> 0x10U))) 
                                                     << 0x12U)) 
                                                 | __Vtemp_hc8e00bb3__0[3U])));
    __Vtemp_h1919d06d__0[4U] = ((0xfc00U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x2fU)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                  << 6U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    >> 0x1aU))
                                              : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U]) 
                                            << 0xaU)) 
                                | ((0x3f0U & (((1U 
                                                & (IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x2dU)))
                                                ? (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0x12U) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 0xeU))
                                                : (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0xcU) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 0x14U))) 
                                              << 4U)) 
                                   | (0xfU & (((1U 
                                                & (IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x2bU)))
                                                ? (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 2U))
                                                : (
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0x18U) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 8U))) 
                                              >> 2U))));
    __Vtemp_hb053c44f__0[4U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x35U)))
                                   ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       << 2U) | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                 >> 0x1eU))
                                   : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       << 0x1cU) | 
                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       >> 4U))) << 0x1cU) 
                                | ((0xfc00000U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x33U)))
                                                    ? 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                     << 0xeU) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                     << 8U) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                       >> 0x18U))) 
                                                  << 0x16U)) 
                                   | ((0x3f0000U & 
                                       (((1U & (IData)(
                                                       (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                        >> 0x31U)))
                                          ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              << 0x1aU) 
                                             | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                >> 6U))
                                          : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              << 0x14U) 
                                             | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                >> 0xcU))) 
                                        << 0x10U)) 
                                      | __Vtemp_h1919d06d__0[4U])));
    __Vtemp_h1b45b072__0[5U] = ((0x3f00U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x39U)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 0xaU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 0x16U))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                  << 4U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 0x1cU))) 
                                            << 8U)) 
                                | ((0xfcU & (((1U & (IData)(
                                                            (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x37U)))
                                               ? ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                   << 0x16U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                     >> 0xaU))
                                               : ((
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                   << 0x10U) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                     >> 0x10U))) 
                                             << 2U)) 
                                   | (3U & (((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x35U)))
                                              ? ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 2U) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                    >> 0x1eU))
                                              : ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 0x1cU) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 4U))) 
                                            >> 4U))));
    __Vtemp_h61dc3abe__0[5U] = ((((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))
                                   ? 0U : 1U) << 0x1aU) 
                                | ((0x3f00000U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x3dU)))
                                                    ? 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     << 0x12U) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                       >> 0xeU))
                                                    : 
                                                   ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     << 0xcU) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                       >> 0x14U))) 
                                                  << 0x14U)) 
                                   | ((0xfc000U & (
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                                                >> 0x3bU)))
                                                     ? 
                                                    ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                      << 0x1eU) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                      << 0x18U) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                        >> 8U))) 
                                                   << 0xeU)) 
                                      | __Vtemp_h1b45b072__0[5U])));
    __Vtemp_h4f161967__0[6U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0xcU)))
                                   ? 0xcU : 0xdU) << 0x1eU) 
                                | ((((1U & (IData)(
                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                    >> 0xaU)))
                                      ? 0xaU : 0xbU) 
                                    << 0x18U) | (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 8U)))
                                                    ? 8U
                                                    : 9U) 
                                                  << 0x12U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 6U)))
                                                       ? 6U
                                                       : 7U) 
                                                     << 0xcU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 4U)))
                                                          ? 4U
                                                          : 5U) 
                                                        << 6U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                      >> 2U)))
                                                           ? 2U
                                                           : 3U))))));
    __Vtemp_h4c4b4e18__0[7U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0x16U)))
                                   ? 0x16U : 0x17U) 
                                 << 0x1cU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x14U)))
                                                 ? 0x14U
                                                 : 0x15U) 
                                               << 0x16U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 0x12U)))
                                                    ? 0x12U
                                                    : 0x13U) 
                                                  << 0x10U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 0x10U)))
                                                       ? 0x10U
                                                       : 0x11U) 
                                                     << 0xaU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 0xeU)))
                                                          ? 0xeU
                                                          : 0xfU) 
                                                        << 4U) 
                                                       | (((1U 
                                                            & (IData)(
                                                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0xcU)))
                                                            ? 0xcU
                                                            : 0xdU) 
                                                          >> 2U))))));
    __Vtemp_h9e29cdba__0[8U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0x20U)))
                                   ? 0x20U : 0x21U) 
                                 << 0x1aU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x1eU)))
                                                 ? 0x1eU
                                                 : 0x1fU) 
                                               << 0x14U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 0x1cU)))
                                                    ? 0x1cU
                                                    : 0x1dU) 
                                                  << 0xeU) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 0x1aU)))
                                                       ? 0x1aU
                                                       : 0x1bU) 
                                                     << 8U) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 0x18U)))
                                                          ? 0x18U
                                                          : 0x19U) 
                                                        << 2U) 
                                                       | (((1U 
                                                            & (IData)(
                                                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0x16U)))
                                                            ? 0x16U
                                                            : 0x17U) 
                                                          >> 4U))))));
    __Vtemp_h5106e3f3__0[9U] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0x2cU)))
                                   ? 0x2cU : 0x2dU) 
                                 << 0x1eU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x2aU)))
                                                 ? 0x2aU
                                                 : 0x2bU) 
                                               << 0x18U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 0x28U)))
                                                    ? 0x28U
                                                    : 0x29U) 
                                                  << 0x12U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 0x26U)))
                                                       ? 0x26U
                                                       : 0x27U) 
                                                     << 0xcU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 0x24U)))
                                                          ? 0x24U
                                                          : 0x25U) 
                                                        << 6U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                      >> 0x22U)))
                                                           ? 0x22U
                                                           : 0x23U))))));
    __Vtemp_hc0bc8215__0[0xaU] = ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                   >> 0x36U)))
                                     ? 0x36U : 0x37U) 
                                   << 0x1cU) | ((((1U 
                                                   & (IData)(
                                                             (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                              >> 0x34U)))
                                                   ? 0x34U
                                                   : 0x35U) 
                                                 << 0x16U) 
                                                | ((((1U 
                                                      & (IData)(
                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                 >> 0x32U)))
                                                      ? 0x32U
                                                      : 0x33U) 
                                                    << 0x10U) 
                                                   | ((((1U 
                                                         & (IData)(
                                                                   (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                    >> 0x30U)))
                                                         ? 0x30U
                                                         : 0x31U) 
                                                       << 0xaU) 
                                                      | ((((1U 
                                                            & (IData)(
                                                                      (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0x2eU)))
                                                            ? 0x2eU
                                                            : 0x2fU) 
                                                          << 4U) 
                                                         | (((1U 
                                                              & (IData)(
                                                                        (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                                         >> 0x2cU)))
                                                              ? 0x2cU
                                                              : 0x2dU) 
                                                            >> 2U))))));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hfbda02e6__0[0U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hfbda02e6__0[1U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = __Vtemp_hc9465c38__0[2U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = __Vtemp_h2405ea5a__0[3U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = __Vtemp_hb053c44f__0[4U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
        = __Vtemp_h61dc3abe__0[5U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
        = __Vtemp_h4f161967__0[6U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
        = __Vtemp_h4c4b4e18__0[7U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
        = __Vtemp_h9e29cdba__0[8U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
        = __Vtemp_h5106e3f3__0[9U];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = __Vtemp_hc0bc8215__0[0xaU];
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = (0x3a00U | ((0xfc000000U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU]) 
                      | ((((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                          >> 0x38U)))
                            ? 0x38U : 0x39U) << 2U) 
                         | (((1U & (IData)((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                            >> 0x36U)))
                              ? 0x36U : 0x37U) >> 4U))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__53(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__53\n"); );
    // Init
    QData/*63:0*/ __Vtemp_habbacf64__0;
    // Body
    __Vtemp_habbacf64__0 = (((QData)((IData)((1U & (IData)(
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x3aU))))) 
                             << 0x3cU) | (((QData)((IData)(
                                                           (0ULL 
                                                            != 
                                                            (0x300000000000000ULL 
                                                             & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                           << 0x3bU) 
                                          | (((QData)((IData)(
                                                              (0ULL 
                                                               != 
                                                               (0xc0000000000000ULL 
                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0x30000000000000ULL 
                                                                   & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                 << 0x39U) 
                                                | (((QData)((IData)(
                                                                    (0ULL 
                                                                     != 
                                                                     (0xc000000000000ULL 
                                                                      & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       (0ULL 
                                                                        != 
                                                                        (0x3000000000000ULL 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                       << 0x37U) 
                                                      | (((QData)((IData)(
                                                                          (0ULL 
                                                                           != 
                                                                           (0xc00000000000ULL 
                                                                            & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                          << 0x36U) 
                                                         | (((QData)((IData)(
                                                                             (0ULL 
                                                                              != 
                                                                              (0x300000000000ULL 
                                                                               & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                             << 0x35U) 
                                                            | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                << 0x34U) 
                                                               | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                   << 0x33U) 
                                                                  | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                      << 0x32U) 
                                                                     | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                         << 0x31U) 
                                                                        | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                            << 0x30U) 
                                                                           | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                               << 0x2fU) 
                                                                              | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xcULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (3ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000000000000000ULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_habbacf64__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__54(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__54\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hbcb32fd9__0;
    // Body
    __Vtemp_hbcb32fd9__0[0U] = ((2U == (IData)(vlSelf->io_op))
                                 ? ((0xffffffeU & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o 
                                                   >> 2U)) 
                                    | (0U != (3U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o)))
                                 : ((3U == (IData)(vlSelf->io_op))
                                     ? ((0xffffffeU 
                                         & ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[2U] 
                                             << 0x18U) 
                                            | (0xfffffeU 
                                               & (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[1U] 
                                                  >> 8U)))) 
                                        | (0U != (0xffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[0U]))))))
                                     : ((4U == (IData)(vlSelf->io_op))
                                         ? ((0xffffffeU 
                                             & ((vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[2U] 
                                                 << 0x18U) 
                                                | (0xfffffeU 
                                                   & (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[1U] 
                                                      >> 8U)))) 
                                            | (0U != 
                                               (0xffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[0U]))))))
                                         : 0U)));
    if ((1U == (IData)(vlSelf->io_op))) {
        vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[0U] 
            = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                ? ((0xffffffeU & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o 
                                  >> 2U)) | (0U != 
                                             (3U & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o)))
                : 0U);
        vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[1U] = 0U;
        vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[2U] = 0U;
    } else {
        vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[0U] 
            = __Vtemp_hbcb32fd9__0[0U];
        if ((2U == (IData)(vlSelf->io_op))) {
            vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[1U] = 0U;
            vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[2U] = 0U;
        } else if ((3U == (IData)(vlSelf->io_op))) {
            vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[1U] = 0U;
            vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[2U] = 0U;
        } else {
            vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[1U] = 0U;
            vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[2U] = 0U;
        }
    }
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0 
        = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)) 
                 | ((6U <= (IData)(vlSelf->io_op)) 
                    | ((5U == (IData)(vlSelf->io_op)) 
                       | (0U == ((((5U == (IData)(vlSelf->io_op))
                                    ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[0U]) 
                                  | ((5U == (IData)(vlSelf->io_op))
                                      ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[1U])) 
                                 | ((5U == (IData)(vlSelf->io_op))
                                     ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[2U])))))));
    if (vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) {
        vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0 
            = ((IData)(vlSelf->PvuTop__DOT___GEN_115)
                ? 0U : ((5U == (IData)(vlSelf->io_op))
                         ? 0U : (0x7fffffU & vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[0U])));
        if ((5U == (IData)(vlSelf->io_op))) {
            vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h9347f0fa__0 = 0U;
            vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0 = 0U;
        } else {
            vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h9347f0fa__0 
                = (0x7ffffffU & vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[0U]);
            vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0 
                = (0xfffffffU & vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[0U]);
        }
    } else {
        vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0 = 0U;
        vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h9347f0fa__0 = 0U;
        vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0 = 0U;
    }
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h9347f0fa__0 
        = ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
            ? 0U : vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h9347f0fa__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__55(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__55\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h829fc00e__0;
    // Body
    __Vtemp_h829fc00e__0[0U] = ((2U == (IData)(vlSelf->io_op))
                                 ? ((0xffffffeU & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o 
                                                   >> 2U)) 
                                    | (0U != (3U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o)))
                                 : ((3U == (IData)(vlSelf->io_op))
                                     ? ((0xffffffeU 
                                         & ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[2U] 
                                             << 0x18U) 
                                            | (0xfffffeU 
                                               & (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[1U] 
                                                  >> 8U)))) 
                                        | (0U != (0xffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[0U]))))))
                                     : ((4U == (IData)(vlSelf->io_op))
                                         ? ((0xffffffeU 
                                             & ((vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[2U] 
                                                 << 0x18U) 
                                                | (0xfffffeU 
                                                   & (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[1U] 
                                                      >> 8U)))) 
                                            | (0U != 
                                               (0xffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[0U]))))))
                                         : 0U)));
    if ((1U == (IData)(vlSelf->io_op))) {
        vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[0U] 
            = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                ? ((0xffffffeU & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o 
                                  >> 2U)) | (0U != 
                                             (3U & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o)))
                : 0U);
        vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[1U] = 0U;
        vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[2U] = 0U;
    } else {
        vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[0U] 
            = __Vtemp_h829fc00e__0[0U];
        if ((2U == (IData)(vlSelf->io_op))) {
            vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[1U] = 0U;
            vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[2U] = 0U;
        } else if ((3U == (IData)(vlSelf->io_op))) {
            vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[1U] = 0U;
            vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[2U] = 0U;
        } else {
            vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[1U] = 0U;
            vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[2U] = 0U;
        }
    }
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0 
        = ((2U >= (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
           | ((6U <= (IData)(vlSelf->io_op)) | ((5U 
                                                 == (IData)(vlSelf->io_op)) 
                                                | (0U 
                                                   == 
                                                   ((((5U 
                                                       == (IData)(vlSelf->io_op))
                                                       ? 0U
                                                       : 
                                                      vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[0U]) 
                                                     | ((5U 
                                                         == (IData)(vlSelf->io_op))
                                                         ? 0U
                                                         : 
                                                        vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[1U])) 
                                                    | ((5U 
                                                        == (IData)(vlSelf->io_op))
                                                        ? 0U
                                                        : 
                                                       vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[2U]))))));
    if ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0 
            = ((IData)(vlSelf->PvuTop__DOT___GEN_115)
                ? 0U : ((5U == (IData)(vlSelf->io_op))
                         ? 0U : (0x7fffffU & vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[0U])));
        if ((5U == (IData)(vlSelf->io_op))) {
            vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0 = 0U;
            vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0 = 0U;
        } else {
            vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0 
                = (0x7ffffffU & vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[0U]);
            vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0 
                = (0xfffffffU & vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[0U]);
        }
    } else {
        vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0 = 0U;
        vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0 = 0U;
        vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0 = 0U;
    }
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h96e1f5ff__0 
        = ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
            ? 0U : vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__56(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__56\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hfe267221__0;
    // Body
    __Vtemp_hfe267221__0[0U] = ((2U == (IData)(vlSelf->io_op))
                                 ? ((0xffffffeU & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o 
                                                   >> 2U)) 
                                    | (0U != (3U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o)))
                                 : ((3U == (IData)(vlSelf->io_op))
                                     ? ((0xffffffeU 
                                         & ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[2U] 
                                             << 0x18U) 
                                            | (0xfffffeU 
                                               & (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[1U] 
                                                  >> 8U)))) 
                                        | (0U != (0xffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[0U]))))))
                                     : ((4U == (IData)(vlSelf->io_op))
                                         ? ((0xffffffeU 
                                             & ((vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[2U] 
                                                 << 0x18U) 
                                                | (0xfffffeU 
                                                   & (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[1U] 
                                                      >> 8U)))) 
                                            | (0U != 
                                               (0xffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[0U]))))))
                                         : 0U)));
    if ((1U == (IData)(vlSelf->io_op))) {
        vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[0U] 
            = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                ? ((0xffffffeU & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o 
                                  >> 2U)) | (0U != 
                                             (3U & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o)))
                : 0U);
        vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[1U] = 0U;
        vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[2U] = 0U;
    } else {
        vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[0U] 
            = __Vtemp_hfe267221__0[0U];
        if ((2U == (IData)(vlSelf->io_op))) {
            vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[1U] = 0U;
            vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[2U] = 0U;
        } else if ((3U == (IData)(vlSelf->io_op))) {
            vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[1U] = 0U;
            vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[2U] = 0U;
        } else {
            vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[1U] = 0U;
            vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[2U] = 0U;
        }
    }
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0 
        = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)) 
                 | ((6U <= (IData)(vlSelf->io_op)) 
                    | ((5U == (IData)(vlSelf->io_op)) 
                       | (0U == ((((5U == (IData)(vlSelf->io_op))
                                    ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[0U]) 
                                  | ((5U == (IData)(vlSelf->io_op))
                                      ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[1U])) 
                                 | ((5U == (IData)(vlSelf->io_op))
                                     ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[2U])))))));
    if (vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) {
        vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0 
            = ((IData)(vlSelf->PvuTop__DOT___GEN_115)
                ? 0U : ((5U == (IData)(vlSelf->io_op))
                         ? 0U : (0x7fffffU & vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[0U])));
        if ((5U == (IData)(vlSelf->io_op))) {
            vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h962fac1b__0 = 0U;
            vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0 = 0U;
        } else {
            vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h962fac1b__0 
                = (0x7ffffffU & vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[0U]);
            vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0 
                = (0xfffffffU & vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[0U]);
        }
    } else {
        vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0 = 0U;
        vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h962fac1b__0 = 0U;
        vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0 = 0U;
    }
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h962fac1b__0 
        = ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
            ? 0U : vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h962fac1b__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__57(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__57\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3a328a5a__0;
    // Body
    __Vtemp_h3a328a5a__0[0U] = ((2U == (IData)(vlSelf->io_op))
                                 ? ((0xffffffeU & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o 
                                                   >> 2U)) 
                                    | (0U != (3U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))
                                 : ((3U == (IData)(vlSelf->io_op))
                                     ? ((0xffffffeU 
                                         & ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[2U] 
                                             << 0x18U) 
                                            | (0xfffffeU 
                                               & (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[1U] 
                                                  >> 8U)))) 
                                        | (0U != (0xffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[0U]))))))
                                     : ((4U == (IData)(vlSelf->io_op))
                                         ? ((0xffffffeU 
                                             & ((vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[2U] 
                                                 << 0x18U) 
                                                | (0xfffffeU 
                                                   & (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[1U] 
                                                      >> 8U)))) 
                                            | (0U != 
                                               (0xffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[0U]))))))
                                         : 0U)));
    if ((1U == (IData)(vlSelf->io_op))) {
        vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[0U] 
            = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                ? ((0xffffffeU & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o 
                                  >> 2U)) | (0U != 
                                             (3U & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o)))
                : 0U);
        vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[1U] = 0U;
        vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[2U] = 0U;
    } else {
        vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[0U] 
            = __Vtemp_h3a328a5a__0[0U];
        if ((2U == (IData)(vlSelf->io_op))) {
            vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[1U] = 0U;
            vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[2U] = 0U;
        } else if ((3U == (IData)(vlSelf->io_op))) {
            vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[1U] = 0U;
            vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[2U] = 0U;
        } else {
            vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[1U] = 0U;
            vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[2U] = 0U;
        }
    }
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0 
        = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)) 
                 | ((6U <= (IData)(vlSelf->io_op)) 
                    | ((5U == (IData)(vlSelf->io_op)) 
                       | (0U == ((((5U == (IData)(vlSelf->io_op))
                                    ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[0U]) 
                                  | ((5U == (IData)(vlSelf->io_op))
                                      ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[1U])) 
                                 | ((5U == (IData)(vlSelf->io_op))
                                     ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[2U])))))));
    if (vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) {
        vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0 
            = ((IData)(vlSelf->PvuTop__DOT___GEN_115)
                ? 0U : ((5U == (IData)(vlSelf->io_op))
                         ? 0U : (0x7fffffU & vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[0U])));
        if ((5U == (IData)(vlSelf->io_op))) {
            vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h91c3a767__0 = 0U;
            vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0 = 0U;
        } else {
            vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h91c3a767__0 
                = (0x7ffffffU & vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[0U]);
            vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0 
                = (0xfffffffU & vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[0U]);
        }
    } else {
        vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0 = 0U;
        vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h91c3a767__0 = 0U;
        vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0 = 0U;
    }
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0 
        = ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
            ? 0U : vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h91c3a767__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__58(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__58\n"); );
    // Init
    VlWide<3>/*89:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    IData/*30:0*/ PvuTop__DOT__dot_decoder__DOT____VdfgTmp_h27f16fb5__0;
    PvuTop__DOT__dot_decoder__DOT____VdfgTmp_h27f16fb5__0 = 0;
    CData/*0:0*/ PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0;
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hf34d21c1__0;
    VlWide<3>/*95:0*/ __Vtemp_hd60c6902__0;
    VlWide<3>/*95:0*/ __Vtemp_h266f8086__0;
    VlWide<3>/*95:0*/ __Vtemp_h5391c0d0__0;
    VlWide<3>/*95:0*/ __Vtemp_hccaee320__0;
    // Body
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                   & (5U > (0x3fU & 
                                            vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])))
                                   ? (0x7ffffffffffffffULL 
                                      & ((1U & (((IData)(1U) 
                                                 - 
                                                 vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                - (IData)(1U)))
                                          ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                             >> 1U)
                                          : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2))
                                   : (0x7ffffffffffffffULL 
                                      & ((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                          ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
                                             << 1U)
                                          : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2))));
    vlSelf->PvuTop__DOT__floatDotEncoder__DOT____VdfgTmp_h96e1e555__0 
        = ((IData)(vlSelf->PvuTop__DOT___GEN_106) ? 
           ((5U == (IData)(vlSelf->io_op)) ? ((0x7ffffeU 
                                               & ((IData)(
                                                          (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                           >> 0x1cU)) 
                                                  << 1U)) 
                                              | (0U 
                                                 != 
                                                 (0x7ffffffU 
                                                  & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
             : 0U) : 0U);
    vlSelf->PvuTop__DOT__pir_frac_normed_dot = ((5U 
                                                 == (IData)(vlSelf->io_op))
                                                 ? 
                                                ((0xffffffeU 
                                                  & ((IData)(
                                                             (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                              >> 0x1cU)) 
                                                     << 1U)) 
                                                 | (0U 
                                                    != 
                                                    (0x7ffffffU 
                                                     & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                                 : 0U);
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                      ? (3U & (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T))
                                      : 0U))) << 0x39U) 
                   | ((QData)((IData)(((5U == (IData)(vlSelf->io_op))
                                        ? ((0x7fffffeU 
                                            & ((IData)(
                                                       (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                        >> 0x1cU)) 
                                               << 1U)) 
                                           | (0U != 
                                              (0x7ffffffU 
                                               & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                        : 0U))) << 0x1eU)));
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((5U 
                                                                           == (IData)(vlSelf->io_op))
                                                                           ? 
                                                                          (3U 
                                                                           & (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T))
                                                                           : 0U))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           ((5U 
                                                                             == (IData)(vlSelf->io_op))
                                                                             ? 
                                                                            ((0x7fffffeU 
                                                                              & ((IData)(
                                                                                (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted 
                                                                                >> 0x1cU)) 
                                                                                << 1U)) 
                                                                             | (0U 
                                                                                != 
                                                                                (0x7ffffffU 
                                                                                & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted))))
                                                                             : 0U))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isZero 
        = (1U & ((~ (IData)(vlSelf->PvuTop__DOT___GEN_106)) 
                 | (0U == vlSelf->PvuTop__DOT__pir_frac_normed_dot)));
    vlSelf->__VdfgTmp_h7fe49659__0 = ((0U == ((5U == (IData)(vlSelf->io_op))
                                               ? (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T)
                                               : 0U)) 
                                      & (0U == vlSelf->PvuTop__DOT__pir_frac_normed_dot));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf34d21c1__0, vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hf34d21c1__0[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hf34d21c1__0[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf34d21c1__0[2U]);
    } else {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    vlSelf->io_float_dot_o = (((5U != (IData)(vlSelf->io_op)) 
                               | (IData)(vlSelf->io_Outposit))
                               ? 0ULL : (QData)((IData)(
                                                        ((((IData)(vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isZero)
                                                            ? 0U
                                                            : 
                                                           (((IData)(vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isInf) 
                                                             | (IData)(vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isNaN))
                                                             ? 0xffU
                                                             : 
                                                            ((0x182U 
                                                              == 
                                                              ((0xffffff00U 
                                                                & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h41d5b416__0) 
                                                                    << 8U) 
                                                                   & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T) 
                                                                      << 1U))) 
                                                               | (IData)(vlSelf->PvuTop__DOT___GEN_107)))
                                                              ? 0U
                                                              : 
                                                             (0xffU 
                                                              & ((IData)(0x7fU) 
                                                                 + (IData)(vlSelf->PvuTop__DOT___GEN_107)))))) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isInf) 
                                                             | (IData)(vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isZero))
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isNaN)
                                                              ? 
                                                             ((0U 
                                                               == vlSelf->PvuTop__DOT__floatDotEncoder__DOT____VdfgTmp_h96e1e555__0)
                                                               ? 1U
                                                               : vlSelf->PvuTop__DOT__floatDotEncoder__DOT____VdfgTmp_h96e1e555__0)
                                                              : vlSelf->PvuTop__DOT__floatDotEncoder__DOT____VdfgTmp_h96e1e555__0))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd60c6902__0, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hd60c6902__0[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hd60c6902__0[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd60c6902__0[2U]);
    } else {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h266f8086__0, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h266f8086__0[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h266f8086__0[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h266f8086__0[2U]);
    } else {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5391c0d0__0, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h5391c0d0__0[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h5391c0d0__0[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h5391c0d0__0[2U]);
    } else {
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hccaee320__0, PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_hccaee320__0[0U];
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_hccaee320__0[1U];
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hccaee320__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode_dot__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode_dot__DOT___value_after_round_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o[0U])))))));
    PvuTop__DOT__dot_decoder__DOT____VdfgTmp_h27f16fb5__0 
        = ((IData)(vlSelf->__VdfgTmp_h7fe49659__0) ? 0U
            : vlSelf->PvuTop__DOT__encode_dot__DOT___value_after_round_T);
    vlSelf->PvuTop__DOT__dot_decoder__DOT___GEN = 0U;
    if (vlSelf->PvuTop__DOT__dot_decoder__DOT___GEN) {
        vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR 
            = (0U == PvuTop__DOT__dot_decoder__DOT____VdfgTmp_h27f16fb5__0);
        vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6 
            = (0x7fffffffU & ((IData)(1U) + ((IData)(vlSelf->__VdfgTmp_h7fe49659__0)
                                              ? 0x7fffffffU
                                              : (~ vlSelf->PvuTop__DOT__encode_dot__DOT___value_after_round_T))));
    } else {
        vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR = 0U;
        vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6 
            = (0x7fffffffU & PvuTop__DOT__dot_decoder__DOT____VdfgTmp_h27f16fb5__0);
    }
    vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1eU));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1dU));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1cU));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1bU));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1aU));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x19U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i);
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__59(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__59\n"); );
    // Body
    vlSelf->io_float_o_3 = ((IData)(vlSelf->PvuTop__DOT___GEN_130)
                             ? vlSelf->PvuTop__DOT___GEN_77
                             : ((IData)(vlSelf->io_Outposit)
                                 ? (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h446da761__0) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_71))
                                     ? 0ULL : vlSelf->PvuTop__DOT____VdfgTmp_h098a558a__0)
                                 : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                     ? (QData)((IData)(
                                                       ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h9b56b116__0) 
                                                          & (IData)(vlSelf->PvuTop__DOT___GEN_88)) 
                                                         << 0x1fU) 
                                                        | ((((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)
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
                                                                 ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_113)) 
                                                                    & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T) 
                                                                       >> 7U)) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelf->PvuTop__DOT___GEN_118))
                                                                  : 0U))
                                                                ? 0U
                                                                : 
                                                               (0xffU 
                                                                & ((IData)(0x7fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                                     ? (IData)(vlSelf->PvuTop__DOT___GEN_118)
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
                                                                : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0))))))
                                     : vlSelf->PvuTop__DOT___GEN_77)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__60(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__60\n"); );
    // Init
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    CData/*0:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0;
    PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h4198450f__0;
    VlWide<3>/*95:0*/ __Vtemp_hbaed5fc8__0;
    VlWide<3>/*95:0*/ __Vtemp_h6f579d7d__0;
    VlWide<3>/*95:0*/ __Vtemp_h76170c50__0;
    VlWide<3>/*95:0*/ __Vtemp_he1538fbb__0;
    VlWide<3>/*95:0*/ __Vtemp_hf77145ca__0;
    VlWide<3>/*95:0*/ __Vtemp_h81d46b98__0;
    VlWide<3>/*95:0*/ __Vtemp_h11dd11f5__0;
    VlWide<3>/*95:0*/ __Vtemp_hd2386c56__0;
    VlWide<3>/*95:0*/ __Vtemp_hc8b0f6d8__0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h1fbda3f9__0)) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h9347f0fa__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(vlSelf->__VdfgTmp_h1fbda3f9__0)) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h9347f0fa__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0 
        = ((0U != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0) 
           & (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h4198450f__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h4198450f__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h4198450f__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h4198450f__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                      ? 0U : (IData)(vlSelf->__VdfgTmp_h1fbda3f9__0)))) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((0U 
                                                                           == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                                                           ? 0U
                                                                           : (IData)(vlSelf->__VdfgTmp_h1fbda3f9__0)))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                         ? 0x1fU : (IData)(vlSelf->__VdfgTmp_h4abd7439__0)))
                      : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                         ? 0U : (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1cf3a611__0)))) 
                    - (IData)(2U)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hbaed5fc8__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hbaed5fc8__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hbaed5fc8__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hbaed5fc8__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h6f579d7d__0, vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h6f579d7d__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h6f579d7d__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h6f579d7d__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h76170c50__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h76170c50__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h76170c50__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h76170c50__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_he1538fbb__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_he1538fbb__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_he1538fbb__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_he1538fbb__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf77145ca__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hf77145ca__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hf77145ca__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf77145ca__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h81d46b98__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h81d46b98__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h81d46b98__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h81d46b98__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h11dd11f5__0, PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_h11dd11f5__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_h11dd11f5__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h11dd11f5__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd2386c56__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hd2386c56__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hd2386c56__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd2386c56__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U])))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hc8b0f6d8__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_hc8b0f6d8__0[0U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_hc8b0f6d8__0[1U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hc8b0f6d8__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U])))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__61(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__61\n"); );
    // Body
    vlSelf->io_float_o_2 = ((IData)(vlSelf->PvuTop__DOT___GEN_130)
                             ? vlSelf->PvuTop__DOT___GEN_76
                             : ((IData)(vlSelf->io_Outposit)
                                 ? (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h28711195__0) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_71))
                                     ? 0ULL : vlSelf->PvuTop__DOT____VdfgTmp_h3d760f20__0)
                                 : ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                     ? (QData)((IData)(
                                                       ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h4d703b6d__0) 
                                                          & (IData)(vlSelf->PvuTop__DOT___GEN_87)) 
                                                         << 0x1fU) 
                                                        | ((((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)
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
                                                                 ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_113)) 
                                                                    & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T) 
                                                                       >> 7U)) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelf->PvuTop__DOT___GEN_117))
                                                                  : 0U))
                                                                ? 0U
                                                                : 
                                                               (0xffU 
                                                                & ((IData)(0x7fU) 
                                                                   + 
                                                                   ((2U 
                                                                     < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                                     ? (IData)(vlSelf->PvuTop__DOT___GEN_117)
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
                                                                : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0))))))
                                     : vlSelf->PvuTop__DOT___GEN_76)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__62(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__62\n"); );
    // Init
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    CData/*0:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0;
    PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_he4810790__0;
    VlWide<3>/*95:0*/ __Vtemp_h5b5250d1__0;
    VlWide<3>/*95:0*/ __Vtemp_h38254cc8__0;
    VlWide<3>/*95:0*/ __Vtemp_hacd47c81__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d492546__0;
    VlWide<3>/*95:0*/ __Vtemp_h7ba44c4d__0;
    VlWide<3>/*95:0*/ __Vtemp_h1328ddc8__0;
    VlWide<3>/*95:0*/ __Vtemp_h17039e94__0;
    VlWide<3>/*95:0*/ __Vtemp_h79b2c194__0;
    VlWide<3>/*95:0*/ __Vtemp_h91321d94__0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h680a1520__0)) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(vlSelf->__VdfgTmp_h680a1520__0)) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0 
        = ((0U != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0) 
           & (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_he4810790__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_he4810790__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_he4810790__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_he4810790__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                      ? 0U : (IData)(vlSelf->__VdfgTmp_h680a1520__0)))) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((0U 
                                                                           == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                                           ? 0U
                                                                           : (IData)(vlSelf->__VdfgTmp_h680a1520__0)))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                         ? 0x1fU : (IData)(vlSelf->__VdfgTmp_h94134206__0)))
                      : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                         ? 0U : (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce83255__0)))) 
                    - (IData)(2U)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5b5250d1__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h5b5250d1__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h5b5250d1__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h5b5250d1__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h38254cc8__0, vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h38254cc8__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h38254cc8__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h38254cc8__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hacd47c81__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hacd47c81__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hacd47c81__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hacd47c81__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h3d492546__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h3d492546__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h3d492546__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h3d492546__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h7ba44c4d__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h7ba44c4d__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h7ba44c4d__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h7ba44c4d__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h1328ddc8__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h1328ddc8__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h1328ddc8__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h1328ddc8__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h17039e94__0, PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h17039e94__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h17039e94__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h17039e94__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h79b2c194__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h79b2c194__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h79b2c194__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h79b2c194__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U])))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h91321d94__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h91321d94__0[0U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h91321d94__0[1U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h91321d94__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U])))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__63(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__63\n"); );
    // Body
    vlSelf->io_float_o_1 = ((IData)(vlSelf->PvuTop__DOT___GEN_130)
                             ? vlSelf->PvuTop__DOT___GEN_75
                             : ((IData)(vlSelf->io_Outposit)
                                 ? (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h151067d9__0) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_71))
                                     ? 0ULL : vlSelf->PvuTop__DOT____VdfgTmp_h12086d12__0)
                                 : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                     ? (QData)((IData)(
                                                       ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfe6df398__0) 
                                                          & (IData)(vlSelf->PvuTop__DOT___GEN_86)) 
                                                         << 0x1fU) 
                                                        | ((((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
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
                                                                 ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_113)) 
                                                                    & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T) 
                                                                       >> 7U)) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelf->PvuTop__DOT___GEN_116))
                                                                  : 0U))
                                                                ? 0U
                                                                : 
                                                               (0xffU 
                                                                & ((IData)(0x7fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                                     ? (IData)(vlSelf->PvuTop__DOT___GEN_116)
                                                                     : 0U)))))) 
                                                            << 0x17U) 
                                                           | (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0))
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13edb1c__0)
                                                                ? 
                                                               ((0U 
                                                                 == vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)
                                                                 ? 1U
                                                                 : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)
                                                                : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0))))))
                                     : vlSelf->PvuTop__DOT___GEN_75)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__64(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__64\n"); );
    // Init
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    CData/*0:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0;
    PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h05350155__0;
    VlWide<3>/*95:0*/ __Vtemp_h467d8c7f__0;
    VlWide<3>/*95:0*/ __Vtemp_h8ef82b01__0;
    VlWide<3>/*95:0*/ __Vtemp_h282321a8__0;
    VlWide<3>/*95:0*/ __Vtemp_hec6e9696__0;
    VlWide<3>/*95:0*/ __Vtemp_h492b9b86__0;
    VlWide<3>/*95:0*/ __Vtemp_hfc7436e9__0;
    VlWide<3>/*95:0*/ __Vtemp_habcf0191__0;
    VlWide<3>/*95:0*/ __Vtemp_ha228bc71__0;
    VlWide<3>/*95:0*/ __Vtemp_hb11526f8__0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_he992d230__0)) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h962fac1b__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(vlSelf->__VdfgTmp_he992d230__0)) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h962fac1b__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0 
        = ((0U != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0) 
           & (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h05350155__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h05350155__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h05350155__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h05350155__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                      ? 0U : (IData)(vlSelf->__VdfgTmp_he992d230__0)))) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h962fac1b__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((0U 
                                                                           == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                                           ? 0U
                                                                           : (IData)(vlSelf->__VdfgTmp_he992d230__0)))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h962fac1b__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                         ? 0x1fU : (IData)(vlSelf->__VdfgTmp_hea73948f__0)))
                      : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                         ? 0U : (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c495847__0)))) 
                    - (IData)(2U)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h467d8c7f__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h467d8c7f__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h467d8c7f__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h467d8c7f__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h8ef82b01__0, vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h8ef82b01__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h8ef82b01__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h8ef82b01__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h282321a8__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h282321a8__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h282321a8__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h282321a8__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hec6e9696__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hec6e9696__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hec6e9696__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hec6e9696__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h492b9b86__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h492b9b86__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h492b9b86__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h492b9b86__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hfc7436e9__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hfc7436e9__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hfc7436e9__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hfc7436e9__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_habcf0191__0, PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_habcf0191__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_habcf0191__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_habcf0191__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_ha228bc71__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_ha228bc71__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_ha228bc71__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_ha228bc71__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U])))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hb11526f8__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_hb11526f8__0[0U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_hb11526f8__0[1U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hb11526f8__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U])))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__65(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__65\n"); );
    // Body
    vlSelf->io_float_o_0 = ((IData)(vlSelf->PvuTop__DOT___GEN_130)
                             ? vlSelf->PvuTop__DOT___GEN_74
                             : ((IData)(vlSelf->io_Outposit)
                                 ? (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h2da97177__0) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_71))
                                     ? 0ULL : vlSelf->PvuTop__DOT____VdfgTmp_hd471070e__0)
                                 : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                     ? (QData)((IData)(
                                                       ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h48f6830c__0) 
                                                          & (IData)(vlSelf->PvuTop__DOT___GEN_85)) 
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
                                                                 ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_113)) 
                                                                    & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T) 
                                                                       >> 7U)) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelf->PvuTop__DOT___GEN_114))
                                                                  : 0U))
                                                                ? 0U
                                                                : 
                                                               (0xffU 
                                                                & ((IData)(0x7fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                     ? (IData)(vlSelf->PvuTop__DOT___GEN_114)
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
                                                                : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0))))))
                                     : vlSelf->PvuTop__DOT___GEN_74)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__66(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__66\n"); );
    // Init
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    CData/*0:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h5869e245__0;
    VlWide<3>/*95:0*/ __Vtemp_h570bbeb8__0;
    VlWide<3>/*95:0*/ __Vtemp_hcbe85e2a__0;
    VlWide<3>/*95:0*/ __Vtemp_hd818819f__0;
    VlWide<3>/*95:0*/ __Vtemp_h91e13c02__0;
    VlWide<3>/*95:0*/ __Vtemp_h91617439__0;
    VlWide<3>/*95:0*/ __Vtemp_h44f6df8d__0;
    VlWide<3>/*95:0*/ __Vtemp_hbbffd6e7__0;
    VlWide<3>/*95:0*/ __Vtemp_h358ff1b6__0;
    VlWide<3>/*95:0*/ __Vtemp_hd196dc22__0;
    // Body
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_hdd15137c__0)) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h91c3a767__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(vlSelf->__VdfgTmp_hdd15137c__0)) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h91c3a767__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0 
        = ((0U != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0) 
           & (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5869e245__0, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h5869e245__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h5869e245__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h5869e245__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                      ? 0U : (IData)(vlSelf->__VdfgTmp_hdd15137c__0)))) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((0U 
                                                                           == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                                           ? 0U
                                                                           : (IData)(vlSelf->__VdfgTmp_hdd15137c__0)))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                         ? 0x1fU : (IData)(vlSelf->__VdfgTmp_h3ff2ed4f__0)))
                      : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                         ? 0U : (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c28779a__0)))) 
                    - (IData)(2U)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h570bbeb8__0, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h570bbeb8__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h570bbeb8__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h570bbeb8__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hcbe85e2a__0, vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hcbe85e2a__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hcbe85e2a__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hcbe85e2a__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd818819f__0, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hd818819f__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hd818819f__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd818819f__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h91e13c02__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h91e13c02__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h91e13c02__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h91e13c02__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h91617439__0, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h91617439__0[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h91617439__0[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h91617439__0[2U]);
    } else {
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h44f6df8d__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h44f6df8d__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h44f6df8d__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h44f6df8d__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hbbffd6e7__0, PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_hbbffd6e7__0[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_hbbffd6e7__0[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hbbffd6e7__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h358ff1b6__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h358ff1b6__0[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h358ff1b6__0[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h358ff1b6__0[2U]);
    } else {
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o[0U])))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd196dc22__0, PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_hd196dc22__0[0U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_hd196dc22__0[1U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hd196dc22__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__result_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U])))))));
}
