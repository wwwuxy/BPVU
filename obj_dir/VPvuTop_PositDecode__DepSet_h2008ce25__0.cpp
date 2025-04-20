// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_PositDecode.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__decode1__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__decode1__0\n"); );
    // Init
    CData/*0:0*/ lzcModule__DOT____Vlvbound_hefa3c05c__0;
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ lzcModule_1__DOT____Vlvbound_hefa3c05c__0;
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ lzcModule_2__DOT____Vlvbound_hefa3c05c__0;
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ lzcModule_3__DOT____Vlvbound_hefa3c05c__0;
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = 0;
    // Body
    vlSelf->io_Sign = ((8U & (vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[3U] 
                              >> 0x1cU)) | ((4U & (
                                                   vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[2U] 
                                                   >> 0x1dU)) 
                                            | ((2U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[1U] 
                                                   >> 0x1eU)) 
                                               | (vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[0U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT___operand_3_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[3U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[3U]))
                                       : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[3U]));
    vlSelf->__PVT___operand_2_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[2U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[2U]))
                                       : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[2U]));
    vlSelf->__PVT___operand_1_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[1U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[1U]))
                                       : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[1U]));
    vlSelf->__PVT___operand_0_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[0U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[0U]))
                                       : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[0U]));
    vlSelf->__PVT__isNaR = ((IData)(vlSelf->io_Sign) 
                            & (((0U == (0x7fffffffU 
                                        & vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[3U])) 
                                << 3U) | (((0U == (0x7fffffffU 
                                                   & vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[2U])) 
                                           << 2U) | 
                                          (((0U == 
                                             (0x7fffffffU 
                                              & vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[1U])) 
                                            << 1U) 
                                           | (0U == 
                                              (0x7fffffffU 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit[0U]))))));
    vlSelf->__Vcellinp__lzcModule_3__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT___operand_3_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT___operand_3_T_6));
    vlSelf->__Vcellinp__lzcModule_2__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT___operand_2_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT___operand_2_T_6));
    vlSelf->__Vcellinp__lzcModule_1__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT___operand_1_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT___operand_1_T_6));
    vlSelf->__Vcellinp__lzcModule__in_i = (0x7fffffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT___operand_0_T_6 
                                                             >> 0x1eU)))) 
                                              ^ vlSelf->__PVT___operand_0_T_6));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1eU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1dU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1cU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1bU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1aU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x19U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x18U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x17U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x16U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x15U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x14U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x13U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x12U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x11U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x10U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xfU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xeU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xdU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xcU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xbU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xaU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 9U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 8U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 7U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 6U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 5U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 4U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 3U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 2U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 1U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & vlSelf->__Vcellinp__lzcModule_3__in_i);
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1eU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1dU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1cU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1bU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1aU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x19U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x18U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x17U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x16U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x15U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x14U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x13U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x12U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x11U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x10U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xfU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xeU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xdU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xcU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xbU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xaU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 9U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 8U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 7U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 6U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 5U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 4U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 3U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 2U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 1U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & vlSelf->__Vcellinp__lzcModule_2__in_i);
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1eU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1dU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1cU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1bU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1aU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x19U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x18U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x17U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x16U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x15U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x14U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x13U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x12U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x11U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x10U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xfU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xeU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xdU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xcU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xbU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xaU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 9U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 8U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 7U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 6U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 5U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 4U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 3U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 2U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 1U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & vlSelf->__Vcellinp__lzcModule_1__in_i);
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1eU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1dU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1cU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1bU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1aU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x19U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x18U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x17U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x16U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x15U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x14U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x13U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x12U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x11U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x10U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xfU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xeU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xdU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xcU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xbU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xaU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 9U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 8U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 7U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 6U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 5U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 4U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 3U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 2U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 1U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & vlSelf->__Vcellinp__lzcModule__in_i);
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__decode2__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__decode2__0\n"); );
    // Init
    CData/*0:0*/ lzcModule__DOT____Vlvbound_hefa3c05c__0;
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ lzcModule_1__DOT____Vlvbound_hefa3c05c__0;
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ lzcModule_2__DOT____Vlvbound_hefa3c05c__0;
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ lzcModule_3__DOT____Vlvbound_hefa3c05c__0;
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = 0;
    // Body
    vlSelf->io_Sign = ((8U & (vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[3U] 
                              >> 0x1cU)) | ((4U & (
                                                   vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[2U] 
                                                   >> 0x1dU)) 
                                            | ((2U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[1U] 
                                                   >> 0x1eU)) 
                                               | (vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[0U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT___operand_3_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[3U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[3U]))
                                       : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[3U]));
    vlSelf->__PVT___operand_2_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[2U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[2U]))
                                       : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[2U]));
    vlSelf->__PVT___operand_1_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[1U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[1U]))
                                       : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[1U]));
    vlSelf->__PVT___operand_0_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[0U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[0U]))
                                       : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[0U]));
    vlSelf->__PVT__isNaR = ((IData)(vlSelf->io_Sign) 
                            & (((0U == (0x7fffffffU 
                                        & vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[3U])) 
                                << 3U) | (((0U == (0x7fffffffU 
                                                   & vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[2U])) 
                                           << 2U) | 
                                          (((0U == 
                                             (0x7fffffffU 
                                              & vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[1U])) 
                                            << 1U) 
                                           | (0U == 
                                              (0x7fffffffU 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit[0U]))))));
    vlSelf->__Vcellinp__lzcModule_3__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT___operand_3_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT___operand_3_T_6));
    vlSelf->__Vcellinp__lzcModule_2__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT___operand_2_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT___operand_2_T_6));
    vlSelf->__Vcellinp__lzcModule_1__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT___operand_1_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT___operand_1_T_6));
    vlSelf->__Vcellinp__lzcModule__in_i = (0x7fffffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT___operand_0_T_6 
                                                             >> 0x1eU)))) 
                                              ^ vlSelf->__PVT___operand_0_T_6));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1eU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1dU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1cU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1bU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1aU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x19U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x18U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x17U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x16U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x15U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x14U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x13U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x12U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x11U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x10U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xfU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xeU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xdU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xcU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xbU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xaU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 9U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 8U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 7U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 6U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 5U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 4U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 3U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 2U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 1U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & vlSelf->__Vcellinp__lzcModule_3__in_i);
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1eU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1dU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1cU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1bU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1aU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x19U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x18U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x17U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x16U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x15U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x14U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x13U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x12U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x11U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x10U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xfU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xeU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xdU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xcU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xbU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xaU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 9U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 8U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 7U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 6U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 5U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 4U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 3U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 2U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 1U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & vlSelf->__Vcellinp__lzcModule_2__in_i);
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1eU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1dU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1cU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1bU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1aU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x19U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x18U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x17U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x16U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x15U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x14U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x13U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x12U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x11U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x10U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xfU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xeU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xdU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xcU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xbU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xaU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 9U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 8U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 7U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 6U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 5U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 4U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 3U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 2U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 1U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & vlSelf->__Vcellinp__lzcModule_1__in_i);
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1eU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1dU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1cU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1bU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1aU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x19U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x18U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x17U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x16U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x15U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x14U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x13U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x12U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x11U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x10U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xfU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xeU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xdU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xcU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xbU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xaU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 9U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 8U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 7U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 6U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 5U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 4U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 3U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 2U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 1U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & vlSelf->__Vcellinp__lzcModule__in_i);
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__result_converted_decoder__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__result_converted_decoder__0\n"); );
    // Init
    CData/*0:0*/ lzcModule__DOT____Vlvbound_hefa3c05c__0;
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ lzcModule_1__DOT____Vlvbound_hefa3c05c__0;
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ lzcModule_2__DOT____Vlvbound_hefa3c05c__0;
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ lzcModule_3__DOT____Vlvbound_hefa3c05c__0;
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = 0;
    // Body
    vlSelf->io_Sign = ((8U & (vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[3U] 
                              >> 0x1cU)) | ((4U & (
                                                   vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[2U] 
                                                   >> 0x1dU)) 
                                            | ((2U 
                                                & (vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[1U] 
                                                   >> 0x1eU)) 
                                               | (vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[0U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT___operand_3_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[3U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[3U]))
                                       : vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[3U]));
    vlSelf->__PVT___operand_2_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[2U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[2U]))
                                       : vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[2U]));
    vlSelf->__PVT___operand_1_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[1U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[1U]))
                                       : vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[1U]));
    vlSelf->__PVT___operand_0_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[0U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[0U]))
                                       : vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[0U]));
    vlSelf->__PVT__isNaR = ((IData)(vlSelf->io_Sign) 
                            & (((0U == (0x7fffffffU 
                                        & vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[3U])) 
                                << 3U) | (((0U == (0x7fffffffU 
                                                   & vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[2U])) 
                                           << 2U) | 
                                          (((0U == 
                                             (0x7fffffffU 
                                              & vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[1U])) 
                                            << 1U) 
                                           | (0U == 
                                              (0x7fffffffU 
                                               & vlSymsp->TOP.PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[0U]))))));
    vlSelf->__Vcellinp__lzcModule_3__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT___operand_3_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT___operand_3_T_6));
    vlSelf->__Vcellinp__lzcModule_2__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT___operand_2_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT___operand_2_T_6));
    vlSelf->__Vcellinp__lzcModule_1__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT___operand_1_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT___operand_1_T_6));
    vlSelf->__Vcellinp__lzcModule__in_i = (0x7fffffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT___operand_0_T_6 
                                                             >> 0x1eU)))) 
                                              ^ vlSelf->__PVT___operand_0_T_6));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1eU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1dU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1cU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1bU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1aU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x19U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x18U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x17U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x16U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x15U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x14U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x13U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x12U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x11U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x10U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xfU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xeU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xdU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xcU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xbU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xaU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 9U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 8U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 7U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 6U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 5U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 4U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 3U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 2U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 1U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & vlSelf->__Vcellinp__lzcModule_3__in_i);
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1eU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1dU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1cU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1bU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1aU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x19U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x18U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x17U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x16U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x15U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x14U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x13U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x12U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x11U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x10U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xfU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xeU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xdU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xcU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xbU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xaU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 9U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 8U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 7U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 6U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 5U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 4U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 3U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 2U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 1U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & vlSelf->__Vcellinp__lzcModule_2__in_i);
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1eU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1dU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1cU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1bU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1aU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x19U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x18U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x17U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x16U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x15U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x14U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x13U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x12U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x11U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x10U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xfU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xeU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xdU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xcU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xbU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xaU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 9U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 8U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 7U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 6U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 5U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 4U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 3U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 2U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 1U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & vlSelf->__Vcellinp__lzcModule_1__in_i);
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1eU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1dU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1cU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1bU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1aU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x19U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x18U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x17U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x16U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x15U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x14U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x13U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x12U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x11U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x10U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xfU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xeU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xdU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xcU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xbU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xaU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 9U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 8U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 7U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 6U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 5U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 4U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 3U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 2U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 1U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & vlSelf->__Vcellinp__lzcModule__in_i);
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__0\n"); );
    // Init
    CData/*0:0*/ lzcModule__DOT____Vlvbound_hefa3c05c__0;
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ lzcModule_1__DOT____Vlvbound_hefa3c05c__0;
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ lzcModule_2__DOT____Vlvbound_hefa3c05c__0;
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = 0;
    CData/*0:0*/ lzcModule_3__DOT____Vlvbound_hefa3c05c__0;
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = 0;
    // Body
    vlSelf->io_Sign = ((8U & (vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[3U] 
                              >> 0x1cU)) | ((4U & (
                                                   vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[2U] 
                                                   >> 0x1dU)) 
                                            | ((2U 
                                                & (vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[1U] 
                                                   >> 0x1eU)) 
                                               | (vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[0U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT___operand_3_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[3U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[3U]))
                                       : vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[3U]));
    vlSelf->__PVT___operand_2_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[2U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[2U]))
                                       : vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[2U]));
    vlSelf->__PVT___operand_1_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[1U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[1U]))
                                       : vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[1U]));
    vlSelf->__PVT___operand_0_T_6 = (0x7fffffffU & 
                                     ((vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[0U] 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[0U]))
                                       : vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[0U]));
    vlSelf->__PVT__isNaR = ((IData)(vlSelf->io_Sign) 
                            & (((0U == (0x7fffffffU 
                                        & vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[3U])) 
                                << 3U) | (((0U == (0x7fffffffU 
                                                   & vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[2U])) 
                                           << 2U) | 
                                          (((0U == 
                                             (0x7fffffffU 
                                              & vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[1U])) 
                                            << 1U) 
                                           | (0U == 
                                              (0x7fffffffU 
                                               & vlSymsp->TOP.PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[0U]))))));
    vlSelf->__Vcellinp__lzcModule_3__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT___operand_3_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT___operand_3_T_6));
    vlSelf->__Vcellinp__lzcModule_2__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT___operand_2_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT___operand_2_T_6));
    vlSelf->__Vcellinp__lzcModule_1__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT___operand_1_T_6 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT___operand_1_T_6));
    vlSelf->__Vcellinp__lzcModule__in_i = (0x7fffffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT___operand_0_T_6 
                                                             >> 0x1eU)))) 
                                              ^ vlSelf->__PVT___operand_0_T_6));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1eU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1dU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1cU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1bU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x1aU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x19U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x18U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x17U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x16U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x15U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x14U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x13U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x12U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x11U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0x10U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xfU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xeU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xdU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xcU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xbU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 0xaU));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 9U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 8U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 7U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 6U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 5U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 4U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 3U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 2U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                                                    >> 1U));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule_3__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & vlSelf->__Vcellinp__lzcModule_3__in_i);
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_3__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1eU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1dU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1cU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1bU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x1aU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x19U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x18U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x17U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x16U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x15U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x14U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x13U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x12U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x11U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0x10U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xfU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xeU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xdU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xcU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xbU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 0xaU));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 9U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 8U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 7U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 6U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 5U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 4U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 3U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 2U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                                                    >> 1U));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule_2__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & vlSelf->__Vcellinp__lzcModule_2__in_i);
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_2__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1eU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1dU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1cU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1bU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x1aU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x19U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x18U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x17U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x16U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x15U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x14U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x13U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x12U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x11U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0x10U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xfU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xeU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xdU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xcU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xbU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 0xaU));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 9U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 8U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 7U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 6U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 5U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 4U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 3U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 2U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                                                    >> 1U));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule_1__DOT____Vlvbound_hefa3c05c__0 = (1U 
                                                 & vlSelf->__Vcellinp__lzcModule_1__in_i);
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule_1__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1eU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1dU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1cU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1bU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x1aU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x19U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x18U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x17U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x16U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x15U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x14U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x13U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x12U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x11U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0x10U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xfU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xeU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xdU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xcU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xbU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 0xaU));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 9U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 8U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 7U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 6U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 5U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 4U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 3U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 2U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & 
                                               (vlSelf->__Vcellinp__lzcModule__in_i 
                                                >> 1U));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    lzcModule__DOT____Vlvbound_hefa3c05c__0 = (1U & vlSelf->__Vcellinp__lzcModule__in_i);
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
}
