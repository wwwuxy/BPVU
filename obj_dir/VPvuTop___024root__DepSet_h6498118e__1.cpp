// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop___024root.h"

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__11(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__11\n"); );
    // Init
    CData/*6:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_0_T;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_0_T = 0;
    CData/*6:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_1_T;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_1_T = 0;
    CData/*6:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_2_T;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_2_T = 0;
    CData/*0:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c3df52d__0;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c3df52d__0 = 0;
    CData/*0:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c450047__0;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c450047__0 = 0;
    CData/*0:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c2d3ee3__0;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c2d3ee3__0 = 0;
    CData/*0:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0 = 0;
    IData/*17:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*17:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    IData/*17:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*17:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    IData/*17:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*17:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    IData/*17:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*17:0*/ PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    CData/*0:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1c39e73a__0;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1c39e73a__0 = 0;
    CData/*0:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1c43d53a__0;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1c43d53a__0 = 0;
    CData/*0:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1ce0098d__0;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1ce0098d__0 = 0;
    CData/*0:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1cf7ef99__0;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1cf7ef99__0 = 0;
    QData/*41:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    QData/*41:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    QData/*41:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    QData/*41:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    QData/*41:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    QData/*41:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    QData/*41:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    QData/*41:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    QData/*41:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    QData/*41:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    QData/*41:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    QData/*41:0*/ PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    CData/*0:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0 = 0;
    CData/*0:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0;
    PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0 = 0;
    CData/*0:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0;
    PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0 = 0;
    CData/*0:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0;
    PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0 = 0;
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*65:0*/ PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(66, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<4>/*113:0*/ PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(114, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<5>/*137:0*/ PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(138, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<6>/*161:0*/ PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(162, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<6>/*185:0*/ PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(186, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    IData/*30:0*/ PvuTop__DOT__quantizeInt8__DOT___roundedInt_T;
    PvuTop__DOT__quantizeInt8__DOT___roundedInt_T = 0;
    IData/*30:0*/ PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1;
    PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1 = 0;
    IData/*30:0*/ PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2;
    PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3;
    PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3 = 0;
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
    CData/*1:0*/ __VdfgTmp_hfda6e7be__0;
    __VdfgTmp_hfda6e7be__0 = 0;
    CData/*1:0*/ __VdfgTmp_hed91d77e__0;
    __VdfgTmp_hed91d77e__0 = 0;
    CData/*1:0*/ __VdfgTmp_heed29515__0;
    __VdfgTmp_heed29515__0 = 0;
    CData/*1:0*/ __VdfgTmp_h6447b6be__0;
    __VdfgTmp_h6447b6be__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h76a3d1ee__0;
    VlWide<4>/*127:0*/ __Vtemp_hea281577__0;
    VlWide<5>/*159:0*/ __Vtemp_h57266134__0;
    VlWide<6>/*191:0*/ __Vtemp_h98d7d0a9__0;
    VlWide<6>/*191:0*/ __Vtemp_he8562cf7__0;
    VlWide<3>/*95:0*/ __Vtemp_h31095e9e__0;
    VlWide<3>/*95:0*/ __Vtemp_he6c5df0d__0;
    VlWide<4>/*127:0*/ __Vtemp_h1507079b__0;
    VlWide<5>/*159:0*/ __Vtemp_he0e07f27__0;
    VlWide<6>/*191:0*/ __Vtemp_hb00c6ee7__0;
    VlWide<6>/*191:0*/ __Vtemp_h40f2a72f__0;
    VlWide<3>/*95:0*/ __Vtemp_he6e4c509__0;
    VlWide<3>/*95:0*/ __Vtemp_h428e0d62__0;
    VlWide<4>/*127:0*/ __Vtemp_h621105f1__0;
    VlWide<5>/*159:0*/ __Vtemp_ha3c643f9__0;
    VlWide<6>/*191:0*/ __Vtemp_h9e212be2__0;
    VlWide<6>/*191:0*/ __Vtemp_hd448c756__0;
    VlWide<3>/*95:0*/ __Vtemp_had336673__0;
    VlWide<3>/*95:0*/ __Vtemp_h6e9e0a16__0;
    VlWide<4>/*127:0*/ __Vtemp_h9ab4330d__0;
    VlWide<5>/*159:0*/ __Vtemp_h83036f20__0;
    VlWide<6>/*191:0*/ __Vtemp_h86db059e__0;
    VlWide<6>/*191:0*/ __Vtemp_h8703283c__0;
    VlWide<3>/*95:0*/ __Vtemp_h4f417287__0;
    VlWide<3>/*95:0*/ __Vtemp_h84883c03__0;
    VlWide<4>/*127:0*/ __Vtemp_h4fa002b7__0;
    VlWide<5>/*159:0*/ __Vtemp_h89c32174__0;
    VlWide<6>/*191:0*/ __Vtemp_h7110a385__0;
    VlWide<6>/*191:0*/ __Vtemp_h6e753a89__0;
    VlWide<3>/*95:0*/ __Vtemp_h33364ce8__0;
    VlWide<3>/*95:0*/ __Vtemp_hd9775290__0;
    VlWide<4>/*127:0*/ __Vtemp_h4f4c070c__0;
    VlWide<5>/*159:0*/ __Vtemp_h6aff0764__0;
    VlWide<6>/*191:0*/ __Vtemp_h6c36de7e__0;
    VlWide<6>/*191:0*/ __Vtemp_hb7f06717__0;
    VlWide<3>/*95:0*/ __Vtemp_hf7db27a5__0;
    VlWide<3>/*95:0*/ __Vtemp_h9e7617c1__0;
    VlWide<4>/*127:0*/ __Vtemp_h38ee4d34__0;
    VlWide<5>/*159:0*/ __Vtemp_hdb6d445b__0;
    VlWide<6>/*191:0*/ __Vtemp_h0b2a8e76__0;
    VlWide<6>/*191:0*/ __Vtemp_hd44d5ee9__0;
    VlWide<3>/*95:0*/ __Vtemp_hcb6ffcb5__0;
    VlWide<3>/*95:0*/ __Vtemp_hb9358872__0;
    VlWide<4>/*127:0*/ __Vtemp_h78c597f3__0;
    VlWide<5>/*159:0*/ __Vtemp_h9cee5b1a__0;
    VlWide<6>/*191:0*/ __Vtemp_hde3a7fac__0;
    VlWide<6>/*191:0*/ __Vtemp_he964ae05__0;
    VlWide<3>/*95:0*/ __Vtemp_h0668b454__0;
    VlWide<3>/*95:0*/ __Vtemp_hcfff9d2e__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cf84ff9__0;
    VlWide<5>/*159:0*/ __Vtemp_h7b803adf__0;
    VlWide<6>/*191:0*/ __Vtemp_h1395a30a__0;
    VlWide<6>/*191:0*/ __Vtemp_h730b528a__0;
    VlWide<3>/*95:0*/ __Vtemp_h776fbf46__0;
    VlWide<3>/*95:0*/ __Vtemp_h338182af__0;
    VlWide<4>/*127:0*/ __Vtemp_h0cba3252__0;
    VlWide<5>/*159:0*/ __Vtemp_hb220b6f7__0;
    VlWide<6>/*191:0*/ __Vtemp_h8d7189af__0;
    VlWide<6>/*191:0*/ __Vtemp_h59ecaeeb__0;
    VlWide<3>/*95:0*/ __Vtemp_hd694a1c7__0;
    VlWide<3>/*95:0*/ __Vtemp_h03950bb9__0;
    VlWide<4>/*127:0*/ __Vtemp_hf0759a4e__0;
    VlWide<5>/*159:0*/ __Vtemp_h4969ccbc__0;
    VlWide<6>/*191:0*/ __Vtemp_hbaad8916__0;
    VlWide<6>/*191:0*/ __Vtemp_hac1f39ca__0;
    VlWide<3>/*95:0*/ __Vtemp_h01b62c58__0;
    VlWide<3>/*95:0*/ __Vtemp_h891d6d04__0;
    VlWide<4>/*127:0*/ __Vtemp_h70ef9283__0;
    VlWide<5>/*159:0*/ __Vtemp_h9d818a45__0;
    VlWide<6>/*191:0*/ __Vtemp_hbeb5abca__0;
    VlWide<6>/*191:0*/ __Vtemp_h8e100bbf__0;
    VlWide<3>/*95:0*/ __Vtemp_hc25708c2__0;
    VlWide<3>/*95:0*/ __Vtemp_h1426f9e9__0;
    VlWide<4>/*127:0*/ __Vtemp_h650216ed__0;
    VlWide<5>/*159:0*/ __Vtemp_h7e2621df__0;
    VlWide<6>/*191:0*/ __Vtemp_h262f82c1__0;
    VlWide<6>/*191:0*/ __Vtemp_h396506b8__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e3467a8__0;
    VlWide<3>/*95:0*/ __Vtemp_hb45a799f__0;
    VlWide<4>/*127:0*/ __Vtemp_h41f45d1d__0;
    VlWide<5>/*159:0*/ __Vtemp_ha4d22a5e__0;
    VlWide<6>/*191:0*/ __Vtemp_hb8bdb147__0;
    VlWide<6>/*191:0*/ __Vtemp_hb231cf0d__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd02d10d__0;
    VlWide<3>/*95:0*/ __Vtemp_h2f9356b7__0;
    VlWide<4>/*127:0*/ __Vtemp_h6004c65b__0;
    VlWide<5>/*159:0*/ __Vtemp_h64304281__0;
    VlWide<6>/*191:0*/ __Vtemp_he50221bc__0;
    VlWide<6>/*191:0*/ __Vtemp_hc02b7a2e__0;
    VlWide<3>/*95:0*/ __Vtemp_h24615b54__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd0fc5fe__0;
    VlWide<4>/*127:0*/ __Vtemp_h93394b48__0;
    VlWide<5>/*159:0*/ __Vtemp_h018f021b__0;
    VlWide<6>/*191:0*/ __Vtemp_h1cb1181d__0;
    VlWide<6>/*191:0*/ __Vtemp_hf20dc898__0;
    VlWide<3>/*95:0*/ __Vtemp_h2764b952__0;
    VlWide<3>/*95:0*/ __Vtemp_head7bf16__0;
    VlWide<4>/*127:0*/ __Vtemp_h8cd7f74e__0;
    VlWide<5>/*159:0*/ __Vtemp_h686c01f0__0;
    VlWide<6>/*191:0*/ __Vtemp_h3c411b86__0;
    VlWide<6>/*191:0*/ __Vtemp_hfa767853__0;
    VlWide<3>/*95:0*/ __Vtemp_hbecca41d__0;
    VlWide<3>/*95:0*/ __Vtemp_h717642ef__0;
    VlWide<4>/*127:0*/ __Vtemp_h32bb8800__0;
    VlWide<5>/*159:0*/ __Vtemp_hef5bc192__0;
    VlWide<6>/*191:0*/ __Vtemp_hc316d220__0;
    VlWide<6>/*191:0*/ __Vtemp_hb35f29ed__0;
    VlWide<3>/*95:0*/ __Vtemp_hb0a3aa4e__0;
    VlWide<3>/*95:0*/ __Vtemp_hea9250b6__0;
    VlWide<4>/*127:0*/ __Vtemp_h81455da1__0;
    VlWide<5>/*159:0*/ __Vtemp_h1407472a__0;
    VlWide<6>/*191:0*/ __Vtemp_hb8237930__0;
    VlWide<6>/*191:0*/ __Vtemp_hf305711b__0;
    VlWide<3>/*95:0*/ __Vtemp_h1e8c96b0__0;
    VlWide<3>/*95:0*/ __Vtemp_h90bbcf27__0;
    VlWide<4>/*127:0*/ __Vtemp_h31feee7e__0;
    VlWide<5>/*159:0*/ __Vtemp_h9813f4b4__0;
    VlWide<6>/*191:0*/ __Vtemp_hbf6256c4__0;
    VlWide<6>/*191:0*/ __Vtemp_h402ed246__0;
    VlWide<3>/*95:0*/ __Vtemp_h594a29e5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc8533b76__0;
    VlWide<5>/*159:0*/ __Vtemp_h903a0601__0;
    VlWide<6>/*191:0*/ __Vtemp_h0eeee36d__0;
    VlWide<6>/*191:0*/ __Vtemp_h5ce5899e__0;
    VlWide<4>/*127:0*/ __Vtemp_h9215868f__0;
    VlWide<5>/*159:0*/ __Vtemp_h86f9068b__0;
    VlWide<6>/*191:0*/ __Vtemp_h78cf2992__0;
    VlWide<6>/*191:0*/ __Vtemp_h164c3fa9__0;
    VlWide<4>/*127:0*/ __Vtemp_he7c15590__0;
    VlWide<5>/*159:0*/ __Vtemp_he46f6974__0;
    VlWide<6>/*191:0*/ __Vtemp_h0e7ddc4e__0;
    VlWide<6>/*191:0*/ __Vtemp_h4d4d176e__0;
    VlWide<4>/*127:0*/ __Vtemp_hcc10e807__0;
    VlWide<5>/*159:0*/ __Vtemp_h79bcaa2d__0;
    VlWide<6>/*191:0*/ __Vtemp_hfbe06f11__0;
    VlWide<6>/*191:0*/ __Vtemp_ha61f5982__0;
    // Body
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9 
        = ((0ULL == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7bc97152__0) 
           | (VL_GTS_III(8, 1U, (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                 >> 0x18U)) & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                               & (0U 
                                                  != vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hebc2a567__0)
            ? (- (IData)((1U & ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                >> 3U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_3))
                                              ? ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_3))
                                              : 0U));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6 
        = ((0ULL == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b53ba00__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                          >> 0x10U))) 
              & ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                 & (0U != vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h75cc7c16__0)
            ? (- (IData)((1U & ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                >> 2U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_2))
                                              ? ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_2))
                                              : 0U));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3 
        = ((0ULL == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7ed67781__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                          >> 8U))) 
              & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                 & (0U != vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd092db84__0)
            ? (- (IData)((1U & ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                >> 1U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_1))
                                              ? ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_1))
                                              : 0U));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0 
        = ((0ULL == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h799ff3f5__0) 
           | (VL_GTS_III(8, 1U, (0xffU & vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i)) 
              & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                 & (0U != vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hf936d8b2__0)
            ? (- (IData)((1U & (IData)(vlSelf->PvuTop__DOT___GEN_40))))
            : ((0x1fU >= (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal))
                ? ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                    << 4U) >> (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal))
                : 0U));
    if ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)) {
        vlSelf->__VdfgTmp_hccd311cd__0 = 0U;
        vlSelf->__VdfgTmp_hc801dcba__0 = 0U;
        __VdfgTmp_h6447b6be__0 = 0U;
    } else {
        vlSelf->__VdfgTmp_hccd311cd__0 = vlSelf->__VdfgTmp_h798f78b9__0;
        vlSelf->__VdfgTmp_hc801dcba__0 = (((IData)(vlSelf->__VdfgTmp_hc98d8ba6__0) 
                                           << 8U) | (IData)(vlSelf->__VdfgTmp_h798f78b9__0));
        __VdfgTmp_h6447b6be__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                   ? (3U & (IData)(vlSelf->__VdfgTmp_h1adcbe2e__0))
                                   : 0U);
    }
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0 
        = ((0U != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0) 
           & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
              & ((IData)(vlSelf->__VdfgTmp_h1adcbe2e__0) 
                 >> 5U)));
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1cf7ef99__0 
        = ((0U != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0) 
           & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
              & ((IData)(vlSelf->__VdfgTmp_h1adcbe2e__0) 
                 >> 6U)));
    PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0 
        = ((0U != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0) 
           & (IData)(vlSelf->__VdfgTmp_hc98d8ba6__0));
    if ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)) {
        vlSelf->__VdfgTmp_h90b55f09__0 = 0U;
        vlSelf->__VdfgTmp_hf91b1a4e__0 = 0U;
        __VdfgTmp_heed29515__0 = 0U;
    } else {
        vlSelf->__VdfgTmp_h90b55f09__0 = vlSelf->__VdfgTmp_hacc2eacc__0;
        vlSelf->__VdfgTmp_hf91b1a4e__0 = (((IData)(vlSelf->__VdfgTmp_h1d5e1b94__0) 
                                           << 8U) | (IData)(vlSelf->__VdfgTmp_hacc2eacc__0));
        __VdfgTmp_heed29515__0 = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                   ? (3U & (IData)(vlSelf->__VdfgTmp_h013556c5__0))
                                   : 0U);
    }
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1ce0098d__0 
        = ((0U != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0) 
           & ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
              & ((IData)(vlSelf->__VdfgTmp_h013556c5__0) 
                 >> 6U)));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c2d3ee3__0 
        = ((0U != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0) 
           & ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
              & ((IData)(vlSelf->__VdfgTmp_h013556c5__0) 
                 >> 5U)));
    PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0 
        = ((0U != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0) 
           & (IData)(vlSelf->__VdfgTmp_h1d5e1b94__0));
    if ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)) {
        vlSelf->__VdfgTmp_h96991e8e__0 = 0U;
        vlSelf->__VdfgTmp_h011a90e2__0 = 0U;
        __VdfgTmp_hed91d77e__0 = 0U;
    } else {
        vlSelf->__VdfgTmp_h96991e8e__0 = vlSelf->__VdfgTmp_hda0d4db2__0;
        vlSelf->__VdfgTmp_h011a90e2__0 = (((IData)(vlSelf->__VdfgTmp_hf81c5ee3__0) 
                                           << 8U) | (IData)(vlSelf->__VdfgTmp_hda0d4db2__0));
        __VdfgTmp_hed91d77e__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                   ? (3U & (IData)(vlSelf->__VdfgTmp_hab03c7d6__0))
                                   : 0U);
    }
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1c43d53a__0 
        = ((0U != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0) 
           & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
              & ((IData)(vlSelf->__VdfgTmp_hab03c7d6__0) 
                 >> 6U)));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c450047__0 
        = ((0U != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0) 
           & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
              & ((IData)(vlSelf->__VdfgTmp_hab03c7d6__0) 
                 >> 5U)));
    PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0 
        = ((0U != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0) 
           & (IData)(vlSelf->__VdfgTmp_hf81c5ee3__0));
    if ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)) {
        vlSelf->__VdfgTmp_h6f987251__0 = 0U;
        vlSelf->__VdfgTmp_h0070e41c__0 = 0U;
        __VdfgTmp_hfda6e7be__0 = 0U;
    } else {
        vlSelf->__VdfgTmp_h6f987251__0 = vlSelf->__VdfgTmp_h28585180__0;
        vlSelf->__VdfgTmp_h0070e41c__0 = (((IData)(vlSelf->__VdfgTmp_h5b9a6abb__0) 
                                           << 8U) | (IData)(vlSelf->__VdfgTmp_h28585180__0));
        __VdfgTmp_hfda6e7be__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                   ? (3U & (IData)(vlSelf->__VdfgTmp_hc02f9133__0))
                                   : 0U);
    }
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1c39e73a__0 
        = ((0U != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0) 
           & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
              & ((IData)(vlSelf->__VdfgTmp_hc02f9133__0) 
                 >> 6U)));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c3df52d__0 
        = ((0U != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0) 
           & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
              & ((IData)(vlSelf->__VdfgTmp_hc02f9133__0) 
                 >> 5U)));
    PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0 
        = ((0U != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0) 
           & (IData)(vlSelf->__VdfgTmp_h5b9a6abb__0));
    PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3 
        = (0x7fffffffU & ((vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3 
                           >> 1U) + (1U & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3 
                                           & (((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hebc2a567__0)
                                                ? (IData)(vlSelf->__VdfgTmp_heb01027c__0)
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_3)) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hebc2a567__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_3)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_3))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_3))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a))))) 
                                              | (vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3 
                                                 >> 1U))))));
    PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2 
        = (0x7fffffffU & ((vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2 
                           >> 1U) + (1U & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2 
                                           & (((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h75cc7c16__0)
                                                ? (IData)(vlSelf->__VdfgTmp_h1aaf6b7f__0)
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_2)) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h75cc7c16__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_2)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_2))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_2))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a))))) 
                                              | (vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2 
                                                 >> 1U))))));
    PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1 
        = (0x7fffffffU & ((vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1 
                           >> 1U) + (1U & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1 
                                           & (((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd092db84__0)
                                                ? (IData)(vlSelf->__VdfgTmp_h281bd980__0)
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_1)) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd092db84__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_1)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_1))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_1))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a))))) 
                                              | (vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1 
                                                 >> 1U))))));
    PvuTop__DOT__quantizeInt8__DOT___roundedInt_T = 
        (0x7fffffffU & ((vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac 
                         >> 1U) + (1U & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac 
                                         & (((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hf936d8b2__0)
                                              ? (IData)(vlSelf->__VdfgTmp_he2c4d402__0)
                                              : ((0U 
                                                  != (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal)) 
                                                 & ((~ 
                                                     ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hf936d8b2__0) 
                                                      | (0U 
                                                         == (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal)))) 
                                                    & (0U 
                                                       != 
                                                       (((((0x1fU 
                                                            >= (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal))
                                                            ? 
                                                           ((IData)(1U) 
                                                            << (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal))
                                                            : 0U) 
                                                          - (IData)(1U)) 
                                                         >> 4U) 
                                                        & vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a))))) 
                                            | (vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac 
                                               >> 1U))))));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (7U & (((IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                   ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)
                                      ? 7U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                               ? (~ 
                                                  ((IData)(vlSelf->__VdfgTmp_h1adcbe2e__0) 
                                                   >> 2U))
                                               : 7U)))
                   : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)
                                      ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                               ? ((IData)(vlSelf->__VdfgTmp_h1adcbe2e__0) 
                                                  >> 2U)
                                               : 0U)))) 
                 - (IData)(2U)));
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0xfU & (((IData)(PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1cf7ef99__0)
                     ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)
                                        ? 0xfU : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelf->__VdfgTmp_h1adcbe2e__0) 
                                                    >> 2U))
                                                   : 0xfU)))
                     : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)
                                        ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                 ? 
                                                ((IData)(vlSelf->__VdfgTmp_h1adcbe2e__0) 
                                                 >> 2U)
                                                 : 0U)))) 
                   - (IData)(2U)));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i 
        = ((((IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7eU) << 0xbU) | (((IData)(__VdfgTmp_h6447b6be__0) 
                                         << 9U) | ((IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91b408de__0) 
                                                   << 6U)));
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i 
        = (((QData)((IData)(((IData)(PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1cf7ef99__0)
                              ? 1U : 0x7ffeU))) << 0x1bU) 
           | (QData)((IData)((((IData)(__VdfgTmp_h6447b6be__0) 
                               << 0x19U) | ((IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h960e95d4__0) 
                                            << 0xeU)))));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(__VdfgTmp_h6447b6be__0)) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(__VdfgTmp_h6447b6be__0)) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h93197337__0) 
           << 6U);
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? 1ULL : 0x7ffffffffeULL)) << 0xbU) 
           | (((IData)(__VdfgTmp_h6447b6be__0) << 9U) 
              | (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h93197337__0) 
                  >> 0x1aU) | ((IData)((vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h93197337__0 
                                        >> 0x20U)) 
                               << 6U))));
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? 1ULL : 0x7ffffffffeULL)) >> 0x15U) 
           | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                         ? 1ULL : 0x7ffffffffeULL) 
                       >> 0x20U)) << 0xbU));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h93bf770c__0) 
           << 0xeU);
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? 1ULL : 0x7ffffffffffeULL)) 
            << 0x1bU) | (((IData)(__VdfgTmp_h6447b6be__0) 
                          << 0x19U) | (((IData)(vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h93bf770c__0) 
                                        >> 0x12U) | 
                                       ((IData)((vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h93bf770c__0 
                                                 >> 0x20U)) 
                                        << 0xeU))));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? 1ULL : 0x7ffffffffffeULL)) 
            >> 5U) | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                                 ? 1ULL : 0x7ffffffffffeULL) 
                               >> 0x20U)) << 0x1bU));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[4U] 
        = ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? 1ULL : 0x7ffffffffffeULL) >> 0x20U)) 
           >> 5U);
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h9049e073__0) 
           << 0x16U);
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h9049e073__0) 
            >> 0xaU) | ((IData)((vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h9049e073__0 
                                 >> 0x20U)) << 0x16U));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? 1ULL : 0x7ffffffffffffeULL)) 
            << 0xbU) | (((IData)(__VdfgTmp_h6447b6be__0) 
                         << 9U) | ((IData)((vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h9049e073__0 
                                            >> 0x20U)) 
                                   >> 0xaU)));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[4U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? 1ULL : 0x7ffffffffffffeULL)) 
            >> 0x15U) | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                                    ? 1ULL : 0x7ffffffffffffeULL) 
                                  >> 0x20U)) << 0xbU));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[5U] 
        = ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? 1ULL : 0x7ffffffffffffeULL) 
                    >> 0x20U)) >> 0x15U);
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h90ebfe45__0) 
           << 0x1eU);
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h90ebfe45__0) 
            >> 2U) | ((IData)((vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h90ebfe45__0 
                               >> 0x20U)) << 0x1eU));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? 1ULL : 0x7ffffffffffffffeULL)) 
            << 0x1bU) | (((IData)(__VdfgTmp_h6447b6be__0) 
                          << 0x19U) | ((IData)((vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h90ebfe45__0 
                                                >> 0x20U)) 
                                       >> 2U)));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[4U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? 1ULL : 0x7ffffffffffffffeULL)) 
            >> 5U) | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                                 ? 1ULL : 0x7ffffffffffffffeULL) 
                               >> 0x20U)) << 0x1bU));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[5U] 
        = ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? 1ULL : 0x7ffffffffffffffeULL) 
                    >> 0x20U)) >> 5U);
    if (PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0) {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8 
            = (0x1fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)
                                        ? 0x1fU : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__VdfgTmp_h1adcbe2e__0) 
                                                     >> 2U))
                                                    : 0x1fU))));
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8 
            = (0x3fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)
                                        ? 0x3fU : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__VdfgTmp_h1adcbe2e__0) 
                                                     >> 2U))
                                                    : 0x3fU))));
    } else {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8 
            = (0x1fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)
                                        ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                 ? 
                                                ((IData)(vlSelf->__VdfgTmp_h1adcbe2e__0) 
                                                 >> 2U)
                                                 : 0U))));
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8 
            = (0x3fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)
                                        ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                 ? 
                                                ((IData)(vlSelf->__VdfgTmp_h1adcbe2e__0) 
                                                 >> 2U)
                                                 : 0U))));
    }
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(__VdfgTmp_h6447b6be__0)) 
                    << 0x29U) | ((QData)((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h96d0c790__0)) 
                                 << 0x16U)));
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffeU) << 0xbU) | (IData)(
                                                   ((((QData)((IData)(__VdfgTmp_h6447b6be__0)) 
                                                      << 0x29U) 
                                                     | ((QData)((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h96d0c790__0)) 
                                                        << 0x16U)) 
                                                    >> 0x20U)));
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffeU) >> 0x15U);
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0xfU & (((IData)(PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1ce0098d__0)
                     ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)
                                        ? 0xfU : ((2U 
                                                   < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelf->__VdfgTmp_h013556c5__0) 
                                                    >> 2U))
                                                   : 0xfU)))
                     : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)
                                        ? 0U : ((2U 
                                                 < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                 ? 
                                                ((IData)(vlSelf->__VdfgTmp_h013556c5__0) 
                                                 >> 2U)
                                                 : 0U)))) 
                   - (IData)(2U)));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (7U & (((IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c2d3ee3__0)
                   ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)
                                      ? 7U : ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                               ? (~ 
                                                  ((IData)(vlSelf->__VdfgTmp_h013556c5__0) 
                                                   >> 2U))
                                               : 7U)))
                   : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)
                                      ? 0U : ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                               ? ((IData)(vlSelf->__VdfgTmp_h013556c5__0) 
                                                  >> 2U)
                                               : 0U)))) 
                 - (IData)(2U)));
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i 
        = (((QData)((IData)(((IData)(PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1ce0098d__0)
                              ? 1U : 0x7ffeU))) << 0x1bU) 
           | (QData)((IData)((((IData)(__VdfgTmp_heed29515__0) 
                               << 0x19U) | ((IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h967f6972__0) 
                                            << 0xeU)))));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i 
        = ((((IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c2d3ee3__0)
              ? 1U : 0x7eU) << 0xbU) | (((IData)(__VdfgTmp_heed29515__0) 
                                         << 9U) | ((IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h966b19bb__0) 
                                                   << 6U)));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(__VdfgTmp_heed29515__0)) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(__VdfgTmp_heed29515__0)) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h92ae8ca8__0) 
           << 6U);
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? 1ULL : 0x7ffffffffeULL)) << 0xbU) 
           | (((IData)(__VdfgTmp_heed29515__0) << 9U) 
              | (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h92ae8ca8__0) 
                  >> 0x1aU) | ((IData)((vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h92ae8ca8__0 
                                        >> 0x20U)) 
                               << 6U))));
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? 1ULL : 0x7ffffffffeULL)) >> 0x15U) 
           | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                         ? 1ULL : 0x7ffffffffeULL) 
                       >> 0x20U)) << 0xbU));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h937659f5__0) 
           << 0xeU);
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? 1ULL : 0x7ffffffffffeULL)) 
            << 0x1bU) | (((IData)(__VdfgTmp_heed29515__0) 
                          << 0x19U) | (((IData)(vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h937659f5__0) 
                                        >> 0x12U) | 
                                       ((IData)((vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h937659f5__0 
                                                 >> 0x20U)) 
                                        << 0xeU))));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? 1ULL : 0x7ffffffffffeULL)) 
            >> 5U) | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                                 ? 1ULL : 0x7ffffffffffeULL) 
                               >> 0x20U)) << 0x1bU));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[4U] 
        = ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? 1ULL : 0x7ffffffffffeULL) >> 0x20U)) 
           >> 5U);
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h93292506__0) 
           << 0x16U);
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h93292506__0) 
            >> 0xaU) | ((IData)((vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h93292506__0 
                                 >> 0x20U)) << 0x16U));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? 1ULL : 0x7ffffffffffffeULL)) 
            << 0xbU) | (((IData)(__VdfgTmp_heed29515__0) 
                         << 9U) | ((IData)((vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h93292506__0 
                                            >> 0x20U)) 
                                   >> 0xaU)));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[4U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? 1ULL : 0x7ffffffffffffeULL)) 
            >> 0x15U) | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                                    ? 1ULL : 0x7ffffffffffffeULL) 
                                  >> 0x20U)) << 0xbU));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[5U] 
        = ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? 1ULL : 0x7ffffffffffffeULL) 
                    >> 0x20U)) >> 0x15U);
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h93e8e272__0) 
           << 0x1eU);
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h93e8e272__0) 
            >> 2U) | ((IData)((vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h93e8e272__0 
                               >> 0x20U)) << 0x1eU));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? 1ULL : 0x7ffffffffffffffeULL)) 
            << 0x1bU) | (((IData)(__VdfgTmp_heed29515__0) 
                          << 0x19U) | ((IData)((vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h93e8e272__0 
                                                >> 0x20U)) 
                                       >> 2U)));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[4U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? 1ULL : 0x7ffffffffffffffeULL)) 
            >> 5U) | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                                 ? 1ULL : 0x7ffffffffffffffeULL) 
                               >> 0x20U)) << 0x1bU));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[5U] 
        = ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? 1ULL : 0x7ffffffffffffffeULL) 
                    >> 0x20U)) >> 5U);
    if (PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0) {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8 
            = (0x1fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)
                                        ? 0x1fU : (
                                                   (2U 
                                                    < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__VdfgTmp_h013556c5__0) 
                                                     >> 2U))
                                                    : 0x1fU))));
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8 
            = (0x3fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)
                                        ? 0x3fU : (
                                                   (2U 
                                                    < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__VdfgTmp_h013556c5__0) 
                                                     >> 2U))
                                                    : 0x3fU))));
    } else {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8 
            = (0x1fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)
                                        ? 0U : ((2U 
                                                 < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                 ? 
                                                ((IData)(vlSelf->__VdfgTmp_h013556c5__0) 
                                                 >> 2U)
                                                 : 0U))));
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8 
            = (0x3fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)
                                        ? 0U : ((2U 
                                                 < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                 ? 
                                                ((IData)(vlSelf->__VdfgTmp_h013556c5__0) 
                                                 >> 2U)
                                                 : 0U))));
    }
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(__VdfgTmp_heed29515__0)) 
                    << 0x29U) | ((QData)((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h963e3239__0)) 
                                 << 0x16U)));
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffeU) << 0xbU) | (IData)(
                                                   ((((QData)((IData)(__VdfgTmp_heed29515__0)) 
                                                      << 0x29U) 
                                                     | ((QData)((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h963e3239__0)) 
                                                        << 0x16U)) 
                                                    >> 0x20U)));
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffeU) >> 0x15U);
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0xfU & (((IData)(PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1c43d53a__0)
                     ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)
                                        ? 0xfU : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelf->__VdfgTmp_hab03c7d6__0) 
                                                    >> 2U))
                                                   : 0xfU)))
                     : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)
                                        ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                 ? 
                                                ((IData)(vlSelf->__VdfgTmp_hab03c7d6__0) 
                                                 >> 2U)
                                                 : 0U)))) 
                   - (IData)(2U)));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (7U & (((IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c450047__0)
                   ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)
                                      ? 7U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                               ? (~ 
                                                  ((IData)(vlSelf->__VdfgTmp_hab03c7d6__0) 
                                                   >> 2U))
                                               : 7U)))
                   : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)
                                      ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                               ? ((IData)(vlSelf->__VdfgTmp_hab03c7d6__0) 
                                                  >> 2U)
                                               : 0U)))) 
                 - (IData)(2U)));
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i 
        = (((QData)((IData)(((IData)(PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1c43d53a__0)
                              ? 1U : 0x7ffeU))) << 0x1bU) 
           | (QData)((IData)((((IData)(__VdfgTmp_hed91d77e__0) 
                               << 0x19U) | ((IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h91b432c0__0) 
                                            << 0xeU)))));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i 
        = ((((IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c450047__0)
              ? 1U : 0x7eU) << 0xbU) | (((IData)(__VdfgTmp_hed91d77e__0) 
                                         << 9U) | ((IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91952f50__0) 
                                                   << 6U)));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(__VdfgTmp_hed91d77e__0)) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h962fac1b__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(__VdfgTmp_hed91d77e__0)) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h962fac1b__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h960eafc6__0) 
           << 6U);
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? 1ULL : 0x7ffffffffeULL)) << 0xbU) 
           | (((IData)(__VdfgTmp_hed91d77e__0) << 9U) 
              | (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h960eafc6__0) 
                  >> 0x1aU) | ((IData)((vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h960eafc6__0 
                                        >> 0x20U)) 
                               << 6U))));
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? 1ULL : 0x7ffffffffeULL)) >> 0x15U) 
           | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                         ? 1ULL : 0x7ffffffffeULL) 
                       >> 0x20U)) << 0xbU));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h96ee0a42__0) 
           << 0xeU);
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? 1ULL : 0x7ffffffffffeULL)) 
            << 0x1bU) | (((IData)(__VdfgTmp_hed91d77e__0) 
                          << 0x19U) | (((IData)(vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h96ee0a42__0) 
                                        >> 0x12U) | 
                                       ((IData)((vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h96ee0a42__0 
                                                 >> 0x20U)) 
                                        << 0xeU))));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? 1ULL : 0x7ffffffffffeULL)) 
            >> 5U) | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                                 ? 1ULL : 0x7ffffffffffeULL) 
                               >> 0x20U)) << 0x1bU));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[4U] 
        = ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? 1ULL : 0x7ffffffffffeULL) >> 0x20U)) 
           >> 5U);
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h96f1aea5__0) 
           << 0x16U);
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h96f1aea5__0) 
            >> 0xaU) | ((IData)((vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h96f1aea5__0 
                                 >> 0x20U)) << 0x16U));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? 1ULL : 0x7ffffffffffffeULL)) 
            << 0xbU) | (((IData)(__VdfgTmp_hed91d77e__0) 
                         << 9U) | ((IData)((vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h96f1aea5__0 
                                            >> 0x20U)) 
                                   >> 0xaU)));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[4U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? 1ULL : 0x7ffffffffffffeULL)) 
            >> 0x15U) | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                                    ? 1ULL : 0x7ffffffffffffeULL) 
                                  >> 0x20U)) << 0xbU));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[5U] 
        = ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? 1ULL : 0x7ffffffffffffeULL) 
                    >> 0x20U)) >> 0x15U);
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h96d11132__0) 
           << 0x1eU);
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h96d11132__0) 
            >> 2U) | ((IData)((vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h96d11132__0 
                               >> 0x20U)) << 0x1eU));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? 1ULL : 0x7ffffffffffffffeULL)) 
            << 0x1bU) | (((IData)(__VdfgTmp_hed91d77e__0) 
                          << 0x19U) | ((IData)((vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h96d11132__0 
                                                >> 0x20U)) 
                                       >> 2U)));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[4U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? 1ULL : 0x7ffffffffffffffeULL)) 
            >> 5U) | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                                 ? 1ULL : 0x7ffffffffffffffeULL) 
                               >> 0x20U)) << 0x1bU));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[5U] 
        = ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? 1ULL : 0x7ffffffffffffffeULL) 
                    >> 0x20U)) >> 5U);
    if (PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0) {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8 
            = (0x1fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)
                                        ? 0x1fU : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__VdfgTmp_hab03c7d6__0) 
                                                     >> 2U))
                                                    : 0x1fU))));
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8 
            = (0x3fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)
                                        ? 0x3fU : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__VdfgTmp_hab03c7d6__0) 
                                                     >> 2U))
                                                    : 0x3fU))));
    } else {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8 
            = (0x1fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)
                                        ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                 ? 
                                                ((IData)(vlSelf->__VdfgTmp_hab03c7d6__0) 
                                                 >> 2U)
                                                 : 0U))));
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8 
            = (0x3fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)
                                        ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                 ? 
                                                ((IData)(vlSelf->__VdfgTmp_hab03c7d6__0) 
                                                 >> 2U)
                                                 : 0U))));
    }
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(__VdfgTmp_hed91d77e__0)) 
                    << 0x29U) | ((QData)((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h96541997__0)) 
                                 << 0x16U)));
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffeU) << 0xbU) | (IData)(
                                                   ((((QData)((IData)(__VdfgTmp_hed91d77e__0)) 
                                                      << 0x29U) 
                                                     | ((QData)((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h96541997__0)) 
                                                        << 0x16U)) 
                                                    >> 0x20U)));
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffeU) >> 0x15U);
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0xfU & (((IData)(PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1c39e73a__0)
                     ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)
                                        ? 0xfU : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelf->__VdfgTmp_hc02f9133__0) 
                                                    >> 2U))
                                                   : 0xfU)))
                     : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)
                                        ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                 ? 
                                                ((IData)(vlSelf->__VdfgTmp_hc02f9133__0) 
                                                 >> 2U)
                                                 : 0U)))) 
                   - (IData)(2U)));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (7U & (((IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c3df52d__0)
                   ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)
                                      ? 7U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                               ? (~ 
                                                  ((IData)(vlSelf->__VdfgTmp_hc02f9133__0) 
                                                   >> 2U))
                                               : 7U)))
                   : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)
                                      ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                               ? ((IData)(vlSelf->__VdfgTmp_hc02f9133__0) 
                                                  >> 2U)
                                               : 0U)))) 
                 - (IData)(2U)));
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i 
        = (((QData)((IData)(((IData)(PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h1c39e73a__0)
                              ? 1U : 0x7ffeU))) << 0x1bU) 
           | (QData)((IData)((((IData)(__VdfgTmp_hfda6e7be__0) 
                               << 0x19U) | ((IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h91c3a32b__0) 
                                            << 0xeU)))));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i 
        = ((((IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h1c3df52d__0)
              ? 1U : 0x7eU) << 0xbU) | (((IData)(__VdfgTmp_hfda6e7be__0) 
                                         << 9U) | ((IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91c3bd35__0) 
                                                   << 6U)));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(__VdfgTmp_hfda6e7be__0)) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(__VdfgTmp_hfda6e7be__0)) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h91c3a56d__0) 
           << 6U);
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? 1ULL : 0x7ffffffffeULL)) << 0xbU) 
           | (((IData)(__VdfgTmp_hfda6e7be__0) << 9U) 
              | (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h91c3a56d__0) 
                  >> 0x1aU) | ((IData)((vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h91c3a56d__0 
                                        >> 0x20U)) 
                               << 6U))));
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? 1ULL : 0x7ffffffffeULL)) >> 0x15U) 
           | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                         ? 1ULL : 0x7ffffffffeULL) 
                       >> 0x20U)) << 0xbU));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h91c3ab73__0) 
           << 0xeU);
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? 1ULL : 0x7ffffffffffeULL)) 
            << 0x1bU) | (((IData)(__VdfgTmp_hfda6e7be__0) 
                          << 0x19U) | (((IData)(vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h91c3ab73__0) 
                                        >> 0x12U) | 
                                       ((IData)((vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h91c3ab73__0 
                                                 >> 0x20U)) 
                                        << 0xeU))));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? 1ULL : 0x7ffffffffffeULL)) 
            >> 5U) | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                                 ? 1ULL : 0x7ffffffffffeULL) 
                               >> 0x20U)) << 0x1bU));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[4U] 
        = ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? 1ULL : 0x7ffffffffffeULL) >> 0x20U)) 
           >> 5U);
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h91c3a979__0) 
           << 0x16U);
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h91c3a979__0) 
            >> 0xaU) | ((IData)((vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h91c3a979__0 
                                 >> 0x20U)) << 0x16U));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? 1ULL : 0x7ffffffffffffeULL)) 
            << 0xbU) | (((IData)(__VdfgTmp_hfda6e7be__0) 
                         << 9U) | ((IData)((vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h91c3a979__0 
                                            >> 0x20U)) 
                                   >> 0xaU)));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[4U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? 1ULL : 0x7ffffffffffffeULL)) 
            >> 0x15U) | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                                    ? 1ULL : 0x7ffffffffffffeULL) 
                                  >> 0x20U)) << 0xbU));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[5U] 
        = ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? 1ULL : 0x7ffffffffffffeULL) 
                    >> 0x20U)) >> 0x15U);
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] = 0U;
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((IData)(vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h91c3ceaf__0) 
           << 0x1eU);
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h91c3ceaf__0) 
            >> 2U) | ((IData)((vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h91c3ceaf__0 
                               >> 0x20U)) << 0x1eU));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[3U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? 1ULL : 0x7ffffffffffffffeULL)) 
            << 0x1bU) | (((IData)(__VdfgTmp_hfda6e7be__0) 
                          << 0x19U) | ((IData)((vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h91c3ceaf__0 
                                                >> 0x20U)) 
                                       >> 2U)));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[4U] 
        = (((IData)(((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? 1ULL : 0x7ffffffffffffffeULL)) 
            >> 5U) | ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                                 ? 1ULL : 0x7ffffffffffffffeULL) 
                               >> 0x20U)) << 0x1bU));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[5U] 
        = ((IData)((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? 1ULL : 0x7ffffffffffffffeULL) 
                    >> 0x20U)) >> 5U);
    if (PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0) {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8 
            = (0x1fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)
                                        ? 0x1fU : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__VdfgTmp_hc02f9133__0) 
                                                     >> 2U))
                                                    : 0x1fU))));
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8 
            = (0x3fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)
                                        ? 0x3fU : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->__VdfgTmp_hc02f9133__0) 
                                                     >> 2U))
                                                    : 0x3fU))));
    } else {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8 
            = (0x1fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)
                                        ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                 ? 
                                                ((IData)(vlSelf->__VdfgTmp_hc02f9133__0) 
                                                 >> 2U)
                                                 : 0U))));
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8 
            = (0x3fU & ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)
                                        ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                 ? 
                                                ((IData)(vlSelf->__VdfgTmp_hc02f9133__0) 
                                                 >> 2U)
                                                 : 0U))));
    }
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(__VdfgTmp_hfda6e7be__0)) 
                    << 0x29U) | ((QData)((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h91c3a121__0)) 
                                 << 0x16U)));
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffeU) << 0xbU) | (IData)(
                                                   ((((QData)((IData)(__VdfgTmp_hfda6e7be__0)) 
                                                      << 0x29U) 
                                                     | ((QData)((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h91c3a121__0)) 
                                                        << 0x16U)) 
                                                    >> 0x20U)));
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffeU) >> 0x15U);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hb5fc9007__0 
        = ((8U & (IData)(vlSelf->PvuTop__DOT___GEN_40))
            ? (((QData)((IData)((3U & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3)) 
                                                     >> 0x1eU))))))) 
                << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                             & ((IData)(1U) 
                                                + (~ PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3))))))
            : (((QData)((IData)((3U & (- (IData)((1U 
                                                  & (PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3 
                                                     >> 0x1eU))))))) 
                << 0x1fU) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h22e7a075__0 
        = ((4U & (IData)(vlSelf->PvuTop__DOT___GEN_40))
            ? (((QData)((IData)((3U & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2)) 
                                                     >> 0x1eU))))))) 
                << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                             & ((IData)(1U) 
                                                + (~ PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2))))))
            : (((QData)((IData)((3U & (- (IData)((1U 
                                                  & (PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2 
                                                     >> 0x1eU))))))) 
                << 0x1fU) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5221cc71__0 
        = ((2U & (IData)(vlSelf->PvuTop__DOT___GEN_40))
            ? (((QData)((IData)((3U & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1)) 
                                                     >> 0x1eU))))))) 
                << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                             & ((IData)(1U) 
                                                + (~ PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1))))))
            : (((QData)((IData)((3U & (- (IData)((1U 
                                                  & (PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1 
                                                     >> 0x1eU))))))) 
                << 0x1fU) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h4eff933c__0 
        = ((1U & (IData)(vlSelf->PvuTop__DOT___GEN_40))
            ? (((QData)((IData)((3U & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ PvuTop__DOT__quantizeInt8__DOT___roundedInt_T)) 
                                                     >> 0x1eU))))))) 
                << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                             & ((IData)(1U) 
                                                + (~ PvuTop__DOT__quantizeInt8__DOT___roundedInt_T))))))
            : (((QData)((IData)((3U & (- (IData)((1U 
                                                  & (PvuTop__DOT__quantizeInt8__DOT___roundedInt_T 
                                                     >> 0x1eU))))))) 
                << 0x1fU) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedInt_T))));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x3ffffU & ((4U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))
                        ? (vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i 
                           >> 4U) : vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i));
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x3ffffffffffULL & ((8U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))
                                ? (vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i 
                                   >> 8U) : vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h76a3d1ee__0, vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                  - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h76a3d1ee__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h76a3d1ee__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h76a3d1ee__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_hea281577__0, vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x20U);
    if ((1U & ((0x27U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                         - (IData)(2U)) >> 5U))))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_hea281577__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_hea281577__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_hea281577__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[3U] 
            = (0x3ffffU & __Vtemp_hea281577__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[3U] 
            = (0x3ffffU & vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h57266134__0, vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x20U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                         - (IData)(2U)) >> 5U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h57266134__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h57266134__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_h57266134__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[3U] 
            = __Vtemp_h57266134__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[4U] 
            = (0x3ffU & __Vtemp_h57266134__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[3U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[4U] 
            = (0x3ffU & vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h98d7d0a9__0, vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x20U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                         - (IData)(2U)) >> 5U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h98d7d0a9__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h98d7d0a9__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_h98d7d0a9__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[3U] 
            = __Vtemp_h98d7d0a9__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[4U] 
            = __Vtemp_h98d7d0a9__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[5U] 
            = (3U & __Vtemp_h98d7d0a9__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[3U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[4U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[5U] 
            = (3U & vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_he8562cf7__0, vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x20U);
    if ((0x20U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                  - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_he8562cf7__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_he8562cf7__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_he8562cf7__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[3U] 
            = __Vtemp_he8562cf7__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[4U] 
            = __Vtemp_he8562cf7__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[5U] 
            = (0x3ffffffU & __Vtemp_he8562cf7__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[3U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[4U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[5U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_h31095e9e__0, vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((1U & ((0x17U < (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                         - (IData)(2U)) >> 4U))))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h31095e9e__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h31095e9e__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (3U & __Vtemp_h31095e9e__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (3U & vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x3ffffffffffULL & ((8U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))
                                ? (vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i 
                                   >> 8U) : vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x3ffffU & ((4U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))
                        ? (vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i 
                           >> 4U) : vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_he6c5df0d__0, vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                  - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_he6c5df0d__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_he6c5df0d__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_he6c5df0d__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h1507079b__0, vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x20U);
    if ((1U & ((0x27U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                         - (IData)(2U)) >> 5U))))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h1507079b__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h1507079b__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_h1507079b__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[3U] 
            = (0x3ffffU & __Vtemp_h1507079b__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[3U] 
            = (0x3ffffU & vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_he0e07f27__0, vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x20U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                         - (IData)(2U)) >> 5U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_he0e07f27__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_he0e07f27__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_he0e07f27__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[3U] 
            = __Vtemp_he0e07f27__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[4U] 
            = (0x3ffU & __Vtemp_he0e07f27__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[3U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[4U] 
            = (0x3ffU & vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_hb00c6ee7__0, vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x20U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                         - (IData)(2U)) >> 5U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_hb00c6ee7__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_hb00c6ee7__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_hb00c6ee7__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[3U] 
            = __Vtemp_hb00c6ee7__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[4U] 
            = __Vtemp_hb00c6ee7__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[5U] 
            = (3U & __Vtemp_hb00c6ee7__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[3U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[4U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[5U] 
            = (3U & vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_h40f2a72f__0, vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x20U);
    if ((0x20U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                  - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h40f2a72f__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h40f2a72f__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_h40f2a72f__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[3U] 
            = __Vtemp_h40f2a72f__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[4U] 
            = __Vtemp_h40f2a72f__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[5U] 
            = (0x3ffffffU & __Vtemp_h40f2a72f__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[3U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[4U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[5U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_he6e4c509__0, vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((1U & ((0x17U < (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                         - (IData)(2U)) >> 4U))))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_he6e4c509__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_he6e4c509__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (3U & __Vtemp_he6e4c509__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (3U & vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x3ffffffffffULL & ((8U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))
                                ? (vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i 
                                   >> 8U) : vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x3ffffU & ((4U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))
                        ? (vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i 
                           >> 4U) : vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h428e0d62__0, vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                  - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h428e0d62__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h428e0d62__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h428e0d62__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h621105f1__0, vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x20U);
    if ((1U & ((0x27U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                         - (IData)(2U)) >> 5U))))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h621105f1__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h621105f1__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_h621105f1__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[3U] 
            = (0x3ffffU & __Vtemp_h621105f1__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[3U] 
            = (0x3ffffU & vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_ha3c643f9__0, vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x20U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                         - (IData)(2U)) >> 5U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_ha3c643f9__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_ha3c643f9__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_ha3c643f9__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[3U] 
            = __Vtemp_ha3c643f9__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[4U] 
            = (0x3ffU & __Vtemp_ha3c643f9__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[3U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[4U] 
            = (0x3ffU & vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h9e212be2__0, vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x20U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                         - (IData)(2U)) >> 5U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h9e212be2__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h9e212be2__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_h9e212be2__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[3U] 
            = __Vtemp_h9e212be2__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[4U] 
            = __Vtemp_h9e212be2__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[5U] 
            = (3U & __Vtemp_h9e212be2__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[3U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[4U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[5U] 
            = (3U & vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_hd448c756__0, vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x20U);
    if ((0x20U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                  - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_hd448c756__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_hd448c756__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_hd448c756__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[3U] 
            = __Vtemp_hd448c756__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[4U] 
            = __Vtemp_hd448c756__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[5U] 
            = (0x3ffffffU & __Vtemp_hd448c756__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[3U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[4U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[5U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_had336673__0, vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((1U & ((0x17U < (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                         - (IData)(2U)) >> 4U))))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_had336673__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_had336673__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (3U & __Vtemp_had336673__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (3U & vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x3ffffffffffULL & ((8U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i 
                                   >> 8U) : vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x3ffffU & ((4U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                        ? (vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i 
                           >> 4U) : vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h6e9e0a16__0, vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                  - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h6e9e0a16__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h6e9e0a16__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h6e9e0a16__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h9ab4330d__0, vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x20U);
    if ((1U & ((0x27U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                         - (IData)(2U)) >> 5U))))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h9ab4330d__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h9ab4330d__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_h9ab4330d__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[3U] 
            = (0x3ffffU & __Vtemp_h9ab4330d__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[3U] 
            = (0x3ffffU & vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h83036f20__0, vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x20U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                         - (IData)(2U)) >> 5U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h83036f20__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h83036f20__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_h83036f20__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[3U] 
            = __Vtemp_h83036f20__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[4U] 
            = (0x3ffU & __Vtemp_h83036f20__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[3U] 
            = vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[4U] 
            = (0x3ffU & vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h86db059e__0, vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x20U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                         - (IData)(2U)) >> 5U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h86db059e__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h86db059e__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_h86db059e__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[3U] 
            = __Vtemp_h86db059e__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[4U] 
            = __Vtemp_h86db059e__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[5U] 
            = (3U & __Vtemp_h86db059e__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[3U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[4U] 
            = vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[5U] 
            = (3U & vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_h8703283c__0, vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x20U);
    if ((0x20U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                  - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h8703283c__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h8703283c__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[2U] 
            = __Vtemp_h8703283c__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[3U] 
            = __Vtemp_h8703283c__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[4U] 
            = __Vtemp_h8703283c__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[5U] 
            = (0x3ffffffU & __Vtemp_h8703283c__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[2U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[3U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[4U] 
            = vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[5U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_h4f417287__0, vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((1U & ((0x17U < (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (1U & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                         - (IData)(2U)) >> 4U))))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h4f417287__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h4f417287__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (3U & __Vtemp_h4f417287__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (3U & vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)
            ? 0ULL : vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hb5fc9007__0);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)
            ? 0ULL : vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h22e7a075__0);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)
            ? 0ULL : vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5221cc71__0);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0)
            ? 0ULL : vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h4eff933c__0);
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x3ffffU & ((2U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))
                        ? (PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
                           >> 2U) : PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2));
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x3ffffffffffULL & ((4U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))
                                ? (PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
                                   >> 4U) : PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h84883c03__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h84883c03__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h84883c03__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h84883c03__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h4fa002b7__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2, 0x10U);
    if ((3U & ((0x27U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                   - (IData)(2U)) >> 4U)))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h4fa002b7__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h4fa002b7__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_h4fa002b7__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[3U] 
            = (0x3ffffU & __Vtemp_h4fa002b7__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h89c32174__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2, 0x10U);
    if ((3U & ((0x2fU >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                   - (IData)(2U)) >> 4U)))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h89c32174__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h89c32174__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_h89c32174__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[3U] 
            = __Vtemp_h89c32174__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[4U] 
            = (0x3ffU & __Vtemp_h89c32174__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h7110a385__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2, 0x10U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (3U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                         - (IData)(2U)) >> 4U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h7110a385__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h7110a385__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_h7110a385__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[3U] 
            = __Vtemp_h7110a385__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[4U] 
            = __Vtemp_h7110a385__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[5U] 
            = (3U & __Vtemp_h7110a385__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_h6e753a89__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                  - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h6e753a89__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h6e753a89__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_h6e753a89__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[3U] 
            = __Vtemp_h6e753a89__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[4U] 
            = __Vtemp_h6e753a89__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[5U] 
            = (0x3ffffffU & __Vtemp_h6e753a89__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_4_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_h33364ce8__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((3U & ((0x17U >= (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                   - (IData)(2U)) >> 3U)))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h33364ce8__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h33364ce8__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (3U & __Vtemp_h33364ce8__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x3ffffffffffULL & ((4U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))
                                ? (PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
                                   >> 4U) : PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x3ffffU & ((2U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))
                        ? (PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
                           >> 2U) : PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd9775290__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hd9775290__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hd9775290__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd9775290__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h4f4c070c__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2, 0x10U);
    if ((3U & ((0x27U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                   - (IData)(2U)) >> 4U)))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h4f4c070c__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h4f4c070c__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_h4f4c070c__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[3U] 
            = (0x3ffffU & __Vtemp_h4f4c070c__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h6aff0764__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2, 0x10U);
    if ((3U & ((0x2fU >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                   - (IData)(2U)) >> 4U)))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h6aff0764__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h6aff0764__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_h6aff0764__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[3U] 
            = __Vtemp_h6aff0764__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[4U] 
            = (0x3ffU & __Vtemp_h6aff0764__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h6c36de7e__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2, 0x10U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (3U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                         - (IData)(2U)) >> 4U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h6c36de7e__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h6c36de7e__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_h6c36de7e__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[3U] 
            = __Vtemp_h6c36de7e__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[4U] 
            = __Vtemp_h6c36de7e__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[5U] 
            = (3U & __Vtemp_h6c36de7e__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_hb7f06717__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                  - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hb7f06717__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hb7f06717__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_hb7f06717__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[3U] 
            = __Vtemp_hb7f06717__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[4U] 
            = __Vtemp_hb7f06717__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[5U] 
            = (0x3ffffffU & __Vtemp_hb7f06717__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_4_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_hf7db27a5__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((3U & ((0x17U >= (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                   - (IData)(2U)) >> 3U)))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hf7db27a5__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hf7db27a5__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (3U & __Vtemp_hf7db27a5__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x3ffffffffffULL & ((4U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))
                                ? (PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
                                   >> 4U) : PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x3ffffU & ((2U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))
                        ? (PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
                           >> 2U) : PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h9e7617c1__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h9e7617c1__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h9e7617c1__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h9e7617c1__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h38ee4d34__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2, 0x10U);
    if ((3U & ((0x27U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                   - (IData)(2U)) >> 4U)))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h38ee4d34__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h38ee4d34__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_h38ee4d34__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[3U] 
            = (0x3ffffU & __Vtemp_h38ee4d34__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_hdb6d445b__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2, 0x10U);
    if ((3U & ((0x2fU >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                   - (IData)(2U)) >> 4U)))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hdb6d445b__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hdb6d445b__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_hdb6d445b__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[3U] 
            = __Vtemp_hdb6d445b__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[4U] 
            = (0x3ffU & __Vtemp_hdb6d445b__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h0b2a8e76__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2, 0x10U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (3U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                         - (IData)(2U)) >> 4U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h0b2a8e76__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h0b2a8e76__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_h0b2a8e76__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[3U] 
            = __Vtemp_h0b2a8e76__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[4U] 
            = __Vtemp_h0b2a8e76__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[5U] 
            = (3U & __Vtemp_h0b2a8e76__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_hd44d5ee9__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                  - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hd44d5ee9__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hd44d5ee9__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_hd44d5ee9__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[3U] 
            = __Vtemp_hd44d5ee9__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[4U] 
            = __Vtemp_hd44d5ee9__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[5U] 
            = (0x3ffffffU & __Vtemp_hd44d5ee9__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_4_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_hcb6ffcb5__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((3U & ((0x17U >= (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                   - (IData)(2U)) >> 3U)))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hcb6ffcb5__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hcb6ffcb5__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (3U & __Vtemp_hcb6ffcb5__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x3ffffffffffULL & ((4U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                                   >> 4U) : PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x3ffffU & ((2U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                        ? (PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                           >> 2U) : PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hb9358872__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hb9358872__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hb9358872__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hb9358872__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h78c597f3__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2, 0x10U);
    if ((3U & ((0x27U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                   - (IData)(2U)) >> 4U)))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h78c597f3__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h78c597f3__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_h78c597f3__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[3U] 
            = (0x3ffffU & __Vtemp_h78c597f3__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h9cee5b1a__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2, 0x10U);
    if ((3U & ((0x2fU >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                   - (IData)(2U)) >> 4U)))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h9cee5b1a__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h9cee5b1a__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_h9cee5b1a__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[3U] 
            = __Vtemp_h9cee5b1a__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[4U] 
            = (0x3ffU & __Vtemp_h9cee5b1a__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_hde3a7fac__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2, 0x10U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (3U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                         - (IData)(2U)) >> 4U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hde3a7fac__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hde3a7fac__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_hde3a7fac__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[3U] 
            = __Vtemp_hde3a7fac__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[4U] 
            = __Vtemp_hde3a7fac__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[5U] 
            = (3U & __Vtemp_hde3a7fac__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_he964ae05__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                  - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_he964ae05__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_he964ae05__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = __Vtemp_he964ae05__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[3U] 
            = __Vtemp_he964ae05__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[4U] 
            = __Vtemp_he964ae05__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[5U] 
            = (0x3ffffffU & __Vtemp_he964ae05__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_4_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_h0668b454__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((3U & ((0x17U >= (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                   - (IData)(2U)) >> 3U)))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h0668b454__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h0668b454__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (3U & __Vtemp_h0668b454__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    PvuTop__DOT__quantizeInt8__DOT___centered_T_6 = 
        (0x1ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10 
                           - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset));
    PvuTop__DOT__quantizeInt8__DOT___centered_T_4 = 
        (0x1ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7 
                           - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset));
    PvuTop__DOT__quantizeInt8__DOT___centered_T_2 = 
        (0x1ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4 
                           - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset));
    PvuTop__DOT__quantizeInt8__DOT___centered_T = (0x1ffffffffULL 
                                                   & (vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1 
                                                      - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o 
        = (0x3ffffU & ((1U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))
                        ? (PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
                           >> 1U) : PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2));
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x3ffffffffffULL & ((2U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))
                                ? (PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
                                   >> 2U) : PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hcfff9d2e__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hcfff9d2e__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hcfff9d2e__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hcfff9d2e__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h7cf84ff9__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((7U & ((0x27U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                   - (IData)(2U)) >> 3U)))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h7cf84ff9__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h7cf84ff9__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_h7cf84ff9__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[3U] 
            = (0x3ffffU & __Vtemp_h7cf84ff9__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h7b803adf__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (7U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                         - (IData)(2U)) >> 3U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h7b803adf__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h7b803adf__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_h7b803adf__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[3U] 
            = __Vtemp_h7b803adf__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[4U] 
            = (0x3ffU & __Vtemp_h7b803adf__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h1395a30a__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((7U & ((0x37U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                   - (IData)(2U)) >> 3U)))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h1395a30a__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h1395a30a__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_h1395a30a__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[3U] 
            = __Vtemp_h1395a30a__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[4U] 
            = __Vtemp_h1395a30a__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[5U] 
            = (3U & __Vtemp_h1395a30a__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_h730b528a__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h730b528a__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h730b528a__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_h730b528a__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[3U] 
            = __Vtemp_h730b528a__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[4U] 
            = __Vtemp_h730b528a__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[5U] 
            = (0x3ffffffU & __Vtemp_h730b528a__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_h776fbf46__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x17U < (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (7U & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                         - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h776fbf46__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h776fbf46__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (3U & __Vtemp_h776fbf46__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x3ffffffffffULL & ((2U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))
                                ? (PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
                                   >> 2U) : PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o 
        = (0x3ffffU & ((1U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))
                        ? (PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
                           >> 1U) : PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h338182af__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h338182af__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h338182af__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h338182af__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h0cba3252__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((7U & ((0x27U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                   - (IData)(2U)) >> 3U)))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h0cba3252__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h0cba3252__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_h0cba3252__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[3U] 
            = (0x3ffffU & __Vtemp_h0cba3252__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_hb220b6f7__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (7U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                         - (IData)(2U)) >> 3U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hb220b6f7__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hb220b6f7__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_hb220b6f7__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[3U] 
            = __Vtemp_hb220b6f7__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[4U] 
            = (0x3ffU & __Vtemp_hb220b6f7__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h8d7189af__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((7U & ((0x37U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                   - (IData)(2U)) >> 3U)))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h8d7189af__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h8d7189af__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_h8d7189af__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[3U] 
            = __Vtemp_h8d7189af__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[4U] 
            = __Vtemp_h8d7189af__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[5U] 
            = (3U & __Vtemp_h8d7189af__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_h59ecaeeb__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h59ecaeeb__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h59ecaeeb__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_h59ecaeeb__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[3U] 
            = __Vtemp_h59ecaeeb__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[4U] 
            = __Vtemp_h59ecaeeb__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[5U] 
            = (0x3ffffffU & __Vtemp_h59ecaeeb__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_hd694a1c7__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x17U < (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (7U & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                         - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hd694a1c7__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hd694a1c7__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (3U & __Vtemp_hd694a1c7__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x3ffffffffffULL & ((2U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))
                                ? (PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
                                   >> 2U) : PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o 
        = (0x3ffffU & ((1U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))
                        ? (PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
                           >> 1U) : PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h03950bb9__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h03950bb9__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h03950bb9__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h03950bb9__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_hf0759a4e__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((7U & ((0x27U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                   - (IData)(2U)) >> 3U)))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hf0759a4e__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hf0759a4e__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_hf0759a4e__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[3U] 
            = (0x3ffffU & __Vtemp_hf0759a4e__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h4969ccbc__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (7U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                         - (IData)(2U)) >> 3U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h4969ccbc__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h4969ccbc__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_h4969ccbc__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[3U] 
            = __Vtemp_h4969ccbc__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[4U] 
            = (0x3ffU & __Vtemp_h4969ccbc__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_hbaad8916__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((7U & ((0x37U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                   - (IData)(2U)) >> 3U)))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hbaad8916__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hbaad8916__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_hbaad8916__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[3U] 
            = __Vtemp_hbaad8916__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[4U] 
            = __Vtemp_hbaad8916__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[5U] 
            = (3U & __Vtemp_hbaad8916__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_hac1f39ca__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hac1f39ca__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hac1f39ca__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_hac1f39ca__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[3U] 
            = __Vtemp_hac1f39ca__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[4U] 
            = __Vtemp_hac1f39ca__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[5U] 
            = (0x3ffffffU & __Vtemp_hac1f39ca__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_h01b62c58__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x17U < (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (7U & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                         - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h01b62c58__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h01b62c58__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (3U & __Vtemp_h01b62c58__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x3ffffffffffULL & ((2U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                                   >> 2U) : PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_io_result_o 
        = (0x3ffffU & ((1U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                        ? (PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                           >> 1U) : PvuTop__DOT__convert8__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h891d6d04__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h891d6d04__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h891d6d04__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h891d6d04__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h70ef9283__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((7U & ((0x27U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                   - (IData)(2U)) >> 3U)))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h70ef9283__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h70ef9283__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_h70ef9283__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[3U] 
            = (0x3ffffU & __Vtemp_h70ef9283__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h9d818a45__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (7U & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                         - (IData)(2U)) >> 3U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h9d818a45__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h9d818a45__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_h9d818a45__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[3U] 
            = __Vtemp_h9d818a45__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[4U] 
            = (0x3ffU & __Vtemp_h9d818a45__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_hbeb5abca__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((7U & ((0x37U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                   - (IData)(2U)) >> 3U)))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hbeb5abca__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hbeb5abca__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_hbeb5abca__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[3U] 
            = __Vtemp_hbeb5abca__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[4U] 
            = __Vtemp_hbeb5abca__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[5U] 
            = (3U & __Vtemp_hbeb5abca__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_h8e100bbf__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h8e100bbf__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h8e100bbf__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = __Vtemp_h8e100bbf__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[3U] 
            = __Vtemp_h8e100bbf__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[4U] 
            = __Vtemp_h8e100bbf__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[5U] 
            = (0x3ffffffU & __Vtemp_h8e100bbf__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_hc25708c2__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x17U < (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (7U & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                         - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hc25708c2__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hc25708c2__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (3U & __Vtemp_hc25708c2__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
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
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_3_T 
        = (0x7fU & ((vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o 
                     >> 6U) + (1U & ((vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o 
                                      >> 5U) & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x5fU 
                                                         & vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o)))))));
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o 
        = (0x3ffffffffffULL & ((1U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))
                                ? (PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
                                   >> 1U) : PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h1426f9e9__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h1426f9e9__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h1426f9e9__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h1426f9e9__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h650216ed__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x27U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                           - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h650216ed__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h650216ed__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_h650216ed__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[3U] 
            = (0x3ffffU & __Vtemp_h650216ed__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h7e2621df__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                           - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h7e2621df__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h7e2621df__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_h7e2621df__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[3U] 
            = __Vtemp_h7e2621df__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[4U] 
            = (0x3ffU & __Vtemp_h7e2621df__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h262f82c1__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                           - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h262f82c1__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h262f82c1__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_h262f82c1__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[3U] 
            = __Vtemp_h262f82c1__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[4U] 
            = __Vtemp_h262f82c1__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[5U] 
            = (3U & __Vtemp_h262f82c1__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_h396506b8__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h396506b8__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h396506b8__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_h396506b8__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[3U] 
            = __Vtemp_h396506b8__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[4U] 
            = __Vtemp_h396506b8__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[5U] 
            = (0x3ffffffU & __Vtemp_h396506b8__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_h5e3467a8__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x17U < (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                           - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h5e3467a8__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h5e3467a8__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (3U & __Vtemp_h5e3467a8__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o 
        = (0x3ffffffffffULL & ((1U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))
                                ? (PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
                                   >> 1U) : PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_2_T 
        = (0x7fU & ((vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o 
                     >> 6U) + (1U & ((vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o 
                                      >> 5U) & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x5fU 
                                                         & vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o)))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hb45a799f__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hb45a799f__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hb45a799f__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hb45a799f__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h41f45d1d__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x27U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                           - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h41f45d1d__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h41f45d1d__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_h41f45d1d__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[3U] 
            = (0x3ffffU & __Vtemp_h41f45d1d__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_ha4d22a5e__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                           - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_ha4d22a5e__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_ha4d22a5e__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_ha4d22a5e__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[3U] 
            = __Vtemp_ha4d22a5e__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[4U] 
            = (0x3ffU & __Vtemp_ha4d22a5e__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_hb8bdb147__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                           - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hb8bdb147__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hb8bdb147__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_hb8bdb147__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[3U] 
            = __Vtemp_hb8bdb147__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[4U] 
            = __Vtemp_hb8bdb147__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[5U] 
            = (3U & __Vtemp_hb8bdb147__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_hb231cf0d__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hb231cf0d__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hb231cf0d__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_hb231cf0d__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[3U] 
            = __Vtemp_hb231cf0d__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[4U] 
            = __Vtemp_hb231cf0d__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[5U] 
            = (0x3ffffffU & __Vtemp_hb231cf0d__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_hdd02d10d__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x17U < (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                           - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hdd02d10d__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hdd02d10d__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (3U & __Vtemp_hdd02d10d__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o 
        = (0x3ffffffffffULL & ((1U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))
                                ? (PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
                                   >> 1U) : PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_1_T 
        = (0x7fU & ((vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o 
                     >> 6U) + (1U & ((vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o 
                                      >> 5U) & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x5fU 
                                                         & vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o)))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h2f9356b7__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h2f9356b7__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h2f9356b7__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h2f9356b7__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h6004c65b__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x27U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                           - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h6004c65b__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h6004c65b__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_h6004c65b__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[3U] 
            = (0x3ffffU & __Vtemp_h6004c65b__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h64304281__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                           - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h64304281__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h64304281__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_h64304281__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[3U] 
            = __Vtemp_h64304281__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[4U] 
            = (0x3ffU & __Vtemp_h64304281__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_he50221bc__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                           - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_he50221bc__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_he50221bc__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_he50221bc__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[3U] 
            = __Vtemp_he50221bc__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[4U] 
            = __Vtemp_he50221bc__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[5U] 
            = (3U & __Vtemp_he50221bc__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_hc02b7a2e__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hc02b7a2e__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hc02b7a2e__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_hc02b7a2e__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[3U] 
            = __Vtemp_hc02b7a2e__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[4U] 
            = __Vtemp_hc02b7a2e__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[5U] 
            = (0x3ffffffU & __Vtemp_hc02b7a2e__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_h24615b54__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x17U < (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                           - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h24615b54__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h24615b54__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (3U & __Vtemp_h24615b54__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_io_result_o 
        = (0x3ffffffffffULL & ((1U & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))
                                ? (PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                                   >> 1U) : PvuTop__DOT__convert16__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_0_T 
        = (0x7fU & ((vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_io_result_o 
                     >> 6U) + (1U & ((vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_io_result_o 
                                      >> 5U) & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x5fU 
                                                         & vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___barrel_shifter_io_result_o)))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hdd0fc5fe__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & ((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hdd0fc5fe__0[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hdd0fc5fe__0[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hdd0fc5fe__0[2U]);
    } else {
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h93394b48__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x27U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                           - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h93394b48__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h93394b48__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_h93394b48__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[3U] 
            = (0x3ffffU & __Vtemp_h93394b48__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h018f021b__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                           - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h018f021b__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h018f021b__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_h018f021b__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[3U] 
            = __Vtemp_h018f021b__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[4U] 
            = (0x3ffU & __Vtemp_h018f021b__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h1cb1181d__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                           - (IData)(2U)) >> 2U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h1cb1181d__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h1cb1181d__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_h1cb1181d__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[3U] 
            = __Vtemp_h1cb1181d__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[4U] 
            = __Vtemp_h1cb1181d__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[5U] 
            = (3U & __Vtemp_h1cb1181d__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_hf20dc898__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hf20dc898__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hf20dc898__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = __Vtemp_hf20dc898__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[3U] 
            = __Vtemp_hf20dc898__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[4U] 
            = __Vtemp_hf20dc898__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[5U] 
            = (0x3ffffffU & __Vtemp_hf20dc898__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_h2764b952__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x17U < (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (0xfU & (((IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                           - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h2764b952__0[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h2764b952__0[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (3U & __Vtemp_h2764b952__0[2U]);
    } else {
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3)
                              ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3)
                              : vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3));
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2)
                              ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2)
                              : vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2));
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1)
                              ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1)
                              : vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1));
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder)
                              ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder)
                              : vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder));
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___value_after_round_3_T 
        = (0x7fffU & ((IData)((vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o 
                               >> 0xeU)) + (1U & ((IData)(
                                                          (vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o 
                                                           >> 0xdU)) 
                                                  & (IData)(
                                                            (0ULL 
                                                             != 
                                                             (0x5fffULL 
                                                              & vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o)))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_head7bf16__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8))) {
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_head7bf16__0[0U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_head7bf16__0[1U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_head7bf16__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h8cd7f74e__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x27U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (0x1fU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                            - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h8cd7f74e__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h8cd7f74e__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_h8cd7f74e__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[3U] 
            = (0x3ffffU & __Vtemp_h8cd7f74e__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h686c01f0__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (0x1fU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                            - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h686c01f0__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h686c01f0__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_h686c01f0__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[3U] 
            = __Vtemp_h686c01f0__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[4U] 
            = (0x3ffU & __Vtemp_h686c01f0__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h3c411b86__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
               | (0x1fU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
                            - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h3c411b86__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h3c411b86__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_h3c411b86__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[3U] 
            = __Vtemp_h3c411b86__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[4U] 
            = __Vtemp_h3c411b86__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[5U] 
            = (3U & __Vtemp_h3c411b86__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_hfa767853__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hfa767853__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hfa767853__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_hfa767853__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[3U] 
            = __Vtemp_hfa767853__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[4U] 
            = __Vtemp_hfa767853__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[5U] 
            = (0x3ffffffU & __Vtemp_hfa767853__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_hbecca41d__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if (((0x17U >= (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_3_T_8))) {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_hbecca41d__0[0U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_hbecca41d__0[1U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (3U & __Vtemp_hbecca41d__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___value_after_round_2_T 
        = (0x7fffU & ((IData)((vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o 
                               >> 0xeU)) + (1U & ((IData)(
                                                          (vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o 
                                                           >> 0xdU)) 
                                                  & (IData)(
                                                            (0ULL 
                                                             != 
                                                             (0x5fffULL 
                                                              & vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o)))))));
    vlSelf->__VdfgTmp_h88671e84__0 = (((IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h878e0f03__0) 
                                       & (0U == ((0U 
                                                  == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->__VdfgTmp_h6adeea81__0)
                                                   ? 1U
                                                   : (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_2)))))
                                       ? 0x80U : ((
                                                   (~ (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h878e0f03__0)) 
                                                   & ((0U 
                                                       == 
                                                       ((0U 
                                                         == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                          ? 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->__VdfgTmp_h013556c5__0))
                                                          : 0U))) 
                                                      & ((0U 
                                                          != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0) 
                                                         & ((~ (IData)(vlSelf->__VdfgTmp_h6adeea81__0)) 
                                                            & (((IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_2) 
                                                                >> 3U) 
                                                               & (0U 
                                                                  == (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h966b19bb__0)))))))
                                                   ? 0x40U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((0U 
                                                      == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->__VdfgTmp_h6adeea81__0)
                                                       ? 1U
                                                       : (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_2))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h878e0f03__0)
                                                     ? 
                                                    (0x80U 
                                                     | (0x7fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ (IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_2_T)))))
                                                     : (IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_2_T)))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h717642ef__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8))) {
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h717642ef__0[0U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h717642ef__0[1U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h717642ef__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h32bb8800__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x27U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (0x1fU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                            - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h32bb8800__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h32bb8800__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_h32bb8800__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[3U] 
            = (0x3ffffU & __Vtemp_h32bb8800__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_hef5bc192__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (0x1fU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                            - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hef5bc192__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hef5bc192__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_hef5bc192__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[3U] 
            = __Vtemp_hef5bc192__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[4U] 
            = (0x3ffU & __Vtemp_hef5bc192__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_hc316d220__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
               | (0x1fU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
                            - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hc316d220__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hc316d220__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_hc316d220__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[3U] 
            = __Vtemp_hc316d220__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[4U] 
            = __Vtemp_hc316d220__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[5U] 
            = (3U & __Vtemp_hc316d220__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_hb35f29ed__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hb35f29ed__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hb35f29ed__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_hb35f29ed__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[3U] 
            = __Vtemp_hb35f29ed__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[4U] 
            = __Vtemp_hb35f29ed__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[5U] 
            = (0x3ffffffU & __Vtemp_hb35f29ed__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_hb0a3aa4e__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if (((0x17U >= (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_2_T_8))) {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_hb0a3aa4e__0[0U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_hb0a3aa4e__0[1U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (3U & __Vtemp_hb0a3aa4e__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___value_after_round_1_T 
        = (0x7fffU & ((IData)((vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o 
                               >> 0xeU)) + (1U & ((IData)(
                                                          (vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o 
                                                           >> 0xdU)) 
                                                  & (IData)(
                                                            (0ULL 
                                                             != 
                                                             (0x5fffULL 
                                                              & vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o)))))));
    vlSelf->__VdfgTmp_h6bf87dce__0 = (((IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h87f57e3c__0) 
                                       & (0U == ((0U 
                                                  == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->__VdfgTmp_heb2c469b__0)
                                                   ? 1U
                                                   : (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_1)))))
                                       ? 0x80U : ((
                                                   (~ (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h87f57e3c__0)) 
                                                   & ((0U 
                                                       == 
                                                       ((0U 
                                                         == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                          ? 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->__VdfgTmp_hab03c7d6__0))
                                                          : 0U))) 
                                                      & ((0U 
                                                          != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0) 
                                                         & ((~ (IData)(vlSelf->__VdfgTmp_heb2c469b__0)) 
                                                            & (((IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_1) 
                                                                >> 3U) 
                                                               & (0U 
                                                                  == (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91952f50__0)))))))
                                                   ? 0x40U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((0U 
                                                      == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->__VdfgTmp_heb2c469b__0)
                                                       ? 1U
                                                       : (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_1))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h87f57e3c__0)
                                                     ? 
                                                    (0x80U 
                                                     | (0x7fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ (IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_1_T)))))
                                                     : (IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_1_T)))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hea9250b6__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8))) {
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_hea9250b6__0[0U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_hea9250b6__0[1U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hea9250b6__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h81455da1__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x27U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (0x1fU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                            - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h81455da1__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h81455da1__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_h81455da1__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[3U] 
            = (0x3ffffU & __Vtemp_h81455da1__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h1407472a__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (0x1fU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                            - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h1407472a__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h1407472a__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_h1407472a__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[3U] 
            = __Vtemp_h1407472a__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[4U] 
            = (0x3ffU & __Vtemp_h1407472a__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_hb8237930__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
               | (0x1fU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
                            - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hb8237930__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hb8237930__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_hb8237930__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[3U] 
            = __Vtemp_hb8237930__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[4U] 
            = __Vtemp_hb8237930__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[5U] 
            = (3U & __Vtemp_hb8237930__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_hf305711b__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hf305711b__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hf305711b__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_hf305711b__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[3U] 
            = __Vtemp_hf305711b__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[4U] 
            = __Vtemp_hf305711b__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[5U] 
            = (0x3ffffffU & __Vtemp_hf305711b__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_h1e8c96b0__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if (((0x17U >= (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_1_T_8))) {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_h1e8c96b0__0[0U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_h1e8c96b0__0[1U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (3U & __Vtemp_h1e8c96b0__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___value_after_round_0_T 
        = (0x7fffU & ((IData)((vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_io_result_o 
                               >> 0xeU)) + (1U & ((IData)(
                                                          (vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_io_result_o 
                                                           >> 0xdU)) 
                                                  & (IData)(
                                                            (0ULL 
                                                             != 
                                                             (0x5fffULL 
                                                              & vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT___barrel_shifter_io_result_o)))))));
    vlSelf->__VdfgTmp_h7342f0f4__0 = (((IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h87f12fa9__0) 
                                       & (0U == ((0U 
                                                  == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->__VdfgTmp_h8c64243d__0)
                                                   ? 1U
                                                   : (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac)))))
                                       ? 0x80U : ((
                                                   (~ (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h87f12fa9__0)) 
                                                   & ((0U 
                                                       == 
                                                       ((0U 
                                                         == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                          ? 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->__VdfgTmp_hc02f9133__0))
                                                          : 0U))) 
                                                      & ((0U 
                                                          != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0) 
                                                         & ((~ (IData)(vlSelf->__VdfgTmp_h8c64243d__0)) 
                                                            & (((IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac) 
                                                                >> 3U) 
                                                               & (0U 
                                                                  == (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91c3bd35__0)))))))
                                                   ? 0x40U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((0U 
                                                      == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->__VdfgTmp_h8c64243d__0)
                                                       ? 1U
                                                       : (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h87f12fa9__0)
                                                     ? 
                                                    (0x80U 
                                                     | (0x7fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ (IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_0_T)))))
                                                     : (IData)(PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_0_T)))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h90bbcf27__0, PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8))) {
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_h90bbcf27__0[0U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_h90bbcf27__0[1U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h90bbcf27__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert32__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h31feee7e__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x27U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (0x1fU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                            - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h31feee7e__0[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h31feee7e__0[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_h31feee7e__0[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[3U] 
            = (0x3ffffU & __Vtemp_h31feee7e__0[3U]);
    } else {
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h9813f4b4__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x2fU < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (0x1fU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                            - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h9813f4b4__0[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h9813f4b4__0[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_h9813f4b4__0[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[3U] 
            = __Vtemp_h9813f4b4__0[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[4U] 
            = (0x3ffU & __Vtemp_h9813f4b4__0[4U]);
    } else {
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[3U];
        PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_hbf6256c4__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((1U & ((0x37U < (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
               | (0x1fU & (((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
                            - (IData)(2U)) >> 1U))))) {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hbf6256c4__0[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hbf6256c4__0[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_hbf6256c4__0[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[3U] 
            = __Vtemp_hbf6256c4__0[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[4U] 
            = __Vtemp_hbf6256c4__0[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[5U] 
            = (3U & __Vtemp_hbf6256c4__0[5U]);
    } else {
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[3U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[4U];
        PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_h402ed246__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & ((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8) 
               - (IData)(2U)))) {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h402ed246__0[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h402ed246__0[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = __Vtemp_h402ed246__0[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[3U] 
            = __Vtemp_h402ed246__0[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[4U] 
            = __Vtemp_h402ed246__0[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[5U] 
            = (0x3ffffffU & __Vtemp_h402ed246__0[5U]);
    } else {
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[3U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[4U];
        PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[5U]);
    }
    VL_SHIFTR_WWI(66,66,32, __Vtemp_h594a29e5__0, PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if (((0x17U >= (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___regime_width_0_T_8))) {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_h594a29e5__0[0U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_h594a29e5__0[1U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (3U & __Vtemp_h594a29e5__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (3U & PvuTop__DOT__convert24__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_3 
        = (VL_GTS_IQQ(33, PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
           | ((PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 
               == vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
              & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_3)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_2 
        = (VL_GTS_IQQ(33, PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
           | ((PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 
               == vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
              & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_2)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_1 
        = (VL_GTS_IQQ(33, PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
           | ((PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 
               == vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
              & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_1)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven 
        = (VL_GTS_IQQ(33, PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
           | ((PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 
               == vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
              & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled)));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U])))))));
    VL_SHIFTR_WWI(114,114,32, __Vtemp_hc8533b76__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if (((0x27U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8))) {
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_hc8533b76__0[0U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_hc8533b76__0[1U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = __Vtemp_hc8533b76__0[2U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[3U] 
            = (0x3ffffU & __Vtemp_hc8533b76__0[3U]);
    } else {
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h903a0601__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if (((0x2fU >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8))) {
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_h903a0601__0[0U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_h903a0601__0[1U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = __Vtemp_h903a0601__0[2U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[3U] 
            = __Vtemp_h903a0601__0[3U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[4U] 
            = (0x3ffU & __Vtemp_h903a0601__0[4U]);
    } else {
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[3U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h0eeee36d__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if (((0x37U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8))) {
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_h0eeee36d__0[0U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_h0eeee36d__0[1U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = __Vtemp_h0eeee36d__0[2U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[3U] 
            = __Vtemp_h0eeee36d__0[3U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[4U] 
            = __Vtemp_h0eeee36d__0[4U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[5U] 
            = (3U & __Vtemp_h0eeee36d__0[5U]);
    } else {
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[3U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[4U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_h5ce5899e__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_3_T_8))) {
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_h5ce5899e__0[0U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_h5ce5899e__0[1U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = __Vtemp_h5ce5899e__0[2U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[3U] 
            = __Vtemp_h5ce5899e__0[3U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[4U] 
            = __Vtemp_h5ce5899e__0[4U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[5U] 
            = (0x3ffffffU & __Vtemp_h5ce5899e__0[5U]);
    } else {
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[3U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[4U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[5U]);
    }
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___value_after_round_3_T 
        = (0x7fffffU & (((vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                          << 0xaU) | (vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x16U)) + 
                        (1U & ((vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                >> 0x15U) & (IData)(
                                                    (0U 
                                                     != 
                                                     (0x5fffffU 
                                                      & vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U])))))));
    VL_SHIFTR_WWI(114,114,32, __Vtemp_h9215868f__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if (((0x27U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8))) {
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h9215868f__0[0U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h9215868f__0[1U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = __Vtemp_h9215868f__0[2U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[3U] 
            = (0x3ffffU & __Vtemp_h9215868f__0[3U]);
    } else {
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h86f9068b__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if (((0x2fU >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8))) {
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h86f9068b__0[0U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h86f9068b__0[1U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = __Vtemp_h86f9068b__0[2U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[3U] 
            = __Vtemp_h86f9068b__0[3U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[4U] 
            = (0x3ffU & __Vtemp_h86f9068b__0[4U]);
    } else {
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[3U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h78cf2992__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if (((0x37U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8))) {
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h78cf2992__0[0U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h78cf2992__0[1U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = __Vtemp_h78cf2992__0[2U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[3U] 
            = __Vtemp_h78cf2992__0[3U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[4U] 
            = __Vtemp_h78cf2992__0[4U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[5U] 
            = (3U & __Vtemp_h78cf2992__0[5U]);
    } else {
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[3U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[4U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_h164c3fa9__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_2_T_8))) {
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h164c3fa9__0[0U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h164c3fa9__0[1U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = __Vtemp_h164c3fa9__0[2U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[3U] 
            = __Vtemp_h164c3fa9__0[3U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[4U] 
            = __Vtemp_h164c3fa9__0[4U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[5U] 
            = (0x3ffffffU & __Vtemp_h164c3fa9__0[5U]);
    } else {
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[3U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[4U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[5U]);
    }
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___value_after_round_2_T 
        = (0x7fffffU & (((vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                          << 0xaU) | (vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x16U)) + 
                        (1U & ((vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                >> 0x15U) & (IData)(
                                                    (0U 
                                                     != 
                                                     (0x5fffffU 
                                                      & vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U])))))));
    VL_SHIFTR_WWI(114,114,32, __Vtemp_he7c15590__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if (((0x27U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8))) {
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_he7c15590__0[0U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_he7c15590__0[1U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = __Vtemp_he7c15590__0[2U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[3U] 
            = (0x3ffffU & __Vtemp_he7c15590__0[3U]);
    } else {
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_he46f6974__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if (((0x2fU >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8))) {
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_he46f6974__0[0U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_he46f6974__0[1U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = __Vtemp_he46f6974__0[2U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[3U] 
            = __Vtemp_he46f6974__0[3U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[4U] 
            = (0x3ffU & __Vtemp_he46f6974__0[4U]);
    } else {
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[3U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_h0e7ddc4e__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if (((0x37U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8))) {
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_h0e7ddc4e__0[0U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_h0e7ddc4e__0[1U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = __Vtemp_h0e7ddc4e__0[2U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[3U] 
            = __Vtemp_h0e7ddc4e__0[3U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[4U] 
            = __Vtemp_h0e7ddc4e__0[4U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[5U] 
            = (3U & __Vtemp_h0e7ddc4e__0[5U]);
    } else {
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[3U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[4U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_h4d4d176e__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_1_T_8))) {
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_h4d4d176e__0[0U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_h4d4d176e__0[1U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = __Vtemp_h4d4d176e__0[2U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[3U] 
            = __Vtemp_h4d4d176e__0[3U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[4U] 
            = __Vtemp_h4d4d176e__0[4U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[5U] 
            = (0x3ffffffU & __Vtemp_h4d4d176e__0[5U]);
    } else {
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[3U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[4U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[5U]);
    }
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___value_after_round_1_T 
        = (0x7fffffU & (((vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                          << 0xaU) | (vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x16U)) + 
                        (1U & ((vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                >> 0x15U) & (IData)(
                                                    (0U 
                                                     != 
                                                     (0x5fffffU 
                                                      & vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U])))))));
    VL_SHIFTR_WWI(114,114,32, __Vtemp_hcc10e807__0, PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if (((0x27U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8))) {
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_hcc10e807__0[0U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_hcc10e807__0[1U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = __Vtemp_hcc10e807__0[2U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[3U] 
            = (0x3ffffU & __Vtemp_hcc10e807__0[3U]);
    } else {
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[3U] 
            = (0x3ffffU & PvuTop__DOT__convert40__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[3U]);
    }
    VL_SHIFTR_WWI(138,138,32, __Vtemp_h79bcaa2d__0, PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if (((0x2fU >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8))) {
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_h79bcaa2d__0[0U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_h79bcaa2d__0[1U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = __Vtemp_h79bcaa2d__0[2U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[3U] 
            = __Vtemp_h79bcaa2d__0[3U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[4U] 
            = (0x3ffU & __Vtemp_h79bcaa2d__0[4U]);
    } else {
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[3U] 
            = PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[3U];
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[4U] 
            = (0x3ffU & PvuTop__DOT__convert48__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[4U]);
    }
    VL_SHIFTR_WWI(162,162,32, __Vtemp_hfbe06f11__0, PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if (((0x37U >= (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8)) 
         & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8))) {
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_hfbe06f11__0[0U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_hfbe06f11__0[1U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = __Vtemp_hfbe06f11__0[2U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[3U] 
            = __Vtemp_hfbe06f11__0[3U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[4U] 
            = __Vtemp_hfbe06f11__0[4U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[5U] 
            = (3U & __Vtemp_hfbe06f11__0[5U]);
    } else {
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[3U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[3U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[4U] 
            = PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[4U];
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[5U] 
            = (3U & PvuTop__DOT__convert56__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[5U]);
    }
    VL_SHIFTR_WWI(186,186,32, __Vtemp_ha61f5982__0, PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___regime_width_0_T_8))) {
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_ha61f5982__0[0U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_ha61f5982__0[1U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = __Vtemp_ha61f5982__0[2U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[3U] 
            = __Vtemp_ha61f5982__0[3U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[4U] 
            = __Vtemp_ha61f5982__0[4U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[5U] 
            = (0x3ffffffU & __Vtemp_ha61f5982__0[5U]);
    } else {
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[3U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[3U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[4U] 
            = PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[4U];
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[5U] 
            = (0x3ffffffU & PvuTop__DOT__convert64__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[5U]);
    }
    vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___value_after_round_0_T 
        = (0x7fffffU & (((vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
                          << 0xaU) | (vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x16U)) + 
                        (1U & ((vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                >> 0x15U) & (IData)(
                                                    (0U 
                                                     != 
                                                     (0x5fffffU 
                                                      & vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U])))))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3)
                  ? (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_3)
                  : (- (IData)((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_3)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2)
                  ? (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_2)
                  : (- (IData)((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_2)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1)
                  ? (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_1)
                  : (- (IData)((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_1)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder)
                  ? (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven)
                  : (- (IData)((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven)))));
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___value_after_round_3_T 
        = (0x7fffffffffULL & ((((QData)((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U])) 
                                << 0x3aU) | (((QData)((IData)(
                                                              vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U])) 
                                                >> 6U))) 
                              + (QData)((IData)((1U 
                                                 & ((vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                                                     >> 5U) 
                                                    & ((0U 
                                                        != 
                                                        (0x1fffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U]))))) 
                                                       | (vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                                                          >> 6U))))))));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___value_after_round_3_T 
        = (0x7fffffffffffULL & ((((QData)((IData)(vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U])) 
                                  << 0x32U) | (((QData)((IData)(
                                                                vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U])) 
                                                << 0x12U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U])) 
                                                  >> 0xeU))) 
                                + (QData)((IData)((1U 
                                                   & ((vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                                                       >> 0xdU) 
                                                      & ((0U 
                                                          != 
                                                          (0x1fffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U]))))) 
                                                         | (vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                                                            >> 0xeU))))))));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___value_after_round_3_T 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[3U])) 
                                    << 0x2aU) | (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U])) 
                                                  << 0xaU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U])) 
                                                    >> 0x16U))) 
                                  + (QData)((IData)(
                                                    (1U 
                                                     & ((vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                                                         >> 0x15U) 
                                                        & ((0U 
                                                            != 
                                                            (0x1fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U]))))) 
                                                           | (vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                                                              >> 0x16U))))))));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___value_after_round_3_T 
        = (0x7fffffffffffffffULL & ((((QData)((IData)(
                                                      vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[3U])) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[2U])) 
                                                    << 2U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U])) 
                                                      >> 0x1eU))) 
                                    + (QData)((IData)(
                                                      (1U 
                                                       & ((vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                                                           >> 0x1dU) 
                                                          & ((0U 
                                                              != 
                                                              (0x1fffffffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[0U]))))) 
                                                             | (vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                                                                >> 0x1eU))))))));
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___value_after_round_2_T 
        = (0x7fffffffffULL & ((((QData)((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U])) 
                                << 0x3aU) | (((QData)((IData)(
                                                              vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U])) 
                                                >> 6U))) 
                              + (QData)((IData)((1U 
                                                 & ((vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                                                     >> 5U) 
                                                    & ((0U 
                                                        != 
                                                        (0x1fffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U]))))) 
                                                       | (vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                                                          >> 6U))))))));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___value_after_round_2_T 
        = (0x7fffffffffffULL & ((((QData)((IData)(vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U])) 
                                  << 0x32U) | (((QData)((IData)(
                                                                vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U])) 
                                                << 0x12U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U])) 
                                                  >> 0xeU))) 
                                + (QData)((IData)((1U 
                                                   & ((vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                                                       >> 0xdU) 
                                                      & ((0U 
                                                          != 
                                                          (0x1fffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U]))))) 
                                                         | (vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                                                            >> 0xeU))))))));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___value_after_round_2_T 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[3U])) 
                                    << 0x2aU) | (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U])) 
                                                  << 0xaU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U])) 
                                                    >> 0x16U))) 
                                  + (QData)((IData)(
                                                    (1U 
                                                     & ((vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                                                         >> 0x15U) 
                                                        & ((0U 
                                                            != 
                                                            (0x1fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U]))))) 
                                                           | (vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                                                              >> 0x16U))))))));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___value_after_round_2_T 
        = (0x7fffffffffffffffULL & ((((QData)((IData)(
                                                      vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[3U])) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[2U])) 
                                                    << 2U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U])) 
                                                      >> 0x1eU))) 
                                    + (QData)((IData)(
                                                      (1U 
                                                       & ((vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                                                           >> 0x1dU) 
                                                          & ((0U 
                                                              != 
                                                              (0x1fffffffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[0U]))))) 
                                                             | (vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                                                                >> 0x1eU))))))));
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___value_after_round_1_T 
        = (0x7fffffffffULL & ((((QData)((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U])) 
                                << 0x3aU) | (((QData)((IData)(
                                                              vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U])) 
                                                >> 6U))) 
                              + (QData)((IData)((1U 
                                                 & ((vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                                                     >> 5U) 
                                                    & ((0U 
                                                        != 
                                                        (0x1fffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U]))))) 
                                                       | (vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                                                          >> 6U))))))));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___value_after_round_1_T 
        = (0x7fffffffffffULL & ((((QData)((IData)(vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U])) 
                                  << 0x32U) | (((QData)((IData)(
                                                                vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U])) 
                                                << 0x12U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U])) 
                                                  >> 0xeU))) 
                                + (QData)((IData)((1U 
                                                   & ((vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                                                       >> 0xdU) 
                                                      & ((0U 
                                                          != 
                                                          (0x1fffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U]))))) 
                                                         | (vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                                                            >> 0xeU))))))));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___value_after_round_1_T 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[3U])) 
                                    << 0x2aU) | (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U])) 
                                                  << 0xaU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U])) 
                                                    >> 0x16U))) 
                                  + (QData)((IData)(
                                                    (1U 
                                                     & ((vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                                                         >> 0x15U) 
                                                        & ((0U 
                                                            != 
                                                            (0x1fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U]))))) 
                                                           | (vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                                                              >> 0x16U))))))));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___value_after_round_1_T 
        = (0x7fffffffffffffffULL & ((((QData)((IData)(
                                                      vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[3U])) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[2U])) 
                                                    << 2U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U])) 
                                                      >> 0x1eU))) 
                                    + (QData)((IData)(
                                                      (1U 
                                                       & ((vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                                                           >> 0x1dU) 
                                                          & ((0U 
                                                              != 
                                                              (0x1fffffffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[0U]))))) 
                                                             | (vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                                                                >> 0x1eU))))))));
    vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___value_after_round_0_T 
        = (0x7fffffffffULL & ((((QData)((IData)(vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U])) 
                                << 0x3aU) | (((QData)((IData)(
                                                              vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U])) 
                                                >> 6U))) 
                              + (QData)((IData)((1U 
                                                 & ((vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
                                                     >> 5U) 
                                                    & ((0U 
                                                        != 
                                                        (0x1fffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U]))))) 
                                                       | (vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
                                                          >> 6U))))))));
    vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___value_after_round_0_T 
        = (0x7fffffffffffULL & ((((QData)((IData)(vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U])) 
                                  << 0x32U) | (((QData)((IData)(
                                                                vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U])) 
                                                << 0x12U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U])) 
                                                  >> 0xeU))) 
                                + (QData)((IData)((1U 
                                                   & ((vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
                                                       >> 0xdU) 
                                                      & ((0U 
                                                          != 
                                                          (0x1fffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U]))))) 
                                                         | (vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
                                                            >> 0xeU))))))));
    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___value_after_round_0_T 
        = (0x7fffffffffffffULL & ((((QData)((IData)(
                                                    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[3U])) 
                                    << 0x2aU) | (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U])) 
                                                  << 0xaU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U])) 
                                                    >> 0x16U))) 
                                  + (QData)((IData)(
                                                    (1U 
                                                     & ((vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
                                                         >> 0x15U) 
                                                        & ((0U 
                                                            != 
                                                            (0x1fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U]))))) 
                                                           | (vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
                                                              >> 0x16U))))))));
    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___value_after_round_0_T 
        = (0x7fffffffffffffffULL & ((((QData)((IData)(
                                                      vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[3U])) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U])) 
                                                    << 2U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U])) 
                                                      >> 0x1eU))) 
                                    + (QData)((IData)(
                                                      (1U 
                                                       & ((vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
                                                           >> 0x1dU) 
                                                          & ((0U 
                                                              != 
                                                              (0x1fffffffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U]))))) 
                                                             | (vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
                                                                >> 0x1eU))))))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22 
        = (0x3ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_3 
                             + (((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & ((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21) 
                                                                >> 1U)))))) 
                                 << 2U) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16 
        = (0x3ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_2 
                             + (((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & ((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15) 
                                                                >> 1U)))))) 
                                 << 2U) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10 
        = (0x3ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_1 
                             + (((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & ((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9) 
                                                                >> 1U)))))) 
                                 << 2U) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4 
        = (0x3ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled 
                             + (((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & ((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3) 
                                                                >> 1U)))))) 
                                 << 2U) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3)))));
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
    vlSelf->io_int_o_3 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_100)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                                                & ((IData)(vlSelf->__VdfgTmp_hee1354a9__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_hee1354a9__0))));
    vlSelf->io_int_o_2 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_100)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                                                & ((IData)(vlSelf->__VdfgTmp_h0453aeb4__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h0453aeb4__0))));
    vlSelf->io_int_o_1 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_100)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                                                & ((IData)(vlSelf->__VdfgTmp_h10c27d8c__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h10c27d8c__0))));
    vlSelf->io_int_o_0 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_100)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                                                & ((IData)(vlSelf->__VdfgTmp_h87baa85a__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h87baa85a__0))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__12(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__12\n"); );
    // Init
    IData/*28:0*/ PvuTop__DOT__div_inst__DOT___next_remainder_T_2;
    PvuTop__DOT__div_inst__DOT___next_remainder_T_2 = 0;
    IData/*28:0*/ PvuTop__DOT__div_inst__DOT___next_remainder_T_542;
    PvuTop__DOT__div_inst__DOT___next_remainder_T_542 = 0;
    IData/*28:0*/ PvuTop__DOT__div_inst__DOT___next_remainder_T_1082;
    PvuTop__DOT__div_inst__DOT___next_remainder_T_1082 = 0;
    IData/*28:0*/ PvuTop__DOT__div_inst__DOT___next_remainder_T_1622;
    PvuTop__DOT__div_inst__DOT___next_remainder_T_1622 = 0;
    VlWide<4>/*127:0*/ __Vtemp_ha46794a0__0;
    VlWide<4>/*127:0*/ __Vtemp_h20ba529e__0;
    VlWide<4>/*127:0*/ __Vtemp_h96e9c0c5__0;
    VlWide<4>/*127:0*/ __Vtemp_h1352ac33__0;
    VlWide<4>/*127:0*/ __Vtemp_hbe1f6499__0;
    VlWide<4>/*127:0*/ __Vtemp_h9e5f1467__0;
    VlWide<4>/*127:0*/ __Vtemp_hc0acdec3__0;
    VlWide<4>/*127:0*/ __Vtemp_h568e57e2__0;
    // Body
    vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164 = 
        ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a) 
         & (0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b));
    PvuTop__DOT__div_inst__DOT___next_remainder_T_1622 
        = (0x1fffffffU & ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                           << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b));
    vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109 = 
        ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a) 
         & (0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b));
    PvuTop__DOT__div_inst__DOT___next_remainder_T_1082 
        = (0x1fffffffU & ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                           << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b));
    vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54 = (
                                                   (0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a) 
                                                   & (0U 
                                                      == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b));
    PvuTop__DOT__div_inst__DOT___next_remainder_T_542 
        = (0x1fffffffU & ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                           << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b));
    vlSelf->PvuTop__DOT__div_inst__DOT___GEN = ((0U 
                                                 == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a) 
                                                & (0U 
                                                   == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b));
    PvuTop__DOT__div_inst__DOT___next_remainder_T_2 
        = (0x1fffffffU & ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                           << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b));
    vlSelf->__VdfgTmp_ha768b880__0 = ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero1_3) 
                                      & (IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero2_3));
    vlSelf->__VdfgTmp_h431d52cc__0 = ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero1_2) 
                                      & (IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero2_2));
    vlSelf->__VdfgTmp_ha0210fbc__0 = ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero1_1) 
                                      & (IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero2_1));
    vlSelf->__VdfgTmp_h72d9ce31__0 = ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero1) 
                                      & (IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero2));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_163 
        = (0x1fffffffU & ((0x10000000U & PvuTop__DOT__div_inst__DOT___next_remainder_T_1622)
                           ? ((PvuTop__DOT__div_inst__DOT___next_remainder_T_1622 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((PvuTop__DOT__div_inst__DOT___next_remainder_T_1622 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_109 
        = (0x1fffffffU & ((0x10000000U & PvuTop__DOT__div_inst__DOT___next_remainder_T_1082)
                           ? ((PvuTop__DOT__div_inst__DOT___next_remainder_T_1082 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((PvuTop__DOT__div_inst__DOT___next_remainder_T_1082 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_55 
        = (0x1fffffffU & ((0x10000000U & PvuTop__DOT__div_inst__DOT___next_remainder_T_542)
                           ? ((PvuTop__DOT__div_inst__DOT___next_remainder_T_542 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((PvuTop__DOT__div_inst__DOT___next_remainder_T_542 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_1 
        = (0x1fffffffU & ((0x10000000U & PvuTop__DOT__div_inst__DOT___next_remainder_T_2)
                           ? ((PvuTop__DOT__div_inst__DOT___next_remainder_T_2 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((PvuTop__DOT__div_inst__DOT___next_remainder_T_2 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_164 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_163)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_163 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_163 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_110 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_109)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_109 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_109 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_56 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_55)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_55 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_55 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_2 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_1)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_1 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_1 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_165 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_164)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_164 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_164 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_111 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_110)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_110 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_110 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_57 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_56)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_56 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_56 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_3 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_2)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_2 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_2 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_166 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_165)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_165 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_165 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_112 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_111)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_111 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_111 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_58 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_57)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_57 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_57 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_4 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_3)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_3 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_3 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_167 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_166)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_166 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_166 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_113 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_112)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_112 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_112 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_59 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_58)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_58 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_58 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_5 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_4)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_4 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_4 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_168 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_167)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_167 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_167 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_114 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_113)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_113 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_113 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_60 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_59)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_59 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_59 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_6 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_5)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_5 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_5 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_169 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_168)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_168 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_168 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_115 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_114)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_114 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_114 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_61 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_60)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_60 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_60 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_7 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_6)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_6 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_6 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_170 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_169)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_169 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_169 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_116 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_115)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_115 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_115 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_62 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_61)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_61 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_61 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_8 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_7)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_7 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_7 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_171 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_170)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_170 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_170 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_117 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_116)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_116 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_116 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_63 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_62)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_62 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_62 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_9 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_8)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_8 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_8 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_172 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_171)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_171 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_171 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_118 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_117)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_117 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_117 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_64 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_63)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_63 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_63 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_10 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_9)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_9 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_9 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_173 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_172)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_172 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_172 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_119 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_118)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_118 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_118 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_65 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_64)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_64 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_64 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_11 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_10)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_10 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_10 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_174 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_173)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_173 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_173 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_120 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_119)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_119 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_119 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_66 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_65)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_65 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_65 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_12 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_11)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_11 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_11 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_175 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_174)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_174 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_174 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_121 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_120)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_120 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_120 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_67 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_66)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_66 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_66 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_13 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_12)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_12 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_12 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_176 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_175)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_175 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_175 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_122 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_121)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_121 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_121 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_68 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_67)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_67 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_67 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_14 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_13)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_13 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_13 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_177 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_176)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_176 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_176 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_123 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_122)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_122 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_122 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_69 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_68)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_68 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_68 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_15 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_14)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_14 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_14 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_178 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_177)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_177 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_177 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_124 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_123)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_123 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_123 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_70 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_69)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_69 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_69 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_16 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_15)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_15 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_15 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_179 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_178)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_178 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_178 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_125 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_124)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_124 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_124 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_71 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_70)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_70 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_70 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_17 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_16)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_16 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_16 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_180 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_179)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_179 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_179 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_126 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_125)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_125 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_125 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_72 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_71)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_71 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_71 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_18 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_17)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_17 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_17 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_181 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_180)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_180 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_180 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_127 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_126)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_126 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_126 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_73 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_72)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_72 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_72 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_19 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_18)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_18 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_18 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_182 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_181)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_181 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_181 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_128 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_127)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_127 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_127 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_74 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_73)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_73 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_73 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_20 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_19)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_19 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_19 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_183 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_182)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_182 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_182 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_129 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_128)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_128 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_128 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_75 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_74)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_74 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_74 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_21 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_20)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_20 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_20 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_184 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_183)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_183 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_183 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_130 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_129)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_129 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_129 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_76 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_75)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_75 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_75 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_22 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_21)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_21 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_21 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_185 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_184)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_184 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_184 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_131 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_130)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_130 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_130 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_77 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_76)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_76 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_76 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_23 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_22)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_22 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_22 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_hc77c2139__0 
        = (1U | ((0x1000000U & ((~ (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_185 
                                    >> 0x1cU)) << 0x18U)) 
                 | ((0x800000U & ((~ (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_184 
                                      >> 0x1cU)) << 0x17U)) 
                    | ((0x600000U & ((~ ((2U & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_183 
                                                >> 0x1bU)) 
                                         | (1U & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_182 
                                                  >> 0x1cU)))) 
                                     << 0x15U)) | (
                                                   (0x100000U 
                                                    & ((~ 
                                                        (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_181 
                                                         >> 0x1cU)) 
                                                       << 0x14U)) 
                                                   | ((0x80000U 
                                                       & ((~ 
                                                           (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_180 
                                                            >> 0x1cU)) 
                                                          << 0x13U)) 
                                                      | ((0x40000U 
                                                          & ((~ 
                                                              (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_179 
                                                               >> 0x1cU)) 
                                                             << 0x12U)) 
                                                         | ((0x20000U 
                                                             & ((~ 
                                                                 (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_178 
                                                                  >> 0x1cU)) 
                                                                << 0x11U)) 
                                                            | ((0x10000U 
                                                                & ((~ 
                                                                    (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_177 
                                                                     >> 0x1cU)) 
                                                                   << 0x10U)) 
                                                               | ((0x8000U 
                                                                   & ((~ 
                                                                       (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_176 
                                                                        >> 0x1cU)) 
                                                                      << 0xfU)) 
                                                                  | ((0x4000U 
                                                                      & ((~ 
                                                                          (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_175 
                                                                           >> 0x1cU)) 
                                                                         << 0xeU)) 
                                                                     | ((0x2000U 
                                                                         & ((~ 
                                                                             (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_174 
                                                                              >> 0x1cU)) 
                                                                            << 0xdU)) 
                                                                        | ((0x1000U 
                                                                            & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_173 
                                                                                >> 0x1cU)) 
                                                                               << 0xcU)) 
                                                                           | ((0x800U 
                                                                               & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_172 
                                                                                >> 0x1cU)) 
                                                                                << 0xbU)) 
                                                                              | ((0x400U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_171 
                                                                                >> 0x1cU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_170 
                                                                                >> 0x1cU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_169 
                                                                                >> 0x1cU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_168 
                                                                                >> 0x1cU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_167 
                                                                                >> 0x1cU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_166 
                                                                                >> 0x1cU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_165 
                                                                                >> 0x1cU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_164 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_163 
                                                                                >> 0x1cU)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & ((~ 
                                                                                (PvuTop__DOT__div_inst__DOT___next_remainder_T_1622 
                                                                                >> 0x1cU)) 
                                                                                << 1U)))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_186 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_185)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_185 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_185 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_h191d4ea2__0 
        = (1U | ((0x1000000U & ((~ (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_131 
                                    >> 0x1cU)) << 0x18U)) 
                 | ((0x800000U & ((~ (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_130 
                                      >> 0x1cU)) << 0x17U)) 
                    | ((0x600000U & ((~ ((2U & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_129 
                                                >> 0x1bU)) 
                                         | (1U & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_128 
                                                  >> 0x1cU)))) 
                                     << 0x15U)) | (
                                                   (0x100000U 
                                                    & ((~ 
                                                        (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_127 
                                                         >> 0x1cU)) 
                                                       << 0x14U)) 
                                                   | ((0x80000U 
                                                       & ((~ 
                                                           (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_126 
                                                            >> 0x1cU)) 
                                                          << 0x13U)) 
                                                      | ((0x40000U 
                                                          & ((~ 
                                                              (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_125 
                                                               >> 0x1cU)) 
                                                             << 0x12U)) 
                                                         | ((0x20000U 
                                                             & ((~ 
                                                                 (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_124 
                                                                  >> 0x1cU)) 
                                                                << 0x11U)) 
                                                            | ((0x10000U 
                                                                & ((~ 
                                                                    (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_123 
                                                                     >> 0x1cU)) 
                                                                   << 0x10U)) 
                                                               | ((0x8000U 
                                                                   & ((~ 
                                                                       (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_122 
                                                                        >> 0x1cU)) 
                                                                      << 0xfU)) 
                                                                  | ((0x4000U 
                                                                      & ((~ 
                                                                          (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_121 
                                                                           >> 0x1cU)) 
                                                                         << 0xeU)) 
                                                                     | ((0x2000U 
                                                                         & ((~ 
                                                                             (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_120 
                                                                              >> 0x1cU)) 
                                                                            << 0xdU)) 
                                                                        | ((0x1000U 
                                                                            & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_119 
                                                                                >> 0x1cU)) 
                                                                               << 0xcU)) 
                                                                           | ((0x800U 
                                                                               & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_118 
                                                                                >> 0x1cU)) 
                                                                                << 0xbU)) 
                                                                              | ((0x400U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_117 
                                                                                >> 0x1cU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_116 
                                                                                >> 0x1cU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_115 
                                                                                >> 0x1cU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_114 
                                                                                >> 0x1cU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_113 
                                                                                >> 0x1cU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_112 
                                                                                >> 0x1cU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_111 
                                                                                >> 0x1cU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_110 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_109 
                                                                                >> 0x1cU)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & ((~ 
                                                                                (PvuTop__DOT__div_inst__DOT___next_remainder_T_1082 
                                                                                >> 0x1cU)) 
                                                                                << 1U)))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_132 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_131)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_131 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_131 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_hc0233086__0 
        = (1U | ((0x1000000U & ((~ (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_77 
                                    >> 0x1cU)) << 0x18U)) 
                 | ((0x800000U & ((~ (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_76 
                                      >> 0x1cU)) << 0x17U)) 
                    | ((0x600000U & ((~ ((2U & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_75 
                                                >> 0x1bU)) 
                                         | (1U & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_74 
                                                  >> 0x1cU)))) 
                                     << 0x15U)) | (
                                                   (0x100000U 
                                                    & ((~ 
                                                        (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_73 
                                                         >> 0x1cU)) 
                                                       << 0x14U)) 
                                                   | ((0x80000U 
                                                       & ((~ 
                                                           (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_72 
                                                            >> 0x1cU)) 
                                                          << 0x13U)) 
                                                      | ((0x40000U 
                                                          & ((~ 
                                                              (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_71 
                                                               >> 0x1cU)) 
                                                             << 0x12U)) 
                                                         | ((0x20000U 
                                                             & ((~ 
                                                                 (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_70 
                                                                  >> 0x1cU)) 
                                                                << 0x11U)) 
                                                            | ((0x10000U 
                                                                & ((~ 
                                                                    (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_69 
                                                                     >> 0x1cU)) 
                                                                   << 0x10U)) 
                                                               | ((0x8000U 
                                                                   & ((~ 
                                                                       (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_68 
                                                                        >> 0x1cU)) 
                                                                      << 0xfU)) 
                                                                  | ((0x4000U 
                                                                      & ((~ 
                                                                          (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_67 
                                                                           >> 0x1cU)) 
                                                                         << 0xeU)) 
                                                                     | ((0x2000U 
                                                                         & ((~ 
                                                                             (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_66 
                                                                              >> 0x1cU)) 
                                                                            << 0xdU)) 
                                                                        | ((0x1000U 
                                                                            & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_65 
                                                                                >> 0x1cU)) 
                                                                               << 0xcU)) 
                                                                           | ((0x800U 
                                                                               & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_64 
                                                                                >> 0x1cU)) 
                                                                                << 0xbU)) 
                                                                              | ((0x400U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_63 
                                                                                >> 0x1cU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_62 
                                                                                >> 0x1cU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_61 
                                                                                >> 0x1cU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_60 
                                                                                >> 0x1cU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_59 
                                                                                >> 0x1cU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_58 
                                                                                >> 0x1cU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_57 
                                                                                >> 0x1cU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_56 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_55 
                                                                                >> 0x1cU)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & ((~ 
                                                                                (PvuTop__DOT__div_inst__DOT___next_remainder_T_542 
                                                                                >> 0x1cU)) 
                                                                                << 1U)))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_78 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_77)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_77 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_77 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_h40459468__0 
        = (1U | ((0x1000000U & ((~ (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_23 
                                    >> 0x1cU)) << 0x18U)) 
                 | ((0x800000U & ((~ (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_22 
                                      >> 0x1cU)) << 0x17U)) 
                    | ((0x600000U & ((~ ((2U & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_21 
                                                >> 0x1bU)) 
                                         | (1U & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_20 
                                                  >> 0x1cU)))) 
                                     << 0x15U)) | (
                                                   (0x100000U 
                                                    & ((~ 
                                                        (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_19 
                                                         >> 0x1cU)) 
                                                       << 0x14U)) 
                                                   | ((0x80000U 
                                                       & ((~ 
                                                           (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_18 
                                                            >> 0x1cU)) 
                                                          << 0x13U)) 
                                                      | ((0x40000U 
                                                          & ((~ 
                                                              (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_17 
                                                               >> 0x1cU)) 
                                                             << 0x12U)) 
                                                         | ((0x20000U 
                                                             & ((~ 
                                                                 (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_16 
                                                                  >> 0x1cU)) 
                                                                << 0x11U)) 
                                                            | ((0x10000U 
                                                                & ((~ 
                                                                    (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_15 
                                                                     >> 0x1cU)) 
                                                                   << 0x10U)) 
                                                               | ((0x8000U 
                                                                   & ((~ 
                                                                       (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_14 
                                                                        >> 0x1cU)) 
                                                                      << 0xfU)) 
                                                                  | ((0x4000U 
                                                                      & ((~ 
                                                                          (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_13 
                                                                           >> 0x1cU)) 
                                                                         << 0xeU)) 
                                                                     | ((0x2000U 
                                                                         & ((~ 
                                                                             (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_12 
                                                                              >> 0x1cU)) 
                                                                            << 0xdU)) 
                                                                        | ((0x1000U 
                                                                            & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_11 
                                                                                >> 0x1cU)) 
                                                                               << 0xcU)) 
                                                                           | ((0x800U 
                                                                               & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_10 
                                                                                >> 0x1cU)) 
                                                                                << 0xbU)) 
                                                                              | ((0x400U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_9 
                                                                                >> 0x1cU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_8 
                                                                                >> 0x1cU)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_7 
                                                                                >> 0x1cU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_6 
                                                                                >> 0x1cU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_5 
                                                                                >> 0x1cU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_4 
                                                                                >> 0x1cU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_3 
                                                                                >> 0x1cU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_2 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_1 
                                                                                >> 0x1cU)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & ((~ 
                                                                                (PvuTop__DOT__div_inst__DOT___next_remainder_T_2 
                                                                                >> 0x1cU)) 
                                                                                << 1U)))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_24 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_23)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_23 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_23 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_187 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_186)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_186 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_186 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_133 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_132)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_132 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_132 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_79 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_78)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_78 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_78 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_25 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_24)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_24 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_24 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_188 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_187)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_187 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_187 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_134 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_133)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_133 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_133 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_80 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_79)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_79 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_79 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_26 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_25)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_25 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_25 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_189 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_188)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_188 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_188 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_135 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_134)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_134 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_134 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_81 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_80)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_80 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_80 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_27 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_26)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_26 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_26 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_190 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_189)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_189 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_189 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_136 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_135)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_135 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_135 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_82 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_81)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_81 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_81 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_28 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_27)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_27 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_27 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_191 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_190)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_190 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_190 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_137 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_136)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_136 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_136 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_83 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_82)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_82 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_82 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_29 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_28)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_28 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_28 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_192 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_191)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_191 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_191 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_138 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_137)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_137 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_137 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_84 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_83)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_83 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_83 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_30 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_29)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_29 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_29 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_193 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_192)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_192 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_192 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_139 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_138)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_138 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_138 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_85 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_84)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_84 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_84 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_31 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_30)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_30 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_30 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_194 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_193)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_193 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_193 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_140 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_139)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_139 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_139 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_86 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_85)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_85 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_85 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_32 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_31)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_31 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_31 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_195 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_194)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_194 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_194 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_141 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_140)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_140 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_140 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_87 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_86)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_86 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_86 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_33 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_32)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_32 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_32 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_196 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_195)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_195 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_195 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_142 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_141)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_141 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_141 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_88 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_87)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_87 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_87 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_34 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_33)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_33 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_33 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_197 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_196)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_196 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_196 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_143 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_142)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_142 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_142 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_89 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_88)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_88 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_88 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_35 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_34)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_34 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_34 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_198 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_197)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_197 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_197 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_144 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_143)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_143 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_143 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_90 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_89)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_89 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_89 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_36 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_35)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_35 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_35 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_199 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_198)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_198 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_198 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_145 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_144)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_144 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_144 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_91 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_90)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_90 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_90 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_37 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_36)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_36 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_36 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_200 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_199)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_199 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_199 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_146 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_145)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_145 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_145 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_92 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_91)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_91 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_91 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_38 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_37)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_37 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_37 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_201 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_200)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_200 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_200 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_147 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_146)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_146 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_146 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_93 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_92)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_92 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_92 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_39 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_38)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_38 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_38 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_202 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_201)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_201 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_201 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_148 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_147)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_147 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_147 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_94 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_93)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_93 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_93 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_40 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_39)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_39 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_39 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_203 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_202)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_202 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_202 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_149 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_148)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_148 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_148 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_95 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_94)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_94 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_94 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_41 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_40)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_40 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_40 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_204 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_203)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_203 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_203 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_150 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_149)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_149 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_149 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_96 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_95)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_95 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_95 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_42 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_41)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_41 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_41 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_205 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_204)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_204 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_204 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_151 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_150)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_150 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_150 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_97 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_96)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_96 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_96 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_43 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_42)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_42 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_42 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_206 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_205)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_205 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_205 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_152 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_151)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_151 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_151 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_98 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_97)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_97 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_97 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_44 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_43)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_43 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_43 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_207 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_206)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_206 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_206 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_153 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_152)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_152 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_152 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_99 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_98)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_98 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_98 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_45 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_44)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_44 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_44 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_208 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_207)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_207 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_207 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_154 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_153)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_153 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_153 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_100 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_99)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_99 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_99 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_46 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_45)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_45 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_45 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_209 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_208)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_208 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_208 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_155 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_154)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_154 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_154 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_101 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_100)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_100 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_100 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_47 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_46)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_46 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_46 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_210 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_209)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_209 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_209 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_156 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_155)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_155 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_155 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_102 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_101)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_101 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_101 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_48 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_47)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_47 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_47 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_211 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_210)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_210 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_210 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_157 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_156)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_156 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_156 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_103 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_102)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_102 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_102 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_49 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_48)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_48 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_48 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_212 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_211)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_211 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_211 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_158 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_157)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_157 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_157 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_104 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_103)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_103 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_103 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_50 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_49)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_49 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_49 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_213 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_212)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_212 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_212 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_159 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_158)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_158 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_158 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_105 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_104)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_104 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_104 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_51 
        = (0x1fffffffU & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_50)
                           ? ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_50 
                               << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                           : ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_50 
                               << 1U) - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_214 
        = (1U & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_213)
                  ? (1U & (((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_213 
                             << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b) 
                           >> 0x1cU)) : (1U & (((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_213 
                                                 << 1U) 
                                                - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b) 
                                               >> 0x1cU))));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_160 
        = (1U & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_159)
                  ? (1U & (((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_159 
                             << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b) 
                           >> 0x1cU)) : (1U & (((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_159 
                                                 << 1U) 
                                                - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b) 
                                               >> 0x1cU))));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_106 
        = (1U & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_105)
                  ? (1U & (((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_105 
                             << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b) 
                           >> 0x1cU)) : (1U & (((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_105 
                                                 << 1U) 
                                                - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b) 
                                               >> 0x1cU))));
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_52 
        = (1U & ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_51)
                  ? (1U & (((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_51 
                             << 1U) + vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b) 
                           >> 0x1cU)) : (1U & (((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_51 
                                                 << 1U) 
                                                - vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b) 
                                               >> 0x1cU))));
    vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_3 
        = ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_214)
            ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_213)
                ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_212)
                    ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_211)
                        ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_210)
                            ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_209)
                                ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_208)
                                    ? ((0x10000000U 
                                        & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_207)
                                        ? ((0x10000000U 
                                            & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_206)
                                            ? ((0x10000000U 
                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_205)
                                                ? (
                                                   (0x10000000U 
                                                    & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_204)
                                                    ? 
                                                   ((0x10000000U 
                                                     & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_203)
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_202)
                                                      ? 
                                                     ((0x10000000U 
                                                       & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_201)
                                                       ? 
                                                      ((0x10000000U 
                                                        & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_200)
                                                        ? 
                                                       ((0x10000000U 
                                                         & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_199)
                                                         ? 
                                                        ((0x10000000U 
                                                          & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_198)
                                                          ? 
                                                         ((0x10000000U 
                                                           & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_197)
                                                           ? 
                                                          ((0x10000000U 
                                                            & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_196)
                                                            ? 
                                                           ((0x10000000U 
                                                             & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_195)
                                                             ? 
                                                            ((0x10000000U 
                                                              & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_194)
                                                              ? 
                                                             ((0x10000000U 
                                                               & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_193)
                                                               ? 
                                                              ((0x10000000U 
                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_192)
                                                                ? 
                                                               ((0x10000000U 
                                                                 & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_191)
                                                                 ? 
                                                                ((0x10000000U 
                                                                  & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_190)
                                                                  ? 
                                                                 ((0x10000000U 
                                                                   & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_189)
                                                                   ? 
                                                                  ((0x10000000U 
                                                                    & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_188)
                                                                    ? 
                                                                   ((0x10000000U 
                                                                     & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_187)
                                                                     ? 
                                                                    ((0x10000000U 
                                                                      & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_186)
                                                                      ? 
                                                                     ((0x10000000U 
                                                                       & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_185)
                                                                       ? 
                                                                      ((0x10000000U 
                                                                        & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_184)
                                                                        ? 
                                                                       ((0x10000000U 
                                                                         & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_183)
                                                                         ? 
                                                                        ((0x10000000U 
                                                                          & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_182)
                                                                          ? 
                                                                         ((0x10000000U 
                                                                           & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_181)
                                                                           ? 
                                                                          ((0x10000000U 
                                                                            & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_180)
                                                                            ? 
                                                                           ((0x10000000U 
                                                                             & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_179)
                                                                             ? 
                                                                            ((0x10000000U 
                                                                              & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_178)
                                                                              ? 
                                                                             ((0x10000000U 
                                                                               & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_177)
                                                                               ? 
                                                                              ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_176)
                                                                                ? 
                                                                               ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_175)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_174)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_173)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_172)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_171)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_170)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_169)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_168)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_167)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_166)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_165)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_164)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_163)
                                                                                 ? 
                                                                                (0x34U 
                                                                                | (1U 
                                                                                & (PvuTop__DOT__div_inst__DOT___next_remainder_T_1622 
                                                                                >> 0x1cU)))
                                                                                 : 0x33U)
                                                                                 : 0x32U)
                                                                                 : 0x31U)
                                                                                 : 0x30U)
                                                                                 : 0x2fU)
                                                                                 : 0x2eU)
                                                                                 : 0x2dU)
                                                                                 : 0x2cU)
                                                                                 : 0x2bU)
                                                                                 : 0x2aU)
                                                                                 : 0x29U)
                                                                                 : 0x28U)
                                                                                 : 0x27U)
                                                                                : 0x26U)
                                                                               : 0x25U)
                                                                              : 0x24U)
                                                                             : 0x23U)
                                                                            : 0x22U)
                                                                           : 0x21U)
                                                                          : 0x20U)
                                                                         : 0x1fU)
                                                                        : 0x1eU)
                                                                       : 0x1dU)
                                                                      : 0x1cU)
                                                                     : 0x1bU)
                                                                    : 0x1aU)
                                                                   : 0x19U)
                                                                  : 0x18U)
                                                                 : 0x17U)
                                                                : 0x16U)
                                                               : 0x15U)
                                                              : 0x14U)
                                                             : 0x13U)
                                                            : 0x12U)
                                                           : 0x11U)
                                                          : 0x10U)
                                                         : 0xfU)
                                                        : 0xeU)
                                                       : 0xdU)
                                                      : 0xcU)
                                                     : 0xbU)
                                                    : 0xaU)
                                                : 9U)
                                            : 8U) : 7U)
                                    : 6U) : 5U) : 4U)
                        : 3U) : 2U) : 1U) : 0U);
    vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_2 
        = ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_160)
            ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_159)
                ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_158)
                    ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_157)
                        ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_156)
                            ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_155)
                                ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_154)
                                    ? ((0x10000000U 
                                        & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_153)
                                        ? ((0x10000000U 
                                            & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_152)
                                            ? ((0x10000000U 
                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_151)
                                                ? (
                                                   (0x10000000U 
                                                    & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_150)
                                                    ? 
                                                   ((0x10000000U 
                                                     & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_149)
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_148)
                                                      ? 
                                                     ((0x10000000U 
                                                       & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_147)
                                                       ? 
                                                      ((0x10000000U 
                                                        & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_146)
                                                        ? 
                                                       ((0x10000000U 
                                                         & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_145)
                                                         ? 
                                                        ((0x10000000U 
                                                          & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_144)
                                                          ? 
                                                         ((0x10000000U 
                                                           & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_143)
                                                           ? 
                                                          ((0x10000000U 
                                                            & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_142)
                                                            ? 
                                                           ((0x10000000U 
                                                             & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_141)
                                                             ? 
                                                            ((0x10000000U 
                                                              & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_140)
                                                              ? 
                                                             ((0x10000000U 
                                                               & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_139)
                                                               ? 
                                                              ((0x10000000U 
                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_138)
                                                                ? 
                                                               ((0x10000000U 
                                                                 & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_137)
                                                                 ? 
                                                                ((0x10000000U 
                                                                  & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_136)
                                                                  ? 
                                                                 ((0x10000000U 
                                                                   & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_135)
                                                                   ? 
                                                                  ((0x10000000U 
                                                                    & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_134)
                                                                    ? 
                                                                   ((0x10000000U 
                                                                     & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_133)
                                                                     ? 
                                                                    ((0x10000000U 
                                                                      & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_132)
                                                                      ? 
                                                                     ((0x10000000U 
                                                                       & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_131)
                                                                       ? 
                                                                      ((0x10000000U 
                                                                        & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_130)
                                                                        ? 
                                                                       ((0x10000000U 
                                                                         & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_129)
                                                                         ? 
                                                                        ((0x10000000U 
                                                                          & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_128)
                                                                          ? 
                                                                         ((0x10000000U 
                                                                           & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_127)
                                                                           ? 
                                                                          ((0x10000000U 
                                                                            & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_126)
                                                                            ? 
                                                                           ((0x10000000U 
                                                                             & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_125)
                                                                             ? 
                                                                            ((0x10000000U 
                                                                              & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_124)
                                                                              ? 
                                                                             ((0x10000000U 
                                                                               & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_123)
                                                                               ? 
                                                                              ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_122)
                                                                                ? 
                                                                               ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_121)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_120)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_119)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_118)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_117)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_116)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_115)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_114)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_113)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_112)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_111)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_110)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_109)
                                                                                 ? 
                                                                                (0x34U 
                                                                                | (1U 
                                                                                & (PvuTop__DOT__div_inst__DOT___next_remainder_T_1082 
                                                                                >> 0x1cU)))
                                                                                 : 0x33U)
                                                                                 : 0x32U)
                                                                                 : 0x31U)
                                                                                 : 0x30U)
                                                                                 : 0x2fU)
                                                                                 : 0x2eU)
                                                                                 : 0x2dU)
                                                                                 : 0x2cU)
                                                                                 : 0x2bU)
                                                                                 : 0x2aU)
                                                                                 : 0x29U)
                                                                                 : 0x28U)
                                                                                 : 0x27U)
                                                                                : 0x26U)
                                                                               : 0x25U)
                                                                              : 0x24U)
                                                                             : 0x23U)
                                                                            : 0x22U)
                                                                           : 0x21U)
                                                                          : 0x20U)
                                                                         : 0x1fU)
                                                                        : 0x1eU)
                                                                       : 0x1dU)
                                                                      : 0x1cU)
                                                                     : 0x1bU)
                                                                    : 0x1aU)
                                                                   : 0x19U)
                                                                  : 0x18U)
                                                                 : 0x17U)
                                                                : 0x16U)
                                                               : 0x15U)
                                                              : 0x14U)
                                                             : 0x13U)
                                                            : 0x12U)
                                                           : 0x11U)
                                                          : 0x10U)
                                                         : 0xfU)
                                                        : 0xeU)
                                                       : 0xdU)
                                                      : 0xcU)
                                                     : 0xbU)
                                                    : 0xaU)
                                                : 9U)
                                            : 8U) : 7U)
                                    : 6U) : 5U) : 4U)
                        : 3U) : 2U) : 1U) : 0U);
    vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_1 
        = ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_106)
            ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_105)
                ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_104)
                    ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_103)
                        ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_102)
                            ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_101)
                                ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_100)
                                    ? ((0x10000000U 
                                        & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_99)
                                        ? ((0x10000000U 
                                            & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_98)
                                            ? ((0x10000000U 
                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_97)
                                                ? (
                                                   (0x10000000U 
                                                    & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_96)
                                                    ? 
                                                   ((0x10000000U 
                                                     & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_95)
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_94)
                                                      ? 
                                                     ((0x10000000U 
                                                       & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_93)
                                                       ? 
                                                      ((0x10000000U 
                                                        & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_92)
                                                        ? 
                                                       ((0x10000000U 
                                                         & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_91)
                                                         ? 
                                                        ((0x10000000U 
                                                          & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_90)
                                                          ? 
                                                         ((0x10000000U 
                                                           & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_89)
                                                           ? 
                                                          ((0x10000000U 
                                                            & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_88)
                                                            ? 
                                                           ((0x10000000U 
                                                             & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_87)
                                                             ? 
                                                            ((0x10000000U 
                                                              & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_86)
                                                              ? 
                                                             ((0x10000000U 
                                                               & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_85)
                                                               ? 
                                                              ((0x10000000U 
                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_84)
                                                                ? 
                                                               ((0x10000000U 
                                                                 & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_83)
                                                                 ? 
                                                                ((0x10000000U 
                                                                  & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_82)
                                                                  ? 
                                                                 ((0x10000000U 
                                                                   & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_81)
                                                                   ? 
                                                                  ((0x10000000U 
                                                                    & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_80)
                                                                    ? 
                                                                   ((0x10000000U 
                                                                     & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_79)
                                                                     ? 
                                                                    ((0x10000000U 
                                                                      & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_78)
                                                                      ? 
                                                                     ((0x10000000U 
                                                                       & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_77)
                                                                       ? 
                                                                      ((0x10000000U 
                                                                        & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_76)
                                                                        ? 
                                                                       ((0x10000000U 
                                                                         & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_75)
                                                                         ? 
                                                                        ((0x10000000U 
                                                                          & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_74)
                                                                          ? 
                                                                         ((0x10000000U 
                                                                           & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_73)
                                                                           ? 
                                                                          ((0x10000000U 
                                                                            & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_72)
                                                                            ? 
                                                                           ((0x10000000U 
                                                                             & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_71)
                                                                             ? 
                                                                            ((0x10000000U 
                                                                              & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_70)
                                                                              ? 
                                                                             ((0x10000000U 
                                                                               & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_69)
                                                                               ? 
                                                                              ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_68)
                                                                                ? 
                                                                               ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_67)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_66)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_65)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_64)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_63)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_62)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_61)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_60)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_59)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_58)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_57)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_56)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_55)
                                                                                 ? 
                                                                                (0x34U 
                                                                                | (1U 
                                                                                & (PvuTop__DOT__div_inst__DOT___next_remainder_T_542 
                                                                                >> 0x1cU)))
                                                                                 : 0x33U)
                                                                                 : 0x32U)
                                                                                 : 0x31U)
                                                                                 : 0x30U)
                                                                                 : 0x2fU)
                                                                                 : 0x2eU)
                                                                                 : 0x2dU)
                                                                                 : 0x2cU)
                                                                                 : 0x2bU)
                                                                                 : 0x2aU)
                                                                                 : 0x29U)
                                                                                 : 0x28U)
                                                                                 : 0x27U)
                                                                                : 0x26U)
                                                                               : 0x25U)
                                                                              : 0x24U)
                                                                             : 0x23U)
                                                                            : 0x22U)
                                                                           : 0x21U)
                                                                          : 0x20U)
                                                                         : 0x1fU)
                                                                        : 0x1eU)
                                                                       : 0x1dU)
                                                                      : 0x1cU)
                                                                     : 0x1bU)
                                                                    : 0x1aU)
                                                                   : 0x19U)
                                                                  : 0x18U)
                                                                 : 0x17U)
                                                                : 0x16U)
                                                               : 0x15U)
                                                              : 0x14U)
                                                             : 0x13U)
                                                            : 0x12U)
                                                           : 0x11U)
                                                          : 0x10U)
                                                         : 0xfU)
                                                        : 0xeU)
                                                       : 0xdU)
                                                      : 0xcU)
                                                     : 0xbU)
                                                    : 0xaU)
                                                : 9U)
                                            : 8U) : 7U)
                                    : 6U) : 5U) : 4U)
                        : 3U) : 2U) : 1U) : 0U);
    vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros 
        = ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_52)
            ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_51)
                ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_50)
                    ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_49)
                        ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_48)
                            ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_47)
                                ? ((0x10000000U & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_46)
                                    ? ((0x10000000U 
                                        & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_45)
                                        ? ((0x10000000U 
                                            & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_44)
                                            ? ((0x10000000U 
                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_43)
                                                ? (
                                                   (0x10000000U 
                                                    & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_42)
                                                    ? 
                                                   ((0x10000000U 
                                                     & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_41)
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_40)
                                                      ? 
                                                     ((0x10000000U 
                                                       & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_39)
                                                       ? 
                                                      ((0x10000000U 
                                                        & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_38)
                                                        ? 
                                                       ((0x10000000U 
                                                         & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_37)
                                                         ? 
                                                        ((0x10000000U 
                                                          & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_36)
                                                          ? 
                                                         ((0x10000000U 
                                                           & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_35)
                                                           ? 
                                                          ((0x10000000U 
                                                            & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_34)
                                                            ? 
                                                           ((0x10000000U 
                                                             & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_33)
                                                             ? 
                                                            ((0x10000000U 
                                                              & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_32)
                                                              ? 
                                                             ((0x10000000U 
                                                               & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_31)
                                                               ? 
                                                              ((0x10000000U 
                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_30)
                                                                ? 
                                                               ((0x10000000U 
                                                                 & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_29)
                                                                 ? 
                                                                ((0x10000000U 
                                                                  & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_28)
                                                                  ? 
                                                                 ((0x10000000U 
                                                                   & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_27)
                                                                   ? 
                                                                  ((0x10000000U 
                                                                    & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_26)
                                                                    ? 
                                                                   ((0x10000000U 
                                                                     & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_25)
                                                                     ? 
                                                                    ((0x10000000U 
                                                                      & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_24)
                                                                      ? 
                                                                     ((0x10000000U 
                                                                       & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_23)
                                                                       ? 
                                                                      ((0x10000000U 
                                                                        & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_22)
                                                                        ? 
                                                                       ((0x10000000U 
                                                                         & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_21)
                                                                         ? 
                                                                        ((0x10000000U 
                                                                          & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_20)
                                                                          ? 
                                                                         ((0x10000000U 
                                                                           & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_19)
                                                                           ? 
                                                                          ((0x10000000U 
                                                                            & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_18)
                                                                            ? 
                                                                           ((0x10000000U 
                                                                             & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_17)
                                                                             ? 
                                                                            ((0x10000000U 
                                                                              & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_16)
                                                                              ? 
                                                                             ((0x10000000U 
                                                                               & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_15)
                                                                               ? 
                                                                              ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_14)
                                                                                ? 
                                                                               ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_13)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_12)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_11)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_10)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_9)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_8)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_7)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_6)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_5)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_4)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_3)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_2)
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_1)
                                                                                 ? 
                                                                                (0x34U 
                                                                                | (1U 
                                                                                & (PvuTop__DOT__div_inst__DOT___next_remainder_T_2 
                                                                                >> 0x1cU)))
                                                                                 : 0x33U)
                                                                                 : 0x32U)
                                                                                 : 0x31U)
                                                                                 : 0x30U)
                                                                                 : 0x2fU)
                                                                                 : 0x2eU)
                                                                                 : 0x2dU)
                                                                                 : 0x2cU)
                                                                                 : 0x2bU)
                                                                                 : 0x2aU)
                                                                                 : 0x29U)
                                                                                 : 0x28U)
                                                                                 : 0x27U)
                                                                                : 0x26U)
                                                                               : 0x25U)
                                                                              : 0x24U)
                                                                             : 0x23U)
                                                                            : 0x22U)
                                                                           : 0x21U)
                                                                          : 0x20U)
                                                                         : 0x1fU)
                                                                        : 0x1eU)
                                                                       : 0x1dU)
                                                                      : 0x1cU)
                                                                     : 0x1bU)
                                                                    : 0x1aU)
                                                                   : 0x19U)
                                                                  : 0x18U)
                                                                 : 0x17U)
                                                                : 0x16U)
                                                               : 0x15U)
                                                              : 0x14U)
                                                             : 0x13U)
                                                            : 0x12U)
                                                           : 0x11U)
                                                          : 0x10U)
                                                         : 0xfU)
                                                        : 0xeU)
                                                       : 0xdU)
                                                      : 0xcU)
                                                     : 0xbU)
                                                    : 0xaU)
                                                : 9U)
                                            : 8U) : 7U)
                                    : 6U) : 5U) : 4U)
                        : 3U) : 2U) : 1U) : 0U);
    __Vtemp_ha46794a0__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ 
                                                             (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_213 
                                                              >> 0x1cU))))) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_212 
                                                                 >> 0x1cU))))) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_211 
                                                                    >> 0x1cU))))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_210 
                                                                       >> 0x1cU))))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_209 
                                                                          >> 0x1cU))))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_208 
                                                                             >> 0x1cU))))) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_207 
                                                                                >> 0x1cU))))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_206 
                                                                                >> 0x1cU))))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_205 
                                                                                >> 0x1cU))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_204 
                                                                                >> 0x1cU))))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_203 
                                                                                >> 0x1cU))))) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_202 
                                                                                >> 0x1cU))))) 
                                                                          << 0x29U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_201 
                                                                                >> 0x1cU))))) 
                                                                             << 0x28U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_200 
                                                                                >> 0x1cU))))) 
                                                                                << 0x27U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_199 
                                                                                >> 0x1cU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_198 
                                                                                >> 0x1cU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_197 
                                                                                >> 0x1cU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_196 
                                                                                >> 0x1cU))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_195 
                                                                                >> 0x1cU))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_194 
                                                                                >> 0x1cU))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_193 
                                                                                >> 0x1cU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_192 
                                                                                >> 0x1cU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_191 
                                                                                >> 0x1cU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_190 
                                                                                >> 0x1cU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_189 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_188 
                                                                                >> 0x1cU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_187 
                                                                                >> 0x1cU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_186 
                                                                                >> 0x1cU)) 
                                                                                << 0x19U)) 
                                                                                | vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_hc77c2139__0)))))))))))))))))))))))))))))));
    __Vtemp_ha46794a0__0[1U] = (((IData)((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_214)))))) 
                                 << 0x15U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_213 
                                                                             >> 0x1cU))))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_212 
                                                                                >> 0x1cU))))) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_211 
                                                                                >> 0x1cU))))) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_210 
                                                                                >> 0x1cU))))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_209 
                                                                                >> 0x1cU))))) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_208 
                                                                                >> 0x1cU))))) 
                                                                       << 0x2fU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_207 
                                                                                >> 0x1cU))))) 
                                                                          << 0x2eU) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_206 
                                                                                >> 0x1cU))))) 
                                                                             << 0x2dU) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_205 
                                                                                >> 0x1cU))))) 
                                                                                << 0x2cU) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_204 
                                                                                >> 0x1cU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_203 
                                                                                >> 0x1cU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_202 
                                                                                >> 0x1cU))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_201 
                                                                                >> 0x1cU))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_200 
                                                                                >> 0x1cU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_199 
                                                                                >> 0x1cU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_198 
                                                                                >> 0x1cU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_197 
                                                                                >> 0x1cU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_196 
                                                                                >> 0x1cU))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_195 
                                                                                >> 0x1cU))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_194 
                                                                                >> 0x1cU))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_193 
                                                                                >> 0x1cU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_192 
                                                                                >> 0x1cU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_191 
                                                                                >> 0x1cU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_190 
                                                                                >> 0x1cU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_189 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_188 
                                                                                >> 0x1cU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_187 
                                                                                >> 0x1cU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_186 
                                                                                >> 0x1cU)) 
                                                                                << 0x19U)) 
                                                                                | vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_hc77c2139__0)))))))))))))))))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_ha46794a0__0[2U] = (((IData)((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_214)))))) 
                                 >> 0xbU) | ((IData)(
                                                     ((QData)((IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_214))))) 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_ha46794a0__0[3U] = ((IData)(((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_214))))) 
                                         >> 0x20U)) 
                                >> 0xbU);
    VL_SHIFTL_WWI(117,117,6, __Vtemp_h20ba529e__0, __Vtemp_ha46794a0__0, (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_3));
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3[0U] 
        = __Vtemp_h20ba529e__0[0U];
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3[1U] 
        = __Vtemp_h20ba529e__0[1U];
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3[2U] 
        = __Vtemp_h20ba529e__0[2U];
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3[3U] 
        = (0x1fffffU & __Vtemp_h20ba529e__0[3U]);
    __Vtemp_h96e9c0c5__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ 
                                                             (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_159 
                                                              >> 0x1cU))))) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_158 
                                                                 >> 0x1cU))))) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_157 
                                                                    >> 0x1cU))))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_156 
                                                                       >> 0x1cU))))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_155 
                                                                          >> 0x1cU))))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_154 
                                                                             >> 0x1cU))))) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_153 
                                                                                >> 0x1cU))))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_152 
                                                                                >> 0x1cU))))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_151 
                                                                                >> 0x1cU))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_150 
                                                                                >> 0x1cU))))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_149 
                                                                                >> 0x1cU))))) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_148 
                                                                                >> 0x1cU))))) 
                                                                          << 0x29U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_147 
                                                                                >> 0x1cU))))) 
                                                                             << 0x28U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_146 
                                                                                >> 0x1cU))))) 
                                                                                << 0x27U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_145 
                                                                                >> 0x1cU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_144 
                                                                                >> 0x1cU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_143 
                                                                                >> 0x1cU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_142 
                                                                                >> 0x1cU))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_141 
                                                                                >> 0x1cU))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_140 
                                                                                >> 0x1cU))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_139 
                                                                                >> 0x1cU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_138 
                                                                                >> 0x1cU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_137 
                                                                                >> 0x1cU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_136 
                                                                                >> 0x1cU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_135 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_134 
                                                                                >> 0x1cU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_133 
                                                                                >> 0x1cU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_132 
                                                                                >> 0x1cU)) 
                                                                                << 0x19U)) 
                                                                                | vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_h191d4ea2__0)))))))))))))))))))))))))))))));
    __Vtemp_h96e9c0c5__0[1U] = (((IData)((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_160)))))) 
                                 << 0x15U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_159 
                                                                             >> 0x1cU))))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_158 
                                                                                >> 0x1cU))))) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_157 
                                                                                >> 0x1cU))))) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_156 
                                                                                >> 0x1cU))))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_155 
                                                                                >> 0x1cU))))) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_154 
                                                                                >> 0x1cU))))) 
                                                                       << 0x2fU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_153 
                                                                                >> 0x1cU))))) 
                                                                          << 0x2eU) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_152 
                                                                                >> 0x1cU))))) 
                                                                             << 0x2dU) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_151 
                                                                                >> 0x1cU))))) 
                                                                                << 0x2cU) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_150 
                                                                                >> 0x1cU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_149 
                                                                                >> 0x1cU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_148 
                                                                                >> 0x1cU))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_147 
                                                                                >> 0x1cU))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_146 
                                                                                >> 0x1cU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_145 
                                                                                >> 0x1cU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_144 
                                                                                >> 0x1cU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_143 
                                                                                >> 0x1cU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_142 
                                                                                >> 0x1cU))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_141 
                                                                                >> 0x1cU))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_140 
                                                                                >> 0x1cU))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_139 
                                                                                >> 0x1cU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_138 
                                                                                >> 0x1cU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_137 
                                                                                >> 0x1cU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_136 
                                                                                >> 0x1cU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_135 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_134 
                                                                                >> 0x1cU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_133 
                                                                                >> 0x1cU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_132 
                                                                                >> 0x1cU)) 
                                                                                << 0x19U)) 
                                                                                | vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_h191d4ea2__0)))))))))))))))))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h96e9c0c5__0[2U] = (((IData)((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_160)))))) 
                                 >> 0xbU) | ((IData)(
                                                     ((QData)((IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_160))))) 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_h96e9c0c5__0[3U] = ((IData)(((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_160))))) 
                                         >> 0x20U)) 
                                >> 0xbU);
    VL_SHIFTL_WWI(117,117,6, __Vtemp_h1352ac33__0, __Vtemp_h96e9c0c5__0, (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_2));
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2[0U] 
        = __Vtemp_h1352ac33__0[0U];
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2[1U] 
        = __Vtemp_h1352ac33__0[1U];
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2[2U] 
        = __Vtemp_h1352ac33__0[2U];
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2[3U] 
        = (0x1fffffU & __Vtemp_h1352ac33__0[3U]);
    __Vtemp_hbe1f6499__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ 
                                                             (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_105 
                                                              >> 0x1cU))))) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_104 
                                                                 >> 0x1cU))))) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_103 
                                                                    >> 0x1cU))))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_102 
                                                                       >> 0x1cU))))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_101 
                                                                          >> 0x1cU))))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_100 
                                                                             >> 0x1cU))))) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_99 
                                                                                >> 0x1cU))))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_98 
                                                                                >> 0x1cU))))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_97 
                                                                                >> 0x1cU))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_96 
                                                                                >> 0x1cU))))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_95 
                                                                                >> 0x1cU))))) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_94 
                                                                                >> 0x1cU))))) 
                                                                          << 0x29U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_93 
                                                                                >> 0x1cU))))) 
                                                                             << 0x28U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_92 
                                                                                >> 0x1cU))))) 
                                                                                << 0x27U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_91 
                                                                                >> 0x1cU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_90 
                                                                                >> 0x1cU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_89 
                                                                                >> 0x1cU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_88 
                                                                                >> 0x1cU))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_87 
                                                                                >> 0x1cU))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_86 
                                                                                >> 0x1cU))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_85 
                                                                                >> 0x1cU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_84 
                                                                                >> 0x1cU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_83 
                                                                                >> 0x1cU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_82 
                                                                                >> 0x1cU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_81 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_80 
                                                                                >> 0x1cU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_79 
                                                                                >> 0x1cU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_78 
                                                                                >> 0x1cU)) 
                                                                                << 0x19U)) 
                                                                                | vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_hc0233086__0)))))))))))))))))))))))))))))));
    __Vtemp_hbe1f6499__0[1U] = (((IData)((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_106)))))) 
                                 << 0x15U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_105 
                                                                             >> 0x1cU))))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_104 
                                                                                >> 0x1cU))))) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_103 
                                                                                >> 0x1cU))))) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_102 
                                                                                >> 0x1cU))))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_101 
                                                                                >> 0x1cU))))) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_100 
                                                                                >> 0x1cU))))) 
                                                                       << 0x2fU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_99 
                                                                                >> 0x1cU))))) 
                                                                          << 0x2eU) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_98 
                                                                                >> 0x1cU))))) 
                                                                             << 0x2dU) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_97 
                                                                                >> 0x1cU))))) 
                                                                                << 0x2cU) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_96 
                                                                                >> 0x1cU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_95 
                                                                                >> 0x1cU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_94 
                                                                                >> 0x1cU))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_93 
                                                                                >> 0x1cU))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_92 
                                                                                >> 0x1cU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_91 
                                                                                >> 0x1cU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_90 
                                                                                >> 0x1cU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_89 
                                                                                >> 0x1cU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_88 
                                                                                >> 0x1cU))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_87 
                                                                                >> 0x1cU))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_86 
                                                                                >> 0x1cU))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_85 
                                                                                >> 0x1cU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_84 
                                                                                >> 0x1cU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_83 
                                                                                >> 0x1cU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_82 
                                                                                >> 0x1cU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_81 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_80 
                                                                                >> 0x1cU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_79 
                                                                                >> 0x1cU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_78 
                                                                                >> 0x1cU)) 
                                                                                << 0x19U)) 
                                                                                | vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_hc0233086__0)))))))))))))))))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_hbe1f6499__0[2U] = (((IData)((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_106)))))) 
                                 >> 0xbU) | ((IData)(
                                                     ((QData)((IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_106))))) 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_hbe1f6499__0[3U] = ((IData)(((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_106))))) 
                                         >> 0x20U)) 
                                >> 0xbU);
    VL_SHIFTL_WWI(117,117,6, __Vtemp_h9e5f1467__0, __Vtemp_hbe1f6499__0, (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_1));
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1[0U] 
        = __Vtemp_h9e5f1467__0[0U];
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1[1U] 
        = __Vtemp_h9e5f1467__0[1U];
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1[2U] 
        = __Vtemp_h9e5f1467__0[2U];
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1[3U] 
        = (0x1fffffU & __Vtemp_h9e5f1467__0[3U]);
    __Vtemp_hc0acdec3__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ 
                                                             (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_51 
                                                              >> 0x1cU))))) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_50 
                                                                 >> 0x1cU))))) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_49 
                                                                    >> 0x1cU))))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_48 
                                                                       >> 0x1cU))))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_47 
                                                                          >> 0x1cU))))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_46 
                                                                             >> 0x1cU))))) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_45 
                                                                                >> 0x1cU))))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_44 
                                                                                >> 0x1cU))))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_43 
                                                                                >> 0x1cU))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_42 
                                                                                >> 0x1cU))))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_41 
                                                                                >> 0x1cU))))) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_40 
                                                                                >> 0x1cU))))) 
                                                                          << 0x29U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_39 
                                                                                >> 0x1cU))))) 
                                                                             << 0x28U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_38 
                                                                                >> 0x1cU))))) 
                                                                                << 0x27U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_37 
                                                                                >> 0x1cU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_36 
                                                                                >> 0x1cU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_35 
                                                                                >> 0x1cU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_34 
                                                                                >> 0x1cU))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_33 
                                                                                >> 0x1cU))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_32 
                                                                                >> 0x1cU))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_31 
                                                                                >> 0x1cU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_30 
                                                                                >> 0x1cU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_29 
                                                                                >> 0x1cU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_28 
                                                                                >> 0x1cU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_27 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_26 
                                                                                >> 0x1cU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_25 
                                                                                >> 0x1cU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_24 
                                                                                >> 0x1cU)) 
                                                                                << 0x19U)) 
                                                                                | vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_h40459468__0)))))))))))))))))))))))))))))));
    __Vtemp_hc0acdec3__0[1U] = (((IData)((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_52)))))) 
                                 << 0x15U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_51 
                                                                             >> 0x1cU))))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_50 
                                                                                >> 0x1cU))))) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_49 
                                                                                >> 0x1cU))))) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_48 
                                                                                >> 0x1cU))))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_47 
                                                                                >> 0x1cU))))) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_46 
                                                                                >> 0x1cU))))) 
                                                                       << 0x2fU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_45 
                                                                                >> 0x1cU))))) 
                                                                          << 0x2eU) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_44 
                                                                                >> 0x1cU))))) 
                                                                             << 0x2dU) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_43 
                                                                                >> 0x1cU))))) 
                                                                                << 0x2cU) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_42 
                                                                                >> 0x1cU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_41 
                                                                                >> 0x1cU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_40 
                                                                                >> 0x1cU))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_39 
                                                                                >> 0x1cU))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_38 
                                                                                >> 0x1cU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_37 
                                                                                >> 0x1cU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_36 
                                                                                >> 0x1cU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_35 
                                                                                >> 0x1cU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_34 
                                                                                >> 0x1cU))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_33 
                                                                                >> 0x1cU))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_32 
                                                                                >> 0x1cU))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_31 
                                                                                >> 0x1cU))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_30 
                                                                                >> 0x1cU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_29 
                                                                                >> 0x1cU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_28 
                                                                                >> 0x1cU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_27 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_26 
                                                                                >> 0x1cU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_25 
                                                                                >> 0x1cU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((~ 
                                                                                (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_24 
                                                                                >> 0x1cU)) 
                                                                                << 0x19U)) 
                                                                                | vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_h40459468__0)))))))))))))))))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_hc0acdec3__0[2U] = (((IData)((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_52)))))) 
                                 >> 0xbU) | ((IData)(
                                                     ((QData)((IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_52))))) 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_hc0acdec3__0[3U] = ((IData)(((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_52))))) 
                                         >> 0x20U)) 
                                >> 0xbU);
    VL_SHIFTL_WWI(117,117,6, __Vtemp_h568e57e2__0, __Vtemp_hc0acdec3__0, (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros));
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T[0U] 
        = __Vtemp_h568e57e2__0[0U];
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T[1U] 
        = __Vtemp_h568e57e2__0[1U];
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T[2U] 
        = __Vtemp_h568e57e2__0[2U];
    vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T[3U] 
        = (0x1fffffU & __Vtemp_h568e57e2__0[3U]);
}
