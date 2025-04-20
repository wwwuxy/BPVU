// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop___024root.h"

VL_ATTR_COLD void VPvuTop___024root___eval_static(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_static\n"); );
}

VL_ATTR_COLD void VPvuTop___024root___eval_final(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_final\n"); );
}

VL_ATTR_COLD void VPvuTop___024root___eval_triggers__stl(VPvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__stl(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___eval_stl(VPvuTop___024root* vlSelf);

VL_ATTR_COLD void VPvuTop___024root___eval_settle(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VPvuTop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VPvuTop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/BPVU/vsrc/PvuTop.sv", 9355, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VPvuTop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__stl(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(3U)) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(4U)) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(5U)) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(6U)) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(7U)) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(8U)) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(9U)) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'stl' region trigger index 21 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'stl' region trigger index 22 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'stl' region trigger index 23 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'stl' region trigger index 24 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'stl' region trigger index 25 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 26 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 27 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 28 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 29 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 30 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 31 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'stl' region trigger index 32 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x21U)) {
        VL_DBG_MSGF("         'stl' region trigger index 33 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x22U)) {
        VL_DBG_MSGF("         'stl' region trigger index 34 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x23U)) {
        VL_DBG_MSGF("         'stl' region trigger index 35 is active: @([hybrid] PvuTop.dot_converted_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.dot_converted_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x24U)) {
        VL_DBG_MSGF("         'stl' region trigger index 36 is active: @([hybrid] PvuTop.dot_converted_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x25U)) {
        VL_DBG_MSGF("         'stl' region trigger index 37 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x26U)) {
        VL_DBG_MSGF("         'stl' region trigger index 38 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x27U)) {
        VL_DBG_MSGF("         'stl' region trigger index 39 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x28U)) {
        VL_DBG_MSGF("         'stl' region trigger index 40 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x29U)) {
        VL_DBG_MSGF("         'stl' region trigger index 41 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x2aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 42 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x2bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 43 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x2cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 44 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x2dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 45 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x2eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 46 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x2fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 47 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x30U)) {
        VL_DBG_MSGF("         'stl' region trigger index 48 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x31U)) {
        VL_DBG_MSGF("         'stl' region trigger index 49 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x32U)) {
        VL_DBG_MSGF("         'stl' region trigger index 50 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x33U)) {
        VL_DBG_MSGF("         'stl' region trigger index 51 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x34U)) {
        VL_DBG_MSGF("         'stl' region trigger index 52 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x35U)) {
        VL_DBG_MSGF("         'stl' region trigger index 53 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x36U)) {
        VL_DBG_MSGF("         'stl' region trigger index 54 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x37U)) {
        VL_DBG_MSGF("         'stl' region trigger index 55 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x38U)) {
        VL_DBG_MSGF("         'stl' region trigger index 56 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x39U)) {
        VL_DBG_MSGF("         'stl' region trigger index 57 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x3aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 58 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x3bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 59 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x3cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 60 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x3dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 61 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x3eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 62 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x3fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 63 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x40U)) {
        VL_DBG_MSGF("         'stl' region trigger index 64 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x41U)) {
        VL_DBG_MSGF("         'stl' region trigger index 65 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x42U)) {
        VL_DBG_MSGF("         'stl' region trigger index 66 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x43U)) {
        VL_DBG_MSGF("         'stl' region trigger index 67 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x44U)) {
        VL_DBG_MSGF("         'stl' region trigger index 68 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x45U)) {
        VL_DBG_MSGF("         'stl' region trigger index 69 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x46U)) {
        VL_DBG_MSGF("         'stl' region trigger index 70 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x47U)) {
        VL_DBG_MSGF("         'stl' region trigger index 71 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x48U)) {
        VL_DBG_MSGF("         'stl' region trigger index 72 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x49U)) {
        VL_DBG_MSGF("         'stl' region trigger index 73 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x4aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 74 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x4bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 75 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x4cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 76 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x4dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 77 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x4eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 78 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x4fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 79 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x50U)) {
        VL_DBG_MSGF("         'stl' region trigger index 80 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x51U)) {
        VL_DBG_MSGF("         'stl' region trigger index 81 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x52U)) {
        VL_DBG_MSGF("         'stl' region trigger index 82 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x53U)) {
        VL_DBG_MSGF("         'stl' region trigger index 83 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x54U)) {
        VL_DBG_MSGF("         'stl' region trigger index 84 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x55U)) {
        VL_DBG_MSGF("         'stl' region trigger index 85 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x56U)) {
        VL_DBG_MSGF("         'stl' region trigger index 86 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x57U)) {
        VL_DBG_MSGF("         'stl' region trigger index 87 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x58U)) {
        VL_DBG_MSGF("         'stl' region trigger index 88 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x59U)) {
        VL_DBG_MSGF("         'stl' region trigger index 89 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x5aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 90 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x5bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 91 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x5cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 92 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x5dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 93 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x5eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 94 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x5fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 95 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x60U)) {
        VL_DBG_MSGF("         'stl' region trigger index 96 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x61U)) {
        VL_DBG_MSGF("         'stl' region trigger index 97 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x62U)) {
        VL_DBG_MSGF("         'stl' region trigger index 98 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x63U)) {
        VL_DBG_MSGF("         'stl' region trigger index 99 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x64U)) {
        VL_DBG_MSGF("         'stl' region trigger index 100 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x65U)) {
        VL_DBG_MSGF("         'stl' region trigger index 101 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x66U)) {
        VL_DBG_MSGF("         'stl' region trigger index 102 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x67U)) {
        VL_DBG_MSGF("         'stl' region trigger index 103 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x68U)) {
        VL_DBG_MSGF("         'stl' region trigger index 104 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x69U)) {
        VL_DBG_MSGF("         'stl' region trigger index 105 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x6aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 106 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x6bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 107 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x6cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 108 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x6dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 109 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x6eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 110 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x6fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 111 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x70U)) {
        VL_DBG_MSGF("         'stl' region trigger index 112 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x71U)) {
        VL_DBG_MSGF("         'stl' region trigger index 113 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x72U)) {
        VL_DBG_MSGF("         'stl' region trigger index 114 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x73U)) {
        VL_DBG_MSGF("         'stl' region trigger index 115 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x74U)) {
        VL_DBG_MSGF("         'stl' region trigger index 116 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x75U)) {
        VL_DBG_MSGF("         'stl' region trigger index 117 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x76U)) {
        VL_DBG_MSGF("         'stl' region trigger index 118 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x77U)) {
        VL_DBG_MSGF("         'stl' region trigger index 119 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x78U)) {
        VL_DBG_MSGF("         'stl' region trigger index 120 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x79U)) {
        VL_DBG_MSGF("         'stl' region trigger index 121 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x7aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 122 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x7bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 123 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x7cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 124 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x7dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 125 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x7eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 126 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x7fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 127 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x80U)) {
        VL_DBG_MSGF("         'stl' region trigger index 128 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x81U)) {
        VL_DBG_MSGF("         'stl' region trigger index 129 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x82U)) {
        VL_DBG_MSGF("         'stl' region trigger index 130 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x83U)) {
        VL_DBG_MSGF("         'stl' region trigger index 131 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x84U)) {
        VL_DBG_MSGF("         'stl' region trigger index 132 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x85U)) {
        VL_DBG_MSGF("         'stl' region trigger index 133 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x86U)) {
        VL_DBG_MSGF("         'stl' region trigger index 134 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPvuTop___024root___stl_sequent__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT___GEN_13;
    PvuTop__DOT___GEN_13 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_14;
    PvuTop__DOT___GEN_14 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_21;
    PvuTop__DOT___GEN_21 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_22;
    PvuTop__DOT___GEN_22 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_29;
    PvuTop__DOT___GEN_29 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_30;
    PvuTop__DOT___GEN_30 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_37;
    PvuTop__DOT___GEN_37 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_38;
    PvuTop__DOT___GEN_38 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_51;
    PvuTop__DOT___GEN_51 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_108;
    PvuTop__DOT___GEN_108 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_109;
    PvuTop__DOT___GEN_109 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_110;
    PvuTop__DOT___GEN_110 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_111;
    PvuTop__DOT___GEN_111 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_112;
    PvuTop__DOT___GEN_112 = 0;
    CData/*0:0*/ PvuTop__DOT____VdfgTmp_h60524ea4__0;
    PvuTop__DOT____VdfgTmp_h60524ea4__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_hce16df71__0;
    PvuTop__DOT____VdfgTmp_hce16df71__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h2707afdc__0;
    PvuTop__DOT____VdfgTmp_h2707afdc__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h0432f868__0;
    PvuTop__DOT____VdfgTmp_h0432f868__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h6a62818e__0;
    PvuTop__DOT____VdfgTmp_h6a62818e__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_hb4870dfb__0;
    PvuTop__DOT____VdfgTmp_hb4870dfb__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h6a403491__0;
    PvuTop__DOT____VdfgTmp_h6a403491__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h4245c9a7__0;
    PvuTop__DOT____VdfgTmp_h4245c9a7__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h2b4b6eb6__0;
    PvuTop__DOT____VdfgTmp_h2b4b6eb6__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_hddbbb971__0;
    PvuTop__DOT____VdfgTmp_hddbbb971__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h3b6e9ddc__0;
    PvuTop__DOT____VdfgTmp_h3b6e9ddc__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h610e8268__0;
    PvuTop__DOT____VdfgTmp_h610e8268__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h2cd1ef8e__0;
    PvuTop__DOT____VdfgTmp_h2cd1ef8e__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h96ce9dc5__0;
    PvuTop__DOT____VdfgTmp_h96ce9dc5__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h8ba9a789__0;
    PvuTop__DOT____VdfgTmp_h8ba9a789__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_hefd4ca7b__0;
    PvuTop__DOT____VdfgTmp_hefd4ca7b__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_hc4a05ece__0;
    PvuTop__DOT____VdfgTmp_hc4a05ece__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h40a2cba0__0;
    PvuTop__DOT____VdfgTmp_h40a2cba0__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h78ae3f63__0;
    PvuTop__DOT____VdfgTmp_h78ae3f63__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h9b6b58ef__0;
    PvuTop__DOT____VdfgTmp_h9b6b58ef__0 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_h95914491__0;
    PvuTop__DOT____VdfgTmp_h95914491__0 = 0;
    CData/*0:0*/ PvuTop__DOT____VdfgTmp_hf32446e1__0;
    PvuTop__DOT____VdfgTmp_hf32446e1__0 = 0;
    CData/*0:0*/ PvuTop__DOT____VdfgTmp_hfa146d96__0;
    PvuTop__DOT____VdfgTmp_hfa146d96__0 = 0;
    CData/*0:0*/ PvuTop__DOT____VdfgTmp_h882ee63f__0;
    PvuTop__DOT____VdfgTmp_h882ee63f__0 = 0;
    CData/*0:0*/ PvuTop__DOT____VdfgTmp_h592cae14__0;
    PvuTop__DOT____VdfgTmp_h592cae14__0 = 0;
    CData/*0:0*/ PvuTop__DOT____VdfgTmp_h94b45f98__0;
    PvuTop__DOT____VdfgTmp_h94b45f98__0 = 0;
    CData/*0:0*/ PvuTop__DOT____VdfgTmp_h4a2a4b59__0;
    PvuTop__DOT____VdfgTmp_h4a2a4b59__0 = 0;
    CData/*3:0*/ PvuTop__DOT__floatDecode1__DOT___GEN;
    PvuTop__DOT__floatDecode1__DOT___GEN = 0;
    CData/*3:0*/ PvuTop__DOT__floatDecode1__DOT___GEN_0;
    PvuTop__DOT__floatDecode1__DOT___GEN_0 = 0;
    CData/*3:0*/ PvuTop__DOT__floatDecode2__DOT___GEN;
    PvuTop__DOT__floatDecode2__DOT___GEN = 0;
    CData/*3:0*/ PvuTop__DOT__floatDecode2__DOT___GEN_0;
    PvuTop__DOT__floatDecode2__DOT___GEN_0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp4__DOT___GEN;
    PvuTop__DOT__float2posit_fp4__DOT___GEN = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp4__DOT___GEN_1;
    PvuTop__DOT__float2posit_fp4__DOT___GEN_1 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp4__DOT___GEN_3;
    PvuTop__DOT__float2posit_fp4__DOT___GEN_3 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp4__DOT___GEN_5;
    PvuTop__DOT__float2posit_fp4__DOT___GEN_5 = 0;
    CData/*3:0*/ PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN;
    PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN = 0;
    CData/*3:0*/ PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN_0;
    PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN_0 = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_0_T;
    PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_0_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_1_T;
    PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_1_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_2_T;
    PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_2_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_3_T;
    PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_3_T = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp8__DOT___GEN;
    PvuTop__DOT__float2posit_fp8__DOT___GEN = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp8__DOT___GEN_1;
    PvuTop__DOT__float2posit_fp8__DOT___GEN_1 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp8__DOT___GEN_3;
    PvuTop__DOT__float2posit_fp8__DOT___GEN_3 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp8__DOT___GEN_5;
    PvuTop__DOT__float2posit_fp8__DOT___GEN_5 = 0;
    CData/*3:0*/ PvuTop__DOT__float2posit_fp8__DOT__floatDecoder__DOT___GEN;
    PvuTop__DOT__float2posit_fp8__DOT__floatDecoder__DOT___GEN = 0;
    CData/*3:0*/ PvuTop__DOT__float2posit_fp8__DOT__floatDecoder__DOT___GEN_0;
    PvuTop__DOT__float2posit_fp8__DOT__floatDecoder__DOT___GEN_0 = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_0_T;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_0_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_1_T;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_1_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_2_T;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_2_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_3_T;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_3_T = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    CData/*0:0*/ PvuTop__DOT__float2posit_fp16__DOT___GEN;
    PvuTop__DOT__float2posit_fp16__DOT___GEN = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp16__DOT___GEN_1;
    PvuTop__DOT__float2posit_fp16__DOT___GEN_1 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp16__DOT___GEN_3;
    PvuTop__DOT__float2posit_fp16__DOT___GEN_3 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp16__DOT___GEN_5;
    PvuTop__DOT__float2posit_fp16__DOT___GEN_5 = 0;
    CData/*3:0*/ PvuTop__DOT__float2posit_fp16__DOT__floatDecoder__DOT___GEN;
    PvuTop__DOT__float2posit_fp16__DOT__floatDecoder__DOT___GEN = 0;
    CData/*3:0*/ PvuTop__DOT__float2posit_fp16__DOT__floatDecoder__DOT___GEN_0;
    PvuTop__DOT__float2posit_fp16__DOT__floatDecoder__DOT___GEN_0 = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_0_T;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_0_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_1_T;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_1_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_2_T;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_2_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_3_T;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_3_T = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    CData/*0:0*/ PvuTop__DOT__float2posit_fp32__DOT___GEN;
    PvuTop__DOT__float2posit_fp32__DOT___GEN = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp32__DOT___GEN_1;
    PvuTop__DOT__float2posit_fp32__DOT___GEN_1 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp32__DOT___GEN_3;
    PvuTop__DOT__float2posit_fp32__DOT___GEN_3 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp32__DOT___GEN_5;
    PvuTop__DOT__float2posit_fp32__DOT___GEN_5 = 0;
    CData/*3:0*/ PvuTop__DOT__float2posit_fp32__DOT__floatDecoder__DOT___GEN;
    PvuTop__DOT__float2posit_fp32__DOT__floatDecoder__DOT___GEN = 0;
    CData/*3:0*/ PvuTop__DOT__float2posit_fp32__DOT__floatDecoder__DOT___GEN_0;
    PvuTop__DOT__float2posit_fp32__DOT__floatDecoder__DOT___GEN_0 = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_0_T;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_0_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_1_T;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_1_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_2_T;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_2_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_3_T;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_3_T = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    CData/*0:0*/ PvuTop__DOT__float2posit_fp64__DOT___GEN;
    PvuTop__DOT__float2posit_fp64__DOT___GEN = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp64__DOT___GEN_1;
    PvuTop__DOT__float2posit_fp64__DOT___GEN_1 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp64__DOT___GEN_3;
    PvuTop__DOT__float2posit_fp64__DOT___GEN_3 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp64__DOT___GEN_5;
    PvuTop__DOT__float2posit_fp64__DOT___GEN_5 = 0;
    CData/*3:0*/ PvuTop__DOT__float2posit_fp64__DOT__floatDecoder__DOT___GEN;
    PvuTop__DOT__float2posit_fp64__DOT__floatDecoder__DOT___GEN = 0;
    CData/*3:0*/ PvuTop__DOT__float2posit_fp64__DOT__floatDecoder__DOT___GEN_0;
    PvuTop__DOT__float2posit_fp64__DOT__floatDecoder__DOT___GEN_0 = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_0_T;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_0_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_1_T;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_1_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_2_T;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_2_T = 0;
    IData/*30:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_3_T;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_3_T = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    CData/*0:0*/ __VdfgTmp_he17e1b5c__0;
    __VdfgTmp_he17e1b5c__0 = 0;
    CData/*0:0*/ __VdfgTmp_hd5001709__0;
    __VdfgTmp_hd5001709__0 = 0;
    CData/*0:0*/ __VdfgTmp_hf52b612b__0;
    __VdfgTmp_hf52b612b__0 = 0;
    CData/*0:0*/ __VdfgTmp_hec5fca5a__0;
    __VdfgTmp_hec5fca5a__0 = 0;
    CData/*0:0*/ __VdfgTmp_h47dd10e4__0;
    __VdfgTmp_h47dd10e4__0 = 0;
    CData/*0:0*/ __VdfgTmp_h5ae47e0d__0;
    __VdfgTmp_h5ae47e0d__0 = 0;
    CData/*0:0*/ __VdfgTmp_hbb0fca81__0;
    __VdfgTmp_hbb0fca81__0 = 0;
    CData/*0:0*/ __VdfgTmp_heea12cbb__0;
    __VdfgTmp_heea12cbb__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_ha2eeae00__0;
    VlWide<3>/*95:0*/ __Vtemp_hfc3555ac__0;
    VlWide<3>/*95:0*/ __Vtemp_h16cddfbb__0;
    VlWide<3>/*95:0*/ __Vtemp_h13051311__0;
    VlWide<3>/*95:0*/ __Vtemp_hc31a511d__0;
    VlWide<3>/*95:0*/ __Vtemp_he3cab6d4__0;
    VlWide<3>/*95:0*/ __Vtemp_h61c210e0__0;
    VlWide<3>/*95:0*/ __Vtemp_h0f391963__0;
    VlWide<3>/*95:0*/ __Vtemp_h16fe04d9__0;
    VlWide<3>/*95:0*/ __Vtemp_hf4204b39__0;
    VlWide<3>/*95:0*/ __Vtemp_h9e7106cb__0;
    VlWide<3>/*95:0*/ __Vtemp_h4966bbb3__0;
    VlWide<3>/*95:0*/ __Vtemp_h527cfefa__0;
    VlWide<3>/*95:0*/ __Vtemp_hbfe7fdd7__0;
    VlWide<3>/*95:0*/ __Vtemp_h2367d120__0;
    VlWide<3>/*95:0*/ __Vtemp_h02ab7abb__0;
    VlWide<3>/*95:0*/ __Vtemp_h0c473511__0;
    VlWide<3>/*95:0*/ __Vtemp_h670d29c8__0;
    VlWide<3>/*95:0*/ __Vtemp_h538e86ac__0;
    VlWide<3>/*95:0*/ __Vtemp_hc3b6027c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6ad98d42__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f1ba79c__0;
    VlWide<3>/*95:0*/ __Vtemp_h493ab2bf__0;
    VlWide<3>/*95:0*/ __Vtemp_h5674dd9b__0;
    VlWide<3>/*95:0*/ __Vtemp_h30e42b4f__0;
    VlWide<3>/*95:0*/ __Vtemp_hea18e4ce__0;
    VlWide<3>/*95:0*/ __Vtemp_hbd7f7f11__0;
    VlWide<3>/*95:0*/ __Vtemp_h2fbb74b7__0;
    VlWide<3>/*95:0*/ __Vtemp_h1eed860a__0;
    VlWide<3>/*95:0*/ __Vtemp_h00c62147__0;
    VlWide<3>/*95:0*/ __Vtemp_h3adb056a__0;
    VlWide<3>/*95:0*/ __Vtemp_h62689c57__0;
    VlWide<3>/*95:0*/ __Vtemp_h32f3cad3__0;
    VlWide<3>/*95:0*/ __Vtemp_h531f5993__0;
    VlWide<3>/*95:0*/ __Vtemp_h94eb598b__0;
    VlWide<3>/*95:0*/ __Vtemp_h0392908e__0;
    VlWide<3>/*95:0*/ __Vtemp_h16bfbdb1__0;
    VlWide<3>/*95:0*/ __Vtemp_hd26bafdd__0;
    VlWide<3>/*95:0*/ __Vtemp_h14f1ee93__0;
    VlWide<3>/*95:0*/ __Vtemp_h4f79cf06__0;
    VlWide<3>/*95:0*/ __Vtemp_hd9386540__0;
    VlWide<3>/*95:0*/ __Vtemp_h9d86d8f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h0706d33b__0;
    VlWide<3>/*95:0*/ __Vtemp_h88df4a6a__0;
    VlWide<3>/*95:0*/ __Vtemp_h4ca4da7a__0;
    VlWide<3>/*95:0*/ __Vtemp_h5985309c__0;
    VlWide<3>/*95:0*/ __Vtemp_ha59493aa__0;
    VlWide<3>/*95:0*/ __Vtemp_h30a6c7ac__0;
    VlWide<3>/*95:0*/ __Vtemp_h07c2f810__0;
    VlWide<3>/*95:0*/ __Vtemp_h13a71221__0;
    VlWide<3>/*95:0*/ __Vtemp_h23fb127c__0;
    VlWide<3>/*95:0*/ __Vtemp_h176c4ad2__0;
    VlWide<3>/*95:0*/ __Vtemp_h7fbc62e6__0;
    VlWide<3>/*95:0*/ __Vtemp_hf4ab9311__0;
    VlWide<3>/*95:0*/ __Vtemp_h7afa475f__0;
    VlWide<3>/*95:0*/ __Vtemp_hc7a7532f__0;
    VlWide<3>/*95:0*/ __Vtemp_h4099bed9__0;
    VlWide<3>/*95:0*/ __Vtemp_h534a0ed9__0;
    VlWide<3>/*95:0*/ __Vtemp_hda5996a4__0;
    VlWide<3>/*95:0*/ __Vtemp_hb4c37e00__0;
    VlWide<3>/*95:0*/ __Vtemp_h14a79119__0;
    VlWide<3>/*95:0*/ __Vtemp_hb5fe5aa6__0;
    VlWide<3>/*95:0*/ __Vtemp_h942cd0c7__0;
    VlWide<3>/*95:0*/ __Vtemp_h217a3bd7__0;
    VlWide<3>/*95:0*/ __Vtemp_h97df7274__0;
    VlWide<3>/*95:0*/ __Vtemp_h1f0ac014__0;
    VlWide<3>/*95:0*/ __Vtemp_hc28b5391__0;
    VlWide<3>/*95:0*/ __Vtemp_he0dacb5e__0;
    VlWide<3>/*95:0*/ __Vtemp_hb36b0af5__0;
    VlWide<3>/*95:0*/ __Vtemp_hb0c6629e__0;
    VlWide<3>/*95:0*/ __Vtemp_h2a198a19__0;
    VlWide<3>/*95:0*/ __Vtemp_hba6ef04b__0;
    VlWide<3>/*95:0*/ __Vtemp_hb974cf39__0;
    VlWide<3>/*95:0*/ __Vtemp_hf8df9a14__0;
    VlWide<3>/*95:0*/ __Vtemp_h96368e6e__0;
    VlWide<3>/*95:0*/ __Vtemp_h0ec25b37__0;
    VlWide<3>/*95:0*/ __Vtemp_h965aa458__0;
    VlWide<3>/*95:0*/ __Vtemp_h641fe6b8__0;
    VlWide<3>/*95:0*/ __Vtemp_h467d7b9a__0;
    VlWide<3>/*95:0*/ __Vtemp_hd3d43d05__0;
    VlWide<8>/*255:0*/ __Vtemp_h57473319__0;
    VlWide<8>/*255:0*/ __Vtemp_hf52bf5e8__0;
    VlWide<8>/*255:0*/ __Vtemp_h09214ce0__0;
    VlWide<8>/*255:0*/ __Vtemp_hefda14d7__0;
    // Body
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13 
        = (((QData)((IData)((1U & (IData)((vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale 
                                           >> 0x20U))))) 
            << 0x20U) | (QData)((IData)((vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale 
                                         >> 1U))));
    vlSelf->PvuTop__DOT___GEN_106 = ((6U > (IData)(vlSelf->io_op)) 
                                     & (5U == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT___GEN_71 = ((7U != (IData)(vlSelf->io_op)) 
                                    | (IData)(vlSelf->io_float_posit));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_12 
        = (((QData)((IData)((1U & (IData)((vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale 
                                           >> 0x20U))))) 
            << 0x21U) | vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale);
    vlSelf->PvuTop__DOT___GEN_113 = ((6U <= (IData)(vlSelf->io_op)) 
                                     | (5U == (IData)(vlSelf->io_op)));
    PvuTop__DOT____VdfgTmp_h4a2a4b59__0 = ((5U != (IData)(vlSelf->io_op)) 
                                           & (6U > (IData)(vlSelf->io_op)));
    vlSelf->__VdfgTmp_hcbfe9c52__0 = (1U & (~ ((0U 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_2 
                                                            >> 3U)))) 
                                               | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_2 
                                                              >> 3U)))))));
    vlSelf->__VdfgTmp_ha54cdad1__0 = (1U & (~ ((0U 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_1 
                                                            >> 3U)))) 
                                               | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_1 
                                                              >> 3U)))))));
    vlSelf->__VdfgTmp_haf7f5c8c__0 = (1U & (~ ((0U 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_0 
                                                            >> 3U)))) 
                                               | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_0 
                                                              >> 3U)))))));
    vlSelf->__VdfgTmp_hfd1b85c0__0 = (1U & (~ ((0U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_2 
                                                            >> 0xaU)))) 
                                               | (0x1fU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_2 
                                                              >> 0xaU)))))));
    vlSelf->__VdfgTmp_hebcb5633__0 = (1U & (~ ((0U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_1 
                                                            >> 0xaU)))) 
                                               | (0x1fU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_1 
                                                              >> 0xaU)))))));
    vlSelf->__VdfgTmp_hcb4a60e4__0 = (1U & (~ ((0U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_0 
                                                            >> 0xaU)))) 
                                               | (0x1fU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_0 
                                                              >> 0xaU)))))));
    vlSelf->__VdfgTmp_hdbd751b3__0 = (1U & (~ ((0U 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_2 
                                                            >> 0x17U)))) 
                                               | (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_2 
                                                              >> 0x17U)))))));
    vlSelf->__VdfgTmp_h4fd42478__0 = (1U & (~ ((0U 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_1 
                                                            >> 0x17U)))) 
                                               | (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_1 
                                                              >> 0x17U)))))));
    vlSelf->__VdfgTmp_h4303f8d5__0 = (1U & (~ ((0U 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_0 
                                                            >> 0x17U)))) 
                                               | (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_0 
                                                              >> 0x17U)))))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN 
        = (((8U & (vlSelf->io_posit_i1_3 >> 0x1cU)) 
            | ((4U & (vlSelf->io_posit_i1_2 >> 0x1dU)) 
               | ((2U & (vlSelf->io_posit_i1_1 >> 0x1eU)) 
                  | (vlSelf->io_posit_i1_0 >> 0x1fU)))) 
           & (((0U == (0x7fffffffU & vlSelf->io_posit_i1_3)) 
               << 3U) | (((0U == (0x7fffffffU & vlSelf->io_posit_i1_2)) 
                          << 2U) | (((0U == (0x7fffffffU 
                                             & vlSelf->io_posit_i1_1)) 
                                     << 1U) | (0U == 
                                               (0x7fffffffU 
                                                & vlSelf->io_posit_i1_0))))));
    vlSelf->__VdfgTmp_h18d17475__0 = (1U & (~ ((0U 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_3 
                                                            >> 3U)))) 
                                               | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_3 
                                                              >> 3U)))))));
    vlSelf->__VdfgTmp_h36dad77c__0 = (1U & (~ ((0U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_3 
                                                            >> 0xaU)))) 
                                               | (0x1fU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_3 
                                                              >> 0xaU)))))));
    vlSelf->__VdfgTmp_h1abfe04b__0 = (1U & (~ ((0U 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_3 
                                                            >> 0x17U)))) 
                                               | (0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_3 
                                                              >> 0x17U)))))));
    vlSelf->__VdfgTmp_h3d13dd16__0 = (0xfffffffU & 
                                      (((0x8000000U 
                                         & ((~ ((0U 
                                                 == 
                                                 (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->io_float_i_2 
                                                             >> 0x34U)))) 
                                                | (0x7ffU 
                                                   == 
                                                   (0x7ffU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_2 
                                                               >> 0x34U)))))) 
                                            << 0x1bU)) 
                                        | (0x7ffffffU 
                                           & (IData)(
                                                     (vlSelf->io_float_i_2 
                                                      >> 0x19U)))) 
                                       + (1U & ((IData)(
                                                        (vlSelf->io_float_i_2 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (0ULL 
                                                           != 
                                                           (0x2ffffffULL 
                                                            & vlSelf->io_float_i_2)))))));
    vlSelf->__VdfgTmp_h49c93cb3__0 = (0xfffffffU & 
                                      (((0x8000000U 
                                         & ((~ ((0U 
                                                 == 
                                                 (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->io_float_i_1 
                                                             >> 0x34U)))) 
                                                | (0x7ffU 
                                                   == 
                                                   (0x7ffU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_1 
                                                               >> 0x34U)))))) 
                                            << 0x1bU)) 
                                        | (0x7ffffffU 
                                           & (IData)(
                                                     (vlSelf->io_float_i_1 
                                                      >> 0x19U)))) 
                                       + (1U & ((IData)(
                                                        (vlSelf->io_float_i_1 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (0ULL 
                                                           != 
                                                           (0x2ffffffULL 
                                                            & vlSelf->io_float_i_1)))))));
    vlSelf->__VdfgTmp_h0416f4a1__0 = (0xfffffffU & 
                                      (((0x8000000U 
                                         & ((~ ((0U 
                                                 == 
                                                 (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->io_float_i_0 
                                                             >> 0x34U)))) 
                                                | (0x7ffU 
                                                   == 
                                                   (0x7ffU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_0 
                                                               >> 0x34U)))))) 
                                            << 0x1bU)) 
                                        | (0x7ffffffU 
                                           & (IData)(
                                                     (vlSelf->io_float_i_0 
                                                      >> 0x19U)))) 
                                       + (1U & ((IData)(
                                                        (vlSelf->io_float_i_0 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (0ULL 
                                                           != 
                                                           (0x2ffffffULL 
                                                            & vlSelf->io_float_i_0)))))));
    vlSelf->__VdfgTmp_hfd79a1bb__0 = (0xfffffffU & 
                                      (((0x8000000U 
                                         & ((~ ((0U 
                                                 == 
                                                 (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->io_float_i_3 
                                                             >> 0x34U)))) 
                                                | (0x7ffU 
                                                   == 
                                                   (0x7ffU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_3 
                                                               >> 0x34U)))))) 
                                            << 0x1bU)) 
                                        | (0x7ffffffU 
                                           & (IData)(
                                                     (vlSelf->io_float_i_3 
                                                      >> 0x19U)))) 
                                       + (1U & ((IData)(
                                                        (vlSelf->io_float_i_3 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (0ULL 
                                                           != 
                                                           (0x2ffffffULL 
                                                            & vlSelf->io_float_i_3)))))));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR 
        = (IData)((0x80000000U == vlSelf->io_posit_i1_0));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_1 
        = (IData)((0x80000000U == vlSelf->io_posit_i1_1));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_2 
        = (IData)((0x80000000U == vlSelf->io_posit_i1_2));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_3 
        = (IData)((0x80000000U == vlSelf->io_posit_i1_3));
    if ((0U == (IData)(vlSelf->io_dst_posit_width))) {
        vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH = 0x20U;
        vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH 
            = ((0U == (IData)(vlSelf->io_src_posit_width))
                ? 0x20U : (IData)(vlSelf->io_src_posit_width));
    } else {
        vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH 
            = vlSelf->io_dst_posit_width;
        vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH 
            = vlSelf->io_dst_posit_width;
    }
    __VdfgTmp_h47dd10e4__0 = (1U & ((0U == (0x1fU & (IData)(
                                                            (vlSelf->io_float_i_0 
                                                             >> 0xaU)))) 
                                    | (1U & ((~ (IData)(
                                                        (0x1fU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->io_float_i_0 
                                                                     >> 0xaU)))))) 
                                             & (((IData)(
                                                         (vlSelf->io_float_i_0 
                                                          >> 0xaU)) 
                                                 - (IData)(0xfU)) 
                                                >> 4U)))));
    __VdfgTmp_h5ae47e0d__0 = (1U & ((0U == (0x1fU & (IData)(
                                                            (vlSelf->io_float_i_1 
                                                             >> 0xaU)))) 
                                    | (1U & ((~ (IData)(
                                                        (0x1fU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->io_float_i_1 
                                                                     >> 0xaU)))))) 
                                             & (((IData)(
                                                         (vlSelf->io_float_i_1 
                                                          >> 0xaU)) 
                                                 - (IData)(0xfU)) 
                                                >> 4U)))));
    __VdfgTmp_hbb0fca81__0 = (1U & ((0U == (0x1fU & (IData)(
                                                            (vlSelf->io_float_i_2 
                                                             >> 0xaU)))) 
                                    | (1U & ((~ (IData)(
                                                        (0x1fU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->io_float_i_2 
                                                                     >> 0xaU)))))) 
                                             & (((IData)(
                                                         (vlSelf->io_float_i_2 
                                                          >> 0xaU)) 
                                                 - (IData)(0xfU)) 
                                                >> 4U)))));
    __VdfgTmp_he17e1b5c__0 = (1U & ((0U == (0xfU & (IData)(
                                                           (vlSelf->io_float_i_0 
                                                            >> 3U)))) 
                                    | (1U & ((~ (IData)(
                                                        (0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->io_float_i_0 
                                                                     >> 3U)))))) 
                                             & (((IData)(
                                                         (vlSelf->io_float_i_0 
                                                          >> 3U)) 
                                                 - (IData)(7U)) 
                                                >> 3U)))));
    __VdfgTmp_hd5001709__0 = (1U & ((0U == (0xfU & (IData)(
                                                           (vlSelf->io_float_i_1 
                                                            >> 3U)))) 
                                    | (1U & ((~ (IData)(
                                                        (0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->io_float_i_1 
                                                                     >> 3U)))))) 
                                             & (((IData)(
                                                         (vlSelf->io_float_i_1 
                                                          >> 3U)) 
                                                 - (IData)(7U)) 
                                                >> 3U)))));
    __VdfgTmp_hf52b612b__0 = (1U & ((0U == (0xfU & (IData)(
                                                           (vlSelf->io_float_i_2 
                                                            >> 3U)))) 
                                    | (1U & ((~ (IData)(
                                                        (0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->io_float_i_2 
                                                                     >> 3U)))))) 
                                             & (((IData)(
                                                         (vlSelf->io_float_i_2 
                                                          >> 3U)) 
                                                 - (IData)(7U)) 
                                                >> 3U)))));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0 
        = ((0U == (0xffU & (IData)((vlSelf->io_float_i_2 
                                    >> 0x17U)))) ? 0x182U
            : ((0xffU == (0xffU & (IData)((vlSelf->io_float_i_2 
                                           >> 0x17U))))
                ? 0U : ((0x100U & (((IData)((vlSelf->io_float_i_2 
                                             >> 0x17U)) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0xffU 
                                              & ((IData)(
                                                         (vlSelf->io_float_i_2 
                                                          >> 0x17U)) 
                                                 - (IData)(0x7fU))))));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0 
        = ((0U == (0xffU & (IData)((vlSelf->io_float_i_1 
                                    >> 0x17U)))) ? 0x182U
            : ((0xffU == (0xffU & (IData)((vlSelf->io_float_i_1 
                                           >> 0x17U))))
                ? 0U : ((0x100U & (((IData)((vlSelf->io_float_i_1 
                                             >> 0x17U)) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0xffU 
                                              & ((IData)(
                                                         (vlSelf->io_float_i_1 
                                                          >> 0x17U)) 
                                                 - (IData)(0x7fU))))));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0 
        = ((0U == (0xffU & (IData)((vlSelf->io_float_i_0 
                                    >> 0x17U)))) ? 0x182U
            : ((0xffU == (0xffU & (IData)((vlSelf->io_float_i_0 
                                           >> 0x17U))))
                ? 0U : ((0x100U & (((IData)((vlSelf->io_float_i_0 
                                             >> 0x17U)) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0xffU 
                                              & ((IData)(
                                                         (vlSelf->io_float_i_0 
                                                          >> 0x17U)) 
                                                 - (IData)(0x7fU))))));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0 
        = ((0U == (0x7ffU & (IData)((vlSelf->io_float_i_2 
                                     >> 0x34U)))) ? 0xc02U
            : ((0x7ffU == (0x7ffU & (IData)((vlSelf->io_float_i_2 
                                             >> 0x34U))))
                ? 0U : ((0x800U & (((IData)((vlSelf->io_float_i_2 
                                             >> 0x34U)) 
                                    - (IData)(0x3ffU)) 
                                   << 1U)) | (0x7ffU 
                                              & ((IData)(
                                                         (vlSelf->io_float_i_2 
                                                          >> 0x34U)) 
                                                 - (IData)(0x3ffU))))));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0 
        = ((0U == (0x7ffU & (IData)((vlSelf->io_float_i_1 
                                     >> 0x34U)))) ? 0xc02U
            : ((0x7ffU == (0x7ffU & (IData)((vlSelf->io_float_i_1 
                                             >> 0x34U))))
                ? 0U : ((0x800U & (((IData)((vlSelf->io_float_i_1 
                                             >> 0x34U)) 
                                    - (IData)(0x3ffU)) 
                                   << 1U)) | (0x7ffU 
                                              & ((IData)(
                                                         (vlSelf->io_float_i_1 
                                                          >> 0x34U)) 
                                                 - (IData)(0x3ffU))))));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0 
        = ((0U == (0x7ffU & (IData)((vlSelf->io_float_i_0 
                                     >> 0x34U)))) ? 0xc02U
            : ((0x7ffU == (0x7ffU & (IData)((vlSelf->io_float_i_0 
                                             >> 0x34U))))
                ? 0U : ((0x800U & (((IData)((vlSelf->io_float_i_0 
                                             >> 0x34U)) 
                                    - (IData)(0x3ffU)) 
                                   << 1U)) | (0x7ffU 
                                              & ((IData)(
                                                         (vlSelf->io_float_i_0 
                                                          >> 0x34U)) 
                                                 - (IData)(0x3ffU))))));
    __VdfgTmp_heea12cbb__0 = (1U & ((0U == (0x1fU & (IData)(
                                                            (vlSelf->io_float_i_3 
                                                             >> 0xaU)))) 
                                    | (1U & ((~ (IData)(
                                                        (0x1fU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->io_float_i_3 
                                                                     >> 0xaU)))))) 
                                             & (((IData)(
                                                         (vlSelf->io_float_i_3 
                                                          >> 0xaU)) 
                                                 - (IData)(0xfU)) 
                                                >> 4U)))));
    __VdfgTmp_hec5fca5a__0 = (1U & ((0U == (0xfU & (IData)(
                                                           (vlSelf->io_float_i_3 
                                                            >> 3U)))) 
                                    | (1U & ((~ (IData)(
                                                        (0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(
                                                                    (vlSelf->io_float_i_3 
                                                                     >> 3U)))))) 
                                             & (((IData)(
                                                         (vlSelf->io_float_i_3 
                                                          >> 3U)) 
                                                 - (IData)(7U)) 
                                                >> 3U)))));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0 
        = ((0U == (0xffU & (IData)((vlSelf->io_float_i_3 
                                    >> 0x17U)))) ? 0x182U
            : ((0xffU == (0xffU & (IData)((vlSelf->io_float_i_3 
                                           >> 0x17U))))
                ? 0U : ((0x100U & (((IData)((vlSelf->io_float_i_3 
                                             >> 0x17U)) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0xffU 
                                              & ((IData)(
                                                         (vlSelf->io_float_i_3 
                                                          >> 0x17U)) 
                                                 - (IData)(0x7fU))))));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0 
        = ((0U == (0x7ffU & (IData)((vlSelf->io_float_i_3 
                                     >> 0x34U)))) ? 0xc02U
            : ((0x7ffU == (0x7ffU & (IData)((vlSelf->io_float_i_3 
                                             >> 0x34U))))
                ? 0U : ((0x800U & (((IData)((vlSelf->io_float_i_3 
                                             >> 0x34U)) 
                                    - (IData)(0x3ffU)) 
                                   << 1U)) | (0x7ffU 
                                              & ((IData)(
                                                         (vlSelf->io_float_i_3 
                                                          >> 0x34U)) 
                                                 - (IData)(0x3ffU))))));
    PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN_0 
        = (((0U == (3U & (IData)(vlSelf->io_float_i_3))) 
            << 3U) | (((0U == (3U & (IData)(vlSelf->io_float_i_2))) 
                       << 2U) | (((0U == (3U & (IData)(vlSelf->io_float_i_1))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlSelf->io_float_i_0))))));
    PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN 
        = ((8U & ((IData)((vlSelf->io_float_i_3 >> 2U)) 
                  << 3U)) | ((4U & ((IData)((vlSelf->io_float_i_2 
                                             >> 2U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->io_float_i_1 
                                                            >> 2U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->io_float_i_0 
                                                             >> 2U))))));
    PvuTop__DOT__float2posit_fp8__DOT__floatDecoder__DOT___GEN_0 
        = (((0U == (7U & (IData)(vlSelf->io_float_i_3))) 
            << 3U) | (((0U == (7U & (IData)(vlSelf->io_float_i_2))) 
                       << 2U) | (((0U == (7U & (IData)(vlSelf->io_float_i_1))) 
                                  << 1U) | (0U == (7U 
                                                   & (IData)(vlSelf->io_float_i_0))))));
    PvuTop__DOT__float2posit_fp16__DOT__floatDecoder__DOT___GEN_0 
        = (((0U == (0x3ffU & (IData)(vlSelf->io_float_i_3))) 
            << 3U) | (((0U == (0x3ffU & (IData)(vlSelf->io_float_i_2))) 
                       << 2U) | (((0U == (0x3ffU & (IData)(vlSelf->io_float_i_1))) 
                                  << 1U) | (0U == (0x3ffU 
                                                   & (IData)(vlSelf->io_float_i_0))))));
    PvuTop__DOT__float2posit_fp8__DOT__floatDecoder__DOT___GEN 
        = (((IData)((0xfU == (0xfU & (IData)((vlSelf->io_float_i_3 
                                              >> 3U))))) 
            << 3U) | (((IData)((0xfU == (0xfU & (IData)(
                                                        (vlSelf->io_float_i_2 
                                                         >> 3U))))) 
                       << 2U) | (((IData)((0xfU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->io_float_i_1 
                                                            >> 3U))))) 
                                  << 1U) | (0xfU == 
                                            (0xfU & (IData)(
                                                            (vlSelf->io_float_i_0 
                                                             >> 3U)))))));
    PvuTop__DOT__float2posit_fp16__DOT__floatDecoder__DOT___GEN 
        = (((IData)((0x1fU == (0x1fU & (IData)((vlSelf->io_float_i_3 
                                                >> 0xaU))))) 
            << 3U) | (((IData)((0x1fU == (0x1fU & (IData)(
                                                          (vlSelf->io_float_i_2 
                                                           >> 0xaU))))) 
                       << 2U) | (((IData)((0x1fU == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->io_float_i_1 
                                                             >> 0xaU))))) 
                                  << 1U) | (0x1fU == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelf->io_float_i_0 
                                                        >> 0xaU)))))));
    PvuTop__DOT__float2posit_fp32__DOT__floatDecoder__DOT___GEN_0 
        = (((0U == (0x7fffffU & (IData)(vlSelf->io_float_i_3))) 
            << 3U) | (((0U == (0x7fffffU & (IData)(vlSelf->io_float_i_2))) 
                       << 2U) | (((0U == (0x7fffffU 
                                          & (IData)(vlSelf->io_float_i_1))) 
                                  << 1U) | (0U == (0x7fffffU 
                                                   & (IData)(vlSelf->io_float_i_0))))));
    PvuTop__DOT__float2posit_fp64__DOT__floatDecoder__DOT___GEN_0 
        = (((0ULL == (0xfffffffffffffULL & vlSelf->io_float_i_3)) 
            << 3U) | (((0ULL == (0xfffffffffffffULL 
                                 & vlSelf->io_float_i_2)) 
                       << 2U) | (((0ULL == (0xfffffffffffffULL 
                                            & vlSelf->io_float_i_1)) 
                                  << 1U) | (0ULL == 
                                            (0xfffffffffffffULL 
                                             & vlSelf->io_float_i_0)))));
    PvuTop__DOT__float2posit_fp32__DOT__floatDecoder__DOT___GEN 
        = (((IData)((0xffU == (0xffU & (IData)((vlSelf->io_float_i_3 
                                                >> 0x17U))))) 
            << 3U) | (((IData)((0xffU == (0xffU & (IData)(
                                                          (vlSelf->io_float_i_2 
                                                           >> 0x17U))))) 
                       << 2U) | (((IData)((0xffU == 
                                           (0xffU & (IData)(
                                                            (vlSelf->io_float_i_1 
                                                             >> 0x17U))))) 
                                  << 1U) | (0xffU == 
                                            (0xffU 
                                             & (IData)(
                                                       (vlSelf->io_float_i_0 
                                                        >> 0x17U)))))));
    PvuTop__DOT__float2posit_fp64__DOT__floatDecoder__DOT___GEN 
        = (((IData)((0x7ffU == (0x7ffU & (IData)((vlSelf->io_float_i_3 
                                                  >> 0x34U))))) 
            << 3U) | (((IData)((0x7ffU == (0x7ffU & (IData)(
                                                            (vlSelf->io_float_i_2 
                                                             >> 0x34U))))) 
                       << 2U) | (((IData)((0x7ffU == 
                                           (0x7ffU 
                                            & (IData)(
                                                      (vlSelf->io_float_i_1 
                                                       >> 0x34U))))) 
                                  << 1U) | (0x7ffU 
                                            == (0x7ffU 
                                                & (IData)(
                                                          (vlSelf->io_float_i_0 
                                                           >> 0x34U)))))));
    vlSelf->__VdfgTmp_h4c08f538__0 = ((2U != (IData)(vlSelf->io_op)) 
                                      | (1U == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT___GEN_84 = ((5U == (IData)(vlSelf->io_op)) 
                                    | ((6U == (IData)(vlSelf->io_op)) 
                                       | (7U == (IData)(vlSelf->io_op))));
    vlSelf->PvuTop__DOT__greater__DOT___GEN_9 = ((0x80000000U 
                                                  == vlSelf->io_posit_i1_2) 
                                                 & (0x80000000U 
                                                    == vlSelf->io_posit_i2_2));
    vlSelf->PvuTop__DOT__greater__DOT___GEN_4 = ((0x80000000U 
                                                  == vlSelf->io_posit_i1_1) 
                                                 & (0x80000000U 
                                                    == vlSelf->io_posit_i2_1));
    vlSelf->PvuTop__DOT__greater__DOT___GEN = ((0x80000000U 
                                                == vlSelf->io_posit_i1_0) 
                                               & (0x80000000U 
                                                  == vlSelf->io_posit_i2_0));
    vlSelf->PvuTop__DOT__greater__DOT___GEN_14 = ((0x80000000U 
                                                   == vlSelf->io_posit_i1_3) 
                                                  & (0x80000000U 
                                                     == vlSelf->io_posit_i2_3));
    PvuTop__DOT____VdfgTmp_hf32446e1__0 = ((1U == (IData)(vlSelf->io_op)) 
                                           | (2U == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0 = (IData)(
                                                          (((IData)(vlSelf->io_vector_size) 
                                                            >> 2U) 
                                                           | (0U 
                                                              == (IData)(vlSelf->io_vector_size))));
    vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE = ((0U 
                                                == (IData)(vlSelf->io_vector_size))
                                                ? 4U
                                                : (IData)(vlSelf->io_vector_size));
    vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0 = (IData)(
                                                          ((0U 
                                                            != 
                                                            (6U 
                                                             & (IData)(vlSelf->io_vector_size))) 
                                                           | (0U 
                                                              == (IData)(vlSelf->io_vector_size))));
    vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0 = (
                                                   (0U 
                                                    == (IData)(vlSelf->io_vector_size)) 
                                                   | (0U 
                                                      != (IData)(vlSelf->io_vector_size)));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[0U] 
        = vlSelf->io_posit_i1_0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[1U] 
        = vlSelf->io_posit_i1_1;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[2U] 
        = (IData)((((QData)((IData)(vlSelf->io_posit_i1_3)) 
                    << 0x20U) | (QData)((IData)(vlSelf->io_posit_i1_2))));
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[3U] 
        = (IData)(((((QData)((IData)(vlSelf->io_posit_i1_3)) 
                     << 0x20U) | (QData)((IData)(vlSelf->io_posit_i1_2))) 
                   >> 0x20U));
    if (vlSelf->io_Isposit) {
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a383c23__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a383c23__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h898ddcf9__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8933512e__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h88bc2594__0 = 0U;
        vlSelf->PvuTop__DOT____Vcellinp__decode2__io_posit[0U] 
            = vlSelf->io_posit_i2_0;
        vlSelf->PvuTop__DOT____Vcellinp__decode2__io_posit[1U] 
            = vlSelf->io_posit_i2_1;
        vlSelf->PvuTop__DOT____Vcellinp__decode2__io_posit[2U] 
            = (IData)((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                        << 0x20U) | (QData)((IData)(vlSelf->io_posit_i2_2))));
        vlSelf->PvuTop__DOT____Vcellinp__decode2__io_posit[3U] 
            = (IData)(((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                         << 0x20U) | (QData)((IData)(vlSelf->io_posit_i2_2))) 
                       >> 0x20U));
        vlSelf->PvuTop__DOT____Vcellinp__decode1__io_posit[0U] 
            = vlSelf->PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[0U];
        vlSelf->PvuTop__DOT____Vcellinp__decode1__io_posit[1U] 
            = vlSelf->PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[1U];
        vlSelf->PvuTop__DOT____Vcellinp__decode1__io_posit[2U] 
            = vlSelf->PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[2U];
        vlSelf->PvuTop__DOT____Vcellinp__decode1__io_posit[3U] 
            = vlSelf->PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit[3U];
    } else {
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0 
            = (0xffU & (IData)((vlSelf->io_float_i2_0 
                                >> 0x17U)));
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0 
            = (0xffU & (IData)((vlSelf->io_float_i2_1 
                                >> 0x17U)));
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0 
            = (0xffU & (IData)((vlSelf->io_float_i2_2 
                                >> 0x17U)));
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0 
            = (0xffU & (IData)((vlSelf->io_float_i2_3 
                                >> 0x17U)));
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0 
            = (0xffU & (IData)((vlSelf->io_float_i_3 
                                >> 0x17U)));
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0 
            = (0xffU & (IData)((vlSelf->io_float_i_0 
                                >> 0x17U)));
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0 
            = (0xffU & (IData)((vlSelf->io_float_i_1 
                                >> 0x17U)));
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0 
            = (0xffU & (IData)((vlSelf->io_float_i_2 
                                >> 0x17U)));
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a383c23__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_3));
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_2));
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_1));
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i_0));
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a383c23__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i2_3));
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h898ddcf9__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i2_2));
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8933512e__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i2_1));
        vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h88bc2594__0 
            = (0x7fffffU & (IData)(vlSelf->io_float_i2_0));
        vlSelf->PvuTop__DOT____Vcellinp__decode2__io_posit[0U] = 0U;
        vlSelf->PvuTop__DOT____Vcellinp__decode2__io_posit[1U] = 0U;
        vlSelf->PvuTop__DOT____Vcellinp__decode2__io_posit[2U] = 0U;
        vlSelf->PvuTop__DOT____Vcellinp__decode2__io_posit[3U] = 0U;
        vlSelf->PvuTop__DOT____Vcellinp__decode1__io_posit[0U] = 0U;
        vlSelf->PvuTop__DOT____Vcellinp__decode1__io_posit[1U] = 0U;
        vlSelf->PvuTop__DOT____Vcellinp__decode1__io_posit[2U] = 0U;
        vlSelf->PvuTop__DOT____Vcellinp__decode1__io_posit[3U] = 0U;
    }
    vlSelf->PvuTop__DOT____VdfgTmp_h41d5b416__0 = ((IData)(vlSelf->PvuTop__DOT___GEN_106) 
                                                   & (5U 
                                                      == (IData)(vlSelf->io_op)));
    PvuTop__DOT___GEN_112 = ((~ (IData)(vlSelf->io_Isposit)) 
                             & (IData)(vlSelf->PvuTop__DOT___GEN_106));
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR)) 
           & (0U == vlSelf->io_posit_i1_0));
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR) 
           | (0U == vlSelf->io_posit_i1_0));
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_1)) 
           & (0U == vlSelf->io_posit_i1_1));
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_1) 
           | (0U == vlSelf->io_posit_i1_1));
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_2)) 
           & (0U == vlSelf->io_posit_i1_2));
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_2) 
           | (0U == vlSelf->io_posit_i1_2));
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_3)) 
           & (0U == vlSelf->io_posit_i1_3));
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2 
        = ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_3) 
           | (0U == vlSelf->io_posit_i1_3));
    vlSelf->PvuTop__DOT__greater__DOT___GEN_19 = (IData)(
                                                         (((IData)(vlSelf->io_dst_posit_width) 
                                                           >> 5U) 
                                                          | ((0x20U 
                                                              < (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH)) 
                                                             | (0U 
                                                                == (IData)(vlSelf->io_dst_posit_width)))));
    vlSelf->__VdfgTmp_hfd59c922__0 = ((0xc0U & ((- (IData)((IData)(__VdfgTmp_h47dd10e4__0))) 
                                                << 6U)) 
                                      | ((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_0 
                                                            >> 0xaU))))
                                          ? 0x32U : 
                                         ((0x1fU == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->io_float_i_0 
                                                             >> 0xaU))))
                                           ? 0U : (
                                                   (0x20U 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 0xaU)) 
                                                        - (IData)(0xfU)) 
                                                       << 1U)) 
                                                   | (0x1fU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_0 
                                                                  >> 0xaU)) 
                                                         - (IData)(0xfU)))))));
    vlSelf->__VdfgTmp_hae798458__0 = ((0xc0U & ((- (IData)((IData)(__VdfgTmp_h5ae47e0d__0))) 
                                                << 6U)) 
                                      | ((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_1 
                                                            >> 0xaU))))
                                          ? 0x32U : 
                                         ((0x1fU == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->io_float_i_1 
                                                             >> 0xaU))))
                                           ? 0U : (
                                                   (0x20U 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0xaU)) 
                                                        - (IData)(0xfU)) 
                                                       << 1U)) 
                                                   | (0x1fU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_1 
                                                                  >> 0xaU)) 
                                                         - (IData)(0xfU)))))));
    vlSelf->__VdfgTmp_h79f5616b__0 = ((0xc0U & ((- (IData)((IData)(__VdfgTmp_hbb0fca81__0))) 
                                                << 6U)) 
                                      | ((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_2 
                                                            >> 0xaU))))
                                          ? 0x32U : 
                                         ((0x1fU == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->io_float_i_2 
                                                             >> 0xaU))))
                                           ? 0U : (
                                                   (0x20U 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0xaU)) 
                                                        - (IData)(0xfU)) 
                                                       << 1U)) 
                                                   | (0x1fU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_2 
                                                                  >> 0xaU)) 
                                                         - (IData)(0xfU)))))));
    vlSelf->__VdfgTmp_hd68df511__0 = ((0xe0U & ((- (IData)((IData)(__VdfgTmp_he17e1b5c__0))) 
                                                << 5U)) 
                                      | ((0U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_0 
                                                            >> 3U))))
                                          ? 0x1aU : 
                                         ((0xfU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->io_float_i_0 
                                                            >> 3U))))
                                           ? 0U : (
                                                   (0x10U 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 3U)) 
                                                        - (IData)(7U)) 
                                                       << 1U)) 
                                                   | (0xfU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_0 
                                                                  >> 3U)) 
                                                         - (IData)(7U)))))));
    vlSelf->__VdfgTmp_hec9ddcc6__0 = ((0xe0U & ((- (IData)((IData)(__VdfgTmp_hd5001709__0))) 
                                                << 5U)) 
                                      | ((0U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_1 
                                                            >> 3U))))
                                          ? 0x1aU : 
                                         ((0xfU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->io_float_i_1 
                                                            >> 3U))))
                                           ? 0U : (
                                                   (0x10U 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 3U)) 
                                                        - (IData)(7U)) 
                                                       << 1U)) 
                                                   | (0xfU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_1 
                                                                  >> 3U)) 
                                                         - (IData)(7U)))))));
    vlSelf->__VdfgTmp_h40b5ec32__0 = ((0xe0U & ((- (IData)((IData)(__VdfgTmp_hf52b612b__0))) 
                                                << 5U)) 
                                      | ((0U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_2 
                                                            >> 3U))))
                                          ? 0x1aU : 
                                         ((0xfU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->io_float_i_2 
                                                            >> 3U))))
                                           ? 0U : (
                                                   (0x10U 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 3U)) 
                                                        - (IData)(7U)) 
                                                       << 1U)) 
                                                   | (0xfU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_2 
                                                                  >> 3U)) 
                                                         - (IData)(7U)))))));
    vlSelf->__VdfgTmp_h97718ca4__0 = ((0xc0U & ((- (IData)((IData)(__VdfgTmp_heea12cbb__0))) 
                                                << 6U)) 
                                      | ((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_3 
                                                            >> 0xaU))))
                                          ? 0x32U : 
                                         ((0x1fU == 
                                           (0x1fU & (IData)(
                                                            (vlSelf->io_float_i_3 
                                                             >> 0xaU))))
                                           ? 0U : (
                                                   (0x20U 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_3 
                                                                 >> 0xaU)) 
                                                        - (IData)(0xfU)) 
                                                       << 1U)) 
                                                   | (0x1fU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_3 
                                                                  >> 0xaU)) 
                                                         - (IData)(0xfU)))))));
    vlSelf->__VdfgTmp_hbd21ddc4__0 = ((0xe0U & ((- (IData)((IData)(__VdfgTmp_hec5fca5a__0))) 
                                                << 5U)) 
                                      | ((0U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_3 
                                                            >> 3U))))
                                          ? 0x1aU : 
                                         ((0xfU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->io_float_i_3 
                                                            >> 3U))))
                                           ? 0U : (
                                                   (0x10U 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_3 
                                                                 >> 3U)) 
                                                        - (IData)(7U)) 
                                                       << 1U)) 
                                                   | (0xfU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_3 
                                                                  >> 3U)) 
                                                         - (IData)(7U)))))));
    vlSelf->PvuTop__DOT___GEN_62 = (IData)((((IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH) 
                                             >> 5U) 
                                            | (0x20U 
                                               < (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero 
        = (((8U & ((~ (IData)((vlSelf->io_float_i_3 
                               >> 2U))) << 3U)) | (
                                                   (4U 
                                                    & ((~ (IData)(
                                                                  (vlSelf->io_float_i_2 
                                                                   >> 2U))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((~ (IData)(
                                                                     (vlSelf->io_float_i_1 
                                                                      >> 2U))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ (IData)(
                                                                      (vlSelf->io_float_i_0 
                                                                       >> 2U))))))) 
           & (IData)(PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN_0));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isInf 
        = ((IData)(PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN) 
           & (IData)(PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN_0));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isNaN 
        = ((IData)(PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN) 
           & (((IData)((0U != (3U & (IData)(vlSelf->io_float_i_3)))) 
               << 3U) | (((IData)((0U != (3U & (IData)(vlSelf->io_float_i_2)))) 
                          << 2U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->io_float_i_1)))) 
                                     << 1U) | (0U != 
                                               (3U 
                                                & (IData)(vlSelf->io_float_i_0)))))));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isZero 
        = ((((0U == (0xfU & (IData)((vlSelf->io_float_i_3 
                                     >> 3U)))) << 3U) 
            | (((0U == (0xfU & (IData)((vlSelf->io_float_i_2 
                                        >> 3U)))) << 2U) 
               | (((0U == (0xfU & (IData)((vlSelf->io_float_i_1 
                                           >> 3U)))) 
                   << 1U) | (0U == (0xfU & (IData)(
                                                   (vlSelf->io_float_i_0 
                                                    >> 3U))))))) 
           & (IData)(PvuTop__DOT__float2posit_fp8__DOT__floatDecoder__DOT___GEN_0));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isZero 
        = ((((0U == (0x1fU & (IData)((vlSelf->io_float_i_3 
                                      >> 0xaU)))) << 3U) 
            | (((0U == (0x1fU & (IData)((vlSelf->io_float_i_2 
                                         >> 0xaU)))) 
                << 2U) | (((0U == (0x1fU & (IData)(
                                                   (vlSelf->io_float_i_1 
                                                    >> 0xaU)))) 
                           << 1U) | (0U == (0x1fU & (IData)(
                                                            (vlSelf->io_float_i_0 
                                                             >> 0xaU))))))) 
           & (IData)(PvuTop__DOT__float2posit_fp16__DOT__floatDecoder__DOT___GEN_0));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isInf 
        = ((IData)(PvuTop__DOT__float2posit_fp8__DOT__floatDecoder__DOT___GEN) 
           & (IData)(PvuTop__DOT__float2posit_fp8__DOT__floatDecoder__DOT___GEN_0));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isNaN 
        = ((IData)(PvuTop__DOT__float2posit_fp8__DOT__floatDecoder__DOT___GEN) 
           & (((IData)((0U != (7U & (IData)(vlSelf->io_float_i_3)))) 
               << 3U) | (((IData)((0U != (7U & (IData)(vlSelf->io_float_i_2)))) 
                          << 2U) | (((IData)((0U != 
                                              (7U & (IData)(vlSelf->io_float_i_1)))) 
                                     << 1U) | (0U != 
                                               (7U 
                                                & (IData)(vlSelf->io_float_i_0)))))));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isInf 
        = ((IData)(PvuTop__DOT__float2posit_fp16__DOT__floatDecoder__DOT___GEN) 
           & (IData)(PvuTop__DOT__float2posit_fp16__DOT__floatDecoder__DOT___GEN_0));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isNaN 
        = ((IData)(PvuTop__DOT__float2posit_fp16__DOT__floatDecoder__DOT___GEN) 
           & (((IData)((0U != (0x3ffU & (IData)(vlSelf->io_float_i_3)))) 
               << 3U) | (((IData)((0U != (0x3ffU & (IData)(vlSelf->io_float_i_2)))) 
                          << 2U) | (((IData)((0U != 
                                              (0x3ffU 
                                               & (IData)(vlSelf->io_float_i_1)))) 
                                     << 1U) | (0U != 
                                               (0x3ffU 
                                                & (IData)(vlSelf->io_float_i_0)))))));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isZero 
        = ((((0U == (0xffU & (IData)((vlSelf->io_float_i_3 
                                      >> 0x17U)))) 
             << 3U) | (((0U == (0xffU & (IData)((vlSelf->io_float_i_2 
                                                 >> 0x17U)))) 
                        << 2U) | (((0U == (0xffU & (IData)(
                                                           (vlSelf->io_float_i_1 
                                                            >> 0x17U)))) 
                                   << 1U) | (0U == 
                                             (0xffU 
                                              & (IData)(
                                                        (vlSelf->io_float_i_0 
                                                         >> 0x17U))))))) 
           & (IData)(PvuTop__DOT__float2posit_fp32__DOT__floatDecoder__DOT___GEN_0));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isZero 
        = ((((0U == (0x7ffU & (IData)((vlSelf->io_float_i_3 
                                       >> 0x34U)))) 
             << 3U) | (((0U == (0x7ffU & (IData)((vlSelf->io_float_i_2 
                                                  >> 0x34U)))) 
                        << 2U) | (((0U == (0x7ffU & (IData)(
                                                            (vlSelf->io_float_i_1 
                                                             >> 0x34U)))) 
                                   << 1U) | (0U == 
                                             (0x7ffU 
                                              & (IData)(
                                                        (vlSelf->io_float_i_0 
                                                         >> 0x34U))))))) 
           & (IData)(PvuTop__DOT__float2posit_fp64__DOT__floatDecoder__DOT___GEN_0));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isInf 
        = ((IData)(PvuTop__DOT__float2posit_fp32__DOT__floatDecoder__DOT___GEN) 
           & (IData)(PvuTop__DOT__float2posit_fp32__DOT__floatDecoder__DOT___GEN_0));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isNaN 
        = ((IData)(PvuTop__DOT__float2posit_fp32__DOT__floatDecoder__DOT___GEN) 
           & (((IData)((0U != (0x7fffffU & (IData)(vlSelf->io_float_i_3)))) 
               << 3U) | (((IData)((0U != (0x7fffffU 
                                          & (IData)(vlSelf->io_float_i_2)))) 
                          << 2U) | (((IData)((0U != 
                                              (0x7fffffU 
                                               & (IData)(vlSelf->io_float_i_1)))) 
                                     << 1U) | (0U != 
                                               (0x7fffffU 
                                                & (IData)(vlSelf->io_float_i_0)))))));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isInf 
        = ((IData)(PvuTop__DOT__float2posit_fp64__DOT__floatDecoder__DOT___GEN) 
           & (IData)(PvuTop__DOT__float2posit_fp64__DOT__floatDecoder__DOT___GEN_0));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isNaN 
        = ((IData)(PvuTop__DOT__float2posit_fp64__DOT__floatDecoder__DOT___GEN) 
           & (((IData)((0U != (0xfffffffffffffULL & vlSelf->io_float_i_3))) 
               << 3U) | (((IData)((0U != (0xfffffffffffffULL 
                                          & vlSelf->io_float_i_2))) 
                          << 2U) | (((IData)((0U != 
                                              (0xfffffffffffffULL 
                                               & vlSelf->io_float_i_1))) 
                                     << 1U) | (0U != 
                                               (0xfffffffffffffULL 
                                                & vlSelf->io_float_i_0))))));
    vlSelf->PvuTop__DOT___GEN_130 = ((IData)(vlSelf->PvuTop__DOT___GEN_84) 
                                     | ((8U == (IData)(vlSelf->io_op)) 
                                        | ((9U == (IData)(vlSelf->io_op)) 
                                           | (0xaU 
                                              == (IData)(vlSelf->io_op)))));
    vlSelf->__VdfgTmp_h5f8b4dd4__0 = ((3U != (IData)(vlSelf->io_op)) 
                                      | (IData)(PvuTop__DOT____VdfgTmp_hf32446e1__0));
    PvuTop__DOT____VdfgTmp_h60524ea4__0 = ((IData)(PvuTop__DOT____VdfgTmp_hf32446e1__0) 
                                           | (3U == (IData)(vlSelf->io_op)));
    PvuTop__DOT__floatDecode2__DOT___GEN = (((IData)(
                                                     (0xffU 
                                                      == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0))) 
                                             << 3U) 
                                            | (((IData)(
                                                        (0xffU 
                                                         == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0xffU 
                                                            == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))) 
                                                   << 1U) 
                                                  | (0xffU 
                                                     == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0)))));
    PvuTop__DOT__floatDecode1__DOT___GEN = (((IData)(
                                                     (0xffU 
                                                      == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0))) 
                                             << 3U) 
                                            | (((IData)(
                                                        (0xffU 
                                                         == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0xffU 
                                                            == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))) 
                                                   << 1U) 
                                                  | (0xffU 
                                                     == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0)))));
    PvuTop__DOT__floatDecode1__DOT___GEN_0 = (((0U 
                                                == vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a383c23__0) 
                                               << 3U) 
                                              | (((0U 
                                                   == vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0) 
                                                  << 2U) 
                                                 | (((0U 
                                                      == vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0) 
                                                     << 1U) 
                                                    | (0U 
                                                       == vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0))));
    vlSelf->PvuTop__DOT____VdfgTmp_h9b56b116__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                                   & (IData)(PvuTop__DOT____VdfgTmp_h4a2a4b59__0));
    vlSelf->PvuTop__DOT___GEN_97 = ((9U == (IData)(vlSelf->io_op)) 
                                    & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0));
    vlSelf->__VdfgTmp_he5c1ee02__0 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)) 
                                            | (5U == (IData)(vlSelf->io_op))));
    vlSelf->PvuTop__DOT____VdfgTmp_hfcce9a03__0 = (
                                                   (~ (IData)(vlSelf->io_Isposit)) 
                                                   & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0));
    vlSelf->PvuTop__DOT___GEN_36 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)) 
                                          | (IData)(vlSelf->io_Isposit)));
    PvuTop__DOT__floatDecode2__DOT___GEN_0 = (((0U 
                                                == vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a383c23__0) 
                                               << 3U) 
                                              | (((0U 
                                                   == vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h898ddcf9__0) 
                                                  << 2U) 
                                                 | (((0U 
                                                      == vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8933512e__0) 
                                                     << 1U) 
                                                    | (0U 
                                                       == vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h88bc2594__0))));
    vlSelf->PvuTop__DOT____VdfgTmp_h4d703b6d__0 = (
                                                   (2U 
                                                    < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (IData)(PvuTop__DOT____VdfgTmp_h4a2a4b59__0));
    vlSelf->PvuTop__DOT___GEN_95 = ((9U == (IData)(vlSelf->io_op)) 
                                    & (2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)));
    vlSelf->__VdfgTmp_h58084909__0 = ((2U >= (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                      | (5U == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT____VdfgTmp_hf8feb26e__0 = (
                                                   (~ (IData)(vlSelf->io_Isposit)) 
                                                   & (2U 
                                                      < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)));
    vlSelf->PvuTop__DOT___GEN_28 = ((2U >= (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                    | (IData)(vlSelf->io_Isposit));
    vlSelf->PvuTop__DOT____VdfgTmp_hfe6df398__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                   & (IData)(PvuTop__DOT____VdfgTmp_h4a2a4b59__0));
    vlSelf->PvuTop__DOT___GEN_93 = ((9U == (IData)(vlSelf->io_op)) 
                                    & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0));
    vlSelf->__VdfgTmp_hb8dc97df__0 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)) 
                                            | (5U == (IData)(vlSelf->io_op))));
    vlSelf->PvuTop__DOT____VdfgTmp_ha4ea0160__0 = (
                                                   (~ (IData)(vlSelf->io_Isposit)) 
                                                   & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0));
    vlSelf->PvuTop__DOT___GEN_20 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)) 
                                          | (IData)(vlSelf->io_Isposit)));
    vlSelf->PvuTop__DOT____VdfgTmp_h48f6830c__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                   & (IData)(PvuTop__DOT____VdfgTmp_h4a2a4b59__0));
    vlSelf->PvuTop__DOT___GEN_89 = ((9U == (IData)(vlSelf->io_op)) 
                                    & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0));
    vlSelf->__VdfgTmp_h49ee0820__0 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)) 
                                            | (5U == (IData)(vlSelf->io_op))));
    vlSelf->PvuTop__DOT____VdfgTmp_hfc1dda1b__0 = (
                                                   (~ (IData)(vlSelf->io_Isposit)) 
                                                   & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0));
    vlSelf->PvuTop__DOT___GEN_12 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)) 
                                          | (IData)(vlSelf->io_Isposit)));
    PvuTop__DOT__float2posit_fp4__DOT___GEN = (1U & 
                                               ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isInf) 
                                                | (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isNaN)));
    PvuTop__DOT__float2posit_fp4__DOT___GEN_1 = (1U 
                                                 & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isInf) 
                                                     | (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isNaN)) 
                                                    >> 1U));
    PvuTop__DOT__float2posit_fp4__DOT___GEN_3 = (1U 
                                                 & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isInf) 
                                                     | (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isNaN)) 
                                                    >> 2U));
    PvuTop__DOT__float2posit_fp4__DOT___GEN_5 = (1U 
                                                 & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isInf) 
                                                     | (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isNaN)) 
                                                    >> 3U));
    PvuTop__DOT__float2posit_fp8__DOT___GEN = (1U & 
                                               ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isInf) 
                                                | (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isNaN)));
    PvuTop__DOT__float2posit_fp8__DOT___GEN_1 = (1U 
                                                 & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isInf) 
                                                     | (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isNaN)) 
                                                    >> 1U));
    PvuTop__DOT__float2posit_fp8__DOT___GEN_3 = (1U 
                                                 & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isInf) 
                                                     | (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isNaN)) 
                                                    >> 2U));
    PvuTop__DOT__float2posit_fp8__DOT___GEN_5 = (1U 
                                                 & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isInf) 
                                                     | (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isNaN)) 
                                                    >> 3U));
    PvuTop__DOT__float2posit_fp16__DOT___GEN = (1U 
                                                & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isInf) 
                                                   | (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isNaN)));
    PvuTop__DOT__float2posit_fp16__DOT___GEN_1 = (1U 
                                                  & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isInf) 
                                                      | (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isNaN)) 
                                                     >> 1U));
    PvuTop__DOT__float2posit_fp16__DOT___GEN_3 = (1U 
                                                  & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isInf) 
                                                      | (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isNaN)) 
                                                     >> 2U));
    PvuTop__DOT__float2posit_fp16__DOT___GEN_5 = (1U 
                                                  & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isInf) 
                                                      | (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isNaN)) 
                                                     >> 3U));
    PvuTop__DOT__float2posit_fp32__DOT___GEN = (1U 
                                                & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isInf) 
                                                   | (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isNaN)));
    PvuTop__DOT__float2posit_fp32__DOT___GEN_1 = (1U 
                                                  & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isInf) 
                                                      | (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isNaN)) 
                                                     >> 1U));
    PvuTop__DOT__float2posit_fp32__DOT___GEN_3 = (1U 
                                                  & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isInf) 
                                                      | (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isNaN)) 
                                                     >> 2U));
    PvuTop__DOT__float2posit_fp32__DOT___GEN_5 = (1U 
                                                  & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isInf) 
                                                      | (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isNaN)) 
                                                     >> 3U));
    PvuTop__DOT__float2posit_fp64__DOT___GEN = (1U 
                                                & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isInf) 
                                                   | (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isNaN)));
    PvuTop__DOT__float2posit_fp64__DOT___GEN_1 = (1U 
                                                  & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isInf) 
                                                      | (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isNaN)) 
                                                     >> 1U));
    PvuTop__DOT__float2posit_fp64__DOT___GEN_3 = (1U 
                                                  & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isInf) 
                                                      | (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isNaN)) 
                                                     >> 2U));
    PvuTop__DOT__float2posit_fp64__DOT___GEN_5 = (1U 
                                                  & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isInf) 
                                                      | (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isNaN)) 
                                                     >> 3U));
    vlSelf->__VdfgTmp_hce76d41b__0 = ((4U != (IData)(vlSelf->io_op)) 
                                      | (IData)(PvuTop__DOT____VdfgTmp_h60524ea4__0));
    PvuTop__DOT___GEN_51 = ((IData)(PvuTop__DOT____VdfgTmp_h60524ea4__0) 
                            | (4U == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT___floatDecode2_io_isNaN = ((IData)(PvuTop__DOT__floatDecode2__DOT___GEN) 
                                                   & ((((~ (IData)(vlSelf->io_Isposit)) 
                                                        & (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & (IData)(vlSelf->io_float_i2_3)))) 
                                                       << 3U) 
                                                      | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffU 
                                                               & (IData)(vlSelf->io_float_i2_2)))) 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                              & (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & (IData)(vlSelf->io_float_i2_1)))) 
                                                             << 1U) 
                                                            | ((~ (IData)(vlSelf->io_Isposit)) 
                                                               & (0U 
                                                                  != 
                                                                  (0x7fffffU 
                                                                   & (IData)(vlSelf->io_float_i2_0))))))));
    vlSelf->PvuTop__DOT___floatDecode1_io_isNaN = ((IData)(PvuTop__DOT__floatDecode1__DOT___GEN) 
                                                   & ((((~ (IData)(vlSelf->io_Isposit)) 
                                                        & (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & (IData)(vlSelf->io_float_i_3)))) 
                                                       << 3U) 
                                                      | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffU 
                                                               & (IData)(vlSelf->io_float_i_2)))) 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                              & (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & (IData)(vlSelf->io_float_i_1)))) 
                                                             << 1U) 
                                                            | ((~ (IData)(vlSelf->io_Isposit)) 
                                                               & (0U 
                                                                  != 
                                                                  (0x7fffffU 
                                                                   & (IData)(vlSelf->io_float_i_0))))))));
    vlSelf->PvuTop__DOT___floatDecode1_io_isZero = 
        ((((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0)) 
           << 3U) | (((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0)) 
                      << 2U) | (((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0)) 
                                 << 1U) | (0U == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))))) 
         & (IData)(PvuTop__DOT__floatDecode1__DOT___GEN_0));
    vlSelf->PvuTop__DOT___floatDecode1_io_isInf = ((IData)(PvuTop__DOT__floatDecode1__DOT___GEN) 
                                                   & (IData)(PvuTop__DOT__floatDecode1__DOT___GEN_0));
    PvuTop__DOT____VdfgTmp_hfa146d96__0 = ((~ (IData)(vlSelf->io_Isposit)) 
                                           & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h9b56b116__0));
    vlSelf->PvuTop__DOT___GEN_39 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfcce9a03__0) 
                                    & ((~ (IData)(vlSelf->io_Isposit)) 
                                       & (IData)((vlSelf->io_float_i_3 
                                                  >> 0x1fU))));
    vlSelf->PvuTop__DOT___GEN_42 = ((IData)(vlSelf->PvuTop__DOT___GEN_36)
                                     ? 0U : ((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0))
                                              ? 0x82U
                                              : ((0xffU 
                                                  == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0))
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0) 
                                                     - (IData)(0x7fU))))));
    vlSelf->PvuTop__DOT___floatDecode2_io_isZero = 
        ((((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0)) 
           << 3U) | (((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0)) 
                      << 2U) | (((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0)) 
                                 << 1U) | (0U == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0))))) 
         & (IData)(PvuTop__DOT__floatDecode2__DOT___GEN_0));
    vlSelf->PvuTop__DOT___floatDecode2_io_isInf = ((IData)(PvuTop__DOT__floatDecode2__DOT___GEN) 
                                                   & (IData)(PvuTop__DOT__floatDecode2__DOT___GEN_0));
    PvuTop__DOT____VdfgTmp_h882ee63f__0 = ((~ (IData)(vlSelf->io_Isposit)) 
                                           & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h4d703b6d__0));
    vlSelf->PvuTop__DOT___GEN_31 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hf8feb26e__0) 
                                    & ((~ (IData)(vlSelf->io_Isposit)) 
                                       & (IData)((vlSelf->io_float_i_2 
                                                  >> 0x1fU))));
    vlSelf->PvuTop__DOT___GEN_33 = ((IData)(vlSelf->PvuTop__DOT___GEN_28)
                                     ? 0U : ((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0))
                                              ? 0x82U
                                              : ((0xffU 
                                                  == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0))
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0) 
                                                     - (IData)(0x7fU))))));
    PvuTop__DOT____VdfgTmp_h592cae14__0 = ((~ (IData)(vlSelf->io_Isposit)) 
                                           & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfe6df398__0));
    vlSelf->PvuTop__DOT___GEN_23 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha4ea0160__0) 
                                    & ((~ (IData)(vlSelf->io_Isposit)) 
                                       & (IData)((vlSelf->io_float_i_1 
                                                  >> 0x1fU))));
    vlSelf->PvuTop__DOT___GEN_25 = ((IData)(vlSelf->PvuTop__DOT___GEN_20)
                                     ? 0U : ((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))
                                              ? 0x82U
                                              : ((0xffU 
                                                  == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0) 
                                                     - (IData)(0x7fU))))));
    PvuTop__DOT____VdfgTmp_h94b45f98__0 = ((~ (IData)(vlSelf->io_Isposit)) 
                                           & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h48f6830c__0));
    vlSelf->PvuTop__DOT___GEN_15 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfc1dda1b__0) 
                                    & ((~ (IData)(vlSelf->io_Isposit)) 
                                       & (IData)((vlSelf->io_float_i_0 
                                                  >> 0x1fU))));
    vlSelf->PvuTop__DOT___GEN_17 = ((IData)(vlSelf->PvuTop__DOT___GEN_12)
                                     ? 0U : ((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))
                                              ? 0x82U
                                              : ((0xffU 
                                                  == (IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0) 
                                                     - (IData)(0x7fU))))));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0 
        = (1U & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero)) 
                 & ((IData)(PvuTop__DOT__float2posit_fp4__DOT___GEN) 
                    | (IData)((vlSelf->io_float_i_0 
                               >> 3U)))));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                 | (IData)(PvuTop__DOT__float2posit_fp4__DOT___GEN)));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                     >> 1U)) & ((IData)(PvuTop__DOT__float2posit_fp4__DOT___GEN_1) 
                                | (IData)((vlSelf->io_float_i_1 
                                           >> 3U)))));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                  >> 1U) | (IData)(PvuTop__DOT__float2posit_fp4__DOT___GEN_1)));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                     >> 2U)) & ((IData)(PvuTop__DOT__float2posit_fp4__DOT___GEN_3) 
                                | (IData)((vlSelf->io_float_i_2 
                                           >> 3U)))));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                  >> 2U) | (IData)(PvuTop__DOT__float2posit_fp4__DOT___GEN_3)));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT____VdfgTmp_h878add96__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                     >> 3U)) & ((IData)(PvuTop__DOT__float2posit_fp4__DOT___GEN_5) 
                                | (IData)((vlSelf->io_float_i_3 
                                           >> 3U)))));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6 
        = (IData)((((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                    >> 3U) | (IData)(PvuTop__DOT__float2posit_fp4__DOT___GEN_5)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0 
        = (1U & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isZero)) 
                 & ((IData)(PvuTop__DOT__float2posit_fp8__DOT___GEN) 
                    | (IData)((vlSelf->io_float_i_0 
                               >> 7U)))));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isZero) 
                 | (IData)(PvuTop__DOT__float2posit_fp8__DOT___GEN)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isZero) 
                     >> 1U)) & ((IData)(PvuTop__DOT__float2posit_fp8__DOT___GEN_1) 
                                | (IData)((vlSelf->io_float_i_1 
                                           >> 7U)))));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isZero) 
                  >> 1U) | (IData)(PvuTop__DOT__float2posit_fp8__DOT___GEN_1)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isZero) 
                     >> 2U)) & ((IData)(PvuTop__DOT__float2posit_fp8__DOT___GEN_3) 
                                | (IData)((vlSelf->io_float_i_2 
                                           >> 7U)))));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isZero) 
                  >> 2U) | (IData)(PvuTop__DOT__float2posit_fp8__DOT___GEN_3)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h878add96__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isZero) 
                     >> 3U)) & ((IData)(PvuTop__DOT__float2posit_fp8__DOT___GEN_5) 
                                | (IData)((vlSelf->io_float_i_3 
                                           >> 7U)))));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6 
        = (IData)((((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isZero) 
                    >> 3U) | (IData)(PvuTop__DOT__float2posit_fp8__DOT___GEN_5)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0 
        = (1U & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isZero)) 
                 & ((IData)(PvuTop__DOT__float2posit_fp16__DOT___GEN) 
                    | (IData)((vlSelf->io_float_i_0 
                               >> 0xfU)))));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isZero) 
                 | (IData)(PvuTop__DOT__float2posit_fp16__DOT___GEN)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isZero) 
                     >> 1U)) & ((IData)(PvuTop__DOT__float2posit_fp16__DOT___GEN_1) 
                                | (IData)((vlSelf->io_float_i_1 
                                           >> 0xfU)))));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isZero) 
                  >> 1U) | (IData)(PvuTop__DOT__float2posit_fp16__DOT___GEN_1)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isZero) 
                     >> 2U)) & ((IData)(PvuTop__DOT__float2posit_fp16__DOT___GEN_3) 
                                | (IData)((vlSelf->io_float_i_2 
                                           >> 0xfU)))));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isZero) 
                  >> 2U) | (IData)(PvuTop__DOT__float2posit_fp16__DOT___GEN_3)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h878add96__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isZero) 
                     >> 3U)) & ((IData)(PvuTop__DOT__float2posit_fp16__DOT___GEN_5) 
                                | (IData)((vlSelf->io_float_i_3 
                                           >> 0xfU)))));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6 
        = (IData)((((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isZero) 
                    >> 3U) | (IData)(PvuTop__DOT__float2posit_fp16__DOT___GEN_5)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0 
        = (1U & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isZero)) 
                 & ((IData)(PvuTop__DOT__float2posit_fp32__DOT___GEN) 
                    | (IData)((vlSelf->io_float_i_0 
                               >> 0x1fU)))));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isZero) 
                 | (IData)(PvuTop__DOT__float2posit_fp32__DOT___GEN)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isZero) 
                     >> 1U)) & ((IData)(PvuTop__DOT__float2posit_fp32__DOT___GEN_1) 
                                | (IData)((vlSelf->io_float_i_1 
                                           >> 0x1fU)))));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isZero) 
                  >> 1U) | (IData)(PvuTop__DOT__float2posit_fp32__DOT___GEN_1)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isZero) 
                     >> 2U)) & ((IData)(PvuTop__DOT__float2posit_fp32__DOT___GEN_3) 
                                | (IData)((vlSelf->io_float_i_2 
                                           >> 0x1fU)))));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isZero) 
                  >> 2U) | (IData)(PvuTop__DOT__float2posit_fp32__DOT___GEN_3)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h878add96__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isZero) 
                     >> 3U)) & ((IData)(PvuTop__DOT__float2posit_fp32__DOT___GEN_5) 
                                | (IData)((vlSelf->io_float_i_3 
                                           >> 0x1fU)))));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6 
        = (IData)((((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isZero) 
                    >> 3U) | (IData)(PvuTop__DOT__float2posit_fp32__DOT___GEN_5)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0 
        = (1U & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isZero)) 
                 & ((IData)(PvuTop__DOT__float2posit_fp64__DOT___GEN) 
                    | (IData)((vlSelf->io_float_i_0 
                               >> 0x3fU)))));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isZero) 
                 | (IData)(PvuTop__DOT__float2posit_fp64__DOT___GEN)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isZero) 
                     >> 1U)) & ((IData)(PvuTop__DOT__float2posit_fp64__DOT___GEN_1) 
                                | (IData)((vlSelf->io_float_i_1 
                                           >> 0x3fU)))));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isZero) 
                  >> 1U) | (IData)(PvuTop__DOT__float2posit_fp64__DOT___GEN_1)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isZero) 
                     >> 2U)) & ((IData)(PvuTop__DOT__float2posit_fp64__DOT___GEN_3) 
                                | (IData)((vlSelf->io_float_i_2 
                                           >> 0x3fU)))));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isZero) 
                  >> 2U) | (IData)(PvuTop__DOT__float2posit_fp64__DOT___GEN_3)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h878add96__0 
        = (1U & ((~ ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isZero) 
                     >> 3U)) & ((IData)(PvuTop__DOT__float2posit_fp64__DOT___GEN_5) 
                                | (IData)((vlSelf->io_float_i_3 
                                           >> 0x3fU)))));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6 
        = (IData)((((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isZero) 
                    >> 3U) | (IData)(PvuTop__DOT__float2posit_fp64__DOT___GEN_5)));
    vlSelf->PvuTop__DOT___GEN_115 = (1U & ((~ (IData)(PvuTop__DOT___GEN_51)) 
                                           | (IData)(vlSelf->PvuTop__DOT___GEN_113)));
    vlSelf->PvuTop__DOT___GEN_91 = ((IData)(PvuTop__DOT___GEN_51) 
                                    | (5U == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT___GEN_52 = ((5U != (IData)(vlSelf->io_op)) 
                                    | (IData)(PvuTop__DOT___GEN_51));
    PvuTop__DOT___GEN_108 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfc1dda1b__0) 
                             & ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isNaN) 
                                | (IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isNaN)));
    PvuTop__DOT___GEN_109 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha4ea0160__0) 
                             & (((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isNaN) 
                                 | (IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isNaN)) 
                                >> 1U));
    PvuTop__DOT___GEN_110 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hf8feb26e__0) 
                             & (((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isNaN) 
                                 | (IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isNaN)) 
                                >> 2U));
    PvuTop__DOT___GEN_111 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfcce9a03__0) 
                             & (((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isNaN) 
                                 | (IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isNaN)) 
                                >> 3U));
    PvuTop__DOT___GEN_13 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfc1dda1b__0) 
                            & (IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isInf));
    PvuTop__DOT___GEN_21 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha4ea0160__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isInf) 
                               >> 1U));
    PvuTop__DOT___GEN_29 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hf8feb26e__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isInf) 
                               >> 2U));
    PvuTop__DOT___GEN_37 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfcce9a03__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isInf) 
                               >> 3U));
    PvuTop__DOT___GEN_14 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfc1dda1b__0) 
                            & (IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isInf));
    PvuTop__DOT___GEN_22 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha4ea0160__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isInf) 
                               >> 1U));
    PvuTop__DOT___GEN_30 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hf8feb26e__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isInf) 
                               >> 2U));
    PvuTop__DOT___GEN_38 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfcce9a03__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isInf) 
                               >> 3U));
    PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_0_T 
        = (0x40000000U | ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                             ? 0U : (1U & (~ (IData)(
                                                     (vlSelf->io_float_i_0 
                                                      >> 2U))))) 
                           << 0x1bU) | ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                                         ? 0U : (0x6000000U 
                                                 & ((IData)(vlSelf->io_float_i_0) 
                                                    << 0x19U)))));
    PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_1_T 
        = (0x40000000U | ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                             ? 0U : (1U & (~ (IData)(
                                                     (vlSelf->io_float_i_1 
                                                      >> 2U))))) 
                           << 0x1bU) | ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                                         ? 0U : (0x6000000U 
                                                 & ((IData)(vlSelf->io_float_i_1) 
                                                    << 0x19U)))));
    PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_2_T 
        = (0x40000000U | ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                             ? 0U : (1U & (~ (IData)(
                                                     (vlSelf->io_float_i_2 
                                                      >> 2U))))) 
                           << 0x1bU) | ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                                         ? 0U : (0x6000000U 
                                                 & ((IData)(vlSelf->io_float_i_2) 
                                                    << 0x19U)))));
    PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_3_T 
        = (0x40000000U | ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                             ? 0U : (1U & (~ (IData)(
                                                     (vlSelf->io_float_i_3 
                                                      >> 2U))))) 
                           << 0x1bU) | ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                                         ? 0U : (0x6000000U 
                                                 & ((IData)(vlSelf->io_float_i_3) 
                                                    << 0x19U)))));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)
            ? 0U : (0x7000000U & ((IData)(vlSelf->io_float_i_0) 
                                  << 0x18U)));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)) 
           & (IData)(__VdfgTmp_he17e1b5c__0));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)
            ? 0U : (0x7000000U & ((IData)(vlSelf->io_float_i_1) 
                                  << 0x18U)));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)) 
           & (IData)(__VdfgTmp_hd5001709__0));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)
            ? 0U : (0x7000000U & ((IData)(vlSelf->io_float_i_2) 
                                  << 0x18U)));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)) 
           & (IData)(__VdfgTmp_hf52b612b__0));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)
            ? 0U : (0x7000000U & ((IData)(vlSelf->io_float_i_3) 
                                  << 0x18U)));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)) 
           & (IData)(__VdfgTmp_hec5fca5a__0));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)
            ? 0U : (0x7fe0000U & ((IData)(vlSelf->io_float_i_0) 
                                  << 0x11U)));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)) 
           & (IData)(__VdfgTmp_h47dd10e4__0));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)
            ? 0U : (0x7fe0000U & ((IData)(vlSelf->io_float_i_1) 
                                  << 0x11U)));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)) 
           & (IData)(__VdfgTmp_h5ae47e0d__0));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)
            ? 0U : (0x7fe0000U & ((IData)(vlSelf->io_float_i_2) 
                                  << 0x11U)));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)) 
           & (IData)(__VdfgTmp_hbb0fca81__0));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)
            ? 0U : (0x7fe0000U & ((IData)(vlSelf->io_float_i_3) 
                                  << 0x11U)));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)) 
           & (IData)(__VdfgTmp_heea12cbb__0));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)
            ? 0U : (0x7fffff0U & ((IData)(vlSelf->io_float_i_0) 
                                  << 4U)));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)) 
           & (VL_GTES_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0)) 
              & (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0)) 
                 | ((0U == (0xffU & (IData)((vlSelf->io_float_i_0 
                                             >> 0x17U)))) 
                    | (1U & ((~ (IData)((0xffU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_0 
                                                              >> 0x17U)))))) 
                             & (((IData)((vlSelf->io_float_i_0 
                                          >> 0x17U)) 
                                 - (IData)(0x7fU)) 
                                >> 7U)))))));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)
            ? 0U : (0x7fffff0U & ((IData)(vlSelf->io_float_i_1) 
                                  << 4U)));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)) 
           & (VL_GTES_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0)) 
              & (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0)) 
                 | ((0U == (0xffU & (IData)((vlSelf->io_float_i_1 
                                             >> 0x17U)))) 
                    | (1U & ((~ (IData)((0xffU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_1 
                                                              >> 0x17U)))))) 
                             & (((IData)((vlSelf->io_float_i_1 
                                          >> 0x17U)) 
                                 - (IData)(0x7fU)) 
                                >> 7U)))))));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)
            ? 0U : (0x7fffff0U & ((IData)(vlSelf->io_float_i_2) 
                                  << 4U)));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)) 
           & (VL_GTES_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0)) 
              & (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0)) 
                 | ((0U == (0xffU & (IData)((vlSelf->io_float_i_2 
                                             >> 0x17U)))) 
                    | (1U & ((~ (IData)((0xffU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_2 
                                                              >> 0x17U)))))) 
                             & (((IData)((vlSelf->io_float_i_2 
                                          >> 0x17U)) 
                                 - (IData)(0x7fU)) 
                                >> 7U)))))));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)
            ? 0U : (0x7fffff0U & ((IData)(vlSelf->io_float_i_3) 
                                  << 4U)));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)) 
           & (VL_GTES_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0)) 
              & (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0)) 
                 | ((0U == (0xffU & (IData)((vlSelf->io_float_i_3 
                                             >> 0x17U)))) 
                    | (1U & ((~ (IData)((0xffU == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_3 
                                                              >> 0x17U)))))) 
                             & (((IData)((vlSelf->io_float_i_3 
                                          >> 0x17U)) 
                                 - (IData)(0x7fU)) 
                                >> 7U)))))));
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0)
            ? 0U : (0x7ffffffU & vlSelf->__VdfgTmp_h0416f4a1__0));
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0)) 
           & (VL_GTES_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0)) 
              & (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0)) 
                 | (0xfU & ((0U != (0x7ffU & (IData)(
                                                     (vlSelf->io_float_i_0 
                                                      >> 0x34U)))) 
                            & ((~ (IData)((0x7ffU == 
                                           (0x7ffU 
                                            & (IData)(
                                                      (vlSelf->io_float_i_0 
                                                       >> 0x34U)))))) 
                               & (((IData)((vlSelf->io_float_i_0 
                                            >> 0x34U)) 
                                   - (IData)(0x3ffU)) 
                                  >> 7U)))))));
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2)
            ? 0U : (0x7ffffffU & vlSelf->__VdfgTmp_h49c93cb3__0));
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2)) 
           & (VL_GTES_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0)) 
              & (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0)) 
                 | (0xfU & ((0U != (0x7ffU & (IData)(
                                                     (vlSelf->io_float_i_1 
                                                      >> 0x34U)))) 
                            & ((~ (IData)((0x7ffU == 
                                           (0x7ffU 
                                            & (IData)(
                                                      (vlSelf->io_float_i_1 
                                                       >> 0x34U)))))) 
                               & (((IData)((vlSelf->io_float_i_1 
                                            >> 0x34U)) 
                                   - (IData)(0x3ffU)) 
                                  >> 7U)))))));
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4)
            ? 0U : (0x7ffffffU & vlSelf->__VdfgTmp_h3d13dd16__0));
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4)) 
           & (VL_GTES_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0)) 
              & (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0)) 
                 | (0xfU & ((0U != (0x7ffU & (IData)(
                                                     (vlSelf->io_float_i_2 
                                                      >> 0x34U)))) 
                            & ((~ (IData)((0x7ffU == 
                                           (0x7ffU 
                                            & (IData)(
                                                      (vlSelf->io_float_i_2 
                                                       >> 0x34U)))))) 
                               & (((IData)((vlSelf->io_float_i_2 
                                            >> 0x34U)) 
                                   - (IData)(0x3ffU)) 
                                  >> 7U)))))));
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6)
            ? 0U : (0x7ffffffU & vlSelf->__VdfgTmp_hfd79a1bb__0));
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6)) 
           & (VL_GTES_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0)) 
              & (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0)) 
                 | (0xfU & ((0U != (0x7ffU & (IData)(
                                                     (vlSelf->io_float_i_3 
                                                      >> 0x34U)))) 
                            & ((~ (IData)((0x7ffU == 
                                           (0x7ffU 
                                            & (IData)(
                                                      (vlSelf->io_float_i_3 
                                                       >> 0x34U)))))) 
                               & (((IData)((vlSelf->io_float_i_3 
                                            >> 0x34U)) 
                                   - (IData)(0x3ffU)) 
                                  >> 7U)))))));
    vlSelf->PvuTop__DOT___GEN_72 = ((IData)(vlSelf->PvuTop__DOT___GEN_91) 
                                    | (6U == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13a8a89__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_h94b45f98__0) 
           & (IData)(PvuTop__DOT___GEN_108));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13edb1c__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_h592cae14__0) 
           & (IData)(PvuTop__DOT___GEN_109));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f6aa23__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_h882ee63f__0) 
           & (IData)(PvuTop__DOT___GEN_110));
    vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isNaN 
        = ((IData)(PvuTop__DOT___GEN_112) & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                              & (IData)(PvuTop__DOT___GEN_111)) 
                                             | (((2U 
                                                  < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                 & (IData)(PvuTop__DOT___GEN_110)) 
                                                | (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                    & (IData)(PvuTop__DOT___GEN_109)) 
                                                   | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                      & (IData)(PvuTop__DOT___GEN_108))))));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f17ab6__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_hfa146d96__0) 
           & (IData)(PvuTop__DOT___GEN_111));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_h94b45f98__0) 
           & ((IData)(PvuTop__DOT___GEN_13) | (IData)(PvuTop__DOT___GEN_14)));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_h592cae14__0) 
           & ((IData)(PvuTop__DOT___GEN_21) | (IData)(PvuTop__DOT___GEN_22)));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_h882ee63f__0) 
           & ((IData)(PvuTop__DOT___GEN_29) | (IData)(PvuTop__DOT___GEN_30)));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_hfa146d96__0) 
           & ((IData)(PvuTop__DOT___GEN_37) | (IData)(PvuTop__DOT___GEN_38)));
    vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isInf 
        = ((IData)(PvuTop__DOT___GEN_112) & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                              & (((~ 
                                                   ((IData)(vlSelf->PvuTop__DOT___GEN_36) 
                                                    | ((IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isZero) 
                                                       >> 3U))) 
                                                  & (IData)(PvuTop__DOT___GEN_37)) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->PvuTop__DOT___GEN_36) 
                                                      | ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isZero) 
                                                         >> 3U))) 
                                                    & (IData)(PvuTop__DOT___GEN_38)))) 
                                             | (((2U 
                                                  < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                 & (((~ 
                                                      ((IData)(vlSelf->PvuTop__DOT___GEN_28) 
                                                       | ((IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isZero) 
                                                          >> 2U))) 
                                                     & (IData)(PvuTop__DOT___GEN_29)) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___GEN_28) 
                                                         | ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isZero) 
                                                            >> 2U))) 
                                                       & (IData)(PvuTop__DOT___GEN_30)))) 
                                                | (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                    & (((~ 
                                                         ((IData)(vlSelf->PvuTop__DOT___GEN_20) 
                                                          | ((IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isZero) 
                                                             >> 1U))) 
                                                        & (IData)(PvuTop__DOT___GEN_21)) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___GEN_20) 
                                                            | ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isZero) 
                                                               >> 1U))) 
                                                          & (IData)(PvuTop__DOT___GEN_22)))) 
                                                   | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                      & (((~ 
                                                           ((IData)(vlSelf->PvuTop__DOT___GEN_12) 
                                                            | (IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isZero))) 
                                                          & (IData)(PvuTop__DOT___GEN_13)) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->PvuTop__DOT___GEN_12) 
                                                              | (IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isZero))) 
                                                            & (IData)(PvuTop__DOT___GEN_14))))))));
    vlSelf->PvuTop__DOT____VdfgTmp_hda612c41__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                                                         ? 0U
                                                         : 
                                                        (0x6000000U 
                                                         & ((IData)(vlSelf->io_float_i_0) 
                                                            << 0x19U)))))
                                                    ? 0x80000000U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                                                       ? 0U
                                                       : 
                                                      (0x6000000U 
                                                       & ((IData)(vlSelf->io_float_i_0) 
                                                          << 0x19U))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)
                                                      ? 
                                                     (0x80000000U 
                                                      | (0x7fffffffU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (~ PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_0_T))))
                                                      : PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_0_T)));
    vlSelf->PvuTop__DOT____VdfgTmp_hdafc45ff__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                                                         ? 0U
                                                         : 
                                                        (0x6000000U 
                                                         & ((IData)(vlSelf->io_float_i_1) 
                                                            << 0x19U)))))
                                                    ? 0x80000000U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                                                       ? 0U
                                                       : 
                                                      (0x6000000U 
                                                       & ((IData)(vlSelf->io_float_i_1) 
                                                          << 0x19U))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)
                                                      ? 
                                                     (0x80000000U 
                                                      | (0x7fffffffU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (~ PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_1_T))))
                                                      : PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_1_T)));
    vlSelf->PvuTop__DOT____VdfgTmp_hdb7ad73c__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                                                         ? 0U
                                                         : 
                                                        (0x6000000U 
                                                         & ((IData)(vlSelf->io_float_i_2) 
                                                            << 0x19U)))))
                                                    ? 0x80000000U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                                                       ? 0U
                                                       : 
                                                      (0x6000000U 
                                                       & ((IData)(vlSelf->io_float_i_2) 
                                                          << 0x19U))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)
                                                      ? 
                                                     (0x80000000U 
                                                      | (0x7fffffffU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (~ PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_2_T))))
                                                      : PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_2_T)));
    vlSelf->PvuTop__DOT____VdfgTmp_hd7ed38aa__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT____VdfgTmp_h878add96__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                                                         ? 0U
                                                         : 
                                                        (0x6000000U 
                                                         & ((IData)(vlSelf->io_float_i_3) 
                                                            << 0x19U)))))
                                                    ? 0x80000000U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                                                       ? 0U
                                                       : 
                                                      (0x6000000U 
                                                       & ((IData)(vlSelf->io_float_i_3) 
                                                          << 0x19U))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)
                                                      ? 
                                                     (0x80000000U 
                                                      | (0x7fffffffU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (~ PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_3_T))))
                                                      : PvuTop__DOT__float2posit_fp4__DOT__positEncoder__DOT___value_after_round_3_T)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)
                                      ? 0U : ((0U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->io_float_i_0 
                                                           >> 3U))))
                                               ? 2U
                                               : ((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_0 
                                                               >> 3U))))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->io_float_i_0 
                                                               >> 3U)) 
                                                      - (IData)(3U)))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == 
                                                                            (0xfU 
                                                                             & (IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 3U))))
                                                                            ? 2U
                                                                            : 
                                                                           ((0xfU 
                                                                             == 
                                                                             (0xfU 
                                                                              & (IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 3U))))
                                                                             ? 0U
                                                                             : 
                                                                            (3U 
                                                                             & ((IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 3U)) 
                                                                                - (IData)(3U)))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_hd68df511__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_hd68df511__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)
                                      ? 0U : ((0U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->io_float_i_1 
                                                           >> 3U))))
                                               ? 2U
                                               : ((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_1 
                                                               >> 3U))))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->io_float_i_1 
                                                               >> 3U)) 
                                                      - (IData)(3U)))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == 
                                                                            (0xfU 
                                                                             & (IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 3U))))
                                                                            ? 2U
                                                                            : 
                                                                           ((0xfU 
                                                                             == 
                                                                             (0xfU 
                                                                              & (IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 3U))))
                                                                             ? 0U
                                                                             : 
                                                                            (3U 
                                                                             & ((IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 3U)) 
                                                                                - (IData)(3U)))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_hec9ddcc6__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_hec9ddcc6__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)
                                      ? 0U : ((0U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->io_float_i_2 
                                                           >> 3U))))
                                               ? 2U
                                               : ((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_2 
                                                               >> 3U))))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->io_float_i_2 
                                                               >> 3U)) 
                                                      - (IData)(3U)))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == 
                                                                            (0xfU 
                                                                             & (IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 3U))))
                                                                            ? 2U
                                                                            : 
                                                                           ((0xfU 
                                                                             == 
                                                                             (0xfU 
                                                                              & (IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 3U))))
                                                                             ? 0U
                                                                             : 
                                                                            (3U 
                                                                             & ((IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 3U)) 
                                                                                - (IData)(3U)))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_h40b5ec32__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_h40b5ec32__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)
                                      ? 0U : ((0U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->io_float_i_3 
                                                           >> 3U))))
                                               ? 2U
                                               : ((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_3 
                                                               >> 3U))))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->io_float_i_3 
                                                               >> 3U)) 
                                                      - (IData)(3U)))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == 
                                                                            (0xfU 
                                                                             & (IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 3U))))
                                                                            ? 2U
                                                                            : 
                                                                           ((0xfU 
                                                                             == 
                                                                             (0xfU 
                                                                              & (IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 3U))))
                                                                             ? 0U
                                                                             : 
                                                                            (3U 
                                                                             & ((IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 3U)) 
                                                                                - (IData)(3U)))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_hbd21ddc4__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_hbd21ddc4__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)
                                      ? 0U : ((0U == 
                                               (0x1fU 
                                                & (IData)(
                                                          (vlSelf->io_float_i_0 
                                                           >> 0xaU))))
                                               ? 2U
                                               : ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_0 
                                                               >> 0xaU))))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->io_float_i_0 
                                                               >> 0xaU)) 
                                                      - (IData)(3U)))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 0xaU))))
                                                                            ? 2U
                                                                            : 
                                                                           ((0x1fU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 0xaU))))
                                                                             ? 0U
                                                                             : 
                                                                            (3U 
                                                                             & ((IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 0xaU)) 
                                                                                - (IData)(3U)))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_hfd59c922__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_hfd59c922__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)
                                      ? 0U : ((0U == 
                                               (0x1fU 
                                                & (IData)(
                                                          (vlSelf->io_float_i_1 
                                                           >> 0xaU))))
                                               ? 2U
                                               : ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_1 
                                                               >> 0xaU))))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->io_float_i_1 
                                                               >> 0xaU)) 
                                                      - (IData)(3U)))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 0xaU))))
                                                                            ? 2U
                                                                            : 
                                                                           ((0x1fU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 0xaU))))
                                                                             ? 0U
                                                                             : 
                                                                            (3U 
                                                                             & ((IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 0xaU)) 
                                                                                - (IData)(3U)))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_hae798458__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_hae798458__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)
                                      ? 0U : ((0U == 
                                               (0x1fU 
                                                & (IData)(
                                                          (vlSelf->io_float_i_2 
                                                           >> 0xaU))))
                                               ? 2U
                                               : ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_2 
                                                               >> 0xaU))))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->io_float_i_2 
                                                               >> 0xaU)) 
                                                      - (IData)(3U)))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 0xaU))))
                                                                            ? 2U
                                                                            : 
                                                                           ((0x1fU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 0xaU))))
                                                                             ? 0U
                                                                             : 
                                                                            (3U 
                                                                             & ((IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 0xaU)) 
                                                                                - (IData)(3U)))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_h79f5616b__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_h79f5616b__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)
                                      ? 0U : ((0U == 
                                               (0x1fU 
                                                & (IData)(
                                                          (vlSelf->io_float_i_3 
                                                           >> 0xaU))))
                                               ? 2U
                                               : ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_3 
                                                               >> 0xaU))))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->io_float_i_3 
                                                               >> 0xaU)) 
                                                      - (IData)(3U)))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 0xaU))))
                                                                            ? 2U
                                                                            : 
                                                                           ((0x1fU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 0xaU))))
                                                                             ? 0U
                                                                             : 
                                                                            (3U 
                                                                             & ((IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 0xaU)) 
                                                                                - (IData)(3U)))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)
                                         ? 0x1fU : 
                                        (~ ((IData)(vlSelf->__VdfgTmp_h97718ca4__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)
                                         ? 0U : ((IData)(vlSelf->__VdfgTmp_h97718ca4__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)
                                      ? 0U : (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0))
                                               ? 3U
                                               : (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_0 
                                                                >> 0x17U))))
                                                    ? 2U
                                                    : 
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 0x17U))))
                                                     ? 0U
                                                     : 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 0x17U)) 
                                                        - (IData)(3U)))))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)
                                                                           ? 0U
                                                                           : 
                                                                          (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0))
                                                                            ? 3U
                                                                            : 
                                                                           (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0))
                                                                             ? 0U
                                                                             : 
                                                                            ((0U 
                                                                              == 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 0x17U))))
                                                                              ? 2U
                                                                              : 
                                                                             ((0xffU 
                                                                               == 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 0x17U))))
                                                                               ? 0U
                                                                               : 
                                                                              (3U 
                                                                               & ((IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 0x17U)) 
                                                                                - (IData)(3U)))))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)
                                         ? 0x1fU : 
                                        (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0))
                                          ? 0x10U : 
                                         (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0))
                                           ? 0xfU : 
                                          ((0U == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_0 
                                                              >> 0x17U))))
                                            ? 0x1fU
                                            : ((0xffU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_0 
                                                            >> 0x17U))))
                                                ? 0x1fU
                                                : (~ 
                                                   (0x3fU 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 0x17U)) 
                                                        - (IData)(0x7fU)) 
                                                       >> 2U)))))))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)
                                         ? 0U : (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0))
                                                  ? 0xfU
                                                  : 
                                                 (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0))
                                                   ? 0x10U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_0 
                                                                >> 0x17U))))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 0x17U))))
                                                     ? 0U
                                                     : 
                                                    (0x3fU 
                                                     & (((IData)(
                                                                 (vlSelf->io_float_i_0 
                                                                  >> 0x17U)) 
                                                         - (IData)(0x7fU)) 
                                                        >> 2U))))))))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)
                                      ? 0U : (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0))
                                               ? 3U
                                               : (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_1 
                                                                >> 0x17U))))
                                                    ? 2U
                                                    : 
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0x17U))))
                                                     ? 0U
                                                     : 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0x17U)) 
                                                        - (IData)(3U)))))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)
                                                                           ? 0U
                                                                           : 
                                                                          (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0))
                                                                            ? 3U
                                                                            : 
                                                                           (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0))
                                                                             ? 0U
                                                                             : 
                                                                            ((0U 
                                                                              == 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 0x17U))))
                                                                              ? 2U
                                                                              : 
                                                                             ((0xffU 
                                                                               == 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 0x17U))))
                                                                               ? 0U
                                                                               : 
                                                                              (3U 
                                                                               & ((IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 0x17U)) 
                                                                                - (IData)(3U)))))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)
                                         ? 0x1fU : 
                                        (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0))
                                          ? 0x10U : 
                                         (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0))
                                           ? 0xfU : 
                                          ((0U == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_1 
                                                              >> 0x17U))))
                                            ? 0x1fU
                                            : ((0xffU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_1 
                                                            >> 0x17U))))
                                                ? 0x1fU
                                                : (~ 
                                                   (0x3fU 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0x17U)) 
                                                        - (IData)(0x7fU)) 
                                                       >> 2U)))))))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)
                                         ? 0U : (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0))
                                                  ? 0xfU
                                                  : 
                                                 (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0))
                                                   ? 0x10U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_1 
                                                                >> 0x17U))))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0x17U))))
                                                     ? 0U
                                                     : 
                                                    (0x3fU 
                                                     & (((IData)(
                                                                 (vlSelf->io_float_i_1 
                                                                  >> 0x17U)) 
                                                         - (IData)(0x7fU)) 
                                                        >> 2U))))))))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)
                                      ? 0U : (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0))
                                               ? 3U
                                               : (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_2 
                                                                >> 0x17U))))
                                                    ? 2U
                                                    : 
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0x17U))))
                                                     ? 0U
                                                     : 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0x17U)) 
                                                        - (IData)(3U)))))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)
                                                                           ? 0U
                                                                           : 
                                                                          (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0))
                                                                            ? 3U
                                                                            : 
                                                                           (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0))
                                                                             ? 0U
                                                                             : 
                                                                            ((0U 
                                                                              == 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 0x17U))))
                                                                              ? 2U
                                                                              : 
                                                                             ((0xffU 
                                                                               == 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 0x17U))))
                                                                               ? 0U
                                                                               : 
                                                                              (3U 
                                                                               & ((IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 0x17U)) 
                                                                                - (IData)(3U)))))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)
                                         ? 0x1fU : 
                                        (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0))
                                          ? 0x10U : 
                                         (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0))
                                           ? 0xfU : 
                                          ((0U == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_2 
                                                              >> 0x17U))))
                                            ? 0x1fU
                                            : ((0xffU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_2 
                                                            >> 0x17U))))
                                                ? 0x1fU
                                                : (~ 
                                                   (0x3fU 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0x17U)) 
                                                        - (IData)(0x7fU)) 
                                                       >> 2U)))))))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)
                                         ? 0U : (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0))
                                                  ? 0xfU
                                                  : 
                                                 (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0))
                                                   ? 0x10U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_2 
                                                                >> 0x17U))))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0x17U))))
                                                     ? 0U
                                                     : 
                                                    (0x3fU 
                                                     & (((IData)(
                                                                 (vlSelf->io_float_i_2 
                                                                  >> 0x17U)) 
                                                         - (IData)(0x7fU)) 
                                                        >> 2U))))))))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)
                                      ? 0U : (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0))
                                               ? 3U
                                               : (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_3 
                                                                >> 0x17U))))
                                                    ? 2U
                                                    : 
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_3 
                                                                 >> 0x17U))))
                                                     ? 0U
                                                     : 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_3 
                                                                 >> 0x17U)) 
                                                        - (IData)(3U)))))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)
                                                                           ? 0U
                                                                           : 
                                                                          (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0))
                                                                            ? 3U
                                                                            : 
                                                                           (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0))
                                                                             ? 0U
                                                                             : 
                                                                            ((0U 
                                                                              == 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 0x17U))))
                                                                              ? 2U
                                                                              : 
                                                                             ((0xffU 
                                                                               == 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 0x17U))))
                                                                               ? 0U
                                                                               : 
                                                                              (3U 
                                                                               & ((IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 0x17U)) 
                                                                                - (IData)(3U)))))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)
                                         ? 0x1fU : 
                                        (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0))
                                          ? 0x10U : 
                                         (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0))
                                           ? 0xfU : 
                                          ((0U == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_3 
                                                              >> 0x17U))))
                                            ? 0x1fU
                                            : ((0xffU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_3 
                                                            >> 0x17U))))
                                                ? 0x1fU
                                                : (~ 
                                                   (0x3fU 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_3 
                                                                 >> 0x17U)) 
                                                        - (IData)(0x7fU)) 
                                                       >> 2U)))))))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)
                                         ? 0U : (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0))
                                                  ? 0xfU
                                                  : 
                                                 (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0))
                                                   ? 0x10U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_3 
                                                                >> 0x17U))))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_3 
                                                                 >> 0x17U))))
                                                     ? 0U
                                                     : 
                                                    (0x3fU 
                                                     & (((IData)(
                                                                 (vlSelf->io_float_i_3 
                                                                  >> 0x17U)) 
                                                         - (IData)(0x7fU)) 
                                                        >> 2U))))))))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0)
                                      ? 0U : (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0))
                                               ? 3U
                                               : (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_0 
                                                                >> 0x34U))))
                                                    ? 2U
                                                    : 
                                                   ((0x7ffU 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 0x34U))))
                                                     ? 0U
                                                     : 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 0x34U)) 
                                                        - (IData)(3U)))))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0)
                                                                           ? 0U
                                                                           : 
                                                                          (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0))
                                                                            ? 3U
                                                                            : 
                                                                           (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0))
                                                                             ? 0U
                                                                             : 
                                                                            ((0U 
                                                                              == 
                                                                              (0x7ffU 
                                                                               & (IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 0x34U))))
                                                                              ? 2U
                                                                              : 
                                                                             ((0x7ffU 
                                                                               == 
                                                                               (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 0x34U))))
                                                                               ? 0U
                                                                               : 
                                                                              (3U 
                                                                               & ((IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 0x34U)) 
                                                                                - (IData)(3U)))))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0)
                                         ? 0x1fU : 
                                        (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0))
                                          ? 0x10U : 
                                         (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0))
                                           ? 0xfU : 
                                          ((0U == (0x7ffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_0 
                                                              >> 0x34U))))
                                            ? 0x1fU
                                            : ((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_0 
                                                            >> 0x34U))))
                                                ? 0x1fU
                                                : (~ 
                                                   (0x1ffU 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 0x34U)) 
                                                        - (IData)(0x3ffU)) 
                                                       >> 2U)))))))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0)
                                         ? 0U : (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0))
                                                  ? 0xfU
                                                  : 
                                                 (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0))
                                                   ? 0x10U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_0 
                                                                >> 0x34U))))
                                                    ? 0U
                                                    : 
                                                   ((0x7ffU 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 0x34U))))
                                                     ? 0U
                                                     : 
                                                    (0x1ffU 
                                                     & (((IData)(
                                                                 (vlSelf->io_float_i_0 
                                                                  >> 0x34U)) 
                                                         - (IData)(0x3ffU)) 
                                                        >> 2U))))))))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2)
                                      ? 0U : (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0))
                                               ? 3U
                                               : (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_1 
                                                                >> 0x34U))))
                                                    ? 2U
                                                    : 
                                                   ((0x7ffU 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0x34U))))
                                                     ? 0U
                                                     : 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0x34U)) 
                                                        - (IData)(3U)))))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2)
                                                                           ? 0U
                                                                           : 
                                                                          (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0))
                                                                            ? 3U
                                                                            : 
                                                                           (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0))
                                                                             ? 0U
                                                                             : 
                                                                            ((0U 
                                                                              == 
                                                                              (0x7ffU 
                                                                               & (IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 0x34U))))
                                                                              ? 2U
                                                                              : 
                                                                             ((0x7ffU 
                                                                               == 
                                                                               (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 0x34U))))
                                                                               ? 0U
                                                                               : 
                                                                              (3U 
                                                                               & ((IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 0x34U)) 
                                                                                - (IData)(3U)))))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2)
                                         ? 0x1fU : 
                                        (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0))
                                          ? 0x10U : 
                                         (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0))
                                           ? 0xfU : 
                                          ((0U == (0x7ffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_1 
                                                              >> 0x34U))))
                                            ? 0x1fU
                                            : ((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_1 
                                                            >> 0x34U))))
                                                ? 0x1fU
                                                : (~ 
                                                   (0x1ffU 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0x34U)) 
                                                        - (IData)(0x3ffU)) 
                                                       >> 2U)))))))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2)
                                         ? 0U : (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0))
                                                  ? 0xfU
                                                  : 
                                                 (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0))
                                                   ? 0x10U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_1 
                                                                >> 0x34U))))
                                                    ? 0U
                                                    : 
                                                   ((0x7ffU 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0x34U))))
                                                     ? 0U
                                                     : 
                                                    (0x1ffU 
                                                     & (((IData)(
                                                                 (vlSelf->io_float_i_1 
                                                                  >> 0x34U)) 
                                                         - (IData)(0x3ffU)) 
                                                        >> 2U))))))))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4)
                                      ? 0U : (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0))
                                               ? 3U
                                               : (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_2 
                                                                >> 0x34U))))
                                                    ? 2U
                                                    : 
                                                   ((0x7ffU 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0x34U))))
                                                     ? 0U
                                                     : 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0x34U)) 
                                                        - (IData)(3U)))))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4)
                                                                           ? 0U
                                                                           : 
                                                                          (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0))
                                                                            ? 3U
                                                                            : 
                                                                           (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0))
                                                                             ? 0U
                                                                             : 
                                                                            ((0U 
                                                                              == 
                                                                              (0x7ffU 
                                                                               & (IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 0x34U))))
                                                                              ? 2U
                                                                              : 
                                                                             ((0x7ffU 
                                                                               == 
                                                                               (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 0x34U))))
                                                                               ? 0U
                                                                               : 
                                                                              (3U 
                                                                               & ((IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 0x34U)) 
                                                                                - (IData)(3U)))))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4)
                                         ? 0x1fU : 
                                        (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0))
                                          ? 0x10U : 
                                         (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0))
                                           ? 0xfU : 
                                          ((0U == (0x7ffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_2 
                                                              >> 0x34U))))
                                            ? 0x1fU
                                            : ((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_2 
                                                            >> 0x34U))))
                                                ? 0x1fU
                                                : (~ 
                                                   (0x1ffU 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0x34U)) 
                                                        - (IData)(0x3ffU)) 
                                                       >> 2U)))))))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4)
                                         ? 0U : (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0))
                                                  ? 0xfU
                                                  : 
                                                 (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0))
                                                   ? 0x10U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_2 
                                                                >> 0x34U))))
                                                    ? 0U
                                                    : 
                                                   ((0x7ffU 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0x34U))))
                                                     ? 0U
                                                     : 
                                                    (0x1ffU 
                                                     & (((IData)(
                                                                 (vlSelf->io_float_i_2 
                                                                  >> 0x34U)) 
                                                         - (IData)(0x3ffU)) 
                                                        >> 2U))))))))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6)
                                      ? 0U : (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0))
                                               ? 3U
                                               : (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_3 
                                                                >> 0x34U))))
                                                    ? 2U
                                                    : 
                                                   ((0x7ffU 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_3 
                                                                 >> 0x34U))))
                                                     ? 0U
                                                     : 
                                                    (3U 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_3 
                                                                 >> 0x34U)) 
                                                        - (IData)(3U)))))))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6)
                                                                           ? 0U
                                                                           : 
                                                                          (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0))
                                                                            ? 3U
                                                                            : 
                                                                           (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0))
                                                                             ? 0U
                                                                             : 
                                                                            ((0U 
                                                                              == 
                                                                              (0x7ffU 
                                                                               & (IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 0x34U))))
                                                                              ? 2U
                                                                              : 
                                                                             ((0x7ffU 
                                                                               == 
                                                                               (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 0x34U))))
                                                                               ? 0U
                                                                               : 
                                                                              (3U 
                                                                               & ((IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 0x34U)) 
                                                                                - (IData)(3U)))))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6)
                                         ? 0x1fU : 
                                        (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0))
                                          ? 0x10U : 
                                         (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0))
                                           ? 0xfU : 
                                          ((0U == (0x7ffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_3 
                                                              >> 0x34U))))
                                            ? 0x1fU
                                            : ((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_3 
                                                            >> 0x34U))))
                                                ? 0x1fU
                                                : (~ 
                                                   (0x1ffU 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_3 
                                                                 >> 0x34U)) 
                                                        - (IData)(0x3ffU)) 
                                                       >> 2U)))))))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6)
                                         ? 0U : (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0))
                                                  ? 0xfU
                                                  : 
                                                 (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0))
                                                   ? 0x10U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_3 
                                                                >> 0x34U))))
                                                    ? 0U
                                                    : 
                                                   ((0x7ffU 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_3 
                                                                 >> 0x34U))))
                                                     ? 0U
                                                     : 
                                                    (0x1ffU 
                                                     & (((IData)(
                                                                 (vlSelf->io_float_i_3 
                                                                  >> 0x34U)) 
                                                         - (IData)(0x3ffU)) 
                                                        >> 2U))))))))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT___GEN_100 = ((IData)(vlSelf->PvuTop__DOT___GEN_72) 
                                     | ((7U == (IData)(vlSelf->io_op)) 
                                        | ((8U == (IData)(vlSelf->io_op)) 
                                           | (9U == (IData)(vlSelf->io_op)))));
    vlSelf->PvuTop__DOT____VdfgTmp_h2da97177__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                   | (IData)(vlSelf->PvuTop__DOT___GEN_72));
    vlSelf->PvuTop__DOT____VdfgTmp_h151067d9__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                   | (IData)(vlSelf->PvuTop__DOT___GEN_72));
    vlSelf->PvuTop__DOT____VdfgTmp_h28711195__0 = (
                                                   (2U 
                                                    < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   | (IData)(vlSelf->PvuTop__DOT___GEN_72));
    vlSelf->PvuTop__DOT____VdfgTmp_h446da761__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                                   | (IData)(vlSelf->PvuTop__DOT___GEN_72));
    vlSelf->PvuTop__DOT___GEN_73 = ((IData)(vlSelf->PvuTop__DOT___GEN_72) 
                                    | (IData)(vlSelf->PvuTop__DOT___GEN_71));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_ha2eeae00__0, vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_ha2eeae00__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_ha2eeae00__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_ha2eeae00__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hfc3555ac__0, vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hfc3555ac__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hfc3555ac__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hfc3555ac__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h16cddfbb__0, vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h16cddfbb__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h16cddfbb__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h16cddfbb__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h13051311__0, vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h13051311__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h13051311__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h13051311__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hc31a511d__0, vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hc31a511d__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hc31a511d__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hc31a511d__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_he3cab6d4__0, vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_he3cab6d4__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_he3cab6d4__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_he3cab6d4__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h61c210e0__0, vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h61c210e0__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h61c210e0__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h61c210e0__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h0f391963__0, vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h0f391963__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h0f391963__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h0f391963__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h16fe04d9__0, vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h16fe04d9__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h16fe04d9__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h16fe04d9__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf4204b39__0, vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hf4204b39__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hf4204b39__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf4204b39__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h9e7106cb__0, vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h9e7106cb__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h9e7106cb__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h9e7106cb__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h4966bbb3__0, vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h4966bbb3__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h4966bbb3__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h4966bbb3__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h527cfefa__0, vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h527cfefa__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h527cfefa__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h527cfefa__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hbfe7fdd7__0, vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hbfe7fdd7__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hbfe7fdd7__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hbfe7fdd7__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h2367d120__0, vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h2367d120__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h2367d120__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h2367d120__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h02ab7abb__0, vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h02ab7abb__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h02ab7abb__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h02ab7abb__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h0c473511__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h0c473511__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h0c473511__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h0c473511__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h670d29c8__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h670d29c8__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h670d29c8__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h670d29c8__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h538e86ac__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h538e86ac__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h538e86ac__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h538e86ac__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hc3b6027c__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hc3b6027c__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hc3b6027c__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hc3b6027c__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h6ad98d42__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h6ad98d42__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h6ad98d42__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h6ad98d42__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h9f1ba79c__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h9f1ba79c__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h9f1ba79c__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h9f1ba79c__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h493ab2bf__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h493ab2bf__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h493ab2bf__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h493ab2bf__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5674dd9b__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h5674dd9b__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h5674dd9b__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h5674dd9b__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h30e42b4f__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h30e42b4f__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h30e42b4f__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h30e42b4f__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hea18e4ce__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hea18e4ce__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hea18e4ce__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hea18e4ce__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hbd7f7f11__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hbd7f7f11__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hbd7f7f11__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hbd7f7f11__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h2fbb74b7__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h2fbb74b7__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h2fbb74b7__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h2fbb74b7__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h1eed860a__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h1eed860a__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h1eed860a__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h1eed860a__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h00c62147__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h00c62147__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h00c62147__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h00c62147__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h3adb056a__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h3adb056a__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h3adb056a__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h3adb056a__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h62689c57__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h62689c57__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h62689c57__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h62689c57__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h32f3cad3__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h32f3cad3__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h32f3cad3__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h32f3cad3__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h531f5993__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h531f5993__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h531f5993__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h531f5993__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h94eb598b__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h94eb598b__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h94eb598b__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h94eb598b__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h0392908e__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h0392908e__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h0392908e__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h0392908e__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h16bfbdb1__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h16bfbdb1__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h16bfbdb1__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h16bfbdb1__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd26bafdd__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hd26bafdd__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hd26bafdd__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd26bafdd__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h14f1ee93__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h14f1ee93__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h14f1ee93__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h14f1ee93__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h4f79cf06__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h4f79cf06__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h4f79cf06__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h4f79cf06__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd9386540__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hd9386540__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hd9386540__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd9386540__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h9d86d8f5__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h9d86d8f5__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h9d86d8f5__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h9d86d8f5__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h0706d33b__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h0706d33b__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h0706d33b__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h0706d33b__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h88df4a6a__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h88df4a6a__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h88df4a6a__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h88df4a6a__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h4ca4da7a__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h4ca4da7a__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h4ca4da7a__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h4ca4da7a__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5985309c__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h5985309c__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h5985309c__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h5985309c__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_ha59493aa__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_ha59493aa__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_ha59493aa__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_ha59493aa__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h30a6c7ac__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h30a6c7ac__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h30a6c7ac__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h30a6c7ac__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h07c2f810__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h07c2f810__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h07c2f810__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h07c2f810__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h13a71221__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h13a71221__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h13a71221__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h13a71221__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h23fb127c__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h23fb127c__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h23fb127c__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h23fb127c__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h176c4ad2__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h176c4ad2__0[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h176c4ad2__0[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h176c4ad2__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h7fbc62e6__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h7fbc62e6__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h7fbc62e6__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h7fbc62e6__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf4ab9311__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hf4ab9311__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hf4ab9311__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf4ab9311__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h7afa475f__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h7afa475f__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h7afa475f__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h7afa475f__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hc7a7532f__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hc7a7532f__0[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hc7a7532f__0[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hc7a7532f__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h4099bed9__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h4099bed9__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h4099bed9__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h4099bed9__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h534a0ed9__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h534a0ed9__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h534a0ed9__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h534a0ed9__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hda5996a4__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hda5996a4__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hda5996a4__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hda5996a4__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hb4c37e00__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hb4c37e00__0[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hb4c37e00__0[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hb4c37e00__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h14a79119__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h14a79119__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h14a79119__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h14a79119__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hb5fe5aa6__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hb5fe5aa6__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hb5fe5aa6__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hb5fe5aa6__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h942cd0c7__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h942cd0c7__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h942cd0c7__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h942cd0c7__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h217a3bd7__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h217a3bd7__0[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h217a3bd7__0[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h217a3bd7__0[2U]);
    } else {
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h97df7274__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_h97df7274__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_h97df7274__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h97df7274__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h1f0ac014__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_h1f0ac014__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_h1f0ac014__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h1f0ac014__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hc28b5391__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_hc28b5391__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_hc28b5391__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hc28b5391__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_he0dacb5e__0, PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_he0dacb5e__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_he0dacb5e__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_he0dacb5e__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hb36b0af5__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_hb36b0af5__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_hb36b0af5__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hb36b0af5__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hb0c6629e__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_hb0c6629e__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_hb0c6629e__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hb0c6629e__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h2a198a19__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h2a198a19__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h2a198a19__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h2a198a19__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hba6ef04b__0, PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_hba6ef04b__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_hba6ef04b__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hba6ef04b__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hb974cf39__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_hb974cf39__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_hb974cf39__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hb974cf39__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf8df9a14__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_hf8df9a14__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_hf8df9a14__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hf8df9a14__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h96368e6e__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h96368e6e__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h96368e6e__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h96368e6e__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h0ec25b37__0, PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_h0ec25b37__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_h0ec25b37__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h0ec25b37__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h965aa458__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_h965aa458__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_h965aa458__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h965aa458__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h641fe6b8__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_h641fe6b8__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_h641fe6b8__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h641fe6b8__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h467d7b9a__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h467d7b9a__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h467d7b9a__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h467d7b9a__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd3d43d05__0, PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_hd3d43d05__0[0U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_hd3d43d05__0[1U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hd3d43d05__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o[0U])))))));
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT____VdfgTmp_hc7defc58__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->__VdfgTmp_haf7f5c8c__0) 
                                                          << 0x1bU) 
                                                         | (0x7000000U 
                                                            & ((IData)(vlSelf->io_float_i_0) 
                                                               << 0x18U))))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)
                                                           ? 0U
                                                           : (IData)(vlSelf->__VdfgTmp_hd68df511__0))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)) 
                                                           & ((IData)(vlSelf->__VdfgTmp_haf7f5c8c__0) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->__VdfgTmp_haf7f5c8c__0) 
                                                         << 0x1bU) 
                                                        | (0x7000000U 
                                                           & ((IData)(vlSelf->io_float_i_0) 
                                                              << 0x18U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_0_T))))
                                                       : PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_0_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_hc45095f6__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->__VdfgTmp_ha54cdad1__0) 
                                                          << 0x1bU) 
                                                         | (0x7000000U 
                                                            & ((IData)(vlSelf->io_float_i_1) 
                                                               << 0x18U))))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)
                                                           ? 0U
                                                           : (IData)(vlSelf->__VdfgTmp_hec9ddcc6__0))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)) 
                                                           & ((IData)(vlSelf->__VdfgTmp_ha54cdad1__0) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->__VdfgTmp_ha54cdad1__0) 
                                                         << 0x1bU) 
                                                        | (0x7000000U 
                                                           & ((IData)(vlSelf->io_float_i_1) 
                                                              << 0x18U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_1_T))))
                                                       : PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_1_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_hc4af0733__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->__VdfgTmp_hcbfe9c52__0) 
                                                          << 0x1bU) 
                                                         | (0x7000000U 
                                                            & ((IData)(vlSelf->io_float_i_2) 
                                                               << 0x18U))))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)
                                                           ? 0U
                                                           : (IData)(vlSelf->__VdfgTmp_h40b5ec32__0))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)) 
                                                           & ((IData)(vlSelf->__VdfgTmp_hcbfe9c52__0) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->__VdfgTmp_hcbfe9c52__0) 
                                                         << 0x1bU) 
                                                        | (0x7000000U 
                                                           & ((IData)(vlSelf->io_float_i_2) 
                                                              << 0x18U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_2_T))))
                                                       : PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_2_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_hc159885d__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h878add96__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->__VdfgTmp_h18d17475__0) 
                                                          << 0x1bU) 
                                                         | (0x7000000U 
                                                            & ((IData)(vlSelf->io_float_i_3) 
                                                               << 0x18U))))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)
                                                           ? 0U
                                                           : (IData)(vlSelf->__VdfgTmp_hbd21ddc4__0))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)) 
                                                           & ((IData)(vlSelf->__VdfgTmp_h18d17475__0) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->__VdfgTmp_h18d17475__0) 
                                                         << 0x1bU) 
                                                        | (0x7000000U 
                                                           & ((IData)(vlSelf->io_float_i_3) 
                                                              << 0x18U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_3_T))))
                                                       : PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_3_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_hd2aca441__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->__VdfgTmp_hcb4a60e4__0) 
                                                          << 0x1bU) 
                                                         | (0x7fe0000U 
                                                            & ((IData)(vlSelf->io_float_i_0) 
                                                               << 0x11U))))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)
                                                           ? 0U
                                                           : (IData)(vlSelf->__VdfgTmp_hfd59c922__0))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)) 
                                                           & ((IData)(vlSelf->__VdfgTmp_hcb4a60e4__0) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->__VdfgTmp_hcb4a60e4__0) 
                                                         << 0x1bU) 
                                                        | (0x7fe0000U 
                                                           & ((IData)(vlSelf->io_float_i_0) 
                                                              << 0x11U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_0_T))))
                                                       : PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_0_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_hd322ddff__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->__VdfgTmp_hebcb5633__0) 
                                                          << 0x1bU) 
                                                         | (0x7fe0000U 
                                                            & ((IData)(vlSelf->io_float_i_1) 
                                                               << 0x11U))))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)
                                                           ? 0U
                                                           : (IData)(vlSelf->__VdfgTmp_hae798458__0))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)) 
                                                           & ((IData)(vlSelf->__VdfgTmp_hebcb5633__0) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->__VdfgTmp_hebcb5633__0) 
                                                         << 0x1bU) 
                                                        | (0x7fe0000U 
                                                           & ((IData)(vlSelf->io_float_i_1) 
                                                              << 0x11U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_1_T))))
                                                       : PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_1_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_hd3bd5f3c__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->__VdfgTmp_hfd1b85c0__0) 
                                                          << 0x1bU) 
                                                         | (0x7fe0000U 
                                                            & ((IData)(vlSelf->io_float_i_2) 
                                                               << 0x11U))))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)
                                                           ? 0U
                                                           : (IData)(vlSelf->__VdfgTmp_h79f5616b__0))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)) 
                                                           & ((IData)(vlSelf->__VdfgTmp_hfd1b85c0__0) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->__VdfgTmp_hfd1b85c0__0) 
                                                         << 0x1bU) 
                                                        | (0x7fe0000U 
                                                           & ((IData)(vlSelf->io_float_i_2) 
                                                              << 0x11U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_2_T))))
                                                       : PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_2_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_hec2bc0aa__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h878add96__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->__VdfgTmp_h36dad77c__0) 
                                                          << 0x1bU) 
                                                         | (0x7fe0000U 
                                                            & ((IData)(vlSelf->io_float_i_3) 
                                                               << 0x11U))))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)
                                                           ? 0U
                                                           : (IData)(vlSelf->__VdfgTmp_h97718ca4__0))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)) 
                                                           & ((IData)(vlSelf->__VdfgTmp_h36dad77c__0) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->__VdfgTmp_h36dad77c__0) 
                                                         << 0x1bU) 
                                                        | (0x7fe0000U 
                                                           & ((IData)(vlSelf->io_float_i_3) 
                                                              << 0x11U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_3_T))))
                                                       : PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_3_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_h66bfb906__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->__VdfgTmp_h4303f8d5__0) 
                                                          << 0x1bU) 
                                                         | (0x7fffff0U 
                                                            & ((IData)(vlSelf->io_float_i_0) 
                                                               << 4U))))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)
                                                           ? 0U
                                                           : 
                                                          (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0))
                                                            ? 0x3fU
                                                            : 
                                                           (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0))
                                                             ? 0xc0U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->io_float_i_0 
                                                                          >> 0x17U))))
                                                              ? 0x82U
                                                              : 
                                                             ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->io_float_i_0 
                                                                           >> 0x17U))))
                                                               ? 0U
                                                               : 
                                                              (0xffU 
                                                               & ((IData)(
                                                                          (vlSelf->io_float_i_0 
                                                                           >> 0x17U)) 
                                                                  - (IData)(0x7fU))))))))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)) 
                                                           & ((IData)(vlSelf->__VdfgTmp_h4303f8d5__0) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->__VdfgTmp_h4303f8d5__0) 
                                                         << 0x1bU) 
                                                        | (0x7fffff0U 
                                                           & ((IData)(vlSelf->io_float_i_0) 
                                                              << 4U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_0_T))))
                                                       : PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_0_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_h6731d6b0__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->__VdfgTmp_h4fd42478__0) 
                                                          << 0x1bU) 
                                                         | (0x7fffff0U 
                                                            & ((IData)(vlSelf->io_float_i_1) 
                                                               << 4U))))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)
                                                           ? 0U
                                                           : 
                                                          (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0))
                                                            ? 0x3fU
                                                            : 
                                                           (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0))
                                                             ? 0xc0U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->io_float_i_1 
                                                                          >> 0x17U))))
                                                              ? 0x82U
                                                              : 
                                                             ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->io_float_i_1 
                                                                           >> 0x17U))))
                                                               ? 0U
                                                               : 
                                                              (0xffU 
                                                               & ((IData)(
                                                                          (vlSelf->io_float_i_1 
                                                                           >> 0x17U)) 
                                                                  - (IData)(0x7fU))))))))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)) 
                                                           & ((IData)(vlSelf->__VdfgTmp_h4fd42478__0) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->__VdfgTmp_h4fd42478__0) 
                                                         << 0x1bU) 
                                                        | (0x7fffff0U 
                                                           & ((IData)(vlSelf->io_float_i_1) 
                                                              << 4U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_1_T))))
                                                       : PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_1_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_h67b04079__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->__VdfgTmp_hdbd751b3__0) 
                                                          << 0x1bU) 
                                                         | (0x7fffff0U 
                                                            & ((IData)(vlSelf->io_float_i_2) 
                                                               << 4U))))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)
                                                           ? 0U
                                                           : 
                                                          (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0))
                                                            ? 0x3fU
                                                            : 
                                                           (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0))
                                                             ? 0xc0U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->io_float_i_2 
                                                                          >> 0x17U))))
                                                              ? 0x82U
                                                              : 
                                                             ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->io_float_i_2 
                                                                           >> 0x17U))))
                                                               ? 0U
                                                               : 
                                                              (0xffU 
                                                               & ((IData)(
                                                                          (vlSelf->io_float_i_2 
                                                                           >> 0x17U)) 
                                                                  - (IData)(0x7fU))))))))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)) 
                                                           & ((IData)(vlSelf->__VdfgTmp_hdbd751b3__0) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->__VdfgTmp_hdbd751b3__0) 
                                                         << 0x1bU) 
                                                        | (0x7fffff0U 
                                                           & ((IData)(vlSelf->io_float_i_2) 
                                                              << 4U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_2_T))))
                                                       : PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_2_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_h6036cde7__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h878add96__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->__VdfgTmp_h1abfe04b__0) 
                                                          << 0x1bU) 
                                                         | (0x7fffff0U 
                                                            & ((IData)(vlSelf->io_float_i_3) 
                                                               << 4U))))))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)
                                                           ? 0U
                                                           : 
                                                          (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0))
                                                            ? 0x3fU
                                                            : 
                                                           (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0))
                                                             ? 0xc0U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->io_float_i_3 
                                                                          >> 0x17U))))
                                                              ? 0x82U
                                                              : 
                                                             ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->io_float_i_3 
                                                                           >> 0x17U))))
                                                               ? 0U
                                                               : 
                                                              (0xffU 
                                                               & ((IData)(
                                                                          (vlSelf->io_float_i_3 
                                                                           >> 0x17U)) 
                                                                  - (IData)(0x7fU))))))))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)) 
                                                           & ((IData)(vlSelf->__VdfgTmp_h1abfe04b__0) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->__VdfgTmp_h1abfe04b__0) 
                                                         << 0x1bU) 
                                                        | (0x7fffff0U 
                                                           & ((IData)(vlSelf->io_float_i_3) 
                                                              << 4U)))))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_3_T))))
                                                       : PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_3_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_h8172b135__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0)
                                                         ? 0U
                                                         : vlSelf->__VdfgTmp_h0416f4a1__0)))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0)
                                                           ? 0U
                                                           : 
                                                          (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0))
                                                            ? 0x3fU
                                                            : 
                                                           (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0))
                                                             ? 0xc0U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              (0x7ffU 
                                                               & (IData)(
                                                                         (vlSelf->io_float_i_0 
                                                                          >> 0x34U))))
                                                              ? 2U
                                                              : 
                                                             ((0x7ffU 
                                                               == 
                                                               (0x7ffU 
                                                                & (IData)(
                                                                          (vlSelf->io_float_i_0 
                                                                           >> 0x34U))))
                                                               ? 0U
                                                               : 
                                                              (0xffU 
                                                               & ((IData)(
                                                                          (vlSelf->io_float_i_0 
                                                                           >> 0x34U)) 
                                                                  - (IData)(0xffU))))))))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0)) 
                                                           & ((vlSelf->__VdfgTmp_h0416f4a1__0 
                                                               >> 0x1bU) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0)
                                                        ? 0U
                                                        : vlSelf->__VdfgTmp_h0416f4a1__0))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_0_T))))
                                                       : PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_0_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_h81ccee83__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2)
                                                         ? 0U
                                                         : vlSelf->__VdfgTmp_h49c93cb3__0)))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2)
                                                           ? 0U
                                                           : 
                                                          (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0))
                                                            ? 0x3fU
                                                            : 
                                                           (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0))
                                                             ? 0xc0U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              (0x7ffU 
                                                               & (IData)(
                                                                         (vlSelf->io_float_i_1 
                                                                          >> 0x34U))))
                                                              ? 2U
                                                              : 
                                                             ((0x7ffU 
                                                               == 
                                                               (0x7ffU 
                                                                & (IData)(
                                                                          (vlSelf->io_float_i_1 
                                                                           >> 0x34U))))
                                                               ? 0U
                                                               : 
                                                              (0xffU 
                                                               & ((IData)(
                                                                          (vlSelf->io_float_i_1 
                                                                           >> 0x34U)) 
                                                                  - (IData)(0xffU))))))))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2)) 
                                                           & ((vlSelf->__VdfgTmp_h49c93cb3__0 
                                                               >> 0x1bU) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2)
                                                        ? 0U
                                                        : vlSelf->__VdfgTmp_h49c93cb3__0))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_1_T))))
                                                       : PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_1_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_h864b4868__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4)
                                                         ? 0U
                                                         : vlSelf->__VdfgTmp_h3d13dd16__0)))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4)
                                                           ? 0U
                                                           : 
                                                          (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0))
                                                            ? 0x3fU
                                                            : 
                                                           (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0))
                                                             ? 0xc0U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              (0x7ffU 
                                                               & (IData)(
                                                                         (vlSelf->io_float_i_2 
                                                                          >> 0x34U))))
                                                              ? 2U
                                                              : 
                                                             ((0x7ffU 
                                                               == 
                                                               (0x7ffU 
                                                                & (IData)(
                                                                          (vlSelf->io_float_i_2 
                                                                           >> 0x34U))))
                                                               ? 0U
                                                               : 
                                                              (0xffU 
                                                               & ((IData)(
                                                                          (vlSelf->io_float_i_2 
                                                                           >> 0x34U)) 
                                                                  - (IData)(0xffU))))))))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4)) 
                                                           & ((vlSelf->__VdfgTmp_h3d13dd16__0 
                                                               >> 0x1bU) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4)
                                                        ? 0U
                                                        : vlSelf->__VdfgTmp_h3d13dd16__0))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_2_T))))
                                                       : PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_2_T))));
    vlSelf->PvuTop__DOT____VdfgTmp_h82fdd5f6__0 = (
                                                   ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h878add96__0) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6)
                                                         ? 0U
                                                         : vlSelf->__VdfgTmp_hfd79a1bb__0)))
                                                    ? 0x80000000U
                                                    : 
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)) 
                                                     & ((0U 
                                                         == 
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6)
                                                           ? 0U
                                                           : 
                                                          (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0))
                                                            ? 0x3fU
                                                            : 
                                                           (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0))
                                                             ? 0xc0U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              (0x7ffU 
                                                               & (IData)(
                                                                         (vlSelf->io_float_i_3 
                                                                          >> 0x34U))))
                                                              ? 2U
                                                              : 
                                                             ((0x7ffU 
                                                               == 
                                                               (0x7ffU 
                                                                & (IData)(
                                                                          (vlSelf->io_float_i_3 
                                                                           >> 0x34U))))
                                                               ? 0U
                                                               : 
                                                              (0xffU 
                                                               & ((IData)(
                                                                          (vlSelf->io_float_i_3 
                                                                           >> 0x34U)) 
                                                                  - (IData)(0xffU))))))))) 
                                                        & ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6)) 
                                                           & ((vlSelf->__VdfgTmp_hfd79a1bb__0 
                                                               >> 0x1bU) 
                                                              & (0U 
                                                                 == PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0)))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6)
                                                        ? 0U
                                                        : vlSelf->__VdfgTmp_hfd79a1bb__0))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_3_T))))
                                                       : PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_3_T))));
    if ((0x1fU >= (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))) {
        PvuTop__DOT____VdfgTmp_hce16df71__0 = (vlSelf->PvuTop__DOT____VdfgTmp_hda612c41__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h2707afdc__0 = (vlSelf->PvuTop__DOT____VdfgTmp_hdafc45ff__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h0432f868__0 = (vlSelf->PvuTop__DOT____VdfgTmp_hdb7ad73c__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h6a62818e__0 = (vlSelf->PvuTop__DOT____VdfgTmp_hd7ed38aa__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_hb4870dfb__0 = (vlSelf->PvuTop__DOT____VdfgTmp_hc7defc58__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h6a403491__0 = (vlSelf->PvuTop__DOT____VdfgTmp_hc45095f6__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h4245c9a7__0 = (vlSelf->PvuTop__DOT____VdfgTmp_hc4af0733__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h2b4b6eb6__0 = (vlSelf->PvuTop__DOT____VdfgTmp_hc159885d__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_hddbbb971__0 = (vlSelf->PvuTop__DOT____VdfgTmp_hd2aca441__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h3b6e9ddc__0 = (vlSelf->PvuTop__DOT____VdfgTmp_hd322ddff__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h610e8268__0 = (vlSelf->PvuTop__DOT____VdfgTmp_hd3bd5f3c__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h2cd1ef8e__0 = (vlSelf->PvuTop__DOT____VdfgTmp_hec2bc0aa__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h96ce9dc5__0 = (vlSelf->PvuTop__DOT____VdfgTmp_h66bfb906__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h8ba9a789__0 = (vlSelf->PvuTop__DOT____VdfgTmp_h6731d6b0__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_hefd4ca7b__0 = (vlSelf->PvuTop__DOT____VdfgTmp_h67b04079__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_hc4a05ece__0 = (vlSelf->PvuTop__DOT____VdfgTmp_h6036cde7__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h40a2cba0__0 = (vlSelf->PvuTop__DOT____VdfgTmp_h8172b135__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h78ae3f63__0 = (vlSelf->PvuTop__DOT____VdfgTmp_h81ccee83__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h9b6b58ef__0 = (vlSelf->PvuTop__DOT____VdfgTmp_h864b4868__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT____VdfgTmp_h95914491__0 = (vlSelf->PvuTop__DOT____VdfgTmp_h82fdd5f6__0 
                                               >> (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
    } else {
        PvuTop__DOT____VdfgTmp_hce16df71__0 = 0U;
        PvuTop__DOT____VdfgTmp_h2707afdc__0 = 0U;
        PvuTop__DOT____VdfgTmp_h0432f868__0 = 0U;
        PvuTop__DOT____VdfgTmp_h6a62818e__0 = 0U;
        PvuTop__DOT____VdfgTmp_hb4870dfb__0 = 0U;
        PvuTop__DOT____VdfgTmp_h6a403491__0 = 0U;
        PvuTop__DOT____VdfgTmp_h4245c9a7__0 = 0U;
        PvuTop__DOT____VdfgTmp_h2b4b6eb6__0 = 0U;
        PvuTop__DOT____VdfgTmp_hddbbb971__0 = 0U;
        PvuTop__DOT____VdfgTmp_h3b6e9ddc__0 = 0U;
        PvuTop__DOT____VdfgTmp_h610e8268__0 = 0U;
        PvuTop__DOT____VdfgTmp_h2cd1ef8e__0 = 0U;
        PvuTop__DOT____VdfgTmp_h96ce9dc5__0 = 0U;
        PvuTop__DOT____VdfgTmp_h8ba9a789__0 = 0U;
        PvuTop__DOT____VdfgTmp_hefd4ca7b__0 = 0U;
        PvuTop__DOT____VdfgTmp_hc4a05ece__0 = 0U;
        PvuTop__DOT____VdfgTmp_h40a2cba0__0 = 0U;
        PvuTop__DOT____VdfgTmp_h78ae3f63__0 = 0U;
        PvuTop__DOT____VdfgTmp_h9b6b58ef__0 = 0U;
        PvuTop__DOT____VdfgTmp_h95914491__0 = 0U;
    }
    if (vlSelf->PvuTop__DOT___GEN_62) {
        __Vtemp_h57473319__0[0U] = vlSelf->PvuTop__DOT____VdfgTmp_hda612c41__0;
        __Vtemp_h57473319__0[1U] = vlSelf->PvuTop__DOT____VdfgTmp_hc7defc58__0;
        __Vtemp_h57473319__0[2U] = vlSelf->PvuTop__DOT____VdfgTmp_hd2aca441__0;
        __Vtemp_h57473319__0[3U] = vlSelf->PvuTop__DOT____VdfgTmp_h66bfb906__0;
        __Vtemp_h57473319__0[4U] = vlSelf->PvuTop__DOT____VdfgTmp_h8172b135__0;
        __Vtemp_hf52bf5e8__0[0U] = vlSelf->PvuTop__DOT____VdfgTmp_hdafc45ff__0;
        __Vtemp_hf52bf5e8__0[1U] = vlSelf->PvuTop__DOT____VdfgTmp_hc45095f6__0;
        __Vtemp_hf52bf5e8__0[2U] = vlSelf->PvuTop__DOT____VdfgTmp_hd322ddff__0;
        __Vtemp_hf52bf5e8__0[3U] = vlSelf->PvuTop__DOT____VdfgTmp_h6731d6b0__0;
        __Vtemp_hf52bf5e8__0[4U] = vlSelf->PvuTop__DOT____VdfgTmp_h81ccee83__0;
        __Vtemp_h09214ce0__0[0U] = vlSelf->PvuTop__DOT____VdfgTmp_hdb7ad73c__0;
        __Vtemp_h09214ce0__0[1U] = vlSelf->PvuTop__DOT____VdfgTmp_hc4af0733__0;
        __Vtemp_h09214ce0__0[2U] = vlSelf->PvuTop__DOT____VdfgTmp_hd3bd5f3c__0;
        __Vtemp_h09214ce0__0[3U] = vlSelf->PvuTop__DOT____VdfgTmp_h67b04079__0;
        __Vtemp_h09214ce0__0[4U] = vlSelf->PvuTop__DOT____VdfgTmp_h864b4868__0;
        __Vtemp_hefda14d7__0[0U] = vlSelf->PvuTop__DOT____VdfgTmp_hd7ed38aa__0;
        __Vtemp_hefda14d7__0[1U] = vlSelf->PvuTop__DOT____VdfgTmp_hc159885d__0;
        __Vtemp_hefda14d7__0[2U] = vlSelf->PvuTop__DOT____VdfgTmp_hec2bc0aa__0;
        __Vtemp_hefda14d7__0[3U] = vlSelf->PvuTop__DOT____VdfgTmp_h6036cde7__0;
        __Vtemp_hefda14d7__0[4U] = vlSelf->PvuTop__DOT____VdfgTmp_h82fdd5f6__0;
    } else if ((0x1fU >= (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))) {
        __Vtemp_h57473319__0[0U] = (PvuTop__DOT____VdfgTmp_hce16df71__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h57473319__0[1U] = (PvuTop__DOT____VdfgTmp_hb4870dfb__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h57473319__0[2U] = (PvuTop__DOT____VdfgTmp_hddbbb971__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h57473319__0[3U] = (PvuTop__DOT____VdfgTmp_h96ce9dc5__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h57473319__0[4U] = (PvuTop__DOT____VdfgTmp_h40a2cba0__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_hf52bf5e8__0[0U] = (PvuTop__DOT____VdfgTmp_h2707afdc__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_hf52bf5e8__0[1U] = (PvuTop__DOT____VdfgTmp_h6a403491__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_hf52bf5e8__0[2U] = (PvuTop__DOT____VdfgTmp_h3b6e9ddc__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_hf52bf5e8__0[3U] = (PvuTop__DOT____VdfgTmp_h8ba9a789__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_hf52bf5e8__0[4U] = (PvuTop__DOT____VdfgTmp_h78ae3f63__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h09214ce0__0[0U] = (PvuTop__DOT____VdfgTmp_h0432f868__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h09214ce0__0[1U] = (PvuTop__DOT____VdfgTmp_h4245c9a7__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h09214ce0__0[2U] = (PvuTop__DOT____VdfgTmp_h610e8268__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h09214ce0__0[3U] = (PvuTop__DOT____VdfgTmp_hefd4ca7b__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h09214ce0__0[4U] = (PvuTop__DOT____VdfgTmp_h9b6b58ef__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_hefda14d7__0[0U] = (PvuTop__DOT____VdfgTmp_h6a62818e__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_hefda14d7__0[1U] = (PvuTop__DOT____VdfgTmp_h2b4b6eb6__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_hefda14d7__0[2U] = (PvuTop__DOT____VdfgTmp_h2cd1ef8e__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_hefda14d7__0[3U] = (PvuTop__DOT____VdfgTmp_hc4a05ece__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_hefda14d7__0[4U] = (PvuTop__DOT____VdfgTmp_h95914491__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
    } else {
        __Vtemp_h57473319__0[0U] = 0U;
        __Vtemp_h57473319__0[1U] = 0U;
        __Vtemp_h57473319__0[2U] = 0U;
        __Vtemp_h57473319__0[3U] = 0U;
        __Vtemp_h57473319__0[4U] = 0U;
        __Vtemp_hf52bf5e8__0[0U] = 0U;
        __Vtemp_hf52bf5e8__0[1U] = 0U;
        __Vtemp_hf52bf5e8__0[2U] = 0U;
        __Vtemp_hf52bf5e8__0[3U] = 0U;
        __Vtemp_hf52bf5e8__0[4U] = 0U;
        __Vtemp_h09214ce0__0[0U] = 0U;
        __Vtemp_h09214ce0__0[1U] = 0U;
        __Vtemp_h09214ce0__0[2U] = 0U;
        __Vtemp_h09214ce0__0[3U] = 0U;
        __Vtemp_h09214ce0__0[4U] = 0U;
        __Vtemp_hefda14d7__0[0U] = 0U;
        __Vtemp_hefda14d7__0[1U] = 0U;
        __Vtemp_hefda14d7__0[2U] = 0U;
        __Vtemp_hefda14d7__0[3U] = 0U;
        __Vtemp_hefda14d7__0[4U] = 0U;
    }
    __Vtemp_h57473319__0[5U] = 0U;
    __Vtemp_h57473319__0[6U] = 0U;
    __Vtemp_h57473319__0[7U] = 0U;
    __Vtemp_hf52bf5e8__0[5U] = 0U;
    __Vtemp_hf52bf5e8__0[6U] = 0U;
    __Vtemp_hf52bf5e8__0[7U] = 0U;
    __Vtemp_h09214ce0__0[5U] = 0U;
    __Vtemp_h09214ce0__0[6U] = 0U;
    __Vtemp_h09214ce0__0[7U] = 0U;
    __Vtemp_hefda14d7__0[5U] = 0U;
    __Vtemp_hefda14d7__0[6U] = 0U;
    __Vtemp_hefda14d7__0[7U] = 0U;
    if (vlSelf->io_float_posit) {
        vlSelf->PvuTop__DOT___GEN_78 = (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->io_float_mode) 
                                                    << 5U)))
                                          ? 0U : (__Vtemp_h57473319__0[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->io_float_mode) 
                                                        << 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->io_float_mode) 
                                                       << 5U))))) 
                                        | (__Vtemp_h57473319__0[
                                           (7U & (IData)(vlSelf->io_float_mode))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->io_float_mode) 
                                                  << 5U))));
        vlSelf->PvuTop__DOT___GEN_79 = (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->io_float_mode) 
                                                    << 5U)))
                                          ? 0U : (__Vtemp_hf52bf5e8__0[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->io_float_mode) 
                                                        << 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->io_float_mode) 
                                                       << 5U))))) 
                                        | (__Vtemp_hf52bf5e8__0[
                                           (7U & (IData)(vlSelf->io_float_mode))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->io_float_mode) 
                                                  << 5U))));
        vlSelf->PvuTop__DOT___GEN_80 = (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->io_float_mode) 
                                                    << 5U)))
                                          ? 0U : (__Vtemp_h09214ce0__0[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->io_float_mode) 
                                                        << 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->io_float_mode) 
                                                       << 5U))))) 
                                        | (__Vtemp_h09214ce0__0[
                                           (7U & (IData)(vlSelf->io_float_mode))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->io_float_mode) 
                                                  << 5U))));
        vlSelf->PvuTop__DOT___GEN_81 = (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->io_float_mode) 
                                                    << 5U)))
                                          ? 0U : (__Vtemp_hefda14d7__0[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->io_float_mode) 
                                                        << 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->io_float_mode) 
                                                       << 5U))))) 
                                        | (__Vtemp_hefda14d7__0[
                                           (7U & (IData)(vlSelf->io_float_mode))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->io_float_mode) 
                                                  << 5U))));
    } else {
        vlSelf->PvuTop__DOT___GEN_78 = 0U;
        vlSelf->PvuTop__DOT___GEN_79 = 0U;
        vlSelf->PvuTop__DOT___GEN_80 = 0U;
        vlSelf->PvuTop__DOT___GEN_81 = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__ico(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(2U)) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(3U)) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(4U)) {
        VL_DBG_MSGF("         'ico' region trigger index 4 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(5U)) {
        VL_DBG_MSGF("         'ico' region trigger index 5 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(6U)) {
        VL_DBG_MSGF("         'ico' region trigger index 6 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(7U)) {
        VL_DBG_MSGF("         'ico' region trigger index 7 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(8U)) {
        VL_DBG_MSGF("         'ico' region trigger index 8 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(9U)) {
        VL_DBG_MSGF("         'ico' region trigger index 9 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'ico' region trigger index 10 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'ico' region trigger index 11 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'ico' region trigger index 12 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'ico' region trigger index 13 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'ico' region trigger index 14 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'ico' region trigger index 15 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'ico' region trigger index 16 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'ico' region trigger index 17 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'ico' region trigger index 18 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'ico' region trigger index 19 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'ico' region trigger index 20 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'ico' region trigger index 21 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'ico' region trigger index 22 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'ico' region trigger index 23 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'ico' region trigger index 24 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'ico' region trigger index 25 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 26 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 27 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 28 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 29 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 30 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 31 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'ico' region trigger index 32 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x21U)) {
        VL_DBG_MSGF("         'ico' region trigger index 33 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x22U)) {
        VL_DBG_MSGF("         'ico' region trigger index 34 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x23U)) {
        VL_DBG_MSGF("         'ico' region trigger index 35 is active: @([hybrid] PvuTop.dot_converted_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.dot_converted_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x24U)) {
        VL_DBG_MSGF("         'ico' region trigger index 36 is active: @([hybrid] PvuTop.dot_converted_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x25U)) {
        VL_DBG_MSGF("         'ico' region trigger index 37 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x26U)) {
        VL_DBG_MSGF("         'ico' region trigger index 38 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x27U)) {
        VL_DBG_MSGF("         'ico' region trigger index 39 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x28U)) {
        VL_DBG_MSGF("         'ico' region trigger index 40 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x29U)) {
        VL_DBG_MSGF("         'ico' region trigger index 41 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x2aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 42 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x2bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 43 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x2cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 44 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x2dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 45 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x2eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 46 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x2fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 47 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x30U)) {
        VL_DBG_MSGF("         'ico' region trigger index 48 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x31U)) {
        VL_DBG_MSGF("         'ico' region trigger index 49 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x32U)) {
        VL_DBG_MSGF("         'ico' region trigger index 50 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x33U)) {
        VL_DBG_MSGF("         'ico' region trigger index 51 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x34U)) {
        VL_DBG_MSGF("         'ico' region trigger index 52 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x35U)) {
        VL_DBG_MSGF("         'ico' region trigger index 53 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x36U)) {
        VL_DBG_MSGF("         'ico' region trigger index 54 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x37U)) {
        VL_DBG_MSGF("         'ico' region trigger index 55 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x38U)) {
        VL_DBG_MSGF("         'ico' region trigger index 56 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x39U)) {
        VL_DBG_MSGF("         'ico' region trigger index 57 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x3aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 58 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x3bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 59 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x3cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 60 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x3dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 61 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x3eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 62 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x3fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 63 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x40U)) {
        VL_DBG_MSGF("         'ico' region trigger index 64 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x41U)) {
        VL_DBG_MSGF("         'ico' region trigger index 65 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x42U)) {
        VL_DBG_MSGF("         'ico' region trigger index 66 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x43U)) {
        VL_DBG_MSGF("         'ico' region trigger index 67 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x44U)) {
        VL_DBG_MSGF("         'ico' region trigger index 68 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x45U)) {
        VL_DBG_MSGF("         'ico' region trigger index 69 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x46U)) {
        VL_DBG_MSGF("         'ico' region trigger index 70 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x47U)) {
        VL_DBG_MSGF("         'ico' region trigger index 71 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x48U)) {
        VL_DBG_MSGF("         'ico' region trigger index 72 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x49U)) {
        VL_DBG_MSGF("         'ico' region trigger index 73 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x4aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 74 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x4bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 75 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x4cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 76 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x4dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 77 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x4eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 78 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x4fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 79 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x50U)) {
        VL_DBG_MSGF("         'ico' region trigger index 80 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x51U)) {
        VL_DBG_MSGF("         'ico' region trigger index 81 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x52U)) {
        VL_DBG_MSGF("         'ico' region trigger index 82 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x53U)) {
        VL_DBG_MSGF("         'ico' region trigger index 83 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x54U)) {
        VL_DBG_MSGF("         'ico' region trigger index 84 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x55U)) {
        VL_DBG_MSGF("         'ico' region trigger index 85 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x56U)) {
        VL_DBG_MSGF("         'ico' region trigger index 86 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x57U)) {
        VL_DBG_MSGF("         'ico' region trigger index 87 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x58U)) {
        VL_DBG_MSGF("         'ico' region trigger index 88 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x59U)) {
        VL_DBG_MSGF("         'ico' region trigger index 89 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x5aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 90 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x5bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 91 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x5cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 92 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x5dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 93 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x5eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 94 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x5fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 95 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x60U)) {
        VL_DBG_MSGF("         'ico' region trigger index 96 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x61U)) {
        VL_DBG_MSGF("         'ico' region trigger index 97 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x62U)) {
        VL_DBG_MSGF("         'ico' region trigger index 98 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x63U)) {
        VL_DBG_MSGF("         'ico' region trigger index 99 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x64U)) {
        VL_DBG_MSGF("         'ico' region trigger index 100 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x65U)) {
        VL_DBG_MSGF("         'ico' region trigger index 101 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x66U)) {
        VL_DBG_MSGF("         'ico' region trigger index 102 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x67U)) {
        VL_DBG_MSGF("         'ico' region trigger index 103 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x68U)) {
        VL_DBG_MSGF("         'ico' region trigger index 104 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x69U)) {
        VL_DBG_MSGF("         'ico' region trigger index 105 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x6aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 106 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x6bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 107 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x6cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 108 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x6dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 109 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x6eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 110 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x6fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 111 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x70U)) {
        VL_DBG_MSGF("         'ico' region trigger index 112 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x71U)) {
        VL_DBG_MSGF("         'ico' region trigger index 113 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x72U)) {
        VL_DBG_MSGF("         'ico' region trigger index 114 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x73U)) {
        VL_DBG_MSGF("         'ico' region trigger index 115 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x74U)) {
        VL_DBG_MSGF("         'ico' region trigger index 116 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x75U)) {
        VL_DBG_MSGF("         'ico' region trigger index 117 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x76U)) {
        VL_DBG_MSGF("         'ico' region trigger index 118 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x77U)) {
        VL_DBG_MSGF("         'ico' region trigger index 119 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x78U)) {
        VL_DBG_MSGF("         'ico' region trigger index 120 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x79U)) {
        VL_DBG_MSGF("         'ico' region trigger index 121 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x7aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 122 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x7bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 123 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x7cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 124 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x7dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 125 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x7eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 126 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x7fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 127 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x80U)) {
        VL_DBG_MSGF("         'ico' region trigger index 128 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x81U)) {
        VL_DBG_MSGF("         'ico' region trigger index 129 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x82U)) {
        VL_DBG_MSGF("         'ico' region trigger index 130 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x83U)) {
        VL_DBG_MSGF("         'ico' region trigger index 131 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x84U)) {
        VL_DBG_MSGF("         'ico' region trigger index 132 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x85U)) {
        VL_DBG_MSGF("         'ico' region trigger index 133 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x86U)) {
        VL_DBG_MSGF("         'ico' region trigger index 134 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__act(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x21U)) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x22U)) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @([hybrid] PvuTop.dot_converted_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.dot_converted_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x23U)) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @([hybrid] PvuTop.dot_converted_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x24U)) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x25U)) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x26U)) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x27U)) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x28U)) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x29U)) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2aU)) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2bU)) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2cU)) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2dU)) {
        VL_DBG_MSGF("         'act' region trigger index 45 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2eU)) {
        VL_DBG_MSGF("         'act' region trigger index 46 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2fU)) {
        VL_DBG_MSGF("         'act' region trigger index 47 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x30U)) {
        VL_DBG_MSGF("         'act' region trigger index 48 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x31U)) {
        VL_DBG_MSGF("         'act' region trigger index 49 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x32U)) {
        VL_DBG_MSGF("         'act' region trigger index 50 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x33U)) {
        VL_DBG_MSGF("         'act' region trigger index 51 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x34U)) {
        VL_DBG_MSGF("         'act' region trigger index 52 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x35U)) {
        VL_DBG_MSGF("         'act' region trigger index 53 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x36U)) {
        VL_DBG_MSGF("         'act' region trigger index 54 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x37U)) {
        VL_DBG_MSGF("         'act' region trigger index 55 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x38U)) {
        VL_DBG_MSGF("         'act' region trigger index 56 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x39U)) {
        VL_DBG_MSGF("         'act' region trigger index 57 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x3aU)) {
        VL_DBG_MSGF("         'act' region trigger index 58 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x3bU)) {
        VL_DBG_MSGF("         'act' region trigger index 59 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x3cU)) {
        VL_DBG_MSGF("         'act' region trigger index 60 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x3dU)) {
        VL_DBG_MSGF("         'act' region trigger index 61 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x3eU)) {
        VL_DBG_MSGF("         'act' region trigger index 62 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x3fU)) {
        VL_DBG_MSGF("         'act' region trigger index 63 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x40U)) {
        VL_DBG_MSGF("         'act' region trigger index 64 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x41U)) {
        VL_DBG_MSGF("         'act' region trigger index 65 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x42U)) {
        VL_DBG_MSGF("         'act' region trigger index 66 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x43U)) {
        VL_DBG_MSGF("         'act' region trigger index 67 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x44U)) {
        VL_DBG_MSGF("         'act' region trigger index 68 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x45U)) {
        VL_DBG_MSGF("         'act' region trigger index 69 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x46U)) {
        VL_DBG_MSGF("         'act' region trigger index 70 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x47U)) {
        VL_DBG_MSGF("         'act' region trigger index 71 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x48U)) {
        VL_DBG_MSGF("         'act' region trigger index 72 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x49U)) {
        VL_DBG_MSGF("         'act' region trigger index 73 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x4aU)) {
        VL_DBG_MSGF("         'act' region trigger index 74 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x4bU)) {
        VL_DBG_MSGF("         'act' region trigger index 75 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x4cU)) {
        VL_DBG_MSGF("         'act' region trigger index 76 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x4dU)) {
        VL_DBG_MSGF("         'act' region trigger index 77 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x4eU)) {
        VL_DBG_MSGF("         'act' region trigger index 78 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x4fU)) {
        VL_DBG_MSGF("         'act' region trigger index 79 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x50U)) {
        VL_DBG_MSGF("         'act' region trigger index 80 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x51U)) {
        VL_DBG_MSGF("         'act' region trigger index 81 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x52U)) {
        VL_DBG_MSGF("         'act' region trigger index 82 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x53U)) {
        VL_DBG_MSGF("         'act' region trigger index 83 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x54U)) {
        VL_DBG_MSGF("         'act' region trigger index 84 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x55U)) {
        VL_DBG_MSGF("         'act' region trigger index 85 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x56U)) {
        VL_DBG_MSGF("         'act' region trigger index 86 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x57U)) {
        VL_DBG_MSGF("         'act' region trigger index 87 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x58U)) {
        VL_DBG_MSGF("         'act' region trigger index 88 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x59U)) {
        VL_DBG_MSGF("         'act' region trigger index 89 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x5aU)) {
        VL_DBG_MSGF("         'act' region trigger index 90 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x5bU)) {
        VL_DBG_MSGF("         'act' region trigger index 91 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x5cU)) {
        VL_DBG_MSGF("         'act' region trigger index 92 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x5dU)) {
        VL_DBG_MSGF("         'act' region trigger index 93 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x5eU)) {
        VL_DBG_MSGF("         'act' region trigger index 94 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x5fU)) {
        VL_DBG_MSGF("         'act' region trigger index 95 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x60U)) {
        VL_DBG_MSGF("         'act' region trigger index 96 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x61U)) {
        VL_DBG_MSGF("         'act' region trigger index 97 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x62U)) {
        VL_DBG_MSGF("         'act' region trigger index 98 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x63U)) {
        VL_DBG_MSGF("         'act' region trigger index 99 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x64U)) {
        VL_DBG_MSGF("         'act' region trigger index 100 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x65U)) {
        VL_DBG_MSGF("         'act' region trigger index 101 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x66U)) {
        VL_DBG_MSGF("         'act' region trigger index 102 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x67U)) {
        VL_DBG_MSGF("         'act' region trigger index 103 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x68U)) {
        VL_DBG_MSGF("         'act' region trigger index 104 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x69U)) {
        VL_DBG_MSGF("         'act' region trigger index 105 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x6aU)) {
        VL_DBG_MSGF("         'act' region trigger index 106 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x6bU)) {
        VL_DBG_MSGF("         'act' region trigger index 107 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x6cU)) {
        VL_DBG_MSGF("         'act' region trigger index 108 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x6dU)) {
        VL_DBG_MSGF("         'act' region trigger index 109 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x6eU)) {
        VL_DBG_MSGF("         'act' region trigger index 110 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x6fU)) {
        VL_DBG_MSGF("         'act' region trigger index 111 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x70U)) {
        VL_DBG_MSGF("         'act' region trigger index 112 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x71U)) {
        VL_DBG_MSGF("         'act' region trigger index 113 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x72U)) {
        VL_DBG_MSGF("         'act' region trigger index 114 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x73U)) {
        VL_DBG_MSGF("         'act' region trigger index 115 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x74U)) {
        VL_DBG_MSGF("         'act' region trigger index 116 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x75U)) {
        VL_DBG_MSGF("         'act' region trigger index 117 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x76U)) {
        VL_DBG_MSGF("         'act' region trigger index 118 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x77U)) {
        VL_DBG_MSGF("         'act' region trigger index 119 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x78U)) {
        VL_DBG_MSGF("         'act' region trigger index 120 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x79U)) {
        VL_DBG_MSGF("         'act' region trigger index 121 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x7aU)) {
        VL_DBG_MSGF("         'act' region trigger index 122 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x7bU)) {
        VL_DBG_MSGF("         'act' region trigger index 123 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x7cU)) {
        VL_DBG_MSGF("         'act' region trigger index 124 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x7dU)) {
        VL_DBG_MSGF("         'act' region trigger index 125 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x7eU)) {
        VL_DBG_MSGF("         'act' region trigger index 126 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x7fU)) {
        VL_DBG_MSGF("         'act' region trigger index 127 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x80U)) {
        VL_DBG_MSGF("         'act' region trigger index 128 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x81U)) {
        VL_DBG_MSGF("         'act' region trigger index 129 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x82U)) {
        VL_DBG_MSGF("         'act' region trigger index 130 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x83U)) {
        VL_DBG_MSGF("         'act' region trigger index 131 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x84U)) {
        VL_DBG_MSGF("         'act' region trigger index 132 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x85U)) {
        VL_DBG_MSGF("         'act' region trigger index 133 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x86U)) {
        VL_DBG_MSGF("         'act' region trigger index 134 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__nba(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] PvuTop.frac_norm_dot.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x21U)) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x22U)) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @([hybrid] PvuTop.dot_converted_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.dot_converted_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x23U)) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @([hybrid] PvuTop.dot_converted_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x24U)) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x25U)) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x26U)) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x27U)) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x28U)) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x29U)) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 45 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 46 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 47 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x30U)) {
        VL_DBG_MSGF("         'nba' region trigger index 48 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x31U)) {
        VL_DBG_MSGF("         'nba' region trigger index 49 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x32U)) {
        VL_DBG_MSGF("         'nba' region trigger index 50 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x33U)) {
        VL_DBG_MSGF("         'nba' region trigger index 51 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x34U)) {
        VL_DBG_MSGF("         'nba' region trigger index 52 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x35U)) {
        VL_DBG_MSGF("         'nba' region trigger index 53 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x36U)) {
        VL_DBG_MSGF("         'nba' region trigger index 54 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x37U)) {
        VL_DBG_MSGF("         'nba' region trigger index 55 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x38U)) {
        VL_DBG_MSGF("         'nba' region trigger index 56 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x39U)) {
        VL_DBG_MSGF("         'nba' region trigger index 57 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 58 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 59 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 60 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 61 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 62 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 63 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x40U)) {
        VL_DBG_MSGF("         'nba' region trigger index 64 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x41U)) {
        VL_DBG_MSGF("         'nba' region trigger index 65 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x42U)) {
        VL_DBG_MSGF("         'nba' region trigger index 66 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x43U)) {
        VL_DBG_MSGF("         'nba' region trigger index 67 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x44U)) {
        VL_DBG_MSGF("         'nba' region trigger index 68 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x45U)) {
        VL_DBG_MSGF("         'nba' region trigger index 69 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x46U)) {
        VL_DBG_MSGF("         'nba' region trigger index 70 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x47U)) {
        VL_DBG_MSGF("         'nba' region trigger index 71 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x48U)) {
        VL_DBG_MSGF("         'nba' region trigger index 72 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x49U)) {
        VL_DBG_MSGF("         'nba' region trigger index 73 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 74 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 75 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 76 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 77 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 78 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 79 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x50U)) {
        VL_DBG_MSGF("         'nba' region trigger index 80 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x51U)) {
        VL_DBG_MSGF("         'nba' region trigger index 81 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x52U)) {
        VL_DBG_MSGF("         'nba' region trigger index 82 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x53U)) {
        VL_DBG_MSGF("         'nba' region trigger index 83 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x54U)) {
        VL_DBG_MSGF("         'nba' region trigger index 84 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x55U)) {
        VL_DBG_MSGF("         'nba' region trigger index 85 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x56U)) {
        VL_DBG_MSGF("         'nba' region trigger index 86 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x57U)) {
        VL_DBG_MSGF("         'nba' region trigger index 87 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x58U)) {
        VL_DBG_MSGF("         'nba' region trigger index 88 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x59U)) {
        VL_DBG_MSGF("         'nba' region trigger index 89 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 90 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 91 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 92 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.result_converted_decoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 93 is active: @([hybrid] PvuTop.result_converted_decoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 94 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 95 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x60U)) {
        VL_DBG_MSGF("         'nba' region trigger index 96 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x61U)) {
        VL_DBG_MSGF("         'nba' region trigger index 97 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x62U)) {
        VL_DBG_MSGF("         'nba' region trigger index 98 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x63U)) {
        VL_DBG_MSGF("         'nba' region trigger index 99 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x64U)) {
        VL_DBG_MSGF("         'nba' region trigger index 100 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x65U)) {
        VL_DBG_MSGF("         'nba' region trigger index 101 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x66U)) {
        VL_DBG_MSGF("         'nba' region trigger index 102 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x67U)) {
        VL_DBG_MSGF("         'nba' region trigger index 103 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x68U)) {
        VL_DBG_MSGF("         'nba' region trigger index 104 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x69U)) {
        VL_DBG_MSGF("         'nba' region trigger index 105 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x6aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 106 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x6bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 107 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x6cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 108 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x6dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 109 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x6eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 110 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x6fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 111 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x70U)) {
        VL_DBG_MSGF("         'nba' region trigger index 112 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x71U)) {
        VL_DBG_MSGF("         'nba' region trigger index 113 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x72U)) {
        VL_DBG_MSGF("         'nba' region trigger index 114 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x73U)) {
        VL_DBG_MSGF("         'nba' region trigger index 115 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x74U)) {
        VL_DBG_MSGF("         'nba' region trigger index 116 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x75U)) {
        VL_DBG_MSGF("         'nba' region trigger index 117 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x76U)) {
        VL_DBG_MSGF("         'nba' region trigger index 118 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x77U)) {
        VL_DBG_MSGF("         'nba' region trigger index 119 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x78U)) {
        VL_DBG_MSGF("         'nba' region trigger index 120 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x79U)) {
        VL_DBG_MSGF("         'nba' region trigger index 121 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x7aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 122 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x7bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 123 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x7cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 124 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x7dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 125 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x7eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 126 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x7fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 127 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x80U)) {
        VL_DBG_MSGF("         'nba' region trigger index 128 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x81U)) {
        VL_DBG_MSGF("         'nba' region trigger index 129 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x82U)) {
        VL_DBG_MSGF("         'nba' region trigger index 130 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x83U)) {
        VL_DBG_MSGF("         'nba' region trigger index 131 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x84U)) {
        VL_DBG_MSGF("         'nba' region trigger index 132 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x85U)) {
        VL_DBG_MSGF("         'nba' region trigger index 133 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x86U)) {
        VL_DBG_MSGF("         'nba' region trigger index 134 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG
