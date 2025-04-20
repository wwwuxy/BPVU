// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPvuTop__Syms.h"


extern const VlWide<9>/*287:0*/ VPvuTop__ConstPool__CONST_hc5471b50_0;
extern const VlWide<12>/*383:0*/ VPvuTop__ConstPool__CONST_h55404713_0;
extern const VlWide<15>/*479:0*/ VPvuTop__ConstPool__CONST_h5c9c0bc7_0;

VL_ATTR_COLD void VPvuTop___024root__trace_full_sub_8(VPvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_full_sub_8\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<9>/*287:0*/ __Vtemp_h40fbf5e9__0;
    VlWide<3>/*95:0*/ __Vtemp_h82f3b084__0;
    VlWide<4>/*127:0*/ __Vtemp_h77c88815__0;
    VlWide<4>/*127:0*/ __Vtemp_hd280c543__0;
    VlWide<4>/*127:0*/ __Vtemp_h95b92b9c__0;
    VlWide<3>/*95:0*/ __Vtemp_h1573502e__0;
    VlWide<4>/*127:0*/ __Vtemp_h8eb14285__0;
    VlWide<4>/*127:0*/ __Vtemp_hadd908e9__0;
    VlWide<5>/*159:0*/ __Vtemp_hc5d9e20e__0;
    VlWide<5>/*159:0*/ __Vtemp_h597cbf99__0;
    // Body
    bufp->fullWData(oldp+24454,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o),68);
    bufp->fullWData(oldp+24457,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o),68);
    bufp->fullWData(oldp+24460,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o),68);
    bufp->fullWData(oldp+24463,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o),68);
    bufp->fullSData(oldp+24466,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                                  ? ((5U > (0x3fU & 
                                            vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                      ? ((0x1c0U & 
                                          ((- (IData)(
                                                      (1U 
                                                       & ((((IData)(5U) 
                                                            - 
                                                            vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           - (IData)(1U)) 
                                                          >> 5U)))) 
                                           << 6U)) 
                                         | (0x3fU & 
                                            (((IData)(5U) 
                                              - vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                             - (IData)(1U))))
                                      : ((0x1c0U & 
                                          ((- (IData)(
                                                      (1U 
                                                       & ((- 
                                                           (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                            - (IData)(4U))) 
                                                          >> 5U)))) 
                                           << 6U)) 
                                         | (0x3fU & 
                                            (- (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                - (IData)(4U))))))
                                  : 0U)),9);
    bufp->fullBit(oldp+24467,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullQData(oldp+24468,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->fullQData(oldp+24470,((0x7ffffffffffffffULL 
                                 & ((1U & (((IData)(1U) 
                                            - vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                           - (IData)(1U)))
                                     ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                        >> 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2))),59);
    bufp->fullQData(oldp+24472,((0x7ffffffffffffffULL 
                                 & ((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
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
    bufp->fullWData(oldp+24474,(__Vtemp_h40fbf5e9__0),272);
    bufp->fullQData(oldp+24483,((((QData)((IData)((
                                                   (1U 
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
    bufp->fullWData(oldp+24485,(__Vtemp_h77c88815__0),112);
    bufp->fullWData(oldp+24489,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o),68);
    bufp->fullWData(oldp+24492,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o),68);
    bufp->fullWData(oldp+24495,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o),68);
    bufp->fullWData(oldp+24498,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o),68);
    bufp->fullIData(oldp+24501,(((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                    ? ((0U == (0x1fU 
                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                        ? ((0xe0U & 
                                            ((- (IData)(
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
                                        : ((0xe0U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((- 
                                                             vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            >> 4U)))) 
                                             << 5U)) 
                                           | (0x1fU 
                                              & (- 
                                                 vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                    : 0U) << 0x18U) 
                                 | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                       ? ((0U == (0x1fU 
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
                                       : 0U) << 0x10U) 
                                    | ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
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
                                          : 0U) << 8U) 
                                       | ((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
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
    bufp->fullWData(oldp+24502,(__Vtemp_hd280c543__0),112);
    bufp->fullBit(oldp+24506,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24507,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24508,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24509,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24510,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24511,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24512,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24513,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+24514,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o),30);
    bufp->fullIData(oldp+24515,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o),30);
    bufp->fullIData(oldp+24516,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o),30);
    bufp->fullIData(oldp+24517,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o),30);
    __Vtemp_h95b92b9c__0[0U] = vlSelf->io_posit_i2_0;
    __Vtemp_h95b92b9c__0[1U] = vlSelf->io_posit_i2_1;
    __Vtemp_h95b92b9c__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_posit_i2_2))));
    __Vtemp_h95b92b9c__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_posit_i2_2))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+24518,(__Vtemp_h95b92b9c__0),128);
    bufp->fullBit(oldp+24522,((0x80000000U == vlSelf->io_posit_i1_0)));
    bufp->fullBit(oldp+24523,((0x80000000U == vlSelf->io_posit_i2_0)));
    bufp->fullBit(oldp+24524,((0x80000000U == vlSelf->io_posit_i1_1)));
    bufp->fullBit(oldp+24525,((0x80000000U == vlSelf->io_posit_i2_1)));
    bufp->fullBit(oldp+24526,((0x80000000U == vlSelf->io_posit_i1_2)));
    bufp->fullBit(oldp+24527,((0x80000000U == vlSelf->io_posit_i2_2)));
    bufp->fullBit(oldp+24528,((0x80000000U == vlSelf->io_posit_i1_3)));
    bufp->fullBit(oldp+24529,((0x80000000U == vlSelf->io_posit_i2_3)));
    bufp->fullQData(oldp+24530,((((QData)((IData)((1U 
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
    bufp->fullBit(oldp+24532,((0U == vlSelf->io_posit_i1_0)));
    bufp->fullBit(oldp+24533,((0U == vlSelf->io_posit_i1_1)));
    bufp->fullBit(oldp+24534,((0U == vlSelf->io_posit_i1_2)));
    bufp->fullBit(oldp+24535,((0U == vlSelf->io_posit_i1_3)));
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
    bufp->fullWData(oldp+24536,(__Vtemp_h8eb14285__0),128);
    bufp->fullSData(oldp+24540,(((0x8000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign) 
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
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0))
                                                    ? 1U
                                                    : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0))
                                                   : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0))) 
                                        << 0xcU) | 
                                       ((0x800U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign) 
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
    bufp->fullQData(oldp+24541,((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2)
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
    bufp->fullIData(oldp+24543,(((0x80000000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Sign) 
                                                 << 0x1cU)) 
                                 | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)
                                       ? 0U : (((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0) 
                                                | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                   >> 3U))
                                                ? 0xfU
                                                : (
                                                   ((~ 
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
                                     << 0x1bU) | ((
                                                   (((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0) 
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
    bufp->fullIData(oldp+24544,(((((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                    ? 0U : (IData)(vlSelf->__VdfgTmp_hd451a639__0)) 
                                  << 0x18U) | ((((0U 
                                                  == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
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
    bufp->fullWData(oldp+24545,(__Vtemp_hadd908e9__0),112);
    bufp->fullBit(oldp+24549,((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                       ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0))));
    bufp->fullBit(oldp+24550,((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                       ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0))));
    bufp->fullBit(oldp+24551,((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                       ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0))));
    bufp->fullBit(oldp+24552,((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                       ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0))));
    bufp->fullIData(oldp+24553,(((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                    ? (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.io_Exp 
                                       >> 0x18U) : 0U) 
                                  << 0x18U) | ((((2U 
                                                  < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                  ? 
                                                 (0xffU 
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
    bufp->fullIData(oldp+24554,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_io_result_o),31);
    bufp->fullIData(oldp+24555,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_1_io_result_o),31);
    bufp->fullIData(oldp+24556,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_2_io_result_o),31);
    bufp->fullIData(oldp+24557,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_3_io_result_o),31);
    bufp->fullBit(oldp+24558,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24559,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24560,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24561,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24562,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24563,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24564,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24565,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+24566,(vlSymsp->TOP__PvuTop__DOT__decode2.io_Exp),32);
    bufp->fullIData(oldp+24567,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_io_result_o),31);
    bufp->fullIData(oldp+24568,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_1_io_result_o),31);
    bufp->fullIData(oldp+24569,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_2_io_result_o),31);
    bufp->fullIData(oldp+24570,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_3_io_result_o),31);
    bufp->fullBit(oldp+24571,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24572,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24573,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24574,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24575,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24576,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24577,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24578,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullWData(oldp+24579,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.io_Frac),112);
    bufp->fullBit(oldp+24583,((1U & (~ vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24584,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24585,((1U & (~ vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24586,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24587,((1U & (~ vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24588,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24589,((1U & (~ vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24590,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullWData(oldp+24591,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac),112);
    bufp->fullBit(oldp+24595,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24596,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24597,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24598,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24599,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24600,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24601,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24602,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullWData(oldp+24603,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac),112);
    bufp->fullBit(oldp+24607,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24608,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24609,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24610,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24611,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24612,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24613,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24614,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullWData(oldp+24615,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac),112);
    bufp->fullBit(oldp+24619,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24620,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24621,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24622,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24623,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24624,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24625,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24626,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullWData(oldp+24627,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac),112);
    bufp->fullBit(oldp+24631,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24632,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24633,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24634,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24635,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24636,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24637,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24638,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+24639,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp),32);
    bufp->fullWData(oldp+24640,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac),112);
    bufp->fullBit(oldp+24644,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24645,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24646,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24647,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24648,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24649,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24650,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+24651,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+24652,(0U));
    bufp->fullIData(oldp+24653,(0x1fU),32);
    bufp->fullBit(oldp+24654,(1U));
    bufp->fullIData(oldp+24655,(5U),32);
    __Vtemp_hc5d9e20e__0[0U] = 0x8a418820U;
    __Vtemp_hc5d9e20e__0[1U] = 0xc5a92839U;
    __Vtemp_hc5d9e20e__0[2U] = 0xca307b9aU;
    __Vtemp_hc5d9e20e__0[3U] = 0x38bdab49U;
    __Vtemp_hc5d9e20e__0[4U] = 0x7bbcdebU;
    bufp->fullWData(oldp+24656,(__Vtemp_hc5d9e20e__0),155);
    bufp->fullBit(oldp+24661,(0U));
    bufp->fullCData(oldp+24662,(0U),5);
    bufp->fullIData(oldp+24663,(0x1eU),32);
    __Vtemp_h597cbf99__0[0U] = 0x8a418820U;
    __Vtemp_h597cbf99__0[1U] = 0xc5a92839U;
    __Vtemp_h597cbf99__0[2U] = 0xca307b9aU;
    __Vtemp_h597cbf99__0[3U] = 0x38bdab49U;
    __Vtemp_h597cbf99__0[4U] = 0x3bcdebU;
    bufp->fullWData(oldp+24664,(__Vtemp_h597cbf99__0),150);
    bufp->fullIData(oldp+24669,(0x3bU),32);
    bufp->fullIData(oldp+24670,(6U),32);
    bufp->fullWData(oldp+24671,(VPvuTop__ConstPool__CONST_h55404713_0),354);
    bufp->fullBit(oldp+24683,(1U));
    bufp->fullIData(oldp+24684,(0x44U),32);
    bufp->fullIData(oldp+24685,(7U),32);
    bufp->fullWData(oldp+24686,(VPvuTop__ConstPool__CONST_h5c9c0bc7_0),476);
}
