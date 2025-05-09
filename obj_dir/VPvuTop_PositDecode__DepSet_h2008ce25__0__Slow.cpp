// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_PositDecode.h"
#include "VPvuTop__Syms.h"

VL_ATTR_COLD void VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__decode1__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__decode1__0\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__PVT__isNaR_3 = (IData)((0x80000000U == vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_3));
    vlSelf->__PVT__operand_3 = (0x7fffffffU & ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_3 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_3))
                                                : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_3));
    vlSelf->__PVT__isNaR_2 = (IData)((0x80000000U == vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_2));
    vlSelf->__PVT__operand_2 = (0x7fffffffU & ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_2 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_2))
                                                : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_2));
    vlSelf->__PVT__isNaR_1 = (IData)((0x80000000U == vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_1));
    vlSelf->__PVT__operand_1 = (0x7fffffffU & ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_1 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_1))
                                                : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_1));
    vlSelf->__PVT__isNaR_0 = (IData)((0x80000000U == vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_0));
    vlSelf->__PVT__operand_0 = (0x7fffffffU & ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_0 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_0))
                                                : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode1__io_posit_0));
    vlSelf->__Vcellinp__lzcModule_3__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_3 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_3));
    vlSelf->__Vcellinp__lzcModule_2__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_2 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_2));
    vlSelf->__Vcellinp__lzcModule_1__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_1 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_1));
    vlSelf->__Vcellinp__lzcModule__in_i = (0x7fffffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__operand_0 
                                                             >> 0x1eU)))) 
                                              ^ vlSelf->__PVT__operand_0));
    vlSelf->__PVT___lzcModule_3_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_3_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i));
                goto __Vlabel1;
            }
            vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel1: ;
    }
    vlSelf->__PVT___lzcModule_2_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_2_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i));
                goto __Vlabel2;
            }
            vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel2: ;
    }
    vlSelf->__PVT___lzcModule_1_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_1_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i));
                goto __Vlabel3;
            }
            vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel3: ;
    }
    vlSelf->__PVT___lzcModule_cnt_o = 0U;
    vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_cnt_o = (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      - vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i));
                goto __Vlabel4;
            }
            vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel4: ;
    }
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (vlSelf->__PVT__operand_3 
                              << 0x10U) : vlSelf->__PVT__operand_3));
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (vlSelf->__PVT__operand_2 
                              << 0x10U) : vlSelf->__PVT__operand_2));
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (vlSelf->__PVT__operand_1 
                              << 0x10U) : vlSelf->__PVT__operand_1));
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (vlSelf->__PVT__operand_0 
                              << 0x10U) : vlSelf->__PVT__operand_0));
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_3__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_2__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_1__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_3__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_2__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_1__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_3__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_2__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_1__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_3_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                         ? (__PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_3__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_2_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                         ? (__PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_1_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                         ? (__PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_io_result_o = (0x7fffffffU 
                                                  & ((1U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                                                      ? 
                                                     (__PVT__barrel_shifter__DOT___temp_results_0_T_2 
                                                      << 1U)
                                                      : __PVT__barrel_shifter__DOT___temp_results_0_T_2));
}

VL_ATTR_COLD void VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__decode2__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__decode2__0\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__PVT__isNaR_3 = (IData)((0x80000000U == vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_3));
    vlSelf->__PVT__operand_3 = (0x7fffffffU & ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_3 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_3))
                                                : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_3));
    vlSelf->__PVT__isNaR_2 = (IData)((0x80000000U == vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_2));
    vlSelf->__PVT__operand_2 = (0x7fffffffU & ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_2 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_2))
                                                : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_2));
    vlSelf->__PVT__isNaR_1 = (IData)((0x80000000U == vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_1));
    vlSelf->__PVT__operand_1 = (0x7fffffffU & ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_1 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_1))
                                                : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_1));
    vlSelf->__PVT__isNaR_0 = (IData)((0x80000000U == vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_0));
    vlSelf->__PVT__operand_0 = (0x7fffffffU & ((vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_0 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_0))
                                                : vlSymsp->TOP.PvuTop__DOT____Vcellinp__decode2__io_posit_0));
    vlSelf->__Vcellinp__lzcModule_3__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_3 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_3));
    vlSelf->__Vcellinp__lzcModule_2__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_2 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_2));
    vlSelf->__Vcellinp__lzcModule_1__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_1 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_1));
    vlSelf->__Vcellinp__lzcModule__in_i = (0x7fffffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__operand_0 
                                                             >> 0x1eU)))) 
                                              ^ vlSelf->__PVT__operand_0));
    vlSelf->__PVT___lzcModule_3_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_3_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i));
                goto __Vlabel5;
            }
            vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel5: ;
    }
    vlSelf->__PVT___lzcModule_2_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_2_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i));
                goto __Vlabel6;
            }
            vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel6: ;
    }
    vlSelf->__PVT___lzcModule_1_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_1_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i));
                goto __Vlabel7;
            }
            vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel7: ;
    }
    vlSelf->__PVT___lzcModule_cnt_o = 0U;
    vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_cnt_o = (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      - vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i));
                goto __Vlabel8;
            }
            vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel8: ;
    }
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (vlSelf->__PVT__operand_3 
                              << 0x10U) : vlSelf->__PVT__operand_3));
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (vlSelf->__PVT__operand_2 
                              << 0x10U) : vlSelf->__PVT__operand_2));
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (vlSelf->__PVT__operand_1 
                              << 0x10U) : vlSelf->__PVT__operand_1));
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (vlSelf->__PVT__operand_0 
                              << 0x10U) : vlSelf->__PVT__operand_0));
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_3__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_2__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_1__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_3__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_2__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_1__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_3__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_2__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_1__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_3_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                         ? (__PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_3__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_2_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                         ? (__PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_1_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                         ? (__PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_io_result_o = (0x7fffffffU 
                                                  & ((1U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                                                      ? 
                                                     (__PVT__barrel_shifter__DOT___temp_results_0_T_2 
                                                      << 1U)
                                                      : __PVT__barrel_shifter__DOT___temp_results_0_T_2));
}

VL_ATTR_COLD void VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__result_converted_decoder__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__result_converted_decoder__0\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__PVT__isNaR_3 = (IData)((0x80000000U == vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_3));
    vlSelf->__PVT__operand_3 = (0x7fffffffU & ((vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_3 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_3))
                                                : vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_3));
    vlSelf->__PVT__isNaR_2 = (IData)((0x80000000U == vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_2));
    vlSelf->__PVT__operand_2 = (0x7fffffffU & ((vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_2 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_2))
                                                : vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_2));
    vlSelf->__PVT__isNaR_1 = (IData)((0x80000000U == vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_1));
    vlSelf->__PVT__operand_1 = (0x7fffffffU & ((vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_1 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_1))
                                                : vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_1));
    vlSelf->__PVT__isNaR_0 = (IData)((0x80000000U == vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_0));
    vlSelf->__PVT__operand_0 = (0x7fffffffU & ((vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_0 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_0))
                                                : vlSymsp->TOP.PvuTop__DOT___result_converter_io_posit_o_0));
    vlSelf->__Vcellinp__lzcModule_3__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_3 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_3));
    vlSelf->__Vcellinp__lzcModule_2__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_2 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_2));
    vlSelf->__Vcellinp__lzcModule_1__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_1 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_1));
    vlSelf->__Vcellinp__lzcModule__in_i = (0x7fffffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__operand_0 
                                                             >> 0x1eU)))) 
                                              ^ vlSelf->__PVT__operand_0));
    vlSelf->__PVT___lzcModule_3_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_3_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i));
                goto __Vlabel9;
            }
            vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel9: ;
    }
    vlSelf->__PVT___lzcModule_2_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_2_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i));
                goto __Vlabel10;
            }
            vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel10: ;
    }
    vlSelf->__PVT___lzcModule_1_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_1_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i));
                goto __Vlabel11;
            }
            vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel11: ;
    }
    vlSelf->__PVT___lzcModule_cnt_o = 0U;
    vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_cnt_o = (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      - vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i));
                goto __Vlabel12;
            }
            vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel12: ;
    }
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (vlSelf->__PVT__operand_3 
                              << 0x10U) : vlSelf->__PVT__operand_3));
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (vlSelf->__PVT__operand_2 
                              << 0x10U) : vlSelf->__PVT__operand_2));
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (vlSelf->__PVT__operand_1 
                              << 0x10U) : vlSelf->__PVT__operand_1));
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (vlSelf->__PVT__operand_0 
                              << 0x10U) : vlSelf->__PVT__operand_0));
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_3__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_2__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_1__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_3__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_2__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_1__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_3__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_2__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_1__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_3_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                         ? (__PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_3__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_2_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                         ? (__PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_1_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                         ? (__PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_io_result_o = (0x7fffffffU 
                                                  & ((1U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                                                      ? 
                                                     (__PVT__barrel_shifter__DOT___temp_results_0_T_2 
                                                      << 1U)
                                                      : __PVT__barrel_shifter__DOT___temp_results_0_T_2));
    if (vlSelf->__PVT__isNaR_3) {
        vlSelf->io_Frac_3 = 0U;
        vlSelf->io_Exp_3 = 0U;
    } else {
        vlSelf->io_Frac_3 = (((IData)((0U != vlSelf->__PVT__operand_3)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_3 = ((((0U != vlSelf->__Vcellinp__lzcModule_3__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_3)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_3_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_3_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_3__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_2) {
        vlSelf->io_Frac_2 = 0U;
        vlSelf->io_Exp_2 = 0U;
    } else {
        vlSelf->io_Frac_2 = (((IData)((0U != vlSelf->__PVT__operand_2)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_2 = ((((0U != vlSelf->__Vcellinp__lzcModule_2__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_2)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_2_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_2_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_2__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_1) {
        vlSelf->io_Frac_1 = 0U;
        vlSelf->io_Exp_1 = 0U;
    } else {
        vlSelf->io_Frac_1 = (((IData)((0U != vlSelf->__PVT__operand_1)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_1 = ((((0U != vlSelf->__Vcellinp__lzcModule_1__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_1)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_1_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_1_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_1__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_0) {
        vlSelf->io_Frac_0 = 0U;
        vlSelf->io_Exp_0 = 0U;
    } else {
        vlSelf->io_Frac_0 = (((IData)((0U != vlSelf->__PVT__operand_0)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_0 = ((((0U != vlSelf->__Vcellinp__lzcModule__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_0)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
}

VL_ATTR_COLD void VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder__0\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__PVT__isNaR_0 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_0));
    vlSelf->__PVT__isNaR_1 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_1));
    vlSelf->__PVT__isNaR_2 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_2));
    vlSelf->__PVT__isNaR_3 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_3));
    vlSelf->__PVT__operand_0 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_0 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_0))
                                                : vlSymsp->TOP.io_posit_i1_0));
    vlSelf->__PVT__operand_1 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_1 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_1))
                                                : vlSymsp->TOP.io_posit_i1_1));
    vlSelf->__PVT__operand_2 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_2 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_2))
                                                : vlSymsp->TOP.io_posit_i1_2));
    vlSelf->__PVT__operand_3 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_3 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_3))
                                                : vlSymsp->TOP.io_posit_i1_3));
    vlSelf->__Vcellinp__lzcModule__in_i = (0x7fffffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__operand_0 
                                                             >> 0x1eU)))) 
                                              ^ vlSelf->__PVT__operand_0));
    vlSelf->__Vcellinp__lzcModule_1__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_1 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_1));
    vlSelf->__Vcellinp__lzcModule_2__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_2 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_2));
    vlSelf->__Vcellinp__lzcModule_3__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_3 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_3));
    vlSelf->__PVT___lzcModule_cnt_o = 0U;
    vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_cnt_o = (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      - vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i));
                goto __Vlabel13;
            }
            vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel13: ;
    }
    vlSelf->__PVT___lzcModule_1_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_1_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i));
                goto __Vlabel14;
            }
            vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel14: ;
    }
    vlSelf->__PVT___lzcModule_2_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_2_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i));
                goto __Vlabel15;
            }
            vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel15: ;
    }
    vlSelf->__PVT___lzcModule_3_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_3_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i));
                goto __Vlabel16;
            }
            vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel16: ;
    }
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (vlSelf->__PVT__operand_0 
                              << 0x10U) : vlSelf->__PVT__operand_0));
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (vlSelf->__PVT__operand_1 
                              << 0x10U) : vlSelf->__PVT__operand_1));
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (vlSelf->__PVT__operand_2 
                              << 0x10U) : vlSelf->__PVT__operand_2));
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (vlSelf->__PVT__operand_3 
                              << 0x10U) : vlSelf->__PVT__operand_3));
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_1__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_2__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_3__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_1__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_2__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_3__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_1__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_2__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_io_result_o = (0x7fffffffU 
                                                  & ((1U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                                                      ? 
                                                     (__PVT__barrel_shifter__DOT___temp_results_0_T_2 
                                                      << 1U)
                                                      : __PVT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_1_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                         ? (__PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_2_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                         ? (__PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_3_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                         ? (__PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_3__DOT___temp_results_0_T_2));
    if (vlSelf->__PVT__isNaR_0) {
        vlSelf->io_Frac_0 = 0U;
        vlSelf->io_Exp_0 = 0U;
    } else {
        vlSelf->io_Frac_0 = (((IData)((0U != vlSelf->__PVT__operand_0)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_0 = ((((0U != vlSelf->__Vcellinp__lzcModule__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_0)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_1) {
        vlSelf->io_Frac_1 = 0U;
        vlSelf->io_Exp_1 = 0U;
    } else {
        vlSelf->io_Frac_1 = (((IData)((0U != vlSelf->__PVT__operand_1)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_1 = ((((0U != vlSelf->__Vcellinp__lzcModule_1__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_1)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_1_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_1_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_1__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_2) {
        vlSelf->io_Frac_2 = 0U;
        vlSelf->io_Exp_2 = 0U;
    } else {
        vlSelf->io_Frac_2 = (((IData)((0U != vlSelf->__PVT__operand_2)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_2 = ((((0U != vlSelf->__Vcellinp__lzcModule_2__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_2)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_2_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_2_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_2__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_3) {
        vlSelf->io_Frac_3 = 0U;
        vlSelf->io_Exp_3 = 0U;
    } else {
        vlSelf->io_Frac_3 = (((IData)((0U != vlSelf->__PVT__operand_3)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_3 = ((((0U != vlSelf->__Vcellinp__lzcModule_3__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_3)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_3_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_3_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_3__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
}

VL_ATTR_COLD void VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder__0\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__PVT__isNaR_0 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_0));
    vlSelf->__PVT__isNaR_1 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_1));
    vlSelf->__PVT__isNaR_2 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_2));
    vlSelf->__PVT__isNaR_3 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_3));
    vlSelf->__PVT__operand_0 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_0 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_0))
                                                : vlSymsp->TOP.io_posit_i1_0));
    vlSelf->__PVT__operand_1 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_1 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_1))
                                                : vlSymsp->TOP.io_posit_i1_1));
    vlSelf->__PVT__operand_2 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_2 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_2))
                                                : vlSymsp->TOP.io_posit_i1_2));
    vlSelf->__PVT__operand_3 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_3 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_3))
                                                : vlSymsp->TOP.io_posit_i1_3));
    vlSelf->__Vcellinp__lzcModule__in_i = (0x7fffffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__operand_0 
                                                             >> 0x1eU)))) 
                                              ^ vlSelf->__PVT__operand_0));
    vlSelf->__Vcellinp__lzcModule_1__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_1 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_1));
    vlSelf->__Vcellinp__lzcModule_2__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_2 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_2));
    vlSelf->__Vcellinp__lzcModule_3__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_3 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_3));
    vlSelf->__PVT___lzcModule_cnt_o = 0U;
    vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_cnt_o = (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      - vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i));
                goto __Vlabel17;
            }
            vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel17: ;
    }
    vlSelf->__PVT___lzcModule_1_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_1_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i));
                goto __Vlabel18;
            }
            vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel18: ;
    }
    vlSelf->__PVT___lzcModule_2_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_2_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i));
                goto __Vlabel19;
            }
            vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel19: ;
    }
    vlSelf->__PVT___lzcModule_3_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_3_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i));
                goto __Vlabel20;
            }
            vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel20: ;
    }
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (vlSelf->__PVT__operand_0 
                              << 0x10U) : vlSelf->__PVT__operand_0));
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (vlSelf->__PVT__operand_1 
                              << 0x10U) : vlSelf->__PVT__operand_1));
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (vlSelf->__PVT__operand_2 
                              << 0x10U) : vlSelf->__PVT__operand_2));
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (vlSelf->__PVT__operand_3 
                              << 0x10U) : vlSelf->__PVT__operand_3));
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_1__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_2__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_3__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_1__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_2__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_3__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_1__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_2__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_io_result_o = (0x7fffffffU 
                                                  & ((1U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                                                      ? 
                                                     (__PVT__barrel_shifter__DOT___temp_results_0_T_2 
                                                      << 1U)
                                                      : __PVT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_1_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                         ? (__PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_2_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                         ? (__PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_3_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                         ? (__PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_3__DOT___temp_results_0_T_2));
    if (vlSelf->__PVT__isNaR_0) {
        vlSelf->io_Frac_0 = 0U;
        vlSelf->io_Exp_0 = 0U;
    } else {
        vlSelf->io_Frac_0 = (((IData)((0U != vlSelf->__PVT__operand_0)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_0 = ((((0U != vlSelf->__Vcellinp__lzcModule__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_0)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_1) {
        vlSelf->io_Frac_1 = 0U;
        vlSelf->io_Exp_1 = 0U;
    } else {
        vlSelf->io_Frac_1 = (((IData)((0U != vlSelf->__PVT__operand_1)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_1 = ((((0U != vlSelf->__Vcellinp__lzcModule_1__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_1)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_1_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_1_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_1__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_2) {
        vlSelf->io_Frac_2 = 0U;
        vlSelf->io_Exp_2 = 0U;
    } else {
        vlSelf->io_Frac_2 = (((IData)((0U != vlSelf->__PVT__operand_2)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_2 = ((((0U != vlSelf->__Vcellinp__lzcModule_2__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_2)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_2_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_2_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_2__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_3) {
        vlSelf->io_Frac_3 = 0U;
        vlSelf->io_Exp_3 = 0U;
    } else {
        vlSelf->io_Frac_3 = (((IData)((0U != vlSelf->__PVT__operand_3)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_3 = ((((0U != vlSelf->__Vcellinp__lzcModule_3__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_3)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_3_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_3_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_3__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
}

VL_ATTR_COLD void VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder__0\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__PVT__isNaR_0 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_0));
    vlSelf->__PVT__isNaR_1 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_1));
    vlSelf->__PVT__isNaR_2 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_2));
    vlSelf->__PVT__isNaR_3 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_3));
    vlSelf->__PVT__operand_0 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_0 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_0))
                                                : vlSymsp->TOP.io_posit_i1_0));
    vlSelf->__PVT__operand_1 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_1 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_1))
                                                : vlSymsp->TOP.io_posit_i1_1));
    vlSelf->__PVT__operand_2 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_2 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_2))
                                                : vlSymsp->TOP.io_posit_i1_2));
    vlSelf->__PVT__operand_3 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_3 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_3))
                                                : vlSymsp->TOP.io_posit_i1_3));
    vlSelf->__Vcellinp__lzcModule__in_i = (0x7fffffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__operand_0 
                                                             >> 0x1eU)))) 
                                              ^ vlSelf->__PVT__operand_0));
    vlSelf->__Vcellinp__lzcModule_1__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_1 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_1));
    vlSelf->__Vcellinp__lzcModule_2__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_2 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_2));
    vlSelf->__Vcellinp__lzcModule_3__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_3 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_3));
    vlSelf->__PVT___lzcModule_cnt_o = 0U;
    vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_cnt_o = (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      - vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i));
                goto __Vlabel21;
            }
            vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel21: ;
    }
    vlSelf->__PVT___lzcModule_1_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_1_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i));
                goto __Vlabel22;
            }
            vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel22: ;
    }
    vlSelf->__PVT___lzcModule_2_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_2_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i));
                goto __Vlabel23;
            }
            vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel23: ;
    }
    vlSelf->__PVT___lzcModule_3_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_3_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i));
                goto __Vlabel24;
            }
            vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel24: ;
    }
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (vlSelf->__PVT__operand_0 
                              << 0x10U) : vlSelf->__PVT__operand_0));
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (vlSelf->__PVT__operand_1 
                              << 0x10U) : vlSelf->__PVT__operand_1));
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (vlSelf->__PVT__operand_2 
                              << 0x10U) : vlSelf->__PVT__operand_2));
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (vlSelf->__PVT__operand_3 
                              << 0x10U) : vlSelf->__PVT__operand_3));
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_1__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_2__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_3__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_1__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_2__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_3__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_1__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_2__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_io_result_o = (0x7fffffffU 
                                                  & ((1U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                                                      ? 
                                                     (__PVT__barrel_shifter__DOT___temp_results_0_T_2 
                                                      << 1U)
                                                      : __PVT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_1_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                         ? (__PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_2_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                         ? (__PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_3_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                         ? (__PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_3__DOT___temp_results_0_T_2));
    if (vlSelf->__PVT__isNaR_0) {
        vlSelf->io_Frac_0 = 0U;
        vlSelf->io_Exp_0 = 0U;
    } else {
        vlSelf->io_Frac_0 = (((IData)((0U != vlSelf->__PVT__operand_0)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_0 = ((((0U != vlSelf->__Vcellinp__lzcModule__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_0)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_1) {
        vlSelf->io_Frac_1 = 0U;
        vlSelf->io_Exp_1 = 0U;
    } else {
        vlSelf->io_Frac_1 = (((IData)((0U != vlSelf->__PVT__operand_1)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_1 = ((((0U != vlSelf->__Vcellinp__lzcModule_1__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_1)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_1_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_1_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_1__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_2) {
        vlSelf->io_Frac_2 = 0U;
        vlSelf->io_Exp_2 = 0U;
    } else {
        vlSelf->io_Frac_2 = (((IData)((0U != vlSelf->__PVT__operand_2)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_2 = ((((0U != vlSelf->__Vcellinp__lzcModule_2__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_2)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_2_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_2_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_2__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_3) {
        vlSelf->io_Frac_3 = 0U;
        vlSelf->io_Exp_3 = 0U;
    } else {
        vlSelf->io_Frac_3 = (((IData)((0U != vlSelf->__PVT__operand_3)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_3 = ((((0U != vlSelf->__Vcellinp__lzcModule_3__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_3)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_3_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_3_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_3__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
}

VL_ATTR_COLD void VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder__0\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__PVT__isNaR_0 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_0));
    vlSelf->__PVT__isNaR_1 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_1));
    vlSelf->__PVT__isNaR_2 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_2));
    vlSelf->__PVT__isNaR_3 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_3));
    vlSelf->__PVT__operand_0 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_0 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_0))
                                                : vlSymsp->TOP.io_posit_i1_0));
    vlSelf->__PVT__operand_1 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_1 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_1))
                                                : vlSymsp->TOP.io_posit_i1_1));
    vlSelf->__PVT__operand_2 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_2 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_2))
                                                : vlSymsp->TOP.io_posit_i1_2));
    vlSelf->__PVT__operand_3 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_3 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_3))
                                                : vlSymsp->TOP.io_posit_i1_3));
    vlSelf->__Vcellinp__lzcModule__in_i = (0x7fffffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__operand_0 
                                                             >> 0x1eU)))) 
                                              ^ vlSelf->__PVT__operand_0));
    vlSelf->__Vcellinp__lzcModule_1__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_1 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_1));
    vlSelf->__Vcellinp__lzcModule_2__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_2 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_2));
    vlSelf->__Vcellinp__lzcModule_3__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_3 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_3));
    vlSelf->__PVT___lzcModule_cnt_o = 0U;
    vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_cnt_o = (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      - vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i));
                goto __Vlabel25;
            }
            vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel25: ;
    }
    vlSelf->__PVT___lzcModule_1_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_1_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i));
                goto __Vlabel26;
            }
            vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel26: ;
    }
    vlSelf->__PVT___lzcModule_2_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_2_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i));
                goto __Vlabel27;
            }
            vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel27: ;
    }
    vlSelf->__PVT___lzcModule_3_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_3_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i));
                goto __Vlabel28;
            }
            vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel28: ;
    }
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (vlSelf->__PVT__operand_0 
                              << 0x10U) : vlSelf->__PVT__operand_0));
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (vlSelf->__PVT__operand_1 
                              << 0x10U) : vlSelf->__PVT__operand_1));
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (vlSelf->__PVT__operand_2 
                              << 0x10U) : vlSelf->__PVT__operand_2));
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (vlSelf->__PVT__operand_3 
                              << 0x10U) : vlSelf->__PVT__operand_3));
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_1__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_2__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_3__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_1__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_2__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_3__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_1__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_2__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_io_result_o = (0x7fffffffU 
                                                  & ((1U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                                                      ? 
                                                     (__PVT__barrel_shifter__DOT___temp_results_0_T_2 
                                                      << 1U)
                                                      : __PVT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_1_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                         ? (__PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_2_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                         ? (__PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_3_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                         ? (__PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_3__DOT___temp_results_0_T_2));
    if (vlSelf->__PVT__isNaR_0) {
        vlSelf->io_Frac_0 = 0U;
        vlSelf->io_Exp_0 = 0U;
    } else {
        vlSelf->io_Frac_0 = (((IData)((0U != vlSelf->__PVT__operand_0)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_0 = ((((0U != vlSelf->__Vcellinp__lzcModule__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_0)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_1) {
        vlSelf->io_Frac_1 = 0U;
        vlSelf->io_Exp_1 = 0U;
    } else {
        vlSelf->io_Frac_1 = (((IData)((0U != vlSelf->__PVT__operand_1)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_1 = ((((0U != vlSelf->__Vcellinp__lzcModule_1__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_1)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_1_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_1_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_1__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_2) {
        vlSelf->io_Frac_2 = 0U;
        vlSelf->io_Exp_2 = 0U;
    } else {
        vlSelf->io_Frac_2 = (((IData)((0U != vlSelf->__PVT__operand_2)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_2 = ((((0U != vlSelf->__Vcellinp__lzcModule_2__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_2)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_2_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_2_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_2__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
    if (vlSelf->__PVT__isNaR_3) {
        vlSelf->io_Frac_3 = 0U;
        vlSelf->io_Exp_3 = 0U;
    } else {
        vlSelf->io_Frac_3 = (((IData)((0U != vlSelf->__PVT__operand_3)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                              >> 2U)));
        vlSelf->io_Exp_3 = ((((0U != vlSelf->__Vcellinp__lzcModule_3__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_3)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_3_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_3_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_3__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
    }
}

VL_ATTR_COLD void VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___stl_sequent__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder__0\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__PVT__isNaR_0 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_0));
    vlSelf->__PVT__isNaR_1 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_1));
    vlSelf->__PVT__isNaR_2 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_2));
    vlSelf->__PVT__isNaR_3 = (IData)((0x80000000U == vlSymsp->TOP.io_posit_i1_3));
    vlSelf->__PVT__operand_0 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_0 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_0))
                                                : vlSymsp->TOP.io_posit_i1_0));
    vlSelf->__PVT__operand_1 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_1 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_1))
                                                : vlSymsp->TOP.io_posit_i1_1));
    vlSelf->__PVT__operand_2 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_2 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_2))
                                                : vlSymsp->TOP.io_posit_i1_2));
    vlSelf->__PVT__operand_3 = (0x7fffffffU & ((vlSymsp->TOP.io_posit_i1_3 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP.io_posit_i1_3))
                                                : vlSymsp->TOP.io_posit_i1_3));
    vlSelf->__Vcellinp__lzcModule__in_i = (0x7fffffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__operand_0 
                                                             >> 0x1eU)))) 
                                              ^ vlSelf->__PVT__operand_0));
    vlSelf->__Vcellinp__lzcModule_1__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_1 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_1));
    vlSelf->__Vcellinp__lzcModule_2__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_2 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_2));
    vlSelf->__Vcellinp__lzcModule_3__in_i = (0x7fffffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__operand_3 
                                                               >> 0x1eU)))) 
                                                ^ vlSelf->__PVT__operand_3));
    vlSelf->__PVT___lzcModule_cnt_o = 0U;
    vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_cnt_o = (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      - vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i));
                goto __Vlabel29;
            }
            vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel29: ;
    }
    vlSelf->__PVT___lzcModule_1_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_1__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_1_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i));
                goto __Vlabel30;
            }
            vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_1__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel30: ;
    }
    vlSelf->__PVT___lzcModule_2_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_2__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_2_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i));
                goto __Vlabel31;
            }
            vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_2__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel31: ;
    }
    vlSelf->__PVT___lzcModule_3_cnt_o = 0U;
    vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i = 0x1eU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) {
            if (((0x1eU >= (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)) 
                 & (vlSelf->__Vcellinp__lzcModule_3__in_i 
                    >> (0x1fU & vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->__PVT___lzcModule_3_cnt_o = 
                    (0x1fU & ((IData)(0x1eU) - vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i));
                goto __Vlabel32;
            }
            vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                = (vlSelf->__PVT__lzcModule_3__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel32: ;
    }
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (vlSelf->__PVT__operand_0 
                              << 0x10U) : vlSelf->__PVT__operand_0));
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (vlSelf->__PVT__operand_1 
                              << 0x10U) : vlSelf->__PVT__operand_1));
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (vlSelf->__PVT__operand_2 
                              << 0x10U) : vlSelf->__PVT__operand_2));
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (vlSelf->__PVT__operand_3 
                              << 0x10U) : vlSelf->__PVT__operand_3));
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_1__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_2__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_3__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_1__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_2__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_3__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                           ? (__PVT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_1__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_2__DOT___temp_results_1_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_io_result_o = (0x7fffffffU 
                                                  & ((1U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->__PVT___lzcModule_cnt_o)))
                                                      ? 
                                                     (__PVT__barrel_shifter__DOT___temp_results_0_T_2 
                                                      << 1U)
                                                      : __PVT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_1_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_1_cnt_o)))
                         ? (__PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_2_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_2_cnt_o)))
                         ? (__PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->__PVT___barrel_shifter_3_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + (IData)(vlSelf->__PVT___lzcModule_3_cnt_o)))
                         ? (__PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_3__DOT___temp_results_0_T_2));
    if (vlSelf->__PVT__isNaR_0) {
        vlSelf->io_Exp_0 = 0U;
        vlSelf->io_Frac_0 = 0U;
    } else {
        vlSelf->io_Exp_0 = ((((0U != vlSelf->__Vcellinp__lzcModule__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_0)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
        vlSelf->io_Frac_0 = (((IData)((0U != vlSelf->__PVT__operand_0)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                              >> 2U)));
    }
    if (vlSelf->__PVT__isNaR_1) {
        vlSelf->io_Exp_1 = 0U;
        vlSelf->io_Frac_1 = 0U;
    } else {
        vlSelf->io_Exp_1 = ((((0U != vlSelf->__Vcellinp__lzcModule_1__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_1)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_1_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_1_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_1__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
        vlSelf->io_Frac_1 = (((IData)((0U != vlSelf->__PVT__operand_1)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                              >> 2U)));
    }
    if (vlSelf->__PVT__isNaR_2) {
        vlSelf->io_Exp_2 = 0U;
        vlSelf->io_Frac_2 = 0U;
    } else {
        vlSelf->io_Exp_2 = ((((0U != vlSelf->__Vcellinp__lzcModule_2__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_2)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_2_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_2_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_2__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
        vlSelf->io_Frac_2 = (((IData)((0U != vlSelf->__PVT__operand_2)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                              >> 2U)));
    }
    if (vlSelf->__PVT__isNaR_3) {
        vlSelf->io_Exp_3 = 0U;
        vlSelf->io_Frac_3 = 0U;
    } else {
        vlSelf->io_Exp_3 = ((((0U != vlSelf->__Vcellinp__lzcModule_3__in_i)
                               ? ((0x40000000U & vlSelf->__PVT__operand_3)
                                   ? (0x1fU & ((IData)(vlSelf->__PVT___lzcModule_3_cnt_o) 
                                               - (IData)(1U)))
                                   : (0x20U | (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->__PVT___lzcModule_3_cnt_o))))))
                               : 0U) << 2U) | ((0U 
                                                != vlSelf->__Vcellinp__lzcModule_3__in_i)
                                                ? (3U 
                                                   & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                                      >> 0x1dU))
                                                : 0U));
        vlSelf->io_Frac_3 = (((IData)((0U != vlSelf->__PVT__operand_3)) 
                              << 0x1bU) | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                              >> 2U)));
    }
}
