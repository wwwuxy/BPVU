// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop__Syms.h"
#include "VPvuTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__ico(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG

void VPvuTop___024root___eval_triggers__ico(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = ((vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(2U) = (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(3U) = (0U != (((((((
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
    vlSelf->__VicoTriggered.at(4U) = ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(5U) = (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(6U) = ((((((((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                             != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                            | (0U != 
                                               (((((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                           | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                              != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)) 
                                          | (0U != 
                                             (((((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                         | (0U != (
                                                   (((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[0U] 
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
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                        | (0U != ((
                                                   ((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x1bU])))) 
                                       | (0U != (((
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
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                      | (0U != ((((
                                                   ((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
    vlSelf->__VicoTriggered.at(7U) = (0U != (((((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                ^ vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VicoTriggered.at(8U) = ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(9U) = (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0xaU) = ((((((((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                               != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes) 
                                              | (0U 
                                                 != 
                                                 (((((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                             | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                                != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)) 
                                            | (0U != 
                                               (((((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                           | (0U != 
                                              ((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[0U] 
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
                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                          | (0U != 
                                             ((((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x1bU])))) 
                                         | (0U != (
                                                   (((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[0U] 
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
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                        | (0U != ((
                                                   ((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
    vlSelf->__VicoTriggered.at(0xbU) = (0U != (((((
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VicoTriggered.at(0xcU) = ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   (((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
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
    vlSelf->__VicoTriggered.at(0xdU) = (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0xeU) = ((((((((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                               != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
                                              | (0U 
                                                 != 
                                                 (((((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                     vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                             | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                                != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)) 
                                            | (0U != 
                                               (((((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                           | (0U != 
                                              ((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[0U] 
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
                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                          | (0U != 
                                             ((((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x1bU])))) 
                                         | (0U != (
                                                   (((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[0U] 
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
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                        | (0U != ((
                                                   ((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
    vlSelf->__VicoTriggered.at(0xfU) = (0U != (((((
                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VicoTriggered.at(0x10U) = ((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
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
    vlSelf->__VicoTriggered.at(0x11U) = (vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x12U) = ((((((((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                                != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes) 
                                               | (0U 
                                                  != 
                                                  (((((vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                              | (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                                 != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)) 
                                             | (0U 
                                                != 
                                                (((((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U])))) 
                                            | (0U != 
                                               ((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                           | (0U != 
                                              ((((((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
                                                  vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x1bU])))) 
                                          | (0U != 
                                             ((((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[0U] 
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
                                                 vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes[3U])))) 
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
    vlSelf->__VicoTriggered.at(0x13U) = (0U != ((((
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VicoTriggered.at(0x14U) = ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
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
    vlSelf->__VicoTriggered.at(0x15U) = (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x16U) = (0U != ((((
                                                   (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VicoTriggered.at(0x17U) = ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
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
    vlSelf->__VicoTriggered.at(0x18U) = (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x19U) = (0U != ((((
                                                   (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VicoTriggered.at(0x1aU) = ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
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
    vlSelf->__VicoTriggered.at(0x1bU) = (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x1cU) = (0U != ((((
                                                   (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VicoTriggered.at(0x1dU) = ((vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x1eU) = (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x1fU) = (0U != ((((
                                                   (vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VicoTriggered.at(0x20U) = ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x21U) = (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x22U) = (0U != ((((
                                                   (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U])));
    vlSelf->__VicoTriggered.at(0x23U) = ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x24U) = (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x25U) = ((0U != (((
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
    vlSelf->__VicoTriggered.at(0x26U) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x27U) = (0U != ((((
                                                   ((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x1bU])));
    vlSelf->__VicoTriggered.at(0x28U) = ((0U != (((
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
    vlSelf->__VicoTriggered.at(0x29U) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x2aU) = (0U != ((((
                                                   ((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes[0x1bU])));
    vlSelf->__VicoTriggered.at(0x2bU) = ((0U != (((
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
    vlSelf->__VicoTriggered.at(0x2cU) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x2dU) = (0U != ((((
                                                   ((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x1bU])));
    vlSelf->__VicoTriggered.at(0x2eU) = ((0U != (((
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
    vlSelf->__VicoTriggered.at(0x2fU) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x30U) = (0U != ((((
                                                   ((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes[0x1bU])));
    vlSelf->__VicoTriggered.at(0x31U) = ((0U != (((
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
    vlSelf->__VicoTriggered.at(0x32U) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x33U) = (0U != ((((
                                                   ((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x1bU])));
    vlSelf->__VicoTriggered.at(0x34U) = ((0U != (((
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
    vlSelf->__VicoTriggered.at(0x35U) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x36U) = (0U != ((((
                                                   ((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes[0x1bU])));
    vlSelf->__VicoTriggered.at(0x37U) = ((0U != (((
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
    vlSelf->__VicoTriggered.at(0x38U) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x39U) = (0U != ((((
                                                   ((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x1bU])));
    vlSelf->__VicoTriggered.at(0x3aU) = ((0U != (((
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
    vlSelf->__VicoTriggered.at(0x3bU) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x3cU) = (0U != ((((
                                                   ((((((((((((((((((((((((vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
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
                                                   vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes[0x1bU])));
    vlSelf->__VicoTriggered.at(0x3dU) = ((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x3eU) = (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x3fU) = ((((((((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x40U) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x41U) = ((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x42U) = (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x43U) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x44U) = ((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x45U) = (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x46U) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x47U) = ((vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x48U) = (vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x49U) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x4aU) = ((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x4bU) = (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x4cU) = ((((((((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x4dU) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x4eU) = ((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x4fU) = (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x50U) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x51U) = ((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x52U) = (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x53U) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x54U) = ((vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x55U) = (vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x56U) = (0U != ((((
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
    vlSelf->__VicoTriggered.at(0x57U) = ((vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x58U) = (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x59U) = ((vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x5aU) = (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x5bU) = ((vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x5cU) = (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x5dU) = ((vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x5eU) = (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x5fU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x60U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x61U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x62U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x63U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x64U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x65U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x66U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x67U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x68U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x69U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x6aU) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x6bU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x6cU) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x6dU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x6eU) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x6fU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x70U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x71U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x72U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x73U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x74U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x75U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x76U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x77U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x78U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x79U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x7aU) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x7bU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x7cU) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x7dU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x7eU) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x7fU) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x80U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x81U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x82U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x83U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x84U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x85U) = ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
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
    vlSelf->__VicoTriggered.at(0x86U) = (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes);
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
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
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
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__result_converted_decoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U];
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
        vlSelf->__VicoTriggered.at(2U) = 1U;
        vlSelf->__VicoTriggered.at(3U) = 1U;
        vlSelf->__VicoTriggered.at(4U) = 1U;
        vlSelf->__VicoTriggered.at(5U) = 1U;
        vlSelf->__VicoTriggered.at(6U) = 1U;
        vlSelf->__VicoTriggered.at(7U) = 1U;
        vlSelf->__VicoTriggered.at(8U) = 1U;
        vlSelf->__VicoTriggered.at(9U) = 1U;
        vlSelf->__VicoTriggered.at(0xaU) = 1U;
        vlSelf->__VicoTriggered.at(0xbU) = 1U;
        vlSelf->__VicoTriggered.at(0xcU) = 1U;
        vlSelf->__VicoTriggered.at(0xdU) = 1U;
        vlSelf->__VicoTriggered.at(0xeU) = 1U;
        vlSelf->__VicoTriggered.at(0xfU) = 1U;
        vlSelf->__VicoTriggered.at(0x10U) = 1U;
        vlSelf->__VicoTriggered.at(0x11U) = 1U;
        vlSelf->__VicoTriggered.at(0x12U) = 1U;
        vlSelf->__VicoTriggered.at(0x13U) = 1U;
        vlSelf->__VicoTriggered.at(0x14U) = 1U;
        vlSelf->__VicoTriggered.at(0x15U) = 1U;
        vlSelf->__VicoTriggered.at(0x16U) = 1U;
        vlSelf->__VicoTriggered.at(0x17U) = 1U;
        vlSelf->__VicoTriggered.at(0x18U) = 1U;
        vlSelf->__VicoTriggered.at(0x19U) = 1U;
        vlSelf->__VicoTriggered.at(0x1aU) = 1U;
        vlSelf->__VicoTriggered.at(0x1bU) = 1U;
        vlSelf->__VicoTriggered.at(0x1cU) = 1U;
        vlSelf->__VicoTriggered.at(0x1dU) = 1U;
        vlSelf->__VicoTriggered.at(0x1eU) = 1U;
        vlSelf->__VicoTriggered.at(0x1fU) = 1U;
        vlSelf->__VicoTriggered.at(0x20U) = 1U;
        vlSelf->__VicoTriggered.at(0x21U) = 1U;
        vlSelf->__VicoTriggered.at(0x22U) = 1U;
        vlSelf->__VicoTriggered.at(0x23U) = 1U;
        vlSelf->__VicoTriggered.at(0x24U) = 1U;
        vlSelf->__VicoTriggered.at(0x25U) = 1U;
        vlSelf->__VicoTriggered.at(0x26U) = 1U;
        vlSelf->__VicoTriggered.at(0x27U) = 1U;
        vlSelf->__VicoTriggered.at(0x28U) = 1U;
        vlSelf->__VicoTriggered.at(0x29U) = 1U;
        vlSelf->__VicoTriggered.at(0x2aU) = 1U;
        vlSelf->__VicoTriggered.at(0x2bU) = 1U;
        vlSelf->__VicoTriggered.at(0x2cU) = 1U;
        vlSelf->__VicoTriggered.at(0x2dU) = 1U;
        vlSelf->__VicoTriggered.at(0x2eU) = 1U;
        vlSelf->__VicoTriggered.at(0x2fU) = 1U;
        vlSelf->__VicoTriggered.at(0x30U) = 1U;
        vlSelf->__VicoTriggered.at(0x31U) = 1U;
        vlSelf->__VicoTriggered.at(0x32U) = 1U;
        vlSelf->__VicoTriggered.at(0x33U) = 1U;
        vlSelf->__VicoTriggered.at(0x34U) = 1U;
        vlSelf->__VicoTriggered.at(0x35U) = 1U;
        vlSelf->__VicoTriggered.at(0x36U) = 1U;
        vlSelf->__VicoTriggered.at(0x37U) = 1U;
        vlSelf->__VicoTriggered.at(0x38U) = 1U;
        vlSelf->__VicoTriggered.at(0x39U) = 1U;
        vlSelf->__VicoTriggered.at(0x3aU) = 1U;
        vlSelf->__VicoTriggered.at(0x3bU) = 1U;
        vlSelf->__VicoTriggered.at(0x3cU) = 1U;
        vlSelf->__VicoTriggered.at(0x3dU) = 1U;
        vlSelf->__VicoTriggered.at(0x3eU) = 1U;
        vlSelf->__VicoTriggered.at(0x3fU) = 1U;
        vlSelf->__VicoTriggered.at(0x40U) = 1U;
        vlSelf->__VicoTriggered.at(0x41U) = 1U;
        vlSelf->__VicoTriggered.at(0x42U) = 1U;
        vlSelf->__VicoTriggered.at(0x43U) = 1U;
        vlSelf->__VicoTriggered.at(0x44U) = 1U;
        vlSelf->__VicoTriggered.at(0x45U) = 1U;
        vlSelf->__VicoTriggered.at(0x46U) = 1U;
        vlSelf->__VicoTriggered.at(0x47U) = 1U;
        vlSelf->__VicoTriggered.at(0x48U) = 1U;
        vlSelf->__VicoTriggered.at(0x49U) = 1U;
        vlSelf->__VicoTriggered.at(0x4aU) = 1U;
        vlSelf->__VicoTriggered.at(0x4bU) = 1U;
        vlSelf->__VicoTriggered.at(0x4cU) = 1U;
        vlSelf->__VicoTriggered.at(0x4dU) = 1U;
        vlSelf->__VicoTriggered.at(0x4eU) = 1U;
        vlSelf->__VicoTriggered.at(0x4fU) = 1U;
        vlSelf->__VicoTriggered.at(0x50U) = 1U;
        vlSelf->__VicoTriggered.at(0x51U) = 1U;
        vlSelf->__VicoTriggered.at(0x52U) = 1U;
        vlSelf->__VicoTriggered.at(0x53U) = 1U;
        vlSelf->__VicoTriggered.at(0x54U) = 1U;
        vlSelf->__VicoTriggered.at(0x55U) = 1U;
        vlSelf->__VicoTriggered.at(0x56U) = 1U;
        vlSelf->__VicoTriggered.at(0x57U) = 1U;
        vlSelf->__VicoTriggered.at(0x58U) = 1U;
        vlSelf->__VicoTriggered.at(0x59U) = 1U;
        vlSelf->__VicoTriggered.at(0x5aU) = 1U;
        vlSelf->__VicoTriggered.at(0x5bU) = 1U;
        vlSelf->__VicoTriggered.at(0x5cU) = 1U;
        vlSelf->__VicoTriggered.at(0x5dU) = 1U;
        vlSelf->__VicoTriggered.at(0x5eU) = 1U;
        vlSelf->__VicoTriggered.at(0x5fU) = 1U;
        vlSelf->__VicoTriggered.at(0x60U) = 1U;
        vlSelf->__VicoTriggered.at(0x61U) = 1U;
        vlSelf->__VicoTriggered.at(0x62U) = 1U;
        vlSelf->__VicoTriggered.at(0x63U) = 1U;
        vlSelf->__VicoTriggered.at(0x64U) = 1U;
        vlSelf->__VicoTriggered.at(0x65U) = 1U;
        vlSelf->__VicoTriggered.at(0x66U) = 1U;
        vlSelf->__VicoTriggered.at(0x67U) = 1U;
        vlSelf->__VicoTriggered.at(0x68U) = 1U;
        vlSelf->__VicoTriggered.at(0x69U) = 1U;
        vlSelf->__VicoTriggered.at(0x6aU) = 1U;
        vlSelf->__VicoTriggered.at(0x6bU) = 1U;
        vlSelf->__VicoTriggered.at(0x6cU) = 1U;
        vlSelf->__VicoTriggered.at(0x6dU) = 1U;
        vlSelf->__VicoTriggered.at(0x6eU) = 1U;
        vlSelf->__VicoTriggered.at(0x6fU) = 1U;
        vlSelf->__VicoTriggered.at(0x70U) = 1U;
        vlSelf->__VicoTriggered.at(0x71U) = 1U;
        vlSelf->__VicoTriggered.at(0x72U) = 1U;
        vlSelf->__VicoTriggered.at(0x73U) = 1U;
        vlSelf->__VicoTriggered.at(0x74U) = 1U;
        vlSelf->__VicoTriggered.at(0x75U) = 1U;
        vlSelf->__VicoTriggered.at(0x76U) = 1U;
        vlSelf->__VicoTriggered.at(0x77U) = 1U;
        vlSelf->__VicoTriggered.at(0x78U) = 1U;
        vlSelf->__VicoTriggered.at(0x79U) = 1U;
        vlSelf->__VicoTriggered.at(0x7aU) = 1U;
        vlSelf->__VicoTriggered.at(0x7bU) = 1U;
        vlSelf->__VicoTriggered.at(0x7cU) = 1U;
        vlSelf->__VicoTriggered.at(0x7dU) = 1U;
        vlSelf->__VicoTriggered.at(0x7eU) = 1U;
        vlSelf->__VicoTriggered.at(0x7fU) = 1U;
        vlSelf->__VicoTriggered.at(0x80U) = 1U;
        vlSelf->__VicoTriggered.at(0x81U) = 1U;
        vlSelf->__VicoTriggered.at(0x82U) = 1U;
        vlSelf->__VicoTriggered.at(0x83U) = 1U;
        vlSelf->__VicoTriggered.at(0x84U) = 1U;
        vlSelf->__VicoTriggered.at(0x85U) = 1U;
        vlSelf->__VicoTriggered.at(0x86U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPvuTop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VPvuTop___024root___ico_sequent__TOP__1(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT___GEN_4;
    PvuTop__DOT___GEN_4 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_6;
    PvuTop__DOT___GEN_6 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_8;
    PvuTop__DOT___GEN_8 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_10;
    PvuTop__DOT___GEN_10 = 0;
    // Body
    PvuTop__DOT___GEN_10 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                            & ((IData)(vlSymsp->TOP__PvuTop__DOT__decode1.io_Sign) 
                               >> 3U));
    PvuTop__DOT___GEN_4 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                           & (IData)(vlSymsp->TOP__PvuTop__DOT__decode1.io_Sign));
    PvuTop__DOT___GEN_6 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                           & ((IData)(vlSymsp->TOP__PvuTop__DOT__decode1.io_Sign) 
                              >> 1U));
    PvuTop__DOT___GEN_8 = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                           & ((IData)(vlSymsp->TOP__PvuTop__DOT__decode1.io_Sign) 
                              >> 2U));
    if (vlSelf->io_Isposit) {
        vlSelf->PvuTop__DOT___GEN_134 = ((0xfffffff8U 
                                          & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                              << 3U) 
                                             & (IData)(vlSymsp->TOP__PvuTop__DOT__decode2.io_Sign))) 
                                         | ((0xfffffffcU 
                                             & (((2U 
                                                  < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                 << 2U) 
                                                & (IData)(vlSymsp->TOP__PvuTop__DOT__decode2.io_Sign))) 
                                            | ((0xfffffffeU 
                                                & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                    << 1U) 
                                                   & (IData)(vlSymsp->TOP__PvuTop__DOT__decode2.io_Sign))) 
                                               | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                  & (IData)(vlSymsp->TOP__PvuTop__DOT__decode2.io_Sign)))));
        vlSelf->PvuTop__DOT___GEN_40 = (((IData)(PvuTop__DOT___GEN_10) 
                                         << 3U) | (
                                                   ((IData)(PvuTop__DOT___GEN_8) 
                                                    << 2U) 
                                                   | (((IData)(PvuTop__DOT___GEN_6) 
                                                       << 1U) 
                                                      | (IData)(PvuTop__DOT___GEN_4))));
    } else {
        vlSelf->PvuTop__DOT___GEN_134 = ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfcce9a03__0) 
                                           & ((~ (IData)(vlSelf->io_Isposit)) 
                                              & (IData)(
                                                        (vlSelf->io_float_i2_3 
                                                         >> 0x1fU)))) 
                                          << 3U) | 
                                         ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hf8feb26e__0) 
                                            & ((~ (IData)(vlSelf->io_Isposit)) 
                                               & (IData)(
                                                         (vlSelf->io_float_i2_2 
                                                          >> 0x1fU)))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha4ea0160__0) 
                                             & ((~ (IData)(vlSelf->io_Isposit)) 
                                                & (IData)(
                                                          (vlSelf->io_float_i2_1 
                                                           >> 0x1fU)))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfc1dda1b__0) 
                                              & ((~ (IData)(vlSelf->io_Isposit)) 
                                                 & (IData)(
                                                           (vlSelf->io_float_i2_0 
                                                            >> 0x1fU)))))));
        vlSelf->PvuTop__DOT___GEN_40 = (((IData)(vlSelf->PvuTop__DOT___GEN_39) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->PvuTop__DOT___GEN_31) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->PvuTop__DOT___GEN_23) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->PvuTop__DOT___GEN_15))));
    }
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h878add96__0 
        = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
           & ((IData)(vlSelf->io_Isposit) ? (IData)(PvuTop__DOT___GEN_10)
               : (IData)(vlSelf->PvuTop__DOT___GEN_39)));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h87f12fa9__0 
        = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
           & ((IData)(vlSelf->io_Isposit) ? (IData)(PvuTop__DOT___GEN_4)
               : (IData)(vlSelf->PvuTop__DOT___GEN_15)));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h87f57e3c__0 
        = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
           & ((IData)(vlSelf->io_Isposit) ? (IData)(PvuTop__DOT___GEN_6)
               : (IData)(vlSelf->PvuTop__DOT___GEN_23)));
    vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h878e0f03__0 
        = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
           & ((IData)(vlSelf->io_Isposit) ? (IData)(PvuTop__DOT___GEN_8)
               : (IData)(vlSelf->PvuTop__DOT___GEN_31)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__io_pir_sign_o 
        = ((IData)(vlSelf->PvuTop__DOT___GEN_40) ^ (IData)(vlSelf->PvuTop__DOT___GEN_134));
    vlSelf->__VdfgTmp_he53970bf__0 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT___GEN_40)) 
                                            & (IData)(vlSelf->PvuTop__DOT___GEN_134)));
    vlSelf->__VdfgTmp_hf7267e6a__0 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT___GEN_134)) 
                                            & (IData)(vlSelf->PvuTop__DOT___GEN_40)));
    vlSelf->__VdfgTmp_hffb5dbbb__0 = (1U & ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                            | (IData)(vlSelf->PvuTop__DOT___GEN_134)));
    vlSelf->__VdfgTmp_h91b2e26a__0 = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                               >> 1U)));
    vlSelf->__VdfgTmp_hc465359f__0 = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                >> 1U)) 
                                            & ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                               >> 1U)));
    vlSelf->__VdfgTmp_hfe81dba1__0 = (1U & (((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                             | (IData)(vlSelf->PvuTop__DOT___GEN_134)) 
                                            >> 1U));
    vlSelf->__VdfgTmp_h175b7e19__0 = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                >> 2U)) 
                                            & ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                               >> 2U)));
    vlSelf->__VdfgTmp_h7300ed44__0 = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                >> 2U)) 
                                            & ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                               >> 2U)));
    vlSelf->__VdfgTmp_hb5d700b8__0 = (1U & (((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                             | (IData)(vlSelf->PvuTop__DOT___GEN_134)) 
                                            >> 2U));
    vlSelf->__VdfgTmp_h0ac2602d__0 = (IData)(((~ ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                  >> 3U)) 
                                              & ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                 >> 3U)));
    vlSelf->__VdfgTmp_h7f9446f2__0 = (IData)(((~ ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                  >> 3U)) 
                                              & ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                 >> 3U)));
    vlSelf->__VdfgTmp_hb52a27cf__0 = (1U & (((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                             | (IData)(vlSelf->PvuTop__DOT___GEN_134)) 
                                            >> 3U));
    vlSelf->PvuTop__DOT__add__DOT___GEN_1 = ((1U & 
                                              ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                               >> 2U)) 
                                             == (1U 
                                                 & ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                    >> 2U)));
    vlSelf->PvuTop__DOT__add__DOT___GEN_0 = ((1U & 
                                              ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                               >> 1U)) 
                                             == (1U 
                                                 & ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                    >> 1U)));
    vlSelf->PvuTop__DOT__add__DOT___GEN = ((1U & (IData)(vlSelf->PvuTop__DOT___GEN_40)) 
                                           == (1U & (IData)(vlSelf->PvuTop__DOT___GEN_134)));
    vlSelf->PvuTop__DOT__add__DOT___GEN_2 = ((1U & 
                                              ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                               >> 3U)) 
                                             == (1U 
                                                 & ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                    >> 3U)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__0\n"); );
    // Body
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h912770d6__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2)
            ? 0ULL : ((QData)((IData)((0x7ffffffU & 
                                       ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac[3U] 
                                         << 0xcU) | 
                                        (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac[2U] 
                                         >> 0x14U))))) 
                      << 0x19U));
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h9005e3f6__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1)
            ? 0ULL : ((QData)((IData)((0x7ffffffU & 
                                       ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac[2U] 
                                         << 8U) | (
                                                   vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac[1U] 
                                                   >> 0x18U))))) 
                      << 0x19U));
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h97139b66__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0)
            ? 0ULL : ((QData)((IData)((0x7ffffffU & 
                                       ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac[1U] 
                                         << 4U) | (
                                                   vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac[0U] 
                                                   >> 0x1cU))))) 
                      << 0x19U));
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h96e1ed81__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN)
            ? 0ULL : ((QData)((IData)((0x7ffffffU & 
                                       vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac[0U]))) 
                      << 0x19U));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__1(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__1\n"); );
    // Body
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2)) 
           & VL_LTS_III(8, 0xffU, (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                   >> 0x18U)));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1)) 
           & VL_LTS_III(8, 0xffU, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                            >> 0x10U))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0)) 
           & VL_LTS_III(8, 0xffU, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                            >> 8U))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN)) 
           & VL_LTS_III(8, 0xffU, (0xffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_3)) 
           & ((0U == vlSelf->io_posit_i1_3) | (VL_GTES_III(8, 0xffU, 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                            >> 0x18U)) 
                                               & (VL_GTS_III(8, 1U, 
                                                             (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                              >> 0x18U)) 
                                                  & (2U 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                          >> 0x18U))))))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_2)) 
           & ((0U == vlSelf->io_posit_i1_2) | (VL_GTES_III(8, 0xffU, 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                               >> 0x10U))) 
                                               & (VL_GTS_III(8, 1U, 
                                                             (0xffU 
                                                              & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                                 >> 0x10U))) 
                                                  & (2U 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                          >> 0x10U))))))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_1)) 
           & ((0U == vlSelf->io_posit_i1_1) | (VL_GTES_III(8, 0xffU, 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                               >> 8U))) 
                                               & (VL_GTS_III(8, 1U, 
                                                             (0xffU 
                                                              & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                                 >> 8U))) 
                                                  & (2U 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                          >> 8U))))))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR)) 
           & ((0U == vlSelf->io_posit_i1_0) | (VL_GTES_III(8, 0xffU, 
                                                           (0xffU 
                                                            & vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp)) 
                                               & (VL_GTS_III(8, 1U, 
                                                             (0xffU 
                                                              & vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp)) 
                                                  & (2U 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         - vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp)))))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_2 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN) 
           | VL_LTS_III(8, 0xffU, (0xffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_6 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0) 
           | VL_LTS_III(8, 0xffU, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                            >> 8U))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_10 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1) 
           | VL_LTS_III(8, 0xffU, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                            >> 0x10U))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_14 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2) 
           | VL_LTS_III(8, 0xffU, (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                   >> 0x18U)));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount 
        = ((0x1bU < (0xffU & ((IData)(1U) - vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp)))
            ? 0x1bU : (0xffU & ((IData)(1U) - vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_1 
        = ((0x1bU < (0xffU & ((IData)(1U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                             >> 8U))))
            ? 0x1bU : (0xffU & ((IData)(1U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                               >> 8U))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_2 
        = ((0x1bU < (0xffU & ((IData)(1U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                             >> 0x10U))))
            ? 0x1bU : (0xffU & ((IData)(1U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                               >> 0x10U))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_3 
        = ((0x1bU < (0xffU & ((IData)(1U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                             >> 0x18U))))
            ? 0x1bU : (0xffU & ((IData)(1U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                               >> 0x18U))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount))
            ? (0xfffffffU & ((0xfffffffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U]) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount)))
            : 0U);
    if (VL_GTS_III(8, 1U, (0xffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp))) {
        vlSelf->__VdfgTmp_h0a8ed410__0 = (3U & (2U 
                                                >= 
                                                (0xffU 
                                                 & ((IData)(1U) 
                                                    - vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp))));
        vlSelf->__VdfgTmp_h40a686be__0 = (7U & ((2U 
                                                 < 
                                                 (0xffU 
                                                  & ((IData)(1U) 
                                                     - vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp)))
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount))
                                                  ? 
                                                 vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U]
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         - vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(1U) 
                                                           - vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp)))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U]) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                - vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(1U) 
                                                                   - vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U]))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U]))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base)))))));
    } else {
        vlSelf->__VdfgTmp_h0a8ed410__0 = (3U & vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp);
        vlSelf->__VdfgTmp_h40a686be__0 = (7U & (((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U] 
                                                    >> 0x19U)) 
                                                + (1U 
                                                   & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U] 
                                                       >> 0x18U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x2ffffffU 
                                                                  & vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U])))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base_1 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_1))
            ? (0xfffffffU & ((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                             << 4U) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U] 
                                               >> 0x1cU))) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_1)))
            : 0U);
    if (VL_GTS_III(8, 1U, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                    >> 8U)))) {
        vlSelf->__VdfgTmp_hac6b94cd__0 = (3U & (2U 
                                                >= 
                                                (0xffU 
                                                 & ((IData)(1U) 
                                                    - 
                                                    (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                     >> 8U)))));
        vlSelf->__VdfgTmp_hb9ec287b__0 = (7U & ((2U 
                                                 < 
                                                 (0xffU 
                                                  & ((IData)(1U) 
                                                     - 
                                                     (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                      >> 8U))))
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_1))
                                                  ? 
                                                 ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U] 
                                                   << 4U) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U] 
                                                     >> 0x1cU))
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base_1 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                          >> 8U)))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(1U) 
                                                           - 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                            >> 8U))))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_1) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                                << 4U) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U] 
                                                                  >> 0x1cU))) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_1) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                - 
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                                 >> 8U)))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(1U) 
                                                                   - 
                                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                                    >> 8U)) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_1))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                                   << 4U) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U] 
                                                                     >> 0x1cU))))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_1) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_1) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_1) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_1) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                                      << 4U) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U] 
                                                                        >> 0x1cU))))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base_1)))))));
    } else {
        vlSelf->__VdfgTmp_hac6b94cd__0 = (3U & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                >> 8U));
        vlSelf->__VdfgTmp_hb9ec287b__0 = (7U & (((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                  << 0xbU) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                    >> 0x15U)) 
                                                + (1U 
                                                   & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                       >> 0x14U) 
                                                      & ((0U 
                                                          != 
                                                          (0xffffffU 
                                                           & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                               << 4U) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[0U] 
                                                                 >> 0x1cU)))) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                            >> 0x15U))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base_2 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_2))
            ? (0xfffffffU & ((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                               >> 0x18U))) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_2)))
            : 0U);
    if (VL_GTS_III(8, 1U, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                    >> 0x10U)))) {
        vlSelf->__VdfgTmp_h3ba1ecff__0 = (3U & (2U 
                                                >= 
                                                (0xffU 
                                                 & ((IData)(1U) 
                                                    - 
                                                    (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                     >> 0x10U)))));
        vlSelf->__VdfgTmp_hf52bdd2a__0 = (7U & ((2U 
                                                 < 
                                                 (0xffU 
                                                  & ((IData)(1U) 
                                                     - 
                                                     (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                      >> 0x10U))))
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_2))
                                                  ? 
                                                 ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                     >> 0x18U))
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base_2 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                          >> 0x10U)))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(1U) 
                                                           - 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                            >> 0x10U))))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_2) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                                  >> 0x18U))) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_2) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                - 
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                                 >> 0x10U)))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(1U) 
                                                                   - 
                                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                                    >> 0x10U)) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_2))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                                   << 8U) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                                     >> 0x18U))))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_2) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_2) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_2) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_2) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                                      << 8U) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                                        >> 0x18U))))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base_2)))))));
    } else {
        vlSelf->__VdfgTmp_h3ba1ecff__0 = (3U & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                >> 0x10U));
        vlSelf->__VdfgTmp_hf52bdd2a__0 = (7U & (((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                  << 0xfU) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                    >> 0x11U)) 
                                                + (1U 
                                                   & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                       >> 0x10U) 
                                                      & ((0U 
                                                          != 
                                                          (0xffffffU 
                                                           & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[1U] 
                                                                 >> 0x18U)))) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                            >> 0x11U))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base_3 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_3))
            ? (0xfffffffU & ((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[3U] 
                                             << 0xcU) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                               >> 0x14U))) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_3)))
            : 0U);
    if (VL_GTS_III(8, 1U, (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                           >> 0x18U))) {
        vlSelf->__VdfgTmp_h67c762b7__0 = (3U & (2U 
                                                >= 
                                                (0xffU 
                                                 & ((IData)(1U) 
                                                    - 
                                                    (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                     >> 0x18U)))));
        vlSelf->__VdfgTmp_hbeca2c52__0 = (7U & ((2U 
                                                 < 
                                                 (0xffU 
                                                  & ((IData)(1U) 
                                                     - 
                                                     (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                      >> 0x18U))))
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_3))
                                                  ? 
                                                 ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                     >> 0x14U))
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base_3 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                          >> 0x18U)))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(1U) 
                                                           - 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                            >> 0x18U))))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_3) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[3U] 
                                                                << 0xcU) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                                  >> 0x14U))) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_3) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                - 
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                                 >> 0x18U)))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(1U) 
                                                                   - 
                                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                                    >> 0x18U)) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_3))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[3U] 
                                                                   << 0xcU) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                                     >> 0x14U))))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_3) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_3) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_3) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_3) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[3U] 
                                                                      << 0xcU) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                                        >> 0x14U))))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base_3)))))));
    } else {
        vlSelf->__VdfgTmp_h67c762b7__0 = (3U & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Exp 
                                                >> 0x18U));
        vlSelf->__VdfgTmp_hbeca2c52__0 = (7U & (((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[3U] 
                                                  << 0x13U) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[3U] 
                                                    >> 0xdU)) 
                                                + (1U 
                                                   & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[3U] 
                                                       >> 0xcU) 
                                                      & ((0U 
                                                          != 
                                                          (0xffffffU 
                                                           & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[3U] 
                                                               << 0xcU) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[2U] 
                                                                 >> 0x14U)))) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac[3U] 
                                                            >> 0xdU))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96e1e338__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_2)
            ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h40a686be__0)));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96ba1187__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_6)
            ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_hb9ec287b__0)));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h968e33b0__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_10)
            ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_hf52bdd2a__0)));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_14)
            ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_hbeca2c52__0)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__2(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__2\n"); );
    // Body
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2)) 
           & VL_LTS_III(8, 6U, (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                >> 0x18U)));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1)) 
           & VL_LTS_III(8, 6U, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                         >> 0x10U))));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0)) 
           & VL_LTS_III(8, 6U, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                         >> 8U))));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN)) 
           & VL_LTS_III(8, 6U, (0xffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_3)) 
           & ((0U == vlSelf->io_posit_i1_3) | (VL_GTES_III(8, 6U, 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                            >> 0x18U)) 
                                               & (VL_GTS_III(8, 0xfaU, 
                                                             (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                              >> 0x18U)) 
                                                  & (0U 
                                                     != 
                                                     (0x3fU 
                                                      & (((IData)(0xfaU) 
                                                          - 
                                                          (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                           >> 0x18U)) 
                                                         >> 2U)))))));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_2)) 
           & ((0U == vlSelf->io_posit_i1_2) | (VL_GTES_III(8, 6U, 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                               >> 0x10U))) 
                                               & (VL_GTS_III(8, 0xfaU, 
                                                             (0xffU 
                                                              & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                                 >> 0x10U))) 
                                                  & (0U 
                                                     != 
                                                     (0x3fU 
                                                      & (((IData)(0xfaU) 
                                                          - 
                                                          (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                           >> 0x10U)) 
                                                         >> 2U)))))));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_1)) 
           & ((0U == vlSelf->io_posit_i1_1) | (VL_GTES_III(8, 6U, 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                               >> 8U))) 
                                               & (VL_GTS_III(8, 0xfaU, 
                                                             (0xffU 
                                                              & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                                 >> 8U))) 
                                                  & (0U 
                                                     != 
                                                     (0x3fU 
                                                      & (((IData)(0xfaU) 
                                                          - 
                                                          (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                           >> 8U)) 
                                                         >> 2U)))))));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR)) 
           & ((0U == vlSelf->io_posit_i1_0) | (VL_GTES_III(8, 6U, 
                                                           (0xffU 
                                                            & vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp)) 
                                               & (VL_GTS_III(8, 0xfaU, 
                                                             (0xffU 
                                                              & vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp)) 
                                                  & (0U 
                                                     != 
                                                     (0x3fU 
                                                      & (((IData)(0xfaU) 
                                                          - vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp) 
                                                         >> 2U)))))));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_1 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN) 
           | VL_LTS_III(8, 6U, (0xffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_4 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0) 
           | VL_LTS_III(8, 6U, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                         >> 8U))));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_7 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1) 
           | VL_LTS_III(8, 6U, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                         >> 0x10U))));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_10 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2) 
           | VL_LTS_III(8, 6U, (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                >> 0x18U)));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount 
        = ((0x1bU < (0xffU & ((IData)(0xfaU) - vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp)))
            ? 0x1bU : (0xffU & ((IData)(0xfaU) - vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_1 
        = ((0x1bU < (0xffU & ((IData)(0xfaU) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                >> 8U))))
            ? 0x1bU : (0xffU & ((IData)(0xfaU) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                  >> 8U))));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_2 
        = ((0x1bU < (0xffU & ((IData)(0xfaU) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                >> 0x10U))))
            ? 0x1bU : (0xffU & ((IData)(0xfaU) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                  >> 0x10U))));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_3 
        = ((0x1bU < (0xffU & ((IData)(0xfaU) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                >> 0x18U))))
            ? 0x1bU : (0xffU & ((IData)(0xfaU) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                  >> 0x18U))));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount))
            ? (0xfffffffU & ((0xfffffffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U]) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount)))
            : 0U);
    if (VL_GTS_III(8, 0xfaU, (0xffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp))) {
        if ((0U != (0x3fU & (((IData)(0xfaU) - vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp) 
                             >> 2U)))) {
            vlSelf->__VdfgTmp_haaab3f46__0 = (0x1fU 
                                              & 0U);
            vlSelf->__VdfgTmp_h4f025f70__0 = (0xfU 
                                              & 0U);
        } else {
            vlSelf->__VdfgTmp_haaab3f46__0 = (0x1fU 
                                              & 0x1aU);
            vlSelf->__VdfgTmp_h4f025f70__0 = (0xfU 
                                              & ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount))
                                                  ? 
                                                 vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U]
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0xfaU) 
                                                         - vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(0xfaU) 
                                                           - vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp)))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U]) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(0xfaU) 
                                                                - vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(0xfaU) 
                                                                   - vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U]))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U]))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base))))));
        }
    } else {
        vlSelf->__VdfgTmp_haaab3f46__0 = (0x1fU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp);
        vlSelf->__VdfgTmp_h4f025f70__0 = (0xfU & ((
                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U] 
                                                      >> 0x18U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U] 
                                                       >> 0x17U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x17fffffU 
                                                                  & vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U])))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base_1 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_1))
            ? (0xfffffffU & ((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                             << 4U) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U] 
                                               >> 0x1cU))) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_1)))
            : 0U);
    if (VL_GTS_III(8, 0xfaU, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                       >> 8U)))) {
        if ((0U != (0x3fU & (((IData)(0xfaU) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                >> 8U)) 
                             >> 2U)))) {
            vlSelf->__VdfgTmp_h4fb214a8__0 = (0x1fU 
                                              & 0U);
            vlSelf->__VdfgTmp_h8b0fae15__0 = (0xfU 
                                              & 0U);
        } else {
            vlSelf->__VdfgTmp_h4fb214a8__0 = (0x1fU 
                                              & 0x1aU);
            vlSelf->__VdfgTmp_h8b0fae15__0 = (0xfU 
                                              & ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_1))
                                                  ? 
                                                 ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U] 
                                                   << 4U) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U] 
                                                     >> 0x1cU))
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base_1 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0xfaU) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                          >> 8U)))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(0xfaU) 
                                                           - 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                            >> 8U))))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_1) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                                << 4U) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U] 
                                                                  >> 0x1cU))) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_1) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(0xfaU) 
                                                                - 
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                                 >> 8U)))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(0xfaU) 
                                                                   - 
                                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                                    >> 8U)) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_1))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                                   << 4U) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U] 
                                                                     >> 0x1cU))))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_1) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_1) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_1) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_1) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                                      << 4U) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U] 
                                                                        >> 0x1cU))))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base_1))))));
        }
    } else {
        vlSelf->__VdfgTmp_h4fb214a8__0 = (0x1fU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                   >> 8U));
        vlSelf->__VdfgTmp_h8b0fae15__0 = (0xfU & ((
                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                    << 0xcU) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                      >> 0x14U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                       >> 0x13U) 
                                                      & ((0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                               << 4U) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[0U] 
                                                                 >> 0x1cU)))) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                            >> 0x14U))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base_2 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_2))
            ? (0xfffffffU & ((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                               >> 0x18U))) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_2)))
            : 0U);
    if (VL_GTS_III(8, 0xfaU, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                       >> 0x10U)))) {
        if ((0U != (0x3fU & (((IData)(0xfaU) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                >> 0x10U)) 
                             >> 2U)))) {
            vlSelf->__VdfgTmp_h01f62327__0 = (0x1fU 
                                              & 0U);
            vlSelf->__VdfgTmp_h9e39cbf9__0 = (0xfU 
                                              & 0U);
        } else {
            vlSelf->__VdfgTmp_h01f62327__0 = (0x1fU 
                                              & 0x1aU);
            vlSelf->__VdfgTmp_h9e39cbf9__0 = (0xfU 
                                              & ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_2))
                                                  ? 
                                                 ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                     >> 0x18U))
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base_2 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0xfaU) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                          >> 0x10U)))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(0xfaU) 
                                                           - 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                            >> 0x10U))))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_2) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                                  >> 0x18U))) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_2) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(0xfaU) 
                                                                - 
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                                 >> 0x10U)))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(0xfaU) 
                                                                   - 
                                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                                    >> 0x10U)) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_2))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                                   << 8U) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                                     >> 0x18U))))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_2) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_2) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_2) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_2) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                                      << 8U) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                                        >> 0x18U))))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base_2))))));
        }
    } else {
        vlSelf->__VdfgTmp_h01f62327__0 = (0x1fU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                   >> 0x10U));
        vlSelf->__VdfgTmp_h9e39cbf9__0 = (0xfU & ((
                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                       >> 0xfU) 
                                                      & ((0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[1U] 
                                                                 >> 0x18U)))) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                            >> 0x10U))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base_3 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_3))
            ? (0xfffffffU & ((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[3U] 
                                             << 0xcU) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                               >> 0x14U))) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_3)))
            : 0U);
    if (VL_GTS_III(8, 0xfaU, (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                              >> 0x18U))) {
        if ((0U != (0x3fU & (((IData)(0xfaU) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                >> 0x18U)) 
                             >> 2U)))) {
            vlSelf->__VdfgTmp_h876083fa__0 = (0x1fU 
                                              & 0U);
            vlSelf->__VdfgTmp_hb7970779__0 = (0xfU 
                                              & 0U);
        } else {
            vlSelf->__VdfgTmp_h876083fa__0 = (0x1fU 
                                              & 0x1aU);
            vlSelf->__VdfgTmp_hb7970779__0 = (0xfU 
                                              & ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_3))
                                                  ? 
                                                 ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                     >> 0x14U))
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base_3 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0xfaU) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                          >> 0x18U)))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(0xfaU) 
                                                           - 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                            >> 0x18U))))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_3) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[3U] 
                                                                << 0xcU) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                                  >> 0x14U))) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_3) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(0xfaU) 
                                                                - 
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                                 >> 0x18U)))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(0xfaU) 
                                                                   - 
                                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                                    >> 0x18U)) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_3))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[3U] 
                                                                   << 0xcU) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                                     >> 0x14U))))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_3) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_3) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_3) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_3) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[3U] 
                                                                      << 0xcU) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                                        >> 0x14U))))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base_3))))));
        }
    } else {
        vlSelf->__VdfgTmp_h876083fa__0 = (0x1fU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Exp 
                                                   >> 0x18U));
        vlSelf->__VdfgTmp_hb7970779__0 = (0xfU & ((
                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[3U] 
                                                    << 0x14U) 
                                                   | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[3U] 
                                                      >> 0xcU)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[3U] 
                                                       >> 0xbU) 
                                                      & ((0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[3U] 
                                                               << 0xcU) 
                                                              | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[2U] 
                                                                 >> 0x14U)))) 
                                                         | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac[3U] 
                                                            >> 0xcU))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96e1e07c__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_1)
            ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h4f025f70__0)));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96b7909b__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_4)
            ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h8b0fae15__0)));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h968546ec__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_7)
            ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h9e39cbf9__0)));
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96d5f417__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_10)
            ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_hb7970779__0)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__3(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__3\n"); );
    // Body
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2)) 
           & VL_LTS_III(8, 0xeU, (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                  >> 0x18U)));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1)) 
           & VL_LTS_III(8, 0xeU, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                           >> 0x10U))));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0)) 
           & VL_LTS_III(8, 0xeU, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                           >> 8U))));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN)) 
           & VL_LTS_III(8, 0xeU, (0xffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_3)) 
           & ((0U == vlSelf->io_posit_i1_3) | (VL_GTES_III(8, 0xeU, 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                            >> 0x18U)) 
                                               & (VL_GTS_III(8, 0xf2U, 
                                                             (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                              >> 0x18U)) 
                                                  & (0xaU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0xf2U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                          >> 0x18U))))))));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_2)) 
           & ((0U == vlSelf->io_posit_i1_2) | (VL_GTES_III(8, 0xeU, 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                               >> 0x10U))) 
                                               & (VL_GTS_III(8, 0xf2U, 
                                                             (0xffU 
                                                              & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                                 >> 0x10U))) 
                                                  & (0xaU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0xf2U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                          >> 0x10U))))))));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_1)) 
           & ((0U == vlSelf->io_posit_i1_1) | (VL_GTES_III(8, 0xeU, 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                               >> 8U))) 
                                               & (VL_GTS_III(8, 0xf2U, 
                                                             (0xffU 
                                                              & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                                 >> 8U))) 
                                                  & (0xaU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0xf2U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                          >> 8U))))))));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR)) 
           & ((0U == vlSelf->io_posit_i1_0) | (VL_GTES_III(8, 0xeU, 
                                                           (0xffU 
                                                            & vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp)) 
                                               & (VL_GTS_III(8, 0xf2U, 
                                                             (0xffU 
                                                              & vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp)) 
                                                  & (0xaU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0xf2U) 
                                                         - vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp)))))));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_2 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN) 
           | VL_LTS_III(8, 0xeU, (0xffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_6 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0) 
           | VL_LTS_III(8, 0xeU, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                           >> 8U))));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_10 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1) 
           | VL_LTS_III(8, 0xeU, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                           >> 0x10U))));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_14 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2) 
           | VL_LTS_III(8, 0xeU, (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                  >> 0x18U)));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount 
        = ((0x1bU < (0xffU & ((IData)(0xf2U) - vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp)))
            ? 0x1bU : (0xffU & ((IData)(0xf2U) - vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_1 
        = ((0x1bU < (0xffU & ((IData)(0xf2U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                >> 8U))))
            ? 0x1bU : (0xffU & ((IData)(0xf2U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                  >> 8U))));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_2 
        = ((0x1bU < (0xffU & ((IData)(0xf2U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                >> 0x10U))))
            ? 0x1bU : (0xffU & ((IData)(0xf2U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                  >> 0x10U))));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_3 
        = ((0x1bU < (0xffU & ((IData)(0xf2U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                >> 0x18U))))
            ? 0x1bU : (0xffU & ((IData)(0xf2U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                  >> 0x18U))));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount))
            ? (0xfffffffU & ((0xfffffffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U]) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount)))
            : 0U);
    if (VL_GTS_III(8, 0xf2U, (0xffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp))) {
        if ((0xaU < (0xffU & ((IData)(0xf2U) - vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp)))) {
            vlSelf->__VdfgTmp_h2a16531b__0 = (0x3fU 
                                              & 0U);
            vlSelf->__VdfgTmp_he84adc79__0 = (0x7ffU 
                                              & 0U);
        } else {
            vlSelf->__VdfgTmp_h2a16531b__0 = (0x3fU 
                                              & 0x32U);
            vlSelf->__VdfgTmp_he84adc79__0 = (0x7ffU 
                                              & ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount))
                                                  ? 
                                                 vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U]
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0xf2U) 
                                                         - vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(0xf2U) 
                                                           - vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp)))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U]) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(0xf2U) 
                                                                - vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(0xf2U) 
                                                                   - vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U]))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U]))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base))))));
        }
    } else {
        vlSelf->__VdfgTmp_h2a16531b__0 = (0x3fU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp);
        vlSelf->__VdfgTmp_he84adc79__0 = (0x7ffU & 
                                          (((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U] 
                                             << 0xfU) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U] 
                                               >> 0x11U)) 
                                           + (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U] 
                                                >> 0x10U) 
                                               & (IData)(
                                                         (0U 
                                                          != 
                                                          (0x2ffffU 
                                                           & vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U])))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base_1 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_1))
            ? (0xfffffffU & ((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                             << 4U) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U] 
                                               >> 0x1cU))) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_1)))
            : 0U);
    if (VL_GTS_III(8, 0xf2U, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                       >> 8U)))) {
        if ((0xaU < (0xffU & ((IData)(0xf2U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                >> 8U))))) {
            vlSelf->__VdfgTmp_h53ace542__0 = (0x3fU 
                                              & 0U);
            vlSelf->__VdfgTmp_h459491c7__0 = (0x7ffU 
                                              & 0U);
        } else {
            vlSelf->__VdfgTmp_h53ace542__0 = (0x3fU 
                                              & 0x32U);
            vlSelf->__VdfgTmp_h459491c7__0 = (0x7ffU 
                                              & ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_1))
                                                  ? 
                                                 ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                                   << 4U) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U] 
                                                     >> 0x1cU))
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base_1 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0xf2U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                          >> 8U)))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(0xf2U) 
                                                           - 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                            >> 8U))))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_1) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                                                << 4U) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U] 
                                                                  >> 0x1cU))) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_1) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(0xf2U) 
                                                                - 
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                                 >> 8U)))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(0xf2U) 
                                                                   - 
                                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                                    >> 8U)) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_1))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                                                   << 4U) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U] 
                                                                     >> 0x1cU))))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_1) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_1) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_1) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_1) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                                                      << 4U) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U] 
                                                                        >> 0x1cU))))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base_1))))));
        }
    } else {
        vlSelf->__VdfgTmp_h53ace542__0 = (0x3fU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                   >> 8U));
        vlSelf->__VdfgTmp_h459491c7__0 = (0x7ffU & 
                                          (((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                             << 0x13U) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                               >> 0xdU)) 
                                           + (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                                >> 0xcU) 
                                               & ((0U 
                                                   != 
                                                   (0xffffU 
                                                    & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                                        << 4U) 
                                                       | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[0U] 
                                                          >> 0x1cU)))) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                                     >> 0xdU))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base_2 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_2))
            ? (0xfffffffU & ((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                               >> 0x18U))) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_2)))
            : 0U);
    if (VL_GTS_III(8, 0xf2U, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                       >> 0x10U)))) {
        if ((0xaU < (0xffU & ((IData)(0xf2U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                >> 0x10U))))) {
            vlSelf->__VdfgTmp_h7ae519d9__0 = (0x3fU 
                                              & 0U);
            vlSelf->__VdfgTmp_h2da98235__0 = (0x7ffU 
                                              & 0U);
        } else {
            vlSelf->__VdfgTmp_h7ae519d9__0 = (0x3fU 
                                              & 0x32U);
            vlSelf->__VdfgTmp_h2da98235__0 = (0x7ffU 
                                              & ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_2))
                                                  ? 
                                                 ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                                     >> 0x18U))
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base_2 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0xf2U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                          >> 0x10U)))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(0xf2U) 
                                                           - 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                            >> 0x10U))))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_2) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                                                  >> 0x18U))) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_2) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(0xf2U) 
                                                                - 
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                                 >> 0x10U)))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(0xf2U) 
                                                                   - 
                                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                                    >> 0x10U)) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_2))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                                   << 8U) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                                                     >> 0x18U))))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_2) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_2) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_2) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_2) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                                      << 8U) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                                                        >> 0x18U))))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base_2))))));
        }
    } else {
        vlSelf->__VdfgTmp_h7ae519d9__0 = (0x3fU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                   >> 0x10U));
        vlSelf->__VdfgTmp_h2da98235__0 = (0x7ffU & 
                                          (((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                             << 0x17U) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                               >> 9U)) 
                                           + (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                >> 8U) 
                                               & ((0U 
                                                   != 
                                                   (0xffffU 
                                                    & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[1U] 
                                                          >> 0x18U)))) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                     >> 9U))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base_3 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_3))
            ? (0xfffffffU & ((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[3U] 
                                             << 0xcU) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                               >> 0x14U))) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_3)))
            : 0U);
    if (VL_GTS_III(8, 0xf2U, (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                              >> 0x18U))) {
        if ((0xaU < (0xffU & ((IData)(0xf2U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                >> 0x18U))))) {
            vlSelf->__VdfgTmp_h00c4dd81__0 = (0x3fU 
                                              & 0U);
            vlSelf->__VdfgTmp_h8be48673__0 = (0x7ffU 
                                              & 0U);
        } else {
            vlSelf->__VdfgTmp_h00c4dd81__0 = (0x3fU 
                                              & 0x32U);
            vlSelf->__VdfgTmp_h8be48673__0 = (0x7ffU 
                                              & ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_3))
                                                  ? 
                                                 ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                     >> 0x14U))
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base_3 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0xf2U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                          >> 0x18U)))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(0xf2U) 
                                                           - 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                            >> 0x18U))))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_3) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[3U] 
                                                                << 0xcU) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                                  >> 0x14U))) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_3) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(0xf2U) 
                                                                - 
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                                 >> 0x18U)))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(0xf2U) 
                                                                   - 
                                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                                    >> 0x18U)) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_3))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[3U] 
                                                                   << 0xcU) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                                     >> 0x14U))))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_3) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_3) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_3) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_3) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[3U] 
                                                                      << 0xcU) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                                        >> 0x14U))))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base_3))))));
        }
    } else {
        vlSelf->__VdfgTmp_h00c4dd81__0 = (0x3fU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Exp 
                                                   >> 0x18U));
        vlSelf->__VdfgTmp_h8be48673__0 = (0x7ffU & 
                                          (((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[3U] 
                                             << 0x1bU) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[3U] 
                                               >> 5U)) 
                                           + (1U & 
                                              ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[3U] 
                                                >> 4U) 
                                               & ((0U 
                                                   != 
                                                   (0xffffU 
                                                    & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[3U] 
                                                        << 0xcU) 
                                                       | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[2U] 
                                                          >> 0x14U)))) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac[3U] 
                                                     >> 5U))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96e1e122__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_2)
            ? 0U : (0x3ffU & (IData)(vlSelf->__VdfgTmp_he84adc79__0)));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96daf448__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_6)
            ? 0U : (0x3ffU & (IData)(vlSelf->__VdfgTmp_h459491c7__0)));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h974ef2fe__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_10)
            ? 0U : (0x3ffU & (IData)(vlSelf->__VdfgTmp_h2da98235__0)));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h972069b6__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_14)
            ? 0U : (0x3ffU & (IData)(vlSelf->__VdfgTmp_h8be48673__0)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__4(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__4\n"); );
    // Body
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2)) 
           & (0x7fU == (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                        >> 0x18U)));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1)) 
           & (0x7f0000U == (0xff0000U & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0)) 
           & (0x7f00U == (0xff00U & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN)) 
           & (0x7fU == (0xffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_3)) 
           & ((0U == vlSelf->io_posit_i1_3) | ((0x7fU 
                                                != 
                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                 >> 0x18U)) 
                                               & (VL_GTS_III(8, 0x82U, 
                                                             (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                              >> 0x18U)) 
                                                  & (0x17U 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0x82U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                          >> 0x18U))))))));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_2)) 
           & ((0U == vlSelf->io_posit_i1_2) | ((0x7fU 
                                                != 
                                                (0xffU 
                                                 & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                    >> 0x10U))) 
                                               & (VL_GTS_III(8, 0x82U, 
                                                             (0xffU 
                                                              & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                                 >> 0x10U))) 
                                                  & (0x17U 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0x82U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                          >> 0x10U))))))));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_1)) 
           & ((0U == vlSelf->io_posit_i1_1) | ((0x7fU 
                                                != 
                                                (0xffU 
                                                 & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                    >> 8U))) 
                                               & (VL_GTS_III(8, 0x82U, 
                                                             (0xffU 
                                                              & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                                 >> 8U))) 
                                                  & (0x17U 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0x82U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                          >> 8U))))))));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR)) 
           & ((0U == vlSelf->io_posit_i1_0) | ((0x7fU 
                                                != 
                                                (0xffU 
                                                 & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp)) 
                                               & (VL_GTS_III(8, 0x82U, 
                                                             (0xffU 
                                                              & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp)) 
                                                  & (0x17U 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0x82U) 
                                                         - vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp)))))));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_2 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN) 
           | (0x7fU == (0xffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_6 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0) 
           | (0x7fU == (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                 >> 8U))));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_10 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1) 
           | (0x7fU == (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                 >> 0x10U))));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_14 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2) 
           | (0x7fU == (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                        >> 0x18U)));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount 
        = ((0x1bU < (0xffU & ((IData)(0x82U) - vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp)))
            ? 0x1bU : (0xffU & ((IData)(0x82U) - vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp)));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_1 
        = ((0x1bU < (0xffU & ((IData)(0x82U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                >> 8U))))
            ? 0x1bU : (0xffU & ((IData)(0x82U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                  >> 8U))));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_2 
        = ((0x1bU < (0xffU & ((IData)(0x82U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                >> 0x10U))))
            ? 0x1bU : (0xffU & ((IData)(0x82U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                  >> 0x10U))));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_3 
        = ((0x1bU < (0xffU & ((IData)(0x82U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                >> 0x18U))))
            ? 0x1bU : (0xffU & ((IData)(0x82U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                  >> 0x18U))));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount))
            ? (0xfffffffU & ((0xfffffffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U]) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount)))
            : 0U);
    if (VL_GTS_III(8, 0x82U, (0xffU & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp))) {
        if ((0x17U < (0xffU & ((IData)(0x82U) - vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp)))) {
            vlSelf->__VdfgTmp_h492a5605__0 = 0U;
            vlSelf->__VdfgTmp_h8592d4be__0 = (0xffffffU 
                                              & 0U);
        } else {
            vlSelf->__VdfgTmp_h492a5605__0 = 0x182U;
            vlSelf->__VdfgTmp_h8592d4be__0 = (0xffffffU 
                                              & ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount))
                                                  ? 
                                                 vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U]
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0x82U) 
                                                         - vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(0x82U) 
                                                           - vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp)))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U]) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(0x82U) 
                                                                - vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(0x82U) 
                                                                   - vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U]))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U]))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base))))));
        }
    } else {
        vlSelf->__VdfgTmp_h492a5605__0 = ((0x100U & 
                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                            << 1U)) 
                                          | (0xffU 
                                             & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp));
        vlSelf->__VdfgTmp_h8592d4be__0 = (0xffffffU 
                                          & (((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U] 
                                               << 0x1cU) 
                                              | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U] 
                                                 >> 4U)) 
                                             + (1U 
                                                & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U] 
                                                    >> 3U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0x17U 
                                                               & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U])))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base_1 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_1))
            ? (0xfffffffU & ((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                             << 4U) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U] 
                                               >> 0x1cU))) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_1)))
            : 0U);
    if (VL_GTS_III(8, 0x82U, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                       >> 8U)))) {
        if ((0x17U < (0xffU & ((IData)(0x82U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                 >> 8U))))) {
            vlSelf->__VdfgTmp_hf5799464__0 = 0U;
            vlSelf->__VdfgTmp_h00901bc7__0 = (0xffffffU 
                                              & 0U);
        } else {
            vlSelf->__VdfgTmp_hf5799464__0 = 0x182U;
            vlSelf->__VdfgTmp_h00901bc7__0 = (0xffffffU 
                                              & ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_1))
                                                  ? 
                                                 ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                                   << 4U) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U] 
                                                     >> 0x1cU))
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base_1 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0x82U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                          >> 8U)))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(0x82U) 
                                                           - 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                            >> 8U))))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_1) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                                                << 4U) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U] 
                                                                  >> 0x1cU))) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_1) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(0x82U) 
                                                                - 
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                                 >> 8U)))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(0x82U) 
                                                                   - 
                                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                                    >> 8U)) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_1))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                                                   << 4U) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U] 
                                                                     >> 0x1cU))))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_1) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_1) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_1) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_1) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                                                      << 4U) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U] 
                                                                        >> 0x1cU))))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base_1))))));
        }
    } else {
        vlSelf->__VdfgTmp_hf5799464__0 = ((0x100U & 
                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                            >> 7U)) 
                                          | (0xffU 
                                             & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                >> 8U)));
        vlSelf->__VdfgTmp_h00901bc7__0 = (0xffffffU 
                                          & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                             + (1U 
                                                & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U] 
                                                    >> 0x1fU) 
                                                   & ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[0U] 
                                                           >> 0x1cU))) 
                                                      | vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U])))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base_2 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_2))
            ? (0xfffffffU & ((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                               >> 0x18U))) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_2)))
            : 0U);
    if (VL_GTS_III(8, 0x82U, (0xffU & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                       >> 0x10U)))) {
        if ((0x17U < (0xffU & ((IData)(0x82U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                 >> 0x10U))))) {
            vlSelf->__VdfgTmp_hfc141949__0 = 0U;
            vlSelf->__VdfgTmp_h6f085be2__0 = (0xffffffU 
                                              & 0U);
        } else {
            vlSelf->__VdfgTmp_hfc141949__0 = 0x182U;
            vlSelf->__VdfgTmp_h6f085be2__0 = (0xffffffU 
                                              & ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_2))
                                                  ? 
                                                 ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                                     >> 0x18U))
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base_2 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0x82U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                          >> 0x10U)))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(0x82U) 
                                                           - 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                            >> 0x10U))))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_2) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                                                  >> 0x18U))) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_2) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(0x82U) 
                                                                - 
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                                 >> 0x10U)))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(0x82U) 
                                                                   - 
                                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                                    >> 0x10U)) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_2))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                                                   << 8U) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                                                     >> 0x18U))))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_2) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_2) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_2) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_2) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                                                      << 8U) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                                                        >> 0x18U))))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base_2))))));
        }
    } else {
        vlSelf->__VdfgTmp_hfc141949__0 = ((0x100U & 
                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                            >> 0xfU)) 
                                          | (0xffU 
                                             & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                >> 0x10U)));
        vlSelf->__VdfgTmp_h6f085be2__0 = (0xffffffU 
                                          & (((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                               << 4U) 
                                              | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                                 >> 0x1cU)) 
                                             + (1U 
                                                & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U] 
                                                    >> 0x1bU) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0x17000000U 
                                                               & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[1U])))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base_3 
        = ((0x1bU >= (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_3))
            ? (0xfffffffU & ((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[3U] 
                                             << 0xcU) 
                                            | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                               >> 0x14U))) 
                             >> (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_3)))
            : 0U);
    if (VL_GTS_III(8, 0x82U, (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                              >> 0x18U))) {
        if ((0x17U < (0xffU & ((IData)(0x82U) - (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                 >> 0x18U))))) {
            vlSelf->__VdfgTmp_h88f0c350__0 = 0U;
            vlSelf->__VdfgTmp_h8c68a7bd__0 = (0xffffffU 
                                              & 0U);
        } else {
            vlSelf->__VdfgTmp_h88f0c350__0 = 0x182U;
            vlSelf->__VdfgTmp_h8c68a7bd__0 = (0xffffffU 
                                              & ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_3))
                                                  ? 
                                                 ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[3U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                                     >> 0x14U))
                                                  : 
                                                 (vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base_3 
                                                  + 
                                                  (((0x1bU 
                                                     < 
                                                     (0xffU 
                                                      & ((IData)(0x82U) 
                                                         - 
                                                         (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                          >> 0x18U)))) 
                                                    | (0U 
                                                       != 
                                                       (0xffU 
                                                        & ((IData)(0x82U) 
                                                           - 
                                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                            >> 0x18U))))) 
                                                   & (((0x1bU 
                                                        >= 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_3) 
                                                            - (IData)(1U))))
                                                        ? 
                                                       (0xfffffffU 
                                                        & ((0xfffffffU 
                                                            & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[3U] 
                                                                << 0xcU) 
                                                               | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                                                  >> 0x14U))) 
                                                           >> 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_3) 
                                                               - (IData)(1U)))))
                                                        : 0U) 
                                                      & ((((0x1bU 
                                                            < 
                                                            (0xffU 
                                                             & ((IData)(0x82U) 
                                                                - 
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                                 >> 0x18U)))) 
                                                           | (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (((IData)(0x82U) 
                                                                   - 
                                                                   (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                                                    >> 0x18U)) 
                                                                  >> 1U)))) 
                                                          & ((0x1bU 
                                                              < (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_3))
                                                              ? 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[3U] 
                                                                   << 0xcU) 
                                                                  | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                                                     >> 0x14U))))
                                                              : 
                                                             (0U 
                                                              != 
                                                              (0xfffffffU 
                                                               & (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_3) 
                                                                         - (IData)(1U)) 
                                                                        >> 5U)))
                                                                    ? 0xfffffffU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_3) 
                                                                         - (IData)(1U))))
                                                                     ? 
                                                                    (((0x1bU 
                                                                       >= 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_3) 
                                                                           - (IData)(1U))))
                                                                       ? 
                                                                      ((IData)(1U) 
                                                                       << 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_3) 
                                                                           - (IData)(1U))))
                                                                       : 0U) 
                                                                     - (IData)(1U))
                                                                     : 0U)) 
                                                                  & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[3U] 
                                                                      << 0xcU) 
                                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                                                        >> 0x14U))))))) 
                                                         | vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base_3))))));
        }
    } else {
        vlSelf->__VdfgTmp_h88f0c350__0 = ((0x100U & 
                                           (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                            >> 0x17U)) 
                                          | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Exp 
                                             >> 0x18U));
        vlSelf->__VdfgTmp_h8c68a7bd__0 = (0xffffffU 
                                          & (((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[3U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                                 >> 0x18U)) 
                                             + (1U 
                                                & ((vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U] 
                                                    >> 0x17U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1700000U 
                                                               & vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac[2U])))))));
    }
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_2)
            ? 0U : (0x7fffffU & vlSelf->__VdfgTmp_h8592d4be__0));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_6)
            ? 0U : (0x7fffffU & vlSelf->__VdfgTmp_h00901bc7__0));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_10)
            ? 0U : (0x7fffffU & vlSelf->__VdfgTmp_h6f085be2__0));
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_14)
            ? 0U : (0x7fffffU & vlSelf->__VdfgTmp_h8c68a7bd__0));
}
