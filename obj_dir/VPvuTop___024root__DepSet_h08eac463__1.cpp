// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop__Syms.h"
#include "VPvuTop___024root.h"

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__34(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__34\n"); );
    // Init
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_hff83cc3e__0;
    VlWide<3>/*95:0*/ __Vtemp_hc3cb4d62__0;
    VlWide<3>/*95:0*/ __Vtemp_h651510e4__0;
    VlWide<3>/*95:0*/ __Vtemp_h8291a914__0;
    VlWide<3>/*95:0*/ __Vtemp_h21dfdab1__0;
    VlWide<3>/*95:0*/ __Vtemp_hf05e592f__0;
    VlWide<3>/*95:0*/ __Vtemp_hf99ca7ab__0;
    // Body
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hff83cc3e__0, vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i, 0x40U);
    if ((0x40U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[0U] 
            = __Vtemp_hff83cc3e__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[1U] 
            = __Vtemp_hff83cc3e__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[2U] 
            = (0xfU & __Vtemp_hff83cc3e__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[0U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[1U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[2U] 
            = (0xfU & vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hc3cb4d62__0, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2, 0x20U);
    if ((0x20U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_hc3cb4d62__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_hc3cb4d62__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[2U] 
            = (0xfU & __Vtemp_hc3cb4d62__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h651510e4__0, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h651510e4__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h651510e4__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0xfU & __Vtemp_h651510e4__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h8291a914__0, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h8291a914__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h8291a914__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0xfU & __Vtemp_h8291a914__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h21dfdab1__0, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h21dfdab1__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h21dfdab1__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0xfU & __Vtemp_h21dfdab1__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hf05e592f__0, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hf05e592f__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hf05e592f__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0xfU & __Vtemp_hf05e592f__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hf99ca7ab__0, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[0U] 
            = __Vtemp_hf99ca7ab__0[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[1U] 
            = __Vtemp_hf99ca7ab__0[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[2U] 
            = (0xfU & __Vtemp_hf99ca7ab__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[2U]);
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__35(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__35\n"); );
    // Init
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_hdf882596__0;
    VlWide<3>/*95:0*/ __Vtemp_h41662fa0__0;
    VlWide<3>/*95:0*/ __Vtemp_had88bf02__0;
    VlWide<3>/*95:0*/ __Vtemp_hc49295ea__0;
    VlWide<3>/*95:0*/ __Vtemp_hec517e6f__0;
    VlWide<3>/*95:0*/ __Vtemp_hbf59901a__0;
    VlWide<3>/*95:0*/ __Vtemp_h68bef81b__0;
    // Body
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hdf882596__0, vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i, 0x40U);
    if ((0x40U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[0U] 
            = __Vtemp_hdf882596__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[1U] 
            = __Vtemp_hdf882596__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[2U] 
            = (0xfU & __Vtemp_hdf882596__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[0U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[1U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[2U] 
            = (0xfU & vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h41662fa0__0, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2, 0x20U);
    if ((0x20U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h41662fa0__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h41662fa0__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[2U] 
            = (0xfU & __Vtemp_h41662fa0__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_had88bf02__0, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_had88bf02__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_had88bf02__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0xfU & __Vtemp_had88bf02__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hc49295ea__0, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hc49295ea__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hc49295ea__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0xfU & __Vtemp_hc49295ea__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hec517e6f__0, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hec517e6f__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hec517e6f__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0xfU & __Vtemp_hec517e6f__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hbf59901a__0, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hbf59901a__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hbf59901a__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0xfU & __Vtemp_hbf59901a__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h68bef81b__0, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[0U] 
            = __Vtemp_h68bef81b__0[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[1U] 
            = __Vtemp_h68bef81b__0[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[2U] 
            = (0xfU & __Vtemp_h68bef81b__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[2U]);
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__36(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__36\n"); );
    // Init
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_ha6edac0c__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f17b6c4__0;
    VlWide<3>/*95:0*/ __Vtemp_h7471db2a__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a5ba430__0;
    VlWide<3>/*95:0*/ __Vtemp_h3bb6e5fa__0;
    VlWide<3>/*95:0*/ __Vtemp_hdb7cf72a__0;
    VlWide<3>/*95:0*/ __Vtemp_h314fbfa9__0;
    // Body
    VL_SHIFTL_WWI(68,68,32, __Vtemp_ha6edac0c__0, vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i, 0x40U);
    if ((0x40U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[0U] 
            = __Vtemp_ha6edac0c__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[1U] 
            = __Vtemp_ha6edac0c__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[2U] 
            = (0xfU & __Vtemp_ha6edac0c__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[0U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[1U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[2U] 
            = (0xfU & vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h9f17b6c4__0, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2, 0x20U);
    if ((0x20U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h9f17b6c4__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h9f17b6c4__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[2U] 
            = (0xfU & __Vtemp_h9f17b6c4__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h7471db2a__0, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h7471db2a__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h7471db2a__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0xfU & __Vtemp_h7471db2a__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h3a5ba430__0, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h3a5ba430__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h3a5ba430__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0xfU & __Vtemp_h3a5ba430__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h3bb6e5fa__0, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h3bb6e5fa__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h3bb6e5fa__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0xfU & __Vtemp_h3bb6e5fa__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hdb7cf72a__0, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hdb7cf72a__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hdb7cf72a__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0xfU & __Vtemp_hdb7cf72a__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h314fbfa9__0, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[0U] 
            = __Vtemp_h314fbfa9__0[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[1U] 
            = __Vtemp_h314fbfa9__0[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[2U] 
            = (0xfU & __Vtemp_h314fbfa9__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[2U]);
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__37(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__37\n"); );
    // Init
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_5_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_5_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_4_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_4_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_ha516b3c7__0;
    VlWide<3>/*95:0*/ __Vtemp_h449b4357__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e79acd5__0;
    VlWide<3>/*95:0*/ __Vtemp_h86059036__0;
    VlWide<3>/*95:0*/ __Vtemp_h737b2e08__0;
    VlWide<3>/*95:0*/ __Vtemp_h199d128c__0;
    VlWide<3>/*95:0*/ __Vtemp_h8e0f096a__0;
    // Body
    VL_SHIFTL_WWI(68,68,32, __Vtemp_ha516b3c7__0, vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i, 0x40U);
    if ((0x40U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_5_T_2[0U] 
            = __Vtemp_ha516b3c7__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_5_T_2[1U] 
            = __Vtemp_ha516b3c7__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_5_T_2[2U] 
            = (0xfU & __Vtemp_ha516b3c7__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_5_T_2[0U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_5_T_2[1U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_5_T_2[2U] 
            = (0xfU & vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h449b4357__0, PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_5_T_2, 0x20U);
    if ((0x20U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h449b4357__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h449b4357__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_4_T_2[2U] 
            = (0xfU & __Vtemp_h449b4357__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_4_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_5_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_4_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_5_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_4_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_5_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h5e79acd5__0, PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h5e79acd5__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h5e79acd5__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_3_T_2[2U] 
            = (0xfU & __Vtemp_h5e79acd5__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_3_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_4_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h86059036__0, PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h86059036__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h86059036__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_2_T_2[2U] 
            = (0xfU & __Vtemp_h86059036__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_2_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h737b2e08__0, PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h737b2e08__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h737b2e08__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_1_T_2[2U] 
            = (0xfU & __Vtemp_h737b2e08__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_1_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h199d128c__0, PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h199d128c__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h199d128c__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_0_T_2[2U] 
            = (0xfU & __Vtemp_h199d128c__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_0_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h8e0f096a__0, PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[0U] 
            = __Vtemp_h8e0f096a__0[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[1U] 
            = __Vtemp_h8e0f096a__0[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[2U] 
            = (0xfU & __Vtemp_h8e0f096a__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter__DOT___temp_results_0_T_2[2U]);
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__38(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__38\n"); );
    // Init
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_5_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_5_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_4_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_4_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_he5a2a373__0;
    VlWide<3>/*95:0*/ __Vtemp_h81bc39e4__0;
    VlWide<3>/*95:0*/ __Vtemp_hde3bd3c5__0;
    VlWide<3>/*95:0*/ __Vtemp_haf364349__0;
    VlWide<3>/*95:0*/ __Vtemp_hab04ab9d__0;
    VlWide<3>/*95:0*/ __Vtemp_hbe1080b5__0;
    VlWide<3>/*95:0*/ __Vtemp_he33f5b1e__0;
    // Body
    VL_SHIFTL_WWI(68,68,32, __Vtemp_he5a2a373__0, vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i, 0x40U);
    if ((0x40U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_5_T_2[0U] 
            = __Vtemp_he5a2a373__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_5_T_2[1U] 
            = __Vtemp_he5a2a373__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_5_T_2[2U] 
            = (0xfU & __Vtemp_he5a2a373__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_5_T_2[0U] 
            = vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_5_T_2[1U] 
            = vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_5_T_2[2U] 
            = (0xfU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h81bc39e4__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_5_T_2, 0x20U);
    if ((0x20U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h81bc39e4__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h81bc39e4__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_4_T_2[2U] 
            = (0xfU & __Vtemp_h81bc39e4__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_4_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_5_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_4_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_5_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_4_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_5_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hde3bd3c5__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hde3bd3c5__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hde3bd3c5__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0xfU & __Vtemp_hde3bd3c5__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_4_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_haf364349__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_haf364349__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_haf364349__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0xfU & __Vtemp_haf364349__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hab04ab9d__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hab04ab9d__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hab04ab9d__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0xfU & __Vtemp_hab04ab9d__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hbe1080b5__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hbe1080b5__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hbe1080b5__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0xfU & __Vtemp_hbe1080b5__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_he33f5b1e__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[0U] 
            = __Vtemp_he33f5b1e__0[0U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[1U] 
            = __Vtemp_he33f5b1e__0[1U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[2U] 
            = (0xfU & __Vtemp_he33f5b1e__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_3__DOT___temp_results_0_T_2[2U]);
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__39(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__39\n"); );
    // Init
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_5_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_5_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_4_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_4_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h23c625c2__0;
    VlWide<3>/*95:0*/ __Vtemp_he3d9d628__0;
    VlWide<3>/*95:0*/ __Vtemp_hca2f7ea2__0;
    VlWide<3>/*95:0*/ __Vtemp_h546835f0__0;
    VlWide<3>/*95:0*/ __Vtemp_hcb73f962__0;
    VlWide<3>/*95:0*/ __Vtemp_h8b72c3ba__0;
    VlWide<3>/*95:0*/ __Vtemp_h75baa8a9__0;
    // Body
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h23c625c2__0, vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i, 0x40U);
    if ((0x40U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_5_T_2[0U] 
            = __Vtemp_h23c625c2__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_5_T_2[1U] 
            = __Vtemp_h23c625c2__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_5_T_2[2U] 
            = (0xfU & __Vtemp_h23c625c2__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_5_T_2[0U] 
            = vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_5_T_2[1U] 
            = vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_5_T_2[2U] 
            = (0xfU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_he3d9d628__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_5_T_2, 0x20U);
    if ((0x20U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_he3d9d628__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_he3d9d628__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_4_T_2[2U] 
            = (0xfU & __Vtemp_he3d9d628__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_4_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_5_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_4_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_5_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_4_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_5_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hca2f7ea2__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hca2f7ea2__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hca2f7ea2__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0xfU & __Vtemp_hca2f7ea2__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_4_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h546835f0__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h546835f0__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h546835f0__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0xfU & __Vtemp_h546835f0__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hcb73f962__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hcb73f962__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hcb73f962__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0xfU & __Vtemp_hcb73f962__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h8b72c3ba__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h8b72c3ba__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h8b72c3ba__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0xfU & __Vtemp_h8b72c3ba__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h75baa8a9__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[0U] 
            = __Vtemp_h75baa8a9__0[0U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[1U] 
            = __Vtemp_h75baa8a9__0[1U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[2U] 
            = (0xfU & __Vtemp_h75baa8a9__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_2__DOT___temp_results_0_T_2[2U]);
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__40(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__40\n"); );
    // Init
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_5_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_5_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_4_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_4_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_hbe882fb7__0;
    VlWide<3>/*95:0*/ __Vtemp_h602fbb4a__0;
    VlWide<3>/*95:0*/ __Vtemp_he8045272__0;
    VlWide<3>/*95:0*/ __Vtemp_hb7eca91f__0;
    VlWide<3>/*95:0*/ __Vtemp_h9e8e0c54__0;
    VlWide<3>/*95:0*/ __Vtemp_hea4f2d4a__0;
    VlWide<3>/*95:0*/ __Vtemp_hc85e0cac__0;
    // Body
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hbe882fb7__0, vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i, 0x40U);
    if ((0x40U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_5_T_2[0U] 
            = __Vtemp_hbe882fb7__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_5_T_2[1U] 
            = __Vtemp_hbe882fb7__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_5_T_2[2U] 
            = (0xfU & __Vtemp_hbe882fb7__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_5_T_2[0U] 
            = vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_5_T_2[1U] 
            = vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_5_T_2[2U] 
            = (0xfU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h602fbb4a__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_5_T_2, 0x20U);
    if ((0x20U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h602fbb4a__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h602fbb4a__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_4_T_2[2U] 
            = (0xfU & __Vtemp_h602fbb4a__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_4_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_5_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_4_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_5_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_4_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_5_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_he8045272__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_he8045272__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_he8045272__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0xfU & __Vtemp_he8045272__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_4_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hb7eca91f__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hb7eca91f__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hb7eca91f__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0xfU & __Vtemp_hb7eca91f__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h9e8e0c54__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h9e8e0c54__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h9e8e0c54__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0xfU & __Vtemp_h9e8e0c54__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hea4f2d4a__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hea4f2d4a__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hea4f2d4a__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0xfU & __Vtemp_hea4f2d4a__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hc85e0cac__0, PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[0U] 
            = __Vtemp_hc85e0cac__0[0U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[1U] 
            = __Vtemp_hc85e0cac__0[1U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[2U] 
            = (0xfU & __Vtemp_hc85e0cac__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter_1__DOT___temp_results_0_T_2[2U]);
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__41(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__41\n"); );
    // Init
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_5_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_5_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h1b05fee0__0;
    VlWide<3>/*95:0*/ __Vtemp_h790abc8d__0;
    VlWide<3>/*95:0*/ __Vtemp_h158d05e5__0;
    VlWide<3>/*95:0*/ __Vtemp_h2c0d81e5__0;
    VlWide<3>/*95:0*/ __Vtemp_h1c39b428__0;
    VlWide<3>/*95:0*/ __Vtemp_hec636d97__0;
    VlWide<3>/*95:0*/ __Vtemp_h1247e5df__0;
    // Body
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h1b05fee0__0, vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i, 0x40U);
    if ((0x40U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_5_T_2[0U] 
            = __Vtemp_h1b05fee0__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_5_T_2[1U] 
            = __Vtemp_h1b05fee0__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_5_T_2[2U] 
            = (0xfU & __Vtemp_h1b05fee0__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_5_T_2[0U] 
            = vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_5_T_2[1U] 
            = vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_5_T_2[2U] 
            = (0xfU & vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h790abc8d__0, PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_5_T_2, 0x20U);
    if ((0x20U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h790abc8d__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h790abc8d__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2[2U] 
            = (0xfU & __Vtemp_h790abc8d__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_5_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_5_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_5_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h158d05e5__0, PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h158d05e5__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h158d05e5__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2[2U] 
            = (0xfU & __Vtemp_h158d05e5__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_4_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h2c0d81e5__0, PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h2c0d81e5__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h2c0d81e5__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2[2U] 
            = (0xfU & __Vtemp_h2c0d81e5__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h1c39b428__0, PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h1c39b428__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h1c39b428__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2[2U] 
            = (0xfU & __Vtemp_h1c39b428__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hec636d97__0, PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hec636d97__0[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hec636d97__0[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2[2U] 
            = (0xfU & __Vtemp_hec636d97__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h1247e5df__0, PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[0U] 
            = __Vtemp_h1247e5df__0[0U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[1U] 
            = __Vtemp_h1247e5df__0[1U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[2U] 
            = (0xfU & __Vtemp_h1247e5df__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[0U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[1U] 
            = PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_mul__DOT__shifter__DOT___temp_results_0_T_2[2U]);
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__43(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__43\n"); );
    // Body
    vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T 
        = (0xffU & (((1U == (IData)(vlSelf->io_op))
                      ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                          ? ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1) 
                             + (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_he2d6c4d8__0))
                          : 0U) : ((2U == (IData)(vlSelf->io_op))
                                    ? ((1U & ((~ (vlSelf->PvuTop__DOT__add__DOT__sum_3 
                                                  >> 0x1eU)) 
                                              | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)))
                                        ? (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1)
                                        : ((IData)(1U) 
                                           + (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1)))
                                    : ((3U == (IData)(vlSelf->io_op))
                                        ? (IData)(vlSelf->__VdfgTmp_h544e4e80__0)
                                        : ((4U == (IData)(vlSelf->io_op))
                                            ? (IData)(vlSelf->__VdfgTmp_h55cd16c8__0)
                                            : ((IData)(vlSelf->PvuTop__DOT___GEN_63)
                                                ? 0U
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? (IData)(vlSelf->__VdfgTmp_h87dd8442__0)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->io_op))
                                                     ? (IData)(vlSelf->__VdfgTmp_h146ea22a__0)
                                                     : 0U))))))) 
                    + ((5U == (IData)(vlSelf->io_op))
                        ? 0U : ((1U == (IData)(vlSelf->io_op))
                                 ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                     ? ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                         ? ((0U == 
                                             (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                             ? ((0xe0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((((IData)(1U) 
                                                                     - 
                                                                     vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                    - (IData)(1U)) 
                                                                   >> 4U)))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (((IData)(1U) 
                                                       - 
                                                       vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      - (IData)(1U))))
                                             : ((0xe0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((- 
                                                                    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                   >> 4U)))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (- 
                                                      vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                         : 0U) : 0U)
                                 : ((2U == (IData)(vlSelf->io_op))
                                     ? ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                         ? ((0U == 
                                             (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                             ? ((0xe0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((((IData)(1U) 
                                                                     - 
                                                                     vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                    - (IData)(1U)) 
                                                                   >> 4U)))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (((IData)(1U) 
                                                       - 
                                                       vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      - (IData)(1U))))
                                             : ((0xe0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((- 
                                                                    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                   >> 4U)))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (- 
                                                      vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                         : 0U) : ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  ((1U 
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
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((1U 
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
                                                     : 0U)
                                                    : 0U)))))));
    vlSelf->PvuTop__DOT___GEN_99 = ((IData)(vlSelf->PvuTop__DOT___GEN_94)
                                     ? 0U : (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T));
    if (vlSelf->__VdfgTmp_he5c1ee02__0) {
        vlSelf->__VdfgTmp_h20089437__0 = 0U;
        vlSelf->__VdfgTmp_h73f6f5eb__0 = 0U;
        vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1cf3a611__0 = 0U;
        vlSelf->__VdfgTmp_h9415c337__0 = 0x1fU;
    } else {
        vlSelf->__VdfgTmp_h20089437__0 = vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T;
        vlSelf->__VdfgTmp_h73f6f5eb__0 = (3U & (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T));
        vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1cf3a611__0 
            = (0x1fU & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T) 
                        >> 2U));
        vlSelf->__VdfgTmp_h9415c337__0 = (0x1fU & (~ 
                                                   ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T) 
                                                    >> 2U)));
    }
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0 
        = ((~ (IData)(vlSelf->__VdfgTmp_he5c1ee02__0)) 
           & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T) 
              >> 7U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0x1fU & (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
                      ? ((IData)(2U) + (IData)(vlSelf->__VdfgTmp_h9415c337__0))
                      : ((IData)(2U) + (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1cf3a611__0))) 
                    - (IData)(2U)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__45(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__45\n"); );
    // Body
    vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T 
        = (0xffU & (((1U == (IData)(vlSelf->io_op))
                      ? ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                          ? ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_2_T_1) 
                             + (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h4e8a04cd__0))
                          : 0U) : ((2U == (IData)(vlSelf->io_op))
                                    ? ((1U & ((~ (vlSelf->PvuTop__DOT__add__DOT__sum_2 
                                                  >> 0x1eU)) 
                                              | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)))
                                        ? (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_2_T_1)
                                        : ((IData)(1U) 
                                           + (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_2_T_1)))
                                    : ((3U == (IData)(vlSelf->io_op))
                                        ? (IData)(vlSelf->__VdfgTmp_h3327fc28__0)
                                        : ((4U == (IData)(vlSelf->io_op))
                                            ? (IData)(vlSelf->__VdfgTmp_h943bd71d__0)
                                            : ((IData)(vlSelf->PvuTop__DOT___GEN_63)
                                                ? 0U
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? (IData)(vlSelf->__VdfgTmp_h74bddf7d__0)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->io_op))
                                                     ? (IData)(vlSelf->__VdfgTmp_h637fac64__0)
                                                     : 0U))))))) 
                    + ((5U == (IData)(vlSelf->io_op))
                        ? 0U : ((1U == (IData)(vlSelf->io_op))
                                 ? ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                     ? ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                         ? ((0U == 
                                             (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                             ? ((0xe0U 
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
                                             : ((0xe0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((- 
                                                                    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                   >> 4U)))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (- 
                                                      vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                         : 0U) : 0U)
                                 : ((2U == (IData)(vlSelf->io_op))
                                     ? ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                         ? ((0U == 
                                             (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                             ? ((0xe0U 
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
                                             : ((0xe0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((- 
                                                                    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                   >> 4U)))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (- 
                                                      vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                         : 0U) : ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  ((1U 
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
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((1U 
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
                                                    : 0U)))))));
    vlSelf->PvuTop__DOT___GEN_98 = ((IData)(vlSelf->PvuTop__DOT___GEN_94)
                                     ? 0U : (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T));
    if (vlSelf->__VdfgTmp_h58084909__0) {
        vlSelf->__VdfgTmp_h59018146__0 = 0U;
        vlSelf->__VdfgTmp_haf2e1e74__0 = 0U;
        vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce83255__0 = 0U;
        vlSelf->__VdfgTmp_h5f274f7a__0 = 0x1fU;
    } else {
        vlSelf->__VdfgTmp_h59018146__0 = vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T;
        vlSelf->__VdfgTmp_haf2e1e74__0 = (3U & (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T));
        vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce83255__0 
            = (0x1fU & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T) 
                        >> 2U));
        vlSelf->__VdfgTmp_h5f274f7a__0 = (0x1fU & (~ 
                                                   ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T) 
                                                    >> 2U)));
    }
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0 
        = ((~ (IData)(vlSelf->__VdfgTmp_h58084909__0)) 
           & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T) 
              >> 7U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0x1fU & (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
                      ? ((IData)(2U) + (IData)(vlSelf->__VdfgTmp_h5f274f7a__0))
                      : ((IData)(2U) + (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce83255__0))) 
                    - (IData)(2U)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__47(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__47\n"); );
    // Body
    vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T 
        = (0xffU & (((1U == (IData)(vlSelf->io_op))
                      ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                          ? ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_1_T_1) 
                             + (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h7d9bb2b0__0))
                          : 0U) : ((2U == (IData)(vlSelf->io_op))
                                    ? ((1U & ((~ (vlSelf->PvuTop__DOT__add__DOT__sum_1 
                                                  >> 0x1eU)) 
                                              | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)))
                                        ? (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_1_T_1)
                                        : ((IData)(1U) 
                                           + (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_1_T_1)))
                                    : ((3U == (IData)(vlSelf->io_op))
                                        ? (IData)(vlSelf->__VdfgTmp_hf9553680__0)
                                        : ((4U == (IData)(vlSelf->io_op))
                                            ? (IData)(vlSelf->__VdfgTmp_h7d90114e__0)
                                            : ((IData)(vlSelf->PvuTop__DOT___GEN_63)
                                                ? 0U
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? (IData)(vlSelf->__VdfgTmp_h858cd4b3__0)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->io_op))
                                                     ? (IData)(vlSelf->__VdfgTmp_h49d63918__0)
                                                     : 0U))))))) 
                    + ((5U == (IData)(vlSelf->io_op))
                        ? 0U : ((1U == (IData)(vlSelf->io_op))
                                 ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                     ? ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                         ? ((0U == 
                                             (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                             ? ((0xe0U 
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
                                             : ((0xe0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((- 
                                                                    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                   >> 4U)))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (- 
                                                      vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                         : 0U) : 0U)
                                 : ((2U == (IData)(vlSelf->io_op))
                                     ? ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                         ? ((0U == 
                                             (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                             ? ((0xe0U 
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
                                             : ((0xe0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((- 
                                                                    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                   >> 4U)))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (- 
                                                      vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                         : 0U) : ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  ((1U 
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
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((1U 
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
                                                    : 0U)))))));
    vlSelf->PvuTop__DOT___GEN_97 = ((IData)(vlSelf->PvuTop__DOT___GEN_94)
                                     ? 0U : (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T));
    if (vlSelf->__VdfgTmp_hb8dc97df__0) {
        vlSelf->__VdfgTmp_h2c94c8d9__0 = 0U;
        vlSelf->__VdfgTmp_ha0da9dfc__0 = 0U;
        vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c495847__0 = 0U;
        vlSelf->__VdfgTmp_h5e98c5db__0 = 0x1fU;
    } else {
        vlSelf->__VdfgTmp_h2c94c8d9__0 = vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T;
        vlSelf->__VdfgTmp_ha0da9dfc__0 = (3U & (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T));
        vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c495847__0 
            = (0x1fU & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T) 
                        >> 2U));
        vlSelf->__VdfgTmp_h5e98c5db__0 = (0x1fU & (~ 
                                                   ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T) 
                                                    >> 2U)));
    }
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0 
        = ((~ (IData)(vlSelf->__VdfgTmp_hb8dc97df__0)) 
           & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T) 
              >> 7U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0x1fU & (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0)
                      ? ((IData)(2U) + (IData)(vlSelf->__VdfgTmp_h5e98c5db__0))
                      : ((IData)(2U) + (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c495847__0))) 
                    - (IData)(2U)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__49(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__49\n"); );
    // Body
    vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T 
        = (0xffU & (((1U == (IData)(vlSelf->io_op))
                      ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                          ? ((IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_0_T_1) 
                             + (IData)(vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h64b1905c__0))
                          : 0U) : ((2U == (IData)(vlSelf->io_op))
                                    ? ((1U & ((~ (vlSelf->PvuTop__DOT__add__DOT__sum 
                                                  >> 0x1eU)) 
                                              | (IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)))
                                        ? (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_0_T_1)
                                        : ((IData)(1U) 
                                           + (IData)(vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_0_T_1)))
                                    : ((3U == (IData)(vlSelf->io_op))
                                        ? (IData)(vlSelf->__VdfgTmp_h341b6622__0)
                                        : ((4U == (IData)(vlSelf->io_op))
                                            ? (IData)(vlSelf->__VdfgTmp_h208688f8__0)
                                            : ((IData)(vlSelf->PvuTop__DOT___GEN_63)
                                                ? 0U
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? (IData)(vlSelf->__VdfgTmp_hfeb2b7ac__0)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->io_op))
                                                     ? (IData)(vlSelf->__VdfgTmp_h0c48c69a__0)
                                                     : 0U))))))) 
                    + ((5U == (IData)(vlSelf->io_op))
                        ? 0U : ((1U == (IData)(vlSelf->io_op))
                                 ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                     ? ((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                         ? ((0U == 
                                             (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                             ? ((0xe0U 
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
                                             : ((0xe0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((- 
                                                                    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                   >> 4U)))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (- 
                                                      vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                         : 0U) : 0U)
                                 : ((2U == (IData)(vlSelf->io_op))
                                     ? ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                         ? ((0U == 
                                             (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                             ? ((0xe0U 
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
                                             : ((0xe0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((- 
                                                                    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                   >> 4U)))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (- 
                                                      vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                         : 0U) : ((3U 
                                                   == (IData)(vlSelf->io_op))
                                                   ? 
                                                  ((1U 
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
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_op))
                                                    ? 
                                                   ((1U 
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
                                                     : 0U)
                                                    : 0U)))))));
    vlSelf->PvuTop__DOT___GEN_95 = ((IData)(vlSelf->PvuTop__DOT___GEN_94)
                                     ? 0U : (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T));
    if (vlSelf->__VdfgTmp_h49ee0820__0) {
        vlSelf->__VdfgTmp_h0a27806e__0 = 0U;
        vlSelf->__VdfgTmp_h53a64afd__0 = 0U;
        vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c28779a__0 = 0U;
        vlSelf->__VdfgTmp_hb297405c__0 = 0x1fU;
    } else {
        vlSelf->__VdfgTmp_h0a27806e__0 = vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T;
        vlSelf->__VdfgTmp_h53a64afd__0 = (3U & (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T));
        vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c28779a__0 
            = (0x1fU & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T) 
                        >> 2U));
        vlSelf->__VdfgTmp_hb297405c__0 = (0x1fU & (~ 
                                                   ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T) 
                                                    >> 2U)));
    }
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0 
        = ((~ (IData)(vlSelf->__VdfgTmp_h49ee0820__0)) 
           & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T) 
              >> 7U));
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + (IData)(vlSelf->__VdfgTmp_hb297405c__0))
                      : ((IData)(2U) + (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c28779a__0))) 
                    - (IData)(2U)));
}

void VPvuTop___024root___ico_sequent__TOP__0(VPvuTop___024root* vlSelf);
void VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__0(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__decode2__0(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__decode1__0(VPvuTop_PositDecode* vlSelf);
void VPvuTop___024root___ico_sequent__TOP__1(VPvuTop___024root* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__5(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__1(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__7(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__3(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__9(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__5(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__11(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__7(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__0(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__1(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__2(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__3(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__4(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__6(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__8(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__10(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__12(VPvuTop_PositDecode* vlSelf);
void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__13(VPvuTop_PositDecode* vlSelf);
void VPvuTop___024root___ico_comb__TOP__0(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__1(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__2(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__3(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__4(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__5(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__6(VPvuTop___024root* vlSelf);
void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0(VPvuTop_Radix4BoothMultiplier* vlSelf);
void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0(VPvuTop_Radix4BoothMultiplier* vlSelf);
void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0(VPvuTop_Radix4BoothMultiplier* vlSelf);
void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0(VPvuTop_Radix4BoothMultiplier* vlSelf);
void VPvuTop___024root___ico_comb__TOP__7(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__8(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__9(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__10(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__11(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__12(VPvuTop___024root* vlSelf);
void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__1(VPvuTop_Radix4BoothMultiplier* vlSelf);
void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__1(VPvuTop_Radix4BoothMultiplier* vlSelf);
void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__1(VPvuTop_Radix4BoothMultiplier* vlSelf);
void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__1(VPvuTop_Radix4BoothMultiplier* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__2(VPvuTop_Radix4BoothMultiplier* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__3(VPvuTop_Radix4BoothMultiplier* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor__0(VPvuTop_Compressor4to2* vlSelf);
void VPvuTop___024root___ico_comb__TOP__13(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__14(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__15(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__16(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__17(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__18(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__19(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__20(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__21(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__22(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__23(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__24(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__25(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__26(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__27(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__28(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__29(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__30(VPvuTop___024root* vlSelf);
void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__0(VPvuTop_LZC__M1_W44* vlSelf);
void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__0(VPvuTop_LZC__M1_W44* vlSelf);
void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__0(VPvuTop_LZC__M1_W44* vlSelf);
void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__0(VPvuTop_LZC__M1_W44* vlSelf);
void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__0(VPvuTop_LZC__M1_W44* vlSelf);
void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__0(VPvuTop_LZC__M1_W44* vlSelf);
void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__0(VPvuTop_LZC__M1_W44* vlSelf);
void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__0(VPvuTop_LZC__M1_W44* vlSelf);
void VPvuTop___024root___ico_comb__TOP__31(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__32(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__33(VPvuTop___024root* vlSelf);
void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__1(VPvuTop_LZC__M1_W44* vlSelf);
void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__2(VPvuTop_LZC__M1_W44* vlSelf);
void VPvuTop___024root___ico_comb__TOP__42(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__44(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__46(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__48(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__50(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__51(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__52(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__53(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__54(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__55(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__56(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__57(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__58(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__59(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__60(VPvuTop___024root* vlSelf);
void VPvuTop___024root___ico_comb__TOP__61(VPvuTop___024root* vlSelf);

void VPvuTop___024root___eval_ico(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VPvuTop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__0((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder));
        VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__0((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder));
        VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__0((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder));
        VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__0((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder));
        VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__0((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder));
        VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__decode2__0((&vlSymsp->TOP__PvuTop__DOT__decode2));
        VPvuTop_PositDecode___ico_sequent__TOP__PvuTop__DOT__decode1__0((&vlSymsp->TOP__PvuTop__DOT__decode1));
        VPvuTop___024root___ico_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x67U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__5((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x66U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__1((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x65U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__7((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x64U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__3((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x63U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__9((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x62U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__5((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x61U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__11((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x60U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__7((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x47U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__5((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x46U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__1((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x45U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__7((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x44U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__3((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x43U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__9((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x42U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__5((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x41U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__11((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x40U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__7((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x4fU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__5((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x4eU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__1((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x4dU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__7((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x4cU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__3((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x4bU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__9((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x4aU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__5((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x49U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__11((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x48U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__7((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x57U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__5((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x56U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__1((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x55U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__7((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x54U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__3((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x53U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__9((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x52U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__5((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x51U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__11((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x50U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__7((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x5fU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__5((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x5eU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__1((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x5dU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__7((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x5cU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__3((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x5bU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__9((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x5aU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__5((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x59U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__11((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x58U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__7((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__0((&vlSymsp->TOP__PvuTop__DOT__decode2));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x3cU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__1((&vlSymsp->TOP__PvuTop__DOT__decode2));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x39U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__2((&vlSymsp->TOP__PvuTop__DOT__decode2));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x36U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__3((&vlSymsp->TOP__PvuTop__DOT__decode2));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x3dU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__4((&vlSymsp->TOP__PvuTop__DOT__decode2));
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x3eU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__5((&vlSymsp->TOP__PvuTop__DOT__decode2));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x3aU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__6((&vlSymsp->TOP__PvuTop__DOT__decode2));
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x3bU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__7((&vlSymsp->TOP__PvuTop__DOT__decode2));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x37U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__8((&vlSymsp->TOP__PvuTop__DOT__decode2));
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x38U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__9((&vlSymsp->TOP__PvuTop__DOT__decode2));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x33U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__10((&vlSymsp->TOP__PvuTop__DOT__decode2));
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x34U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__11((&vlSymsp->TOP__PvuTop__DOT__decode2));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x32U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__0((&vlSymsp->TOP__PvuTop__DOT__decode1));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x2fU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__1((&vlSymsp->TOP__PvuTop__DOT__decode1));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x2cU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__2((&vlSymsp->TOP__PvuTop__DOT__decode1));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x29U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__3((&vlSymsp->TOP__PvuTop__DOT__decode1));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x30U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__4((&vlSymsp->TOP__PvuTop__DOT__decode1));
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x31U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__5((&vlSymsp->TOP__PvuTop__DOT__decode1));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x2dU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__6((&vlSymsp->TOP__PvuTop__DOT__decode1));
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x2eU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__7((&vlSymsp->TOP__PvuTop__DOT__decode1));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x2aU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__8((&vlSymsp->TOP__PvuTop__DOT__decode1));
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x2bU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__9((&vlSymsp->TOP__PvuTop__DOT__decode1));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x26U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__10((&vlSymsp->TOP__PvuTop__DOT__decode1));
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x27U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__11((&vlSymsp->TOP__PvuTop__DOT__decode1));
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x60U)) 
               | vlSelf->__VicoTriggered.at(0x61U)) 
              | vlSelf->__VicoTriggered.at(0x62U)) 
             | vlSelf->__VicoTriggered.at(0x63U)) | vlSelf->__VicoTriggered.at(0x64U)) 
           | vlSelf->__VicoTriggered.at(0x65U)) | vlSelf->__VicoTriggered.at(0x66U)) 
         | vlSelf->__VicoTriggered.at(0x67U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__12((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    }
    if (((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x60U)) 
           | vlSelf->__VicoTriggered.at(0x62U)) | vlSelf->__VicoTriggered.at(0x64U)) 
         | vlSelf->__VicoTriggered.at(0x66U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__13((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        VPvuTop___024root___ico_comb__TOP__0(vlSelf);
    }
    if (((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x40U)) 
           | vlSelf->__VicoTriggered.at(0x42U)) | vlSelf->__VicoTriggered.at(0x44U)) 
         | vlSelf->__VicoTriggered.at(0x46U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__13((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder));
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x40U)) 
               | vlSelf->__VicoTriggered.at(0x41U)) 
              | vlSelf->__VicoTriggered.at(0x42U)) 
             | vlSelf->__VicoTriggered.at(0x43U)) | vlSelf->__VicoTriggered.at(0x44U)) 
           | vlSelf->__VicoTriggered.at(0x45U)) | vlSelf->__VicoTriggered.at(0x46U)) 
         | vlSelf->__VicoTriggered.at(0x47U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__12((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        VPvuTop___024root___ico_comb__TOP__1(vlSelf);
    }
    if (((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x48U)) 
           | vlSelf->__VicoTriggered.at(0x4aU)) | vlSelf->__VicoTriggered.at(0x4cU)) 
         | vlSelf->__VicoTriggered.at(0x4eU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__13((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder));
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x48U)) 
               | vlSelf->__VicoTriggered.at(0x49U)) 
              | vlSelf->__VicoTriggered.at(0x4aU)) 
             | vlSelf->__VicoTriggered.at(0x4bU)) | vlSelf->__VicoTriggered.at(0x4cU)) 
           | vlSelf->__VicoTriggered.at(0x4dU)) | vlSelf->__VicoTriggered.at(0x4eU)) 
         | vlSelf->__VicoTriggered.at(0x4fU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__12((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        VPvuTop___024root___ico_comb__TOP__2(vlSelf);
    }
    if (((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x50U)) 
           | vlSelf->__VicoTriggered.at(0x52U)) | vlSelf->__VicoTriggered.at(0x54U)) 
         | vlSelf->__VicoTriggered.at(0x56U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__13((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder));
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x50U)) 
               | vlSelf->__VicoTriggered.at(0x51U)) 
              | vlSelf->__VicoTriggered.at(0x52U)) 
             | vlSelf->__VicoTriggered.at(0x53U)) | vlSelf->__VicoTriggered.at(0x54U)) 
           | vlSelf->__VicoTriggered.at(0x55U)) | vlSelf->__VicoTriggered.at(0x56U)) 
         | vlSelf->__VicoTriggered.at(0x57U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__12((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        VPvuTop___024root___ico_comb__TOP__3(vlSelf);
    }
    if (((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x58U)) 
           | vlSelf->__VicoTriggered.at(0x5aU)) | vlSelf->__VicoTriggered.at(0x5cU)) 
         | vlSelf->__VicoTriggered.at(0x5eU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__13((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder));
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x58U)) 
               | vlSelf->__VicoTriggered.at(0x59U)) 
              | vlSelf->__VicoTriggered.at(0x5aU)) 
             | vlSelf->__VicoTriggered.at(0x5bU)) | vlSelf->__VicoTriggered.at(0x5cU)) 
           | vlSelf->__VicoTriggered.at(0x5dU)) | vlSelf->__VicoTriggered.at(0x5eU)) 
         | vlSelf->__VicoTriggered.at(0x5fU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__12((&vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder));
        vlSelf->__Vm_traceActivity[0x23U] = 1U;
        VPvuTop___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x35U)) 
            | vlSelf->__VicoTriggered.at(0x36U)) | vlSelf->__VicoTriggered.at(0x39U)) 
          | vlSelf->__VicoTriggered.at(0x3cU)) | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__12((&vlSymsp->TOP__PvuTop__DOT__decode2));
        VPvuTop___024root___ico_comb__TOP__5(vlSelf);
    }
    if (((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__13((&vlSymsp->TOP__PvuTop__DOT__decode2));
        vlSelf->__Vm_traceActivity[0x24U] = 1U;
        VPvuTop___024root___ico_comb__TOP__6(vlSelf);
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier));
    }
    if ((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x28U)) 
            | vlSelf->__VicoTriggered.at(0x29U)) | vlSelf->__VicoTriggered.at(0x2cU)) 
          | vlSelf->__VicoTriggered.at(0x2fU)) | vlSelf->__VicoTriggered.at(0x32U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__12((&vlSymsp->TOP__PvuTop__DOT__decode1));
        vlSelf->__Vm_traceActivity[0x25U] = 1U;
        VPvuTop___024root___ico_comb__TOP__7(vlSelf);
    }
    if (((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x29U)) 
           | vlSelf->__VicoTriggered.at(0x2cU)) | vlSelf->__VicoTriggered.at(0x2fU)) 
         | vlSelf->__VicoTriggered.at(0x32U))) {
        VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__13((&vlSymsp->TOP__PvuTop__DOT__decode1));
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
        VPvuTop___024root___ico_comb__TOP__8(vlSelf);
    }
    if (((((((((((((((((((((((((((((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                                                | vlSelf->__VicoTriggered.at(0x40U)) 
                                               | vlSelf->__VicoTriggered.at(0x41U)) 
                                              | vlSelf->__VicoTriggered.at(0x42U)) 
                                             | vlSelf->__VicoTriggered.at(0x43U)) 
                                            | vlSelf->__VicoTriggered.at(0x44U)) 
                                           | vlSelf->__VicoTriggered.at(0x45U)) 
                                          | vlSelf->__VicoTriggered.at(0x46U)) 
                                         | vlSelf->__VicoTriggered.at(0x47U)) 
                                        | vlSelf->__VicoTriggered.at(0x48U)) 
                                       | vlSelf->__VicoTriggered.at(0x49U)) 
                                      | vlSelf->__VicoTriggered.at(0x4aU)) 
                                     | vlSelf->__VicoTriggered.at(0x4bU)) 
                                    | vlSelf->__VicoTriggered.at(0x4cU)) 
                                   | vlSelf->__VicoTriggered.at(0x4dU)) 
                                  | vlSelf->__VicoTriggered.at(0x4eU)) 
                                 | vlSelf->__VicoTriggered.at(0x4fU)) 
                                | vlSelf->__VicoTriggered.at(0x50U)) 
                               | vlSelf->__VicoTriggered.at(0x51U)) 
                              | vlSelf->__VicoTriggered.at(0x52U)) 
                             | vlSelf->__VicoTriggered.at(0x53U)) 
                            | vlSelf->__VicoTriggered.at(0x54U)) 
                           | vlSelf->__VicoTriggered.at(0x55U)) 
                          | vlSelf->__VicoTriggered.at(0x56U)) 
                         | vlSelf->__VicoTriggered.at(0x57U)) 
                        | vlSelf->__VicoTriggered.at(0x58U)) 
                       | vlSelf->__VicoTriggered.at(0x59U)) 
                      | vlSelf->__VicoTriggered.at(0x5aU)) 
                     | vlSelf->__VicoTriggered.at(0x5bU)) 
                    | vlSelf->__VicoTriggered.at(0x5cU)) 
                   | vlSelf->__VicoTriggered.at(0x5dU)) 
                  | vlSelf->__VicoTriggered.at(0x5eU)) 
                 | vlSelf->__VicoTriggered.at(0x5fU)) 
                | vlSelf->__VicoTriggered.at(0x60U)) 
               | vlSelf->__VicoTriggered.at(0x61U)) 
              | vlSelf->__VicoTriggered.at(0x62U)) 
             | vlSelf->__VicoTriggered.at(0x63U)) | vlSelf->__VicoTriggered.at(0x64U)) 
           | vlSelf->__VicoTriggered.at(0x65U)) | vlSelf->__VicoTriggered.at(0x66U)) 
         | vlSelf->__VicoTriggered.at(0x67U))) {
        VPvuTop___024root___ico_comb__TOP__9(vlSelf);
    }
    if (((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0x27U] = 1U;
    }
    if ((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x28U)) 
            | vlSelf->__VicoTriggered.at(0x29U)) | vlSelf->__VicoTriggered.at(0x2cU)) 
          | vlSelf->__VicoTriggered.at(0x2fU)) | vlSelf->__VicoTriggered.at(0x32U))) {
        VPvuTop___024root___ico_comb__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[0x28U] = 1U;
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x29U)) 
               | vlSelf->__VicoTriggered.at(0x2cU)) 
              | vlSelf->__VicoTriggered.at(0x2fU)) 
             | vlSelf->__VicoTriggered.at(0x32U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0x29U] = 1U;
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__1((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__1((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__1((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__1((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__1((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__1((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__1((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__1((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__2((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__2((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__2((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__2((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__2((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__2((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__2((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__2((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_B__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__csa_tree_A__DOT__compressor));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__3((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__3((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__3((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__3((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__3((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__3((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__3((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier));
        VPvuTop_Radix4BoothMultiplier___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__3((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor));
        VPvuTop_Compressor4to2___ico_comb__TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor__0((&vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor));
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xdU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__14(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xcU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0x2aU] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__16(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(4U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0x2bU] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xfU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__18(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xeU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__19(vlSelf);
        vlSelf->__Vm_traceActivity[0x2cU] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__20(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(6U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0x2dU] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x11U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__22(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x10U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__23(vlSelf);
        vlSelf->__Vm_traceActivity[0x2eU] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(9U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__24(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(8U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__25(vlSelf);
        vlSelf->__Vm_traceActivity[0x2fU] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x13U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__26(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x12U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__27(vlSelf);
        vlSelf->__Vm_traceActivity[0x30U] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xbU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__28(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0xaU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__29(vlSelf);
        vlSelf->__Vm_traceActivity[0x31U] = 1U;
    }
    if (((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__30(vlSelf);
        vlSelf->__Vm_traceActivity[0x32U] = 1U;
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3__0((&vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3));
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2__0((&vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2));
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1__0((&vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1));
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod__0((&vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod));
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3__0((&vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3));
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2__0((&vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2));
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1__0((&vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1));
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__0((&vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod));
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__31(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[0x33U] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(2U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__33(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x25U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__1((&vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3));
        vlSelf->__Vm_traceActivity[0x34U] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x24U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__2((&vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3));
        vlSelf->__Vm_traceActivity[0x35U] = 1U;
        VPvuTop___024root___ico_comb__TOP__34(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x21U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__1((&vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2));
        vlSelf->__Vm_traceActivity[0x36U] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x20U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__2((&vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2));
        vlSelf->__Vm_traceActivity[0x37U] = 1U;
        VPvuTop___024root___ico_comb__TOP__35(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x1dU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__1((&vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1));
        vlSelf->__Vm_traceActivity[0x38U] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x1cU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__2((&vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1));
        vlSelf->__Vm_traceActivity[0x39U] = 1U;
        VPvuTop___024root___ico_comb__TOP__36(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x19U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__1((&vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod));
        vlSelf->__Vm_traceActivity[0x3aU] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x18U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__2((&vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod));
        vlSelf->__Vm_traceActivity[0x3bU] = 1U;
        VPvuTop___024root___ico_comb__TOP__37(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x23U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__1((&vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3));
        vlSelf->__Vm_traceActivity[0x3cU] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x22U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__2((&vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3));
        vlSelf->__Vm_traceActivity[0x3dU] = 1U;
        VPvuTop___024root___ico_comb__TOP__38(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x1fU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__1((&vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2));
        vlSelf->__Vm_traceActivity[0x3eU] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x1eU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__2((&vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2));
        vlSelf->__Vm_traceActivity[0x3fU] = 1U;
        VPvuTop___024root___ico_comb__TOP__39(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x1bU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__1((&vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1));
        vlSelf->__Vm_traceActivity[0x40U] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x1aU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__2((&vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1));
        vlSelf->__Vm_traceActivity[0x41U] = 1U;
        VPvuTop___024root___ico_comb__TOP__40(vlSelf);
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x17U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__1((&vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod));
        vlSelf->__Vm_traceActivity[0x42U] = 1U;
    }
    if ((((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(0x16U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__2((&vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod));
        vlSelf->__Vm_traceActivity[0x43U] = 1U;
        VPvuTop___024root___ico_comb__TOP__41(vlSelf);
    }
    if (((((((((((((vlSelf->__VicoTriggered.at(0U) 
                    | vlSelf->__VicoTriggered.at(1U)) 
                   | vlSelf->__VicoTriggered.at(3U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__42(vlSelf);
        vlSelf->__Vm_traceActivity[0x44U] = 1U;
    }
    if (((((((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                          | vlSelf->__VicoTriggered.at(0xaU)) 
                         | vlSelf->__VicoTriggered.at(0xbU)) 
                        | vlSelf->__VicoTriggered.at(0x12U)) 
                       | vlSelf->__VicoTriggered.at(0x13U)) 
                      | vlSelf->__VicoTriggered.at(0x22U)) 
                     | vlSelf->__VicoTriggered.at(0x23U)) 
                    | vlSelf->__VicoTriggered.at(0x24U)) 
                   | vlSelf->__VicoTriggered.at(0x25U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__43(vlSelf);
    }
    if (((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                      | vlSelf->__VicoTriggered.at(0xaU)) 
                     | vlSelf->__VicoTriggered.at(0x12U)) 
                    | vlSelf->__VicoTriggered.at(0x22U)) 
                   | vlSelf->__VicoTriggered.at(0x24U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__44(vlSelf);
    }
    if (((((((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                          | vlSelf->__VicoTriggered.at(8U)) 
                         | vlSelf->__VicoTriggered.at(9U)) 
                        | vlSelf->__VicoTriggered.at(0x10U)) 
                       | vlSelf->__VicoTriggered.at(0x11U)) 
                      | vlSelf->__VicoTriggered.at(0x1eU)) 
                     | vlSelf->__VicoTriggered.at(0x1fU)) 
                    | vlSelf->__VicoTriggered.at(0x20U)) 
                   | vlSelf->__VicoTriggered.at(0x21U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__45(vlSelf);
    }
    if (((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                      | vlSelf->__VicoTriggered.at(8U)) 
                     | vlSelf->__VicoTriggered.at(0x10U)) 
                    | vlSelf->__VicoTriggered.at(0x1eU)) 
                   | vlSelf->__VicoTriggered.at(0x20U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__46(vlSelf);
    }
    if (((((((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                          | vlSelf->__VicoTriggered.at(6U)) 
                         | vlSelf->__VicoTriggered.at(7U)) 
                        | vlSelf->__VicoTriggered.at(0xeU)) 
                       | vlSelf->__VicoTriggered.at(0xfU)) 
                      | vlSelf->__VicoTriggered.at(0x1aU)) 
                     | vlSelf->__VicoTriggered.at(0x1bU)) 
                    | vlSelf->__VicoTriggered.at(0x1cU)) 
                   | vlSelf->__VicoTriggered.at(0x1dU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__47(vlSelf);
    }
    if (((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                      | vlSelf->__VicoTriggered.at(6U)) 
                     | vlSelf->__VicoTriggered.at(0xeU)) 
                    | vlSelf->__VicoTriggered.at(0x1aU)) 
                   | vlSelf->__VicoTriggered.at(0x1cU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__48(vlSelf);
    }
    if (((((((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                          | vlSelf->__VicoTriggered.at(4U)) 
                         | vlSelf->__VicoTriggered.at(5U)) 
                        | vlSelf->__VicoTriggered.at(0xcU)) 
                       | vlSelf->__VicoTriggered.at(0xdU)) 
                      | vlSelf->__VicoTriggered.at(0x16U)) 
                     | vlSelf->__VicoTriggered.at(0x17U)) 
                    | vlSelf->__VicoTriggered.at(0x18U)) 
                   | vlSelf->__VicoTriggered.at(0x19U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__49(vlSelf);
    }
    if (((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                      | vlSelf->__VicoTriggered.at(4U)) 
                     | vlSelf->__VicoTriggered.at(0xcU)) 
                    | vlSelf->__VicoTriggered.at(0x16U)) 
                   | vlSelf->__VicoTriggered.at(0x18U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__50(vlSelf);
    }
    if ((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                     | vlSelf->__VicoTriggered.at(1U)) 
                    | vlSelf->__VicoTriggered.at(3U)) 
                   | vlSelf->__VicoTriggered.at(0x15U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__51(vlSelf);
    }
    if ((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                     | vlSelf->__VicoTriggered.at(1U)) 
                    | vlSelf->__VicoTriggered.at(3U)) 
                   | vlSelf->__VicoTriggered.at(0x14U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__52(vlSelf);
        vlSelf->__Vm_traceActivity[0x45U] = 1U;
    }
    if ((((((((((((((((((((((((((((((((((((((((((((
                                                   (((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                                                                  | vlSelf->__VicoTriggered.at(0xaU)) 
                                                                 | vlSelf->__VicoTriggered.at(0xbU)) 
                                                                | vlSelf->__VicoTriggered.at(0x12U)) 
                                                               | vlSelf->__VicoTriggered.at(0x13U)) 
                                                              | vlSelf->__VicoTriggered.at(0x22U)) 
                                                             | vlSelf->__VicoTriggered.at(0x23U)) 
                                                            | vlSelf->__VicoTriggered.at(0x24U)) 
                                                           | vlSelf->__VicoTriggered.at(0x25U)) 
                                                          | vlSelf->__VicoTriggered.at(0x28U)) 
                                                         | vlSelf->__VicoTriggered.at(0x29U)) 
                                                        | vlSelf->__VicoTriggered.at(0x2cU)) 
                                                       | vlSelf->__VicoTriggered.at(0x2fU)) 
                                                      | vlSelf->__VicoTriggered.at(0x32U)) 
                                                     | vlSelf->__VicoTriggered.at(0x35U)) 
                                                    | vlSelf->__VicoTriggered.at(0x36U)) 
                                                   | vlSelf->__VicoTriggered.at(0x39U)) 
                                                  | vlSelf->__VicoTriggered.at(0x3cU)) 
                                                 | vlSelf->__VicoTriggered.at(0x3fU)) 
                                                | vlSelf->__VicoTriggered.at(0x40U)) 
                                               | vlSelf->__VicoTriggered.at(0x41U)) 
                                              | vlSelf->__VicoTriggered.at(0x42U)) 
                                             | vlSelf->__VicoTriggered.at(0x43U)) 
                                            | vlSelf->__VicoTriggered.at(0x44U)) 
                                           | vlSelf->__VicoTriggered.at(0x45U)) 
                                          | vlSelf->__VicoTriggered.at(0x46U)) 
                                         | vlSelf->__VicoTriggered.at(0x47U)) 
                                        | vlSelf->__VicoTriggered.at(0x48U)) 
                                       | vlSelf->__VicoTriggered.at(0x49U)) 
                                      | vlSelf->__VicoTriggered.at(0x4aU)) 
                                     | vlSelf->__VicoTriggered.at(0x4bU)) 
                                    | vlSelf->__VicoTriggered.at(0x4cU)) 
                                   | vlSelf->__VicoTriggered.at(0x4dU)) 
                                  | vlSelf->__VicoTriggered.at(0x4eU)) 
                                 | vlSelf->__VicoTriggered.at(0x4fU)) 
                                | vlSelf->__VicoTriggered.at(0x50U)) 
                               | vlSelf->__VicoTriggered.at(0x51U)) 
                              | vlSelf->__VicoTriggered.at(0x52U)) 
                             | vlSelf->__VicoTriggered.at(0x53U)) 
                            | vlSelf->__VicoTriggered.at(0x54U)) 
                           | vlSelf->__VicoTriggered.at(0x55U)) 
                          | vlSelf->__VicoTriggered.at(0x56U)) 
                         | vlSelf->__VicoTriggered.at(0x57U)) 
                        | vlSelf->__VicoTriggered.at(0x58U)) 
                       | vlSelf->__VicoTriggered.at(0x59U)) 
                      | vlSelf->__VicoTriggered.at(0x5aU)) 
                     | vlSelf->__VicoTriggered.at(0x5bU)) 
                    | vlSelf->__VicoTriggered.at(0x5cU)) 
                   | vlSelf->__VicoTriggered.at(0x5dU)) 
                  | vlSelf->__VicoTriggered.at(0x5eU)) 
                 | vlSelf->__VicoTriggered.at(0x5fU)) 
                | vlSelf->__VicoTriggered.at(0x60U)) 
               | vlSelf->__VicoTriggered.at(0x61U)) 
              | vlSelf->__VicoTriggered.at(0x62U)) 
             | vlSelf->__VicoTriggered.at(0x63U)) | vlSelf->__VicoTriggered.at(0x64U)) 
           | vlSelf->__VicoTriggered.at(0x65U)) | vlSelf->__VicoTriggered.at(0x66U)) 
         | vlSelf->__VicoTriggered.at(0x67U))) {
        VPvuTop___024root___ico_comb__TOP__53(vlSelf);
    }
    if (((((((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                          | vlSelf->__VicoTriggered.at(0xaU)) 
                         | vlSelf->__VicoTriggered.at(0xbU)) 
                        | vlSelf->__VicoTriggered.at(0x12U)) 
                       | vlSelf->__VicoTriggered.at(0x13U)) 
                      | vlSelf->__VicoTriggered.at(0x22U)) 
                     | vlSelf->__VicoTriggered.at(0x23U)) 
                    | vlSelf->__VicoTriggered.at(0x24U)) 
                   | vlSelf->__VicoTriggered.at(0x25U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__54(vlSelf);
        vlSelf->__Vm_traceActivity[0x46U] = 1U;
    }
    if ((((((((((((((((((((((((((((((((((((((((((((
                                                   (((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                                                                  | vlSelf->__VicoTriggered.at(8U)) 
                                                                 | vlSelf->__VicoTriggered.at(9U)) 
                                                                | vlSelf->__VicoTriggered.at(0x10U)) 
                                                               | vlSelf->__VicoTriggered.at(0x11U)) 
                                                              | vlSelf->__VicoTriggered.at(0x1eU)) 
                                                             | vlSelf->__VicoTriggered.at(0x1fU)) 
                                                            | vlSelf->__VicoTriggered.at(0x20U)) 
                                                           | vlSelf->__VicoTriggered.at(0x21U)) 
                                                          | vlSelf->__VicoTriggered.at(0x28U)) 
                                                         | vlSelf->__VicoTriggered.at(0x29U)) 
                                                        | vlSelf->__VicoTriggered.at(0x2cU)) 
                                                       | vlSelf->__VicoTriggered.at(0x2fU)) 
                                                      | vlSelf->__VicoTriggered.at(0x32U)) 
                                                     | vlSelf->__VicoTriggered.at(0x35U)) 
                                                    | vlSelf->__VicoTriggered.at(0x36U)) 
                                                   | vlSelf->__VicoTriggered.at(0x39U)) 
                                                  | vlSelf->__VicoTriggered.at(0x3cU)) 
                                                 | vlSelf->__VicoTriggered.at(0x3fU)) 
                                                | vlSelf->__VicoTriggered.at(0x40U)) 
                                               | vlSelf->__VicoTriggered.at(0x41U)) 
                                              | vlSelf->__VicoTriggered.at(0x42U)) 
                                             | vlSelf->__VicoTriggered.at(0x43U)) 
                                            | vlSelf->__VicoTriggered.at(0x44U)) 
                                           | vlSelf->__VicoTriggered.at(0x45U)) 
                                          | vlSelf->__VicoTriggered.at(0x46U)) 
                                         | vlSelf->__VicoTriggered.at(0x47U)) 
                                        | vlSelf->__VicoTriggered.at(0x48U)) 
                                       | vlSelf->__VicoTriggered.at(0x49U)) 
                                      | vlSelf->__VicoTriggered.at(0x4aU)) 
                                     | vlSelf->__VicoTriggered.at(0x4bU)) 
                                    | vlSelf->__VicoTriggered.at(0x4cU)) 
                                   | vlSelf->__VicoTriggered.at(0x4dU)) 
                                  | vlSelf->__VicoTriggered.at(0x4eU)) 
                                 | vlSelf->__VicoTriggered.at(0x4fU)) 
                                | vlSelf->__VicoTriggered.at(0x50U)) 
                               | vlSelf->__VicoTriggered.at(0x51U)) 
                              | vlSelf->__VicoTriggered.at(0x52U)) 
                             | vlSelf->__VicoTriggered.at(0x53U)) 
                            | vlSelf->__VicoTriggered.at(0x54U)) 
                           | vlSelf->__VicoTriggered.at(0x55U)) 
                          | vlSelf->__VicoTriggered.at(0x56U)) 
                         | vlSelf->__VicoTriggered.at(0x57U)) 
                        | vlSelf->__VicoTriggered.at(0x58U)) 
                       | vlSelf->__VicoTriggered.at(0x59U)) 
                      | vlSelf->__VicoTriggered.at(0x5aU)) 
                     | vlSelf->__VicoTriggered.at(0x5bU)) 
                    | vlSelf->__VicoTriggered.at(0x5cU)) 
                   | vlSelf->__VicoTriggered.at(0x5dU)) 
                  | vlSelf->__VicoTriggered.at(0x5eU)) 
                 | vlSelf->__VicoTriggered.at(0x5fU)) 
                | vlSelf->__VicoTriggered.at(0x60U)) 
               | vlSelf->__VicoTriggered.at(0x61U)) 
              | vlSelf->__VicoTriggered.at(0x62U)) 
             | vlSelf->__VicoTriggered.at(0x63U)) | vlSelf->__VicoTriggered.at(0x64U)) 
           | vlSelf->__VicoTriggered.at(0x65U)) | vlSelf->__VicoTriggered.at(0x66U)) 
         | vlSelf->__VicoTriggered.at(0x67U))) {
        VPvuTop___024root___ico_comb__TOP__55(vlSelf);
    }
    if (((((((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                          | vlSelf->__VicoTriggered.at(8U)) 
                         | vlSelf->__VicoTriggered.at(9U)) 
                        | vlSelf->__VicoTriggered.at(0x10U)) 
                       | vlSelf->__VicoTriggered.at(0x11U)) 
                      | vlSelf->__VicoTriggered.at(0x1eU)) 
                     | vlSelf->__VicoTriggered.at(0x1fU)) 
                    | vlSelf->__VicoTriggered.at(0x20U)) 
                   | vlSelf->__VicoTriggered.at(0x21U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__56(vlSelf);
        vlSelf->__Vm_traceActivity[0x47U] = 1U;
    }
    if ((((((((((((((((((((((((((((((((((((((((((((
                                                   (((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                                                                  | vlSelf->__VicoTriggered.at(6U)) 
                                                                 | vlSelf->__VicoTriggered.at(7U)) 
                                                                | vlSelf->__VicoTriggered.at(0xeU)) 
                                                               | vlSelf->__VicoTriggered.at(0xfU)) 
                                                              | vlSelf->__VicoTriggered.at(0x1aU)) 
                                                             | vlSelf->__VicoTriggered.at(0x1bU)) 
                                                            | vlSelf->__VicoTriggered.at(0x1cU)) 
                                                           | vlSelf->__VicoTriggered.at(0x1dU)) 
                                                          | vlSelf->__VicoTriggered.at(0x28U)) 
                                                         | vlSelf->__VicoTriggered.at(0x29U)) 
                                                        | vlSelf->__VicoTriggered.at(0x2cU)) 
                                                       | vlSelf->__VicoTriggered.at(0x2fU)) 
                                                      | vlSelf->__VicoTriggered.at(0x32U)) 
                                                     | vlSelf->__VicoTriggered.at(0x35U)) 
                                                    | vlSelf->__VicoTriggered.at(0x36U)) 
                                                   | vlSelf->__VicoTriggered.at(0x39U)) 
                                                  | vlSelf->__VicoTriggered.at(0x3cU)) 
                                                 | vlSelf->__VicoTriggered.at(0x3fU)) 
                                                | vlSelf->__VicoTriggered.at(0x40U)) 
                                               | vlSelf->__VicoTriggered.at(0x41U)) 
                                              | vlSelf->__VicoTriggered.at(0x42U)) 
                                             | vlSelf->__VicoTriggered.at(0x43U)) 
                                            | vlSelf->__VicoTriggered.at(0x44U)) 
                                           | vlSelf->__VicoTriggered.at(0x45U)) 
                                          | vlSelf->__VicoTriggered.at(0x46U)) 
                                         | vlSelf->__VicoTriggered.at(0x47U)) 
                                        | vlSelf->__VicoTriggered.at(0x48U)) 
                                       | vlSelf->__VicoTriggered.at(0x49U)) 
                                      | vlSelf->__VicoTriggered.at(0x4aU)) 
                                     | vlSelf->__VicoTriggered.at(0x4bU)) 
                                    | vlSelf->__VicoTriggered.at(0x4cU)) 
                                   | vlSelf->__VicoTriggered.at(0x4dU)) 
                                  | vlSelf->__VicoTriggered.at(0x4eU)) 
                                 | vlSelf->__VicoTriggered.at(0x4fU)) 
                                | vlSelf->__VicoTriggered.at(0x50U)) 
                               | vlSelf->__VicoTriggered.at(0x51U)) 
                              | vlSelf->__VicoTriggered.at(0x52U)) 
                             | vlSelf->__VicoTriggered.at(0x53U)) 
                            | vlSelf->__VicoTriggered.at(0x54U)) 
                           | vlSelf->__VicoTriggered.at(0x55U)) 
                          | vlSelf->__VicoTriggered.at(0x56U)) 
                         | vlSelf->__VicoTriggered.at(0x57U)) 
                        | vlSelf->__VicoTriggered.at(0x58U)) 
                       | vlSelf->__VicoTriggered.at(0x59U)) 
                      | vlSelf->__VicoTriggered.at(0x5aU)) 
                     | vlSelf->__VicoTriggered.at(0x5bU)) 
                    | vlSelf->__VicoTriggered.at(0x5cU)) 
                   | vlSelf->__VicoTriggered.at(0x5dU)) 
                  | vlSelf->__VicoTriggered.at(0x5eU)) 
                 | vlSelf->__VicoTriggered.at(0x5fU)) 
                | vlSelf->__VicoTriggered.at(0x60U)) 
               | vlSelf->__VicoTriggered.at(0x61U)) 
              | vlSelf->__VicoTriggered.at(0x62U)) 
             | vlSelf->__VicoTriggered.at(0x63U)) | vlSelf->__VicoTriggered.at(0x64U)) 
           | vlSelf->__VicoTriggered.at(0x65U)) | vlSelf->__VicoTriggered.at(0x66U)) 
         | vlSelf->__VicoTriggered.at(0x67U))) {
        VPvuTop___024root___ico_comb__TOP__57(vlSelf);
    }
    if (((((((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                          | vlSelf->__VicoTriggered.at(6U)) 
                         | vlSelf->__VicoTriggered.at(7U)) 
                        | vlSelf->__VicoTriggered.at(0xeU)) 
                       | vlSelf->__VicoTriggered.at(0xfU)) 
                      | vlSelf->__VicoTriggered.at(0x1aU)) 
                     | vlSelf->__VicoTriggered.at(0x1bU)) 
                    | vlSelf->__VicoTriggered.at(0x1cU)) 
                   | vlSelf->__VicoTriggered.at(0x1dU)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__58(vlSelf);
        vlSelf->__Vm_traceActivity[0x48U] = 1U;
    }
    if ((((((((((((((((((((((((((((((((((((((((((((
                                                   (((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                                                                  | vlSelf->__VicoTriggered.at(4U)) 
                                                                 | vlSelf->__VicoTriggered.at(5U)) 
                                                                | vlSelf->__VicoTriggered.at(0xcU)) 
                                                               | vlSelf->__VicoTriggered.at(0xdU)) 
                                                              | vlSelf->__VicoTriggered.at(0x16U)) 
                                                             | vlSelf->__VicoTriggered.at(0x17U)) 
                                                            | vlSelf->__VicoTriggered.at(0x18U)) 
                                                           | vlSelf->__VicoTriggered.at(0x19U)) 
                                                          | vlSelf->__VicoTriggered.at(0x28U)) 
                                                         | vlSelf->__VicoTriggered.at(0x29U)) 
                                                        | vlSelf->__VicoTriggered.at(0x2cU)) 
                                                       | vlSelf->__VicoTriggered.at(0x2fU)) 
                                                      | vlSelf->__VicoTriggered.at(0x32U)) 
                                                     | vlSelf->__VicoTriggered.at(0x35U)) 
                                                    | vlSelf->__VicoTriggered.at(0x36U)) 
                                                   | vlSelf->__VicoTriggered.at(0x39U)) 
                                                  | vlSelf->__VicoTriggered.at(0x3cU)) 
                                                 | vlSelf->__VicoTriggered.at(0x3fU)) 
                                                | vlSelf->__VicoTriggered.at(0x40U)) 
                                               | vlSelf->__VicoTriggered.at(0x41U)) 
                                              | vlSelf->__VicoTriggered.at(0x42U)) 
                                             | vlSelf->__VicoTriggered.at(0x43U)) 
                                            | vlSelf->__VicoTriggered.at(0x44U)) 
                                           | vlSelf->__VicoTriggered.at(0x45U)) 
                                          | vlSelf->__VicoTriggered.at(0x46U)) 
                                         | vlSelf->__VicoTriggered.at(0x47U)) 
                                        | vlSelf->__VicoTriggered.at(0x48U)) 
                                       | vlSelf->__VicoTriggered.at(0x49U)) 
                                      | vlSelf->__VicoTriggered.at(0x4aU)) 
                                     | vlSelf->__VicoTriggered.at(0x4bU)) 
                                    | vlSelf->__VicoTriggered.at(0x4cU)) 
                                   | vlSelf->__VicoTriggered.at(0x4dU)) 
                                  | vlSelf->__VicoTriggered.at(0x4eU)) 
                                 | vlSelf->__VicoTriggered.at(0x4fU)) 
                                | vlSelf->__VicoTriggered.at(0x50U)) 
                               | vlSelf->__VicoTriggered.at(0x51U)) 
                              | vlSelf->__VicoTriggered.at(0x52U)) 
                             | vlSelf->__VicoTriggered.at(0x53U)) 
                            | vlSelf->__VicoTriggered.at(0x54U)) 
                           | vlSelf->__VicoTriggered.at(0x55U)) 
                          | vlSelf->__VicoTriggered.at(0x56U)) 
                         | vlSelf->__VicoTriggered.at(0x57U)) 
                        | vlSelf->__VicoTriggered.at(0x58U)) 
                       | vlSelf->__VicoTriggered.at(0x59U)) 
                      | vlSelf->__VicoTriggered.at(0x5aU)) 
                     | vlSelf->__VicoTriggered.at(0x5bU)) 
                    | vlSelf->__VicoTriggered.at(0x5cU)) 
                   | vlSelf->__VicoTriggered.at(0x5dU)) 
                  | vlSelf->__VicoTriggered.at(0x5eU)) 
                 | vlSelf->__VicoTriggered.at(0x5fU)) 
                | vlSelf->__VicoTriggered.at(0x60U)) 
               | vlSelf->__VicoTriggered.at(0x61U)) 
              | vlSelf->__VicoTriggered.at(0x62U)) 
             | vlSelf->__VicoTriggered.at(0x63U)) | vlSelf->__VicoTriggered.at(0x64U)) 
           | vlSelf->__VicoTriggered.at(0x65U)) | vlSelf->__VicoTriggered.at(0x66U)) 
         | vlSelf->__VicoTriggered.at(0x67U))) {
        VPvuTop___024root___ico_comb__TOP__59(vlSelf);
    }
    if (((((((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                          | vlSelf->__VicoTriggered.at(4U)) 
                         | vlSelf->__VicoTriggered.at(5U)) 
                        | vlSelf->__VicoTriggered.at(0xcU)) 
                       | vlSelf->__VicoTriggered.at(0xdU)) 
                      | vlSelf->__VicoTriggered.at(0x16U)) 
                     | vlSelf->__VicoTriggered.at(0x17U)) 
                    | vlSelf->__VicoTriggered.at(0x18U)) 
                   | vlSelf->__VicoTriggered.at(0x19U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__60(vlSelf);
        vlSelf->__Vm_traceActivity[0x49U] = 1U;
    }
    if (((((((((((((((vlSelf->__VicoTriggered.at(0U) 
                      | vlSelf->__VicoTriggered.at(1U)) 
                     | vlSelf->__VicoTriggered.at(3U)) 
                    | vlSelf->__VicoTriggered.at(0x14U)) 
                   | vlSelf->__VicoTriggered.at(0x15U)) 
                  | vlSelf->__VicoTriggered.at(0x28U)) 
                 | vlSelf->__VicoTriggered.at(0x29U)) 
                | vlSelf->__VicoTriggered.at(0x2cU)) 
               | vlSelf->__VicoTriggered.at(0x2fU)) 
              | vlSelf->__VicoTriggered.at(0x32U)) 
             | vlSelf->__VicoTriggered.at(0x35U)) | vlSelf->__VicoTriggered.at(0x36U)) 
           | vlSelf->__VicoTriggered.at(0x39U)) | vlSelf->__VicoTriggered.at(0x3cU)) 
         | vlSelf->__VicoTriggered.at(0x3fU))) {
        VPvuTop___024root___ico_comb__TOP__61(vlSelf);
        vlSelf->__Vm_traceActivity[0x4aU] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__act(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG

void VPvuTop___024root___eval_triggers__act(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   ((((((((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                          | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                         | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                        | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U])) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U])) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU]))));
    vlSelf->__VactTriggered.at(1U) = (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(2U) = (0U != (((((((
                                                   (((((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                       | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U])) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U])) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U])) 
                                               | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                  ^ 
                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U])) 
                                              | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                 ^ 
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU])) 
                                             | (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                ^ vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU])));
    vlSelf->__VactTriggered.at(3U) = ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(4U) = (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(5U) = ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(6U) = (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(7U) = ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(8U) = (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(9U) = ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0xaU) = (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0xbU) = ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   (((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0xcU) = (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0xdU) = ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   (((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0xeU) = (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0xfU) = ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   (((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                  | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x10U) = (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x11U) = ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x12U) = (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x13U) = ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x14U) = (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x15U) = ((0U != (((
                                                   (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[3U]))) 
                                         | (0U != (
                                                   (((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                ^ 
                                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                               ^ 
                                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                                             ^ 
                                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[4U])) 
                                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                                            ^ 
                                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[5U])) 
                                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                                           ^ 
                                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[6U])) 
                                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                                          ^ 
                                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[7U])) 
                                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                                         ^ 
                                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[8U])) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                                        ^ 
                                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[9U])) 
                                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                                       ^ 
                                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                                      ^ 
                                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xbU])) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                                     ^ 
                                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xcU])) 
                                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                                    ^ 
                                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xdU])) 
                                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                                   ^ 
                                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xeU])) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                                  ^ 
                                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xfU])) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                                 ^ 
                                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x10U])) 
                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x11U])) 
                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x12U])) 
                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x13U])) 
                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x14U])) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x15U])) 
                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x16U])) 
                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x17U])) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x18U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x19U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x1aU])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x1bU]))));
    vlSelf->__VactTriggered.at(0x16U) = (0U != ((((
                                                   vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[3U])));
    vlSelf->__VactTriggered.at(0x17U) = ((0U != (((
                                                   (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[3U]))) 
                                         | (0U != (
                                                   (((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                ^ 
                                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                               ^ 
                                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                                             ^ 
                                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[4U])) 
                                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                                            ^ 
                                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[5U])) 
                                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                                           ^ 
                                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[6U])) 
                                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                                          ^ 
                                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[7U])) 
                                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                                         ^ 
                                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[8U])) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                                        ^ 
                                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[9U])) 
                                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                                       ^ 
                                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                                      ^ 
                                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xbU])) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                                     ^ 
                                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xcU])) 
                                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                                    ^ 
                                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xdU])) 
                                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                                   ^ 
                                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xeU])) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                                  ^ 
                                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xfU])) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                                 ^ 
                                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x10U])) 
                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x11U])) 
                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x12U])) 
                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x13U])) 
                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x14U])) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x15U])) 
                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x16U])) 
                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x17U])) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x18U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x19U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x1aU])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x1bU]))));
    vlSelf->__VactTriggered.at(0x18U) = (0U != ((((
                                                   vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[3U])));
    vlSelf->__VactTriggered.at(0x19U) = ((0U != (((
                                                   (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[3U]))) 
                                         | (0U != (
                                                   (((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                ^ 
                                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                               ^ 
                                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                                             ^ 
                                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[4U])) 
                                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                                            ^ 
                                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[5U])) 
                                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                                           ^ 
                                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[6U])) 
                                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                                          ^ 
                                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[7U])) 
                                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                                         ^ 
                                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[8U])) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                                        ^ 
                                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[9U])) 
                                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                                       ^ 
                                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                                      ^ 
                                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xbU])) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                                     ^ 
                                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xcU])) 
                                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                                    ^ 
                                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xdU])) 
                                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                                   ^ 
                                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xeU])) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                                  ^ 
                                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xfU])) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                                 ^ 
                                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x10U])) 
                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x11U])) 
                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x12U])) 
                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x13U])) 
                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x14U])) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x15U])) 
                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x16U])) 
                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x17U])) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x18U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x19U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x1aU])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x1bU]))));
    vlSelf->__VactTriggered.at(0x1aU) = (0U != ((((
                                                   vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[3U])));
    vlSelf->__VactTriggered.at(0x1bU) = ((0U != (((
                                                   (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[3U]))) 
                                         | (0U != (
                                                   (((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                ^ 
                                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                               ^ 
                                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                                             ^ 
                                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[4U])) 
                                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                                            ^ 
                                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[5U])) 
                                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                                           ^ 
                                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[6U])) 
                                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                                          ^ 
                                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[7U])) 
                                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                                         ^ 
                                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[8U])) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                                        ^ 
                                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[9U])) 
                                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                                       ^ 
                                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                                      ^ 
                                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xbU])) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                                     ^ 
                                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xcU])) 
                                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                                    ^ 
                                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xdU])) 
                                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                                   ^ 
                                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xeU])) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                                  ^ 
                                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xfU])) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                                 ^ 
                                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x10U])) 
                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x11U])) 
                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x12U])) 
                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x13U])) 
                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x14U])) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x15U])) 
                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x16U])) 
                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x17U])) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x18U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x19U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x1aU])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x1bU]))));
    vlSelf->__VactTriggered.at(0x1cU) = (0U != ((((
                                                   vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[3U])));
    vlSelf->__VactTriggered.at(0x1dU) = ((0U != (((
                                                   (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[3U]))) 
                                         | (0U != (
                                                   (((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                ^ 
                                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                               ^ 
                                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                                             ^ 
                                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[4U])) 
                                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                                            ^ 
                                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[5U])) 
                                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                                           ^ 
                                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[6U])) 
                                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                                          ^ 
                                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[7U])) 
                                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                                         ^ 
                                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[8U])) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                                        ^ 
                                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[9U])) 
                                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                                       ^ 
                                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                                      ^ 
                                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xbU])) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                                     ^ 
                                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xcU])) 
                                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                                    ^ 
                                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xdU])) 
                                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                                   ^ 
                                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xeU])) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                                  ^ 
                                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xfU])) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                                 ^ 
                                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x10U])) 
                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x11U])) 
                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x12U])) 
                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x13U])) 
                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x14U])) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x15U])) 
                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x16U])) 
                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x17U])) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x18U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x19U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x1aU])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x1bU]))));
    vlSelf->__VactTriggered.at(0x1eU) = (0U != ((((
                                                   vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[3U])));
    vlSelf->__VactTriggered.at(0x1fU) = ((0U != (((
                                                   (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[3U]))) 
                                         | (0U != (
                                                   (((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                ^ 
                                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                               ^ 
                                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                                             ^ 
                                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[4U])) 
                                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                                            ^ 
                                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[5U])) 
                                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                                           ^ 
                                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[6U])) 
                                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                                          ^ 
                                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[7U])) 
                                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                                         ^ 
                                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[8U])) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                                        ^ 
                                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[9U])) 
                                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                                       ^ 
                                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                                      ^ 
                                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xbU])) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                                     ^ 
                                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xcU])) 
                                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                                    ^ 
                                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xdU])) 
                                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                                   ^ 
                                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xeU])) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                                  ^ 
                                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xfU])) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                                 ^ 
                                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x10U])) 
                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x11U])) 
                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x12U])) 
                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x13U])) 
                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x14U])) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x15U])) 
                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x16U])) 
                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x17U])) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x18U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x19U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x1aU])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x1bU]))));
    vlSelf->__VactTriggered.at(0x20U) = (0U != ((((
                                                   vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[3U])));
    vlSelf->__VactTriggered.at(0x21U) = ((0U != (((
                                                   (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[3U]))) 
                                         | (0U != (
                                                   (((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                ^ 
                                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                               ^ 
                                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                                             ^ 
                                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[4U])) 
                                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                                            ^ 
                                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[5U])) 
                                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                                           ^ 
                                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[6U])) 
                                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                                          ^ 
                                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[7U])) 
                                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                                         ^ 
                                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[8U])) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                                        ^ 
                                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[9U])) 
                                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                                       ^ 
                                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                                      ^ 
                                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xbU])) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                                     ^ 
                                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xcU])) 
                                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                                    ^ 
                                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xdU])) 
                                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                                   ^ 
                                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xeU])) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                                  ^ 
                                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xfU])) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                                 ^ 
                                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x10U])) 
                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x11U])) 
                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x12U])) 
                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x13U])) 
                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x14U])) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x15U])) 
                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x16U])) 
                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x17U])) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x18U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x19U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x1aU])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x1bU]))));
    vlSelf->__VactTriggered.at(0x22U) = (0U != ((((
                                                   vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[3U])));
    vlSelf->__VactTriggered.at(0x23U) = ((0U != (((
                                                   (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[3U]))) 
                                         | (0U != (
                                                   (((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                ^ 
                                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                               ^ 
                                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                              ^ 
                                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                                             ^ 
                                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[4U])) 
                                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                                            ^ 
                                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[5U])) 
                                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                                           ^ 
                                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[6U])) 
                                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                                          ^ 
                                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[7U])) 
                                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                                         ^ 
                                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[8U])) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                                        ^ 
                                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[9U])) 
                                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                                       ^ 
                                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xaU])) 
                                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                                      ^ 
                                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xbU])) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                                     ^ 
                                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xcU])) 
                                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                                    ^ 
                                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xdU])) 
                                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                                   ^ 
                                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xeU])) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                                  ^ 
                                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xfU])) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                                 ^ 
                                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x10U])) 
                                                             | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x11U])) 
                                                            | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x12U])) 
                                                           | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x13U])) 
                                                          | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x14U])) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x15U])) 
                                                        | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x16U])) 
                                                       | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x17U])) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x18U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x19U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x1aU])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x1bU]))));
    vlSelf->__VactTriggered.at(0x24U) = (0U != ((((
                                                   vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[0U]) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[1U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[2U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[3U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[3U])));
    vlSelf->__VactTriggered.at(0x25U) = ((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x26U) = (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x27U) = ((((((((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                                != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                               | (0U 
                                                  != 
                                                  (((((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                              | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                                 != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)) 
                                             | (0U 
                                                != 
                                                (((((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                            | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                               != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)) 
                                           | (0U != 
                                              (((((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                               | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  ^ 
                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                          | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                             != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x28U) = (0U != ((((
                                                   (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VactTriggered.at(0x29U) = ((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x2aU) = (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x2bU) = (0U != ((((
                                                   (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VactTriggered.at(0x2cU) = ((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x2dU) = (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x2eU) = (0U != ((((
                                                   (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VactTriggered.at(0x2fU) = ((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x30U) = (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x31U) = (0U != ((((
                                                   (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VactTriggered.at(0x32U) = ((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x33U) = (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x34U) = ((((((((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                                != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                               | (0U 
                                                  != 
                                                  (((((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                              | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                                 != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)) 
                                             | (0U 
                                                != 
                                                (((((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                            | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                               != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)) 
                                           | (0U != 
                                              (((((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                               | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  ^ 
                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                          | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                             != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x35U) = (0U != ((((
                                                   (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VactTriggered.at(0x36U) = ((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x37U) = (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x38U) = (0U != ((((
                                                   (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VactTriggered.at(0x39U) = ((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x3aU) = (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x3bU) = (0U != ((((
                                                   (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VactTriggered.at(0x3cU) = ((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x3dU) = (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x3eU) = (0U != ((((
                                                   (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VactTriggered.at(0x3fU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x40U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x41U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x42U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x43U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x44U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x45U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x46U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x47U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x48U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x49U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x4aU) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x4bU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x4cU) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x4dU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x4eU) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x4fU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x50U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x51U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x52U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x53U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x54U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x55U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x56U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x57U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x58U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x59U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x5aU) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x5bU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x5cU) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x5dU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x5eU) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x5fU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x60U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x61U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x62U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x63U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x64U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x65U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(0x66U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(0x67U) = ((IData)(vlSelf->clock) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[5U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[6U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[7U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[8U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[9U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xcU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xcU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xdU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xdU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xeU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xeU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xfU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xfU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x10U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x10U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x11U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x11U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x12U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x12U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x13U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x13U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x14U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x14U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x15U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x15U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x16U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x16U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x17U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x17U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x18U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x18U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x19U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x19U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x1aU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x1aU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x1bU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x1bU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[5U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[6U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[7U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[8U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[9U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xcU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xcU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xdU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xdU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xeU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xeU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0xfU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0xfU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x10U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x10U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x11U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x11U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x12U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x12U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x13U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x13U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x14U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x14U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x15U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x15U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x16U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x16U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x17U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x17U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x18U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x18U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x19U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x19U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x1aU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x1aU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x1bU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0x1bU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[5U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[6U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[7U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[8U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[9U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xcU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xcU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xdU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xdU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xeU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xeU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xfU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xfU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x10U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x10U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x11U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x11U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x12U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x12U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x13U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x13U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x14U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x14U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x15U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x15U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x16U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x16U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x17U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x17U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x18U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x18U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x19U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x19U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x1aU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x1aU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x1bU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x1bU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[5U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[6U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[7U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[8U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[9U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xcU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xcU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xdU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xdU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xeU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xeU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0xfU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0xfU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x10U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x10U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x11U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x11U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x12U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x12U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x13U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x13U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x14U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x14U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x15U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x15U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x16U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x16U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x17U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x17U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x18U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x18U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x19U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x19U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x1aU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x1aU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x1bU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0x1bU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[5U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[6U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[7U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[8U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[9U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xcU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xcU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xdU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xdU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xeU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xeU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xfU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xfU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x10U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x10U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x11U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x11U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x12U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x12U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x13U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x13U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x14U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x14U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x15U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x15U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x16U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x16U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x17U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x17U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x18U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x18U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x19U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x19U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x1aU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x1aU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x1bU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x1bU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[5U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[6U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[7U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[8U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[9U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xcU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xcU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xdU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xdU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xeU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xeU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0xfU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0xfU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x10U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x10U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x11U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x11U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x12U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x12U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x13U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x13U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x14U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x14U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x15U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x15U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x16U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x16U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x17U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x17U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x18U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x18U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x19U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x19U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x1aU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x1aU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x1bU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0x1bU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[5U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[6U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[7U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[8U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[9U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xcU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xcU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xdU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xdU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xeU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xeU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xfU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xfU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x10U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x10U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x11U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x11U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x12U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x12U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x13U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x13U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x14U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x14U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x15U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x15U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x16U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x16U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x17U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x17U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x18U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x18U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x19U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x19U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x1aU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x1aU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x1bU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x1bU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[5U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[5U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[6U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[6U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[7U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[7U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[8U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[8U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[9U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[9U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xaU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xaU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xbU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xbU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xcU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xcU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xdU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xdU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xeU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xeU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0xfU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0xfU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x10U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x10U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x11U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x11U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x12U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x12U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x13U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x13U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x14U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x14U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x15U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x15U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x16U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x16U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x17U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x17U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x18U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x18U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x19U] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x19U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x1aU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x1aU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x1bU] 
        = vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0x1bU];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
        vlSelf->__VactTriggered.at(7U) = 1U;
        vlSelf->__VactTriggered.at(8U) = 1U;
        vlSelf->__VactTriggered.at(9U) = 1U;
        vlSelf->__VactTriggered.at(0xaU) = 1U;
        vlSelf->__VactTriggered.at(0xbU) = 1U;
        vlSelf->__VactTriggered.at(0xcU) = 1U;
        vlSelf->__VactTriggered.at(0xdU) = 1U;
        vlSelf->__VactTriggered.at(0xeU) = 1U;
        vlSelf->__VactTriggered.at(0xfU) = 1U;
        vlSelf->__VactTriggered.at(0x10U) = 1U;
        vlSelf->__VactTriggered.at(0x11U) = 1U;
        vlSelf->__VactTriggered.at(0x12U) = 1U;
        vlSelf->__VactTriggered.at(0x13U) = 1U;
        vlSelf->__VactTriggered.at(0x14U) = 1U;
        vlSelf->__VactTriggered.at(0x15U) = 1U;
        vlSelf->__VactTriggered.at(0x16U) = 1U;
        vlSelf->__VactTriggered.at(0x17U) = 1U;
        vlSelf->__VactTriggered.at(0x18U) = 1U;
        vlSelf->__VactTriggered.at(0x19U) = 1U;
        vlSelf->__VactTriggered.at(0x1aU) = 1U;
        vlSelf->__VactTriggered.at(0x1bU) = 1U;
        vlSelf->__VactTriggered.at(0x1cU) = 1U;
        vlSelf->__VactTriggered.at(0x1dU) = 1U;
        vlSelf->__VactTriggered.at(0x1eU) = 1U;
        vlSelf->__VactTriggered.at(0x1fU) = 1U;
        vlSelf->__VactTriggered.at(0x20U) = 1U;
        vlSelf->__VactTriggered.at(0x21U) = 1U;
        vlSelf->__VactTriggered.at(0x22U) = 1U;
        vlSelf->__VactTriggered.at(0x23U) = 1U;
        vlSelf->__VactTriggered.at(0x24U) = 1U;
        vlSelf->__VactTriggered.at(0x25U) = 1U;
        vlSelf->__VactTriggered.at(0x26U) = 1U;
        vlSelf->__VactTriggered.at(0x27U) = 1U;
        vlSelf->__VactTriggered.at(0x28U) = 1U;
        vlSelf->__VactTriggered.at(0x29U) = 1U;
        vlSelf->__VactTriggered.at(0x2aU) = 1U;
        vlSelf->__VactTriggered.at(0x2bU) = 1U;
        vlSelf->__VactTriggered.at(0x2cU) = 1U;
        vlSelf->__VactTriggered.at(0x2dU) = 1U;
        vlSelf->__VactTriggered.at(0x2eU) = 1U;
        vlSelf->__VactTriggered.at(0x2fU) = 1U;
        vlSelf->__VactTriggered.at(0x30U) = 1U;
        vlSelf->__VactTriggered.at(0x31U) = 1U;
        vlSelf->__VactTriggered.at(0x32U) = 1U;
        vlSelf->__VactTriggered.at(0x33U) = 1U;
        vlSelf->__VactTriggered.at(0x34U) = 1U;
        vlSelf->__VactTriggered.at(0x35U) = 1U;
        vlSelf->__VactTriggered.at(0x36U) = 1U;
        vlSelf->__VactTriggered.at(0x37U) = 1U;
        vlSelf->__VactTriggered.at(0x38U) = 1U;
        vlSelf->__VactTriggered.at(0x39U) = 1U;
        vlSelf->__VactTriggered.at(0x3aU) = 1U;
        vlSelf->__VactTriggered.at(0x3bU) = 1U;
        vlSelf->__VactTriggered.at(0x3cU) = 1U;
        vlSelf->__VactTriggered.at(0x3dU) = 1U;
        vlSelf->__VactTriggered.at(0x3eU) = 1U;
        vlSelf->__VactTriggered.at(0x3fU) = 1U;
        vlSelf->__VactTriggered.at(0x40U) = 1U;
        vlSelf->__VactTriggered.at(0x41U) = 1U;
        vlSelf->__VactTriggered.at(0x42U) = 1U;
        vlSelf->__VactTriggered.at(0x43U) = 1U;
        vlSelf->__VactTriggered.at(0x44U) = 1U;
        vlSelf->__VactTriggered.at(0x45U) = 1U;
        vlSelf->__VactTriggered.at(0x46U) = 1U;
        vlSelf->__VactTriggered.at(0x47U) = 1U;
        vlSelf->__VactTriggered.at(0x48U) = 1U;
        vlSelf->__VactTriggered.at(0x49U) = 1U;
        vlSelf->__VactTriggered.at(0x4aU) = 1U;
        vlSelf->__VactTriggered.at(0x4bU) = 1U;
        vlSelf->__VactTriggered.at(0x4cU) = 1U;
        vlSelf->__VactTriggered.at(0x4dU) = 1U;
        vlSelf->__VactTriggered.at(0x4eU) = 1U;
        vlSelf->__VactTriggered.at(0x4fU) = 1U;
        vlSelf->__VactTriggered.at(0x50U) = 1U;
        vlSelf->__VactTriggered.at(0x51U) = 1U;
        vlSelf->__VactTriggered.at(0x52U) = 1U;
        vlSelf->__VactTriggered.at(0x53U) = 1U;
        vlSelf->__VactTriggered.at(0x54U) = 1U;
        vlSelf->__VactTriggered.at(0x55U) = 1U;
        vlSelf->__VactTriggered.at(0x56U) = 1U;
        vlSelf->__VactTriggered.at(0x57U) = 1U;
        vlSelf->__VactTriggered.at(0x58U) = 1U;
        vlSelf->__VactTriggered.at(0x59U) = 1U;
        vlSelf->__VactTriggered.at(0x5aU) = 1U;
        vlSelf->__VactTriggered.at(0x5bU) = 1U;
        vlSelf->__VactTriggered.at(0x5cU) = 1U;
        vlSelf->__VactTriggered.at(0x5dU) = 1U;
        vlSelf->__VactTriggered.at(0x5eU) = 1U;
        vlSelf->__VactTriggered.at(0x5fU) = 1U;
        vlSelf->__VactTriggered.at(0x60U) = 1U;
        vlSelf->__VactTriggered.at(0x61U) = 1U;
        vlSelf->__VactTriggered.at(0x62U) = 1U;
        vlSelf->__VactTriggered.at(0x63U) = 1U;
        vlSelf->__VactTriggered.at(0x64U) = 1U;
        vlSelf->__VactTriggered.at(0x65U) = 1U;
        vlSelf->__VactTriggered.at(0x66U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPvuTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
