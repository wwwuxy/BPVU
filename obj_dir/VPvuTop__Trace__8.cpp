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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 24418);
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
    bufp->chgBit(oldp+0,((0x182U == ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                      ? ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_113)) 
                                           & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T) 
                                              >> 7U)) 
                                          << 8U) | (IData)(vlSelf->PvuTop__DOT___GEN_114))
                                      : 0U))));
    bufp->chgBit(oldp+1,((0x182U == ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                      ? ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_113)) 
                                           & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T) 
                                              >> 7U)) 
                                          << 8U) | (IData)(vlSelf->PvuTop__DOT___GEN_116))
                                      : 0U))));
    bufp->chgBit(oldp+2,((0x182U == ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                      ? ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_113)) 
                                           & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T) 
                                              >> 7U)) 
                                          << 8U) | (IData)(vlSelf->PvuTop__DOT___GEN_117))
                                      : 0U))));
    bufp->chgBit(oldp+3,((0x182U == ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                      ? ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_113)) 
                                           & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T) 
                                              >> 7U)) 
                                          << 8U) | (IData)(vlSelf->PvuTop__DOT___GEN_118))
                                      : 0U))));
    bufp->chgIData(oldp+4,(((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                               ? ((0U == (0x1fU & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                   ? ((0xe0U & ((- (IData)(
                                                           (1U 
                                                            & ((((IData)(1U) 
                                                                 - 
                                                                 vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                - (IData)(1U)) 
                                                               >> 4U)))) 
                                                << 5U)) 
                                      | (0x1fU & (((IData)(1U) 
                                                   - 
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                  - (IData)(1U))))
                                   : ((0xe0U & ((- (IData)(
                                                           (1U 
                                                            & ((- 
                                                                vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                               >> 4U)))) 
                                                << 5U)) 
                                      | (0x1fU & (- 
                                                  vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                               : 0U) << 0x18U) | ((
                                                   ((1U 
                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                      ? 
                                                     ((0xe0U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((((IData)(1U) 
                                                                           - 
                                                                           vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                          - (IData)(1U)) 
                                                                         >> 4U)))) 
                                                          << 5U)) 
                                                      | (0x1fU 
                                                         & (((IData)(1U) 
                                                             - 
                                                             vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            - (IData)(1U))))
                                                      : 
                                                     ((0xe0U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((- 
                                                                          vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                         >> 4U)))) 
                                                          << 5U)) 
                                                      | (0x1fU 
                                                         & (- 
                                                            vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | ((((1U 
                                                        & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                         ? 
                                                        ((0xe0U 
                                                          & ((- (IData)(
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
                                                         : 
                                                        ((0xe0U 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & ((- 
                                                                             vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                            >> 4U)))) 
                                                             << 5U)) 
                                                         | (0x1fU 
                                                            & (- 
                                                               vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                        : 0U) 
                                                      << 8U) 
                                                     | ((1U 
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
    bufp->chgWData(oldp+5,(__Vtemp_hdf4c90c7__0),112);
    bufp->chgBit(oldp+9,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+10,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+11,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+12,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+13,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+14,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+15,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+16,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+17,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o),30);
    bufp->chgIData(oldp+18,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o),30);
    bufp->chgIData(oldp+19,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o),30);
    bufp->chgIData(oldp+20,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o),30);
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
    bufp->chgWData(oldp+21,(__Vtemp_h3feece17__0),272);
    bufp->chgQData(oldp+30,((((QData)((IData)(((1U 
                                                & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                ? (
                                                   (0xdU 
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
    bufp->chgWData(oldp+32,(__Vtemp_hef56dceb__0),112);
    bufp->chgWData(oldp+36,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o),68);
    bufp->chgWData(oldp+39,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o),68);
    bufp->chgWData(oldp+42,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o),68);
    bufp->chgWData(oldp+45,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o),68);
    bufp->chgSData(oldp+48,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
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
    bufp->chgBit(oldp+49,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgQData(oldp+50,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->chgQData(oldp+52,((0x7ffffffffffffffULL & 
                             ((1U & (((IData)(1U) - 
                                      vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                     - (IData)(1U)))
                               ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                  >> 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2))),59);
    bufp->chgQData(oldp+54,((0x7ffffffffffffffULL & 
                             ((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
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
    bufp->chgWData(oldp+56,(__Vtemp_h40fbf5e9__0),272);
    bufp->chgQData(oldp+65,((((QData)((IData)(((1U 
                                                & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                ? (
                                                   (0xeU 
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
    bufp->chgWData(oldp+67,(__Vtemp_h77c88815__0),112);
    bufp->chgWData(oldp+71,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o),68);
    bufp->chgWData(oldp+74,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o),68);
    bufp->chgWData(oldp+77,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o),68);
    bufp->chgWData(oldp+80,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o),68);
    bufp->chgIData(oldp+83,(((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
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
                                       | (0x1fU & (
                                                   ((IData)(1U) 
                                                    - 
                                                    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   - (IData)(1U))))
                                    : ((0xe0U & ((- (IData)(
                                                            (1U 
                                                             & ((- 
                                                                 vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                >> 4U)))) 
                                                 << 5U)) 
                                       | (0x1fU & (- 
                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                : 0U) << 0x18U) | (
                                                   (((1U 
                                                      & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                       ? 
                                                      ((0xe0U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((((IData)(1U) 
                                                                            - 
                                                                            vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                           - (IData)(1U)) 
                                                                          >> 4U)))) 
                                                           << 5U)) 
                                                       | (0x1fU 
                                                          & (((IData)(1U) 
                                                              - 
                                                              vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                             - (IData)(1U))))
                                                       : 
                                                      ((0xe0U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((- 
                                                                           vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                          >> 4U)))) 
                                                           << 5U)) 
                                                       | (0x1fU 
                                                          & (- 
                                                             vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                      : 0U) 
                                                    << 0x10U) 
                                                   | ((((1U 
                                                         & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        ((0U 
                                                          == 
                                                          (0x1fU 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                          ? 
                                                         ((0xe0U 
                                                           & ((- (IData)(
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
                                                          : 
                                                         ((0xe0U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & ((- 
                                                                              vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                             >> 4U)))) 
                                                              << 5U)) 
                                                          | (0x1fU 
                                                             & (- 
                                                                vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((1U 
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
    bufp->chgWData(oldp+84,(__Vtemp_hd280c543__0),112);
    bufp->chgBit(oldp+88,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+89,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+90,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+91,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+92,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+93,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+94,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+95,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+96,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o),30);
    bufp->chgIData(oldp+97,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o),30);
    bufp->chgIData(oldp+98,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o),30);
    bufp->chgIData(oldp+99,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o),30);
    __Vtemp_h95b92b9c__0[0U] = vlSelf->io_posit_i2_0;
    __Vtemp_h95b92b9c__0[1U] = vlSelf->io_posit_i2_1;
    __Vtemp_h95b92b9c__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_posit_i2_2))));
    __Vtemp_h95b92b9c__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_posit_i2_2))) 
                                        >> 0x20U));
    bufp->chgWData(oldp+100,(__Vtemp_h95b92b9c__0),128);
    bufp->chgBit(oldp+104,((0x80000000U == vlSelf->io_posit_i1_0)));
    bufp->chgBit(oldp+105,((0x80000000U == vlSelf->io_posit_i2_0)));
    bufp->chgBit(oldp+106,((0x80000000U == vlSelf->io_posit_i1_1)));
    bufp->chgBit(oldp+107,((0x80000000U == vlSelf->io_posit_i2_1)));
    bufp->chgBit(oldp+108,((0x80000000U == vlSelf->io_posit_i1_2)));
    bufp->chgBit(oldp+109,((0x80000000U == vlSelf->io_posit_i2_2)));
    bufp->chgBit(oldp+110,((0x80000000U == vlSelf->io_posit_i1_3)));
    bufp->chgBit(oldp+111,((0x80000000U == vlSelf->io_posit_i2_3)));
    bufp->chgQData(oldp+112,((((QData)((IData)((1U 
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
    bufp->chgBit(oldp+114,((0U == vlSelf->io_posit_i1_0)));
    bufp->chgBit(oldp+115,((0U == vlSelf->io_posit_i1_1)));
    bufp->chgBit(oldp+116,((0U == vlSelf->io_posit_i1_2)));
    bufp->chgBit(oldp+117,((0U == vlSelf->io_posit_i1_3)));
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
    bufp->chgWData(oldp+118,(__Vtemp_h8eb14285__0),128);
    bufp->chgSData(oldp+122,(((0x8000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign) 
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
    bufp->chgQData(oldp+123,((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2)
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
    bufp->chgIData(oldp+125,(((0x80000000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Sign) 
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
    bufp->chgIData(oldp+126,(((((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
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
    bufp->chgWData(oldp+127,(__Vtemp_hadd908e9__0),112);
    bufp->chgBit(oldp+131,((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                    ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0))));
    bufp->chgBit(oldp+132,((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                    ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0))));
    bufp->chgBit(oldp+133,((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                    ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0))));
    bufp->chgBit(oldp+134,((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                    ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0))));
    bufp->chgIData(oldp+135,(((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
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
    bufp->chgIData(oldp+136,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_io_result_o),31);
    bufp->chgIData(oldp+137,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_1_io_result_o),31);
    bufp->chgIData(oldp+138,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_2_io_result_o),31);
    bufp->chgIData(oldp+139,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_3_io_result_o),31);
    bufp->chgBit(oldp+140,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+141,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+142,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+143,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+144,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+145,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+146,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+147,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+148,(vlSymsp->TOP__PvuTop__DOT__decode2.io_Exp),32);
    bufp->chgIData(oldp+149,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_io_result_o),31);
    bufp->chgIData(oldp+150,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_1_io_result_o),31);
    bufp->chgIData(oldp+151,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_2_io_result_o),31);
    bufp->chgIData(oldp+152,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_3_io_result_o),31);
    bufp->chgBit(oldp+153,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+154,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+155,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+156,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+157,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+158,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+159,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+160,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+161,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.io_Frac),112);
    bufp->chgBit(oldp+165,((1U & (~ vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+166,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+167,((1U & (~ vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+168,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+169,((1U & (~ vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+170,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+171,((1U & (~ vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+172,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+173,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+177,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+178,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+179,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+180,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+181,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+182,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+183,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+184,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+185,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+189,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+190,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+191,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+192,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+193,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+194,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+195,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+196,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+197,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+201,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+202,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+203,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+204,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+205,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+206,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+207,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+208,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+209,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+213,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+214,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+215,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+216,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+217,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+218,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+219,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+220,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+221,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp),32);
    bufp->chgWData(oldp+222,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+226,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+227,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+228,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+229,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+230,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+231,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+232,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+233,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
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
