// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Compressor4to2_24.h"
#include "VPvuTop_IntDivider.h"
#include "VPvuTop__Syms.h"

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__3(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider__3\n"); );
    // Body
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[0U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[1U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[2U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            << 0x10U) | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[3U]);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[0U]) 
            | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[0U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[1U]) 
           | (0xffff0000U & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[1U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[2U]) 
           | (0xffff0000U & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[2U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[3U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[3U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[0U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[1U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[2U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            << 0x10U) | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[3U]);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[0U]) 
            | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[0U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[1U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[1U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[2U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[2U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[3U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[3U] 
                         << 0x10U));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__3(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_1__3\n"); );
    // Body
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[0U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[1U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[2U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            << 0x10U) | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[3U]);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[0U]) 
            | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[0U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[1U]) 
           | (0xffff0000U & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[1U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[2U]) 
           | (0xffff0000U & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[2U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[3U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[3U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[0U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[1U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[2U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            << 0x10U) | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[3U]);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[0U]) 
            | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[0U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[1U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[1U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[2U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[2U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[3U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_1__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[3U] 
                         << 0x10U));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__3(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_2__3\n"); );
    // Body
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[0U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[1U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[2U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            << 0x10U) | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[3U]);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[0U]) 
            | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[0U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[1U]) 
           | (0xffff0000U & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[1U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[2U]) 
           | (0xffff0000U & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[2U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[3U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[3U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[0U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[1U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[2U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            << 0x10U) | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[3U]);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[0U]) 
            | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[0U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[1U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[1U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[2U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[2U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[3U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_2__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[3U] 
                         << 0x10U));
}

VL_INLINE_OPT void VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__3(VPvuTop_IntDivider* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_IntDivider___ico_comb__TOP__PvuTop__DOT__div__DOT__intdivider_3__3\n"); );
    // Body
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[0U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[1U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[2U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            << 0x10U) | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_sum_o[3U]);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[0U]) 
            | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[0U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[1U]) 
           | (0xffff0000U & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[1U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[2U]) 
           | (0xffff0000U & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[2U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_sum_o[3U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_B__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSelf->__PVT__boothMult__DOT__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor->__PVT__io_carry_o[3U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[0U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[1U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[1U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[2U] 
        = vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[2U];
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[3U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            << 0x10U) | vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_sum_o[3U]);
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[4U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[5U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[6U] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[7U] 
        = (((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[0U]) 
            | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_A__compressor.__PVT__io_carry_o[3U] 
               >> 0x10U)) | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[0U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[8U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[1U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[1U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[9U] 
        = ((0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[2U]) 
           | (0xffff0000U & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[2U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xaU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[0U] 
            << 0x10U) | (0xffffU & vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_sum_o[3U]));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xbU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[1U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xcU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[2U] 
                         << 0x10U));
    vlSelf->boothMult__DOT__csaTree__DOT__csa_tree_A__DOT____Vcellinp__compressor__io_operands_i[0xdU] 
        = ((vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__PvuTop__DOT__div__DOT__intdivider_3__boothMult__DOT__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__compressor.__PVT__io_carry_o[3U] 
                         << 0x10U));
}
