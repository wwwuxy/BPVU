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
    IData/*30:0*/ PvuTop__DOT__convert_encoder__DOT___value_after_round_0_T;
    PvuTop__DOT__convert_encoder__DOT___value_after_round_0_T = 0;
    IData/*30:0*/ PvuTop__DOT__convert_encoder__DOT___value_after_round_1_T;
    PvuTop__DOT__convert_encoder__DOT___value_after_round_1_T = 0;
    IData/*30:0*/ PvuTop__DOT__convert_encoder__DOT___value_after_round_2_T;
    PvuTop__DOT__convert_encoder__DOT___value_after_round_2_T = 0;
    IData/*30:0*/ PvuTop__DOT__convert_encoder__DOT___value_after_round_3_T;
    PvuTop__DOT__convert_encoder__DOT___value_after_round_3_T = 0;
    CData/*0:0*/ PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c349387__0 = 0;
    CData/*0:0*/ PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c547640__0;
    PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c547640__0 = 0;
    CData/*0:0*/ PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c07425a__0;
    PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c07425a__0 = 0;
    CData/*0:0*/ PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1ce7231a__0;
    PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1ce7231a__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h74aac48e__0;
    VlWide<3>/*95:0*/ __Vtemp_h01bee670__0;
    VlWide<3>/*95:0*/ __Vtemp_h42baf2de__0;
    VlWide<3>/*95:0*/ __Vtemp_h0db929cc__0;
    VlWide<3>/*95:0*/ __Vtemp_hc89e0b2f__0;
    VlWide<3>/*95:0*/ __Vtemp_h278eba4c__0;
    VlWide<3>/*95:0*/ __Vtemp_h9cea0812__0;
    VlWide<3>/*95:0*/ __Vtemp_he856d738__0;
    VlWide<3>/*95:0*/ __Vtemp_h8154dcad__0;
    VlWide<3>/*95:0*/ __Vtemp_h1061b838__0;
    VlWide<3>/*95:0*/ __Vtemp_he153cf10__0;
    VlWide<3>/*95:0*/ __Vtemp_hd4748159__0;
    VlWide<3>/*95:0*/ __Vtemp_hc07172ba__0;
    VlWide<3>/*95:0*/ __Vtemp_ha2fff56f__0;
    VlWide<3>/*95:0*/ __Vtemp_hbbd4c06a__0;
    VlWide<3>/*95:0*/ __Vtemp_hc0d3d2ad__0;
    VlWide<3>/*95:0*/ __Vtemp_h877e3acc__0;
    VlWide<3>/*95:0*/ __Vtemp_h57efac15__0;
    VlWide<3>/*95:0*/ __Vtemp_h71e10178__0;
    VlWide<3>/*95:0*/ __Vtemp_h684fb7b1__0;
    // Body
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9 
        = ((0ULL == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7bc97152__0) 
           | (VL_GTS_III(8, 1U, (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                 >> 0x18U)) & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                               & (0U 
                                                  != vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hebc2a567__0)
            ? (- (IData)((1U & ((IData)(vlSelf->PvuTop__DOT___convert_io_pir_sign_o) 
                                >> 3U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_3))
                                              ? ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_3))
                                              : 0U));
    PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1ce7231a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT___GEN_39)) 
           & ((0U != vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a) 
              & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                 >> 0x1fU)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6 
        = ((0ULL == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b53ba00__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                          >> 0x10U))) 
              & ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                 & (0U != vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h75cc7c16__0)
            ? (- (IData)((1U & ((IData)(vlSelf->PvuTop__DOT___convert_io_pir_sign_o) 
                                >> 2U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_2))
                                              ? ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_2))
                                              : 0U));
    PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c07425a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT___GEN_39)) 
           & ((0U != vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a) 
              & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                 >> 0x17U)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3 
        = ((0ULL == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7ed67781__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                          >> 8U))) 
              & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                 & (0U != vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd092db84__0)
            ? (- (IData)((1U & ((IData)(vlSelf->PvuTop__DOT___convert_io_pir_sign_o) 
                                >> 1U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_1))
                                              ? ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_1))
                                              : 0U));
    PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c547640__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT___GEN_39)) 
           & ((0U != vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a) 
              & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                 >> 0xfU)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0 
        = ((0ULL == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h799ff3f5__0) 
           | (VL_GTS_III(8, 1U, (0xffU & vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i)) 
              & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                 & (0U != vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hf936d8b2__0)
            ? (- (IData)((1U & (IData)(vlSelf->PvuTop__DOT___convert_io_pir_sign_o))))
            : ((0x1fU >= (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal))
                ? ((vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
                    << 4U) >> (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal))
                : 0U));
    PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c349387__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT___GEN_39)) 
           & ((0U != vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a) 
              & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                 >> 7U)));
    PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_3 
        = (0x7fffffffU & ((vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3 
                           >> 1U) + (1U & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3 
                                           & (((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hebc2a567__0)
                                                ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0))))
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
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                      ? 0U : ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                               ? 0U
                                               : (3U 
                                                  & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                     >> 0x18U)))))) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                                                            ? 0U
                                                                            : 
                                                                           (3U 
                                                                            & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                                               >> 0x18U)))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                         ? 0x1fU : 
                                        ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                          ? 0x1fU : 
                                         (~ (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                             >> 0x1aU)))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                         ? 0U : ((0U 
                                                  == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                                  ? 0U
                                                  : 
                                                 (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                  >> 0x1aU))))) 
                    - (IData)(2U)));
    PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_2 
        = (0x7fffffffU & ((vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2 
                           >> 1U) + (1U & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2 
                                           & (((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h75cc7c16__0)
                                                ? (
                                                   (2U 
                                                    < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0))))
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
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                      ? 0U : ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                               ? 0U
                                               : (3U 
                                                  & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                     >> 0x10U)))))) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                                                            ? 0U
                                                                            : 
                                                                           (3U 
                                                                            & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                                               >> 0x10U)))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c07425a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                         ? 0x1fU : 
                                        ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                          ? 0x1fU : 
                                         (~ (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                             >> 0x12U)))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                         ? 0U : ((0U 
                                                  == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                                  ? 0U
                                                  : 
                                                 (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                  >> 0x12U))))) 
                    - (IData)(2U)));
    PvuTop__DOT__quantizeInt8__DOT___roundedInt_T_1 
        = (0x7fffffffU & ((vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1 
                           >> 1U) + (1U & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1 
                                           & (((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd092db84__0)
                                                ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0))))
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
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                      ? 0U : ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                               ? 0U
                                               : (3U 
                                                  & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                     >> 8U)))))) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h962fac1b__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                                                            ? 0U
                                                                            : 
                                                                           (3U 
                                                                            & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                                               >> 8U)))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h962fac1b__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c547640__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                         ? 0x1fU : 
                                        ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                          ? 0x1fU : 
                                         (~ (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                             >> 0xaU)))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                         ? 0U : ((0U 
                                                  == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                                  ? 0U
                                                  : 
                                                 (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                  >> 0xaU))))) 
                    - (IData)(2U)));
    PvuTop__DOT__quantizeInt8__DOT___roundedInt_T = 
        (0x7fffffffU & ((vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac 
                         >> 1U) + (1U & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac 
                                         & (((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hf936d8b2__0)
                                              ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                 & (0U 
                                                    != 
                                                    (0xfffffffU 
                                                     & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0))))
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
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                      ? 0U : ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)
                                               ? 0U
                                               : (3U 
                                                  & vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i))))) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h91c3a767__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)
                                                                            ? 0U
                                                                            : 
                                                                           (3U 
                                                                            & vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h91c3a767__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                         ? 0x1fU : 
                                        ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)
                                          ? 0x1fU : 
                                         (~ (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                             >> 2U)))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                         ? 0U : ((0U 
                                                  == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)
                                                  ? 0U
                                                  : 
                                                 (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                  >> 2U))))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hb5fc9007__0 
        = ((8U & (IData)(vlSelf->PvuTop__DOT___convert_io_pir_sign_o))
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
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h74aac48e__0, vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h74aac48e__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h74aac48e__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h74aac48e__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h22e7a075__0 
        = ((4U & (IData)(vlSelf->PvuTop__DOT___convert_io_pir_sign_o))
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
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h01bee670__0, vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h01bee670__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h01bee670__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h01bee670__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5221cc71__0 
        = ((2U & (IData)(vlSelf->PvuTop__DOT___convert_io_pir_sign_o))
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
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h42baf2de__0, vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h42baf2de__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h42baf2de__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h42baf2de__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h4eff933c__0 
        = ((1U & (IData)(vlSelf->PvuTop__DOT___convert_io_pir_sign_o))
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
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h0db929cc__0, vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h0db929cc__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h0db929cc__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h0db929cc__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)
            ? 0ULL : vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hb5fc9007__0);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hc89e0b2f__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hc89e0b2f__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hc89e0b2f__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hc89e0b2f__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)
            ? 0ULL : vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h22e7a075__0);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h278eba4c__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h278eba4c__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h278eba4c__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h278eba4c__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)
            ? 0ULL : vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5221cc71__0);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h9cea0812__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h9cea0812__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h9cea0812__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h9cea0812__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1 
        = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0)
            ? 0ULL : vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h4eff933c__0);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_he856d738__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_he856d738__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_he856d738__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_he856d738__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    PvuTop__DOT__quantizeInt8__DOT___centered_T_6 = 
        (0x1ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10 
                           - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h8154dcad__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h8154dcad__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h8154dcad__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h8154dcad__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    PvuTop__DOT__quantizeInt8__DOT___centered_T_4 = 
        (0x1ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7 
                           - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h1061b838__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h1061b838__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h1061b838__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h1061b838__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    PvuTop__DOT__quantizeInt8__DOT___centered_T_2 = 
        (0x1ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4 
                           - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_he153cf10__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_he153cf10__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_he153cf10__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_he153cf10__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    PvuTop__DOT__quantizeInt8__DOT___centered_T = (0x1ffffffffULL 
                                                   & (vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1 
                                                      - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd4748159__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hd4748159__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hd4748159__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd4748159__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
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
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hc07172ba__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hc07172ba__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hc07172ba__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hc07172ba__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
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
    VL_SHIFTR_WWI(90,90,32, __Vtemp_ha2fff56f__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_ha2fff56f__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_ha2fff56f__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_ha2fff56f__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
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
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hbbd4c06a__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hbbd4c06a__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hbbd4c06a__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hbbd4c06a__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
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
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hc0d3d2ad__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hc0d3d2ad__0[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hc0d3d2ad__0[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hc0d3d2ad__0[2U]);
    } else {
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3)
                              ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3)
                              : vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h877e3acc__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_h877e3acc__0[0U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_h877e3acc__0[1U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h877e3acc__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2)
                              ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2)
                              : vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h57efac15__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h57efac15__0[0U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h57efac15__0[1U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h57efac15__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1)
                              ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1)
                              : vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h71e10178__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_h71e10178__0[0U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_h71e10178__0[1U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h71e10178__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder)
                              ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder)
                              : vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h684fb7b1__0, PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_h684fb7b1__0[0U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_h684fb7b1__0[1U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h684fb7b1__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__convert_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_3 
        = (VL_GTS_IQQ(33, PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
           | ((PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 
               == vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
              & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_3)));
    PvuTop__DOT__convert_encoder__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_3_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_2 
        = (VL_GTS_IQQ(33, PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
           | ((PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 
               == vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
              & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_2)));
    PvuTop__DOT__convert_encoder__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_2_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_1 
        = (VL_GTS_IQQ(33, PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
           | ((PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 
               == vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
              & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_1)));
    PvuTop__DOT__convert_encoder__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_1_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven 
        = (VL_GTS_IQQ(33, PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
           | ((PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 
               == vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
              & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled)));
    PvuTop__DOT__convert_encoder__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_io_result_o[0U])))))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3)
                  ? (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_3)
                  : (- (IData)((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_3)))));
    vlSelf->PvuTop__DOT____VdfgTmp_h430c3929__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h878add96__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                                         ? 0U
                                                         : 
                                                        ((0U 
                                                          == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                                          ? 0U
                                                          : vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h878add96__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                                           ? 0U
                                                           : 
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                                            ? 0U
                                                            : 
                                                           (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                            >> 0x18U)))) 
                                                        & ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h930d41a5__0) 
                                                           & (0U 
                                                              == vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h9347f0fa__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h930d41a5__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h878add96__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__convert_encoder__DOT___value_after_round_3_T))))
                                                       : PvuTop__DOT__convert_encoder__DOT___value_after_round_3_T)
                                                      : 0U)));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2)
                  ? (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_2)
                  : (- (IData)((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_2)))));
    vlSelf->PvuTop__DOT____VdfgTmp_h4699d5bf__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h878e0f03__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                                         ? 0U
                                                         : 
                                                        ((0U 
                                                          == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                                          ? 0U
                                                          : vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h878e0f03__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                                           ? 0U
                                                           : 
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                                            ? 0U
                                                            : 
                                                           (0xffU 
                                                            & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                               >> 0x10U))))) 
                                                        & ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h9343d2f5__0) 
                                                           & (0U 
                                                              == vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h96e1f5ff__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h9343d2f5__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h878e0f03__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__convert_encoder__DOT___value_after_round_2_T))))
                                                       : PvuTop__DOT__convert_encoder__DOT___value_after_round_2_T)
                                                      : 0U)));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1)
                  ? (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_1)
                  : (- (IData)((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_1)))));
    vlSelf->PvuTop__DOT____VdfgTmp_h461f427a__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h87f57e3c__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                                         ? 0U
                                                         : 
                                                        ((0U 
                                                          == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                                          ? 0U
                                                          : vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h87f57e3c__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                                           ? 0U
                                                           : 
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                                            ? 0U
                                                            : 
                                                           (0xffU 
                                                            & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                               >> 8U))))) 
                                                        & ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h96fafde4__0) 
                                                           & (0U 
                                                              == vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h962fac1b__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h96fafde4__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h87f57e3c__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__convert_encoder__DOT___value_after_round_1_T))))
                                                       : PvuTop__DOT__convert_encoder__DOT___value_after_round_1_T)
                                                      : 0U)));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder)
                  ? (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven)
                  : (- (IData)((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven)))));
    vlSelf->PvuTop__DOT____VdfgTmp_h418052cc__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h87f12fa9__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                                         ? 0U
                                                         : 
                                                        ((0U 
                                                          == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)
                                                          ? 0U
                                                          : vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h87f12fa9__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT___GEN_39)
                                                           ? 0U
                                                           : 
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)
                                                            ? 0U
                                                            : 
                                                           (0xffU 
                                                            & vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i)))) 
                                                        & ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h962bc56e__0) 
                                                           & (0U 
                                                              == vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h91c3a767__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h962bc56e__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h87f12fa9__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__convert_encoder__DOT___value_after_round_0_T))))
                                                       : PvuTop__DOT__convert_encoder__DOT___value_after_round_0_T)
                                                      : 0U)));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22 
        = (0x3ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_3 
                             + (((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & ((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21) 
                                                                >> 1U)))))) 
                                 << 2U) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21)))));
    if ((0x1fU >= (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))) {
        vlSelf->PvuTop__DOT____VdfgTmp_h5909e0af__0 
            = (vlSelf->PvuTop__DOT____VdfgTmp_h430c3929__0 
               >> (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        vlSelf->PvuTop__DOT____VdfgTmp_hbd281acc__0 
            = (vlSelf->PvuTop__DOT____VdfgTmp_h4699d5bf__0 
               >> (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        vlSelf->PvuTop__DOT____VdfgTmp_h8628893a__0 
            = (vlSelf->PvuTop__DOT____VdfgTmp_h461f427a__0 
               >> (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        vlSelf->PvuTop__DOT____VdfgTmp_he55579d4__0 
            = (vlSelf->PvuTop__DOT____VdfgTmp_h418052cc__0 
               >> (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
    } else {
        vlSelf->PvuTop__DOT____VdfgTmp_h5909e0af__0 = 0U;
        vlSelf->PvuTop__DOT____VdfgTmp_hbd281acc__0 = 0U;
        vlSelf->PvuTop__DOT____VdfgTmp_h8628893a__0 = 0U;
        vlSelf->PvuTop__DOT____VdfgTmp_he55579d4__0 = 0U;
    }
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
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_81)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                                                & ((IData)(vlSelf->__VdfgTmp_hee1354a9__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_hee1354a9__0))));
    vlSelf->io_int_o_2 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_81)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                                                & ((IData)(vlSelf->__VdfgTmp_h0453aeb4__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h0453aeb4__0))));
    vlSelf->io_int_o_1 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_81)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                                                & ((IData)(vlSelf->__VdfgTmp_h10c27d8c__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h10c27d8c__0))));
    vlSelf->io_int_o_0 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_81)))
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
                          : 0U) : 0U) + ((IData)(vlSelf->PvuTop__DOT___GEN_36)
                                          ? 0U : (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___comptree_io_result_o))));
    vlSelf->PvuTop__DOT___GEN_88 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h41d5b416__0)
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__15(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__15\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter__DOT___temp_results_0_T_2 = 0;
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__16(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__16\n"); );
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__17(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__17\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter__DOT___temp_results_0_T_2 = 0;
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__18(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__18\n"); );
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__19(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__19\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_1__DOT___temp_results_0_T_2 = 0;
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__20(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__20\n"); );
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__21(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__21\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_1__DOT___temp_results_0_T_2 = 0;
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__22(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__22\n"); );
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__23(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__23\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_sub__DOT__shifter_2__DOT___temp_results_0_T_2 = 0;
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__24(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__24\n"); );
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

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__25(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__25\n"); );
    // Init
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_3_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_2_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_1_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*29:0*/ PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_0_T_2;
    PvuTop__DOT__frac_norm_add__DOT__shifter_2__DOT___temp_results_0_T_2 = 0;
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
