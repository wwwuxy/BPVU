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
                VL_FATAL_MT("/home/wuxy/BPVU/vsrc/PvuTop.sv", 8039, "", "Settle region did not converge.");
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
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(7U)) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(8U)) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(9U)) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'stl' region trigger index 21 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'stl' region trigger index 22 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'stl' region trigger index 23 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'stl' region trigger index 24 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'stl' region trigger index 25 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 26 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 27 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 28 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 29 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 30 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 31 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'stl' region trigger index 32 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x21U)) {
        VL_DBG_MSGF("         'stl' region trigger index 33 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x22U)) {
        VL_DBG_MSGF("         'stl' region trigger index 34 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x23U)) {
        VL_DBG_MSGF("         'stl' region trigger index 35 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x24U)) {
        VL_DBG_MSGF("         'stl' region trigger index 36 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x25U)) {
        VL_DBG_MSGF("         'stl' region trigger index 37 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x26U)) {
        VL_DBG_MSGF("         'stl' region trigger index 38 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x27U)) {
        VL_DBG_MSGF("         'stl' region trigger index 39 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x28U)) {
        VL_DBG_MSGF("         'stl' region trigger index 40 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x29U)) {
        VL_DBG_MSGF("         'stl' region trigger index 41 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x2aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 42 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x2bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 43 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x2cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 44 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x2dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 45 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x2eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 46 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x2fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 47 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x30U)) {
        VL_DBG_MSGF("         'stl' region trigger index 48 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x31U)) {
        VL_DBG_MSGF("         'stl' region trigger index 49 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x32U)) {
        VL_DBG_MSGF("         'stl' region trigger index 50 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x33U)) {
        VL_DBG_MSGF("         'stl' region trigger index 51 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x34U)) {
        VL_DBG_MSGF("         'stl' region trigger index 52 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x35U)) {
        VL_DBG_MSGF("         'stl' region trigger index 53 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x36U)) {
        VL_DBG_MSGF("         'stl' region trigger index 54 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x37U)) {
        VL_DBG_MSGF("         'stl' region trigger index 55 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x38U)) {
        VL_DBG_MSGF("         'stl' region trigger index 56 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x39U)) {
        VL_DBG_MSGF("         'stl' region trigger index 57 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x3aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 58 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x3bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 59 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x3cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 60 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x3dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 61 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x3eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 62 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x3fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 63 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x40U)) {
        VL_DBG_MSGF("         'stl' region trigger index 64 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x41U)) {
        VL_DBG_MSGF("         'stl' region trigger index 65 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x42U)) {
        VL_DBG_MSGF("         'stl' region trigger index 66 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x43U)) {
        VL_DBG_MSGF("         'stl' region trigger index 67 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x44U)) {
        VL_DBG_MSGF("         'stl' region trigger index 68 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x45U)) {
        VL_DBG_MSGF("         'stl' region trigger index 69 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x46U)) {
        VL_DBG_MSGF("         'stl' region trigger index 70 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x47U)) {
        VL_DBG_MSGF("         'stl' region trigger index 71 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x48U)) {
        VL_DBG_MSGF("         'stl' region trigger index 72 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x49U)) {
        VL_DBG_MSGF("         'stl' region trigger index 73 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x4aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 74 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x4bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 75 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x4cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 76 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x4dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 77 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x4eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 78 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x4fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 79 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x50U)) {
        VL_DBG_MSGF("         'stl' region trigger index 80 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x51U)) {
        VL_DBG_MSGF("         'stl' region trigger index 81 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x52U)) {
        VL_DBG_MSGF("         'stl' region trigger index 82 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x53U)) {
        VL_DBG_MSGF("         'stl' region trigger index 83 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x54U)) {
        VL_DBG_MSGF("         'stl' region trigger index 84 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x55U)) {
        VL_DBG_MSGF("         'stl' region trigger index 85 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x56U)) {
        VL_DBG_MSGF("         'stl' region trigger index 86 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x57U)) {
        VL_DBG_MSGF("         'stl' region trigger index 87 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x58U)) {
        VL_DBG_MSGF("         'stl' region trigger index 88 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x59U)) {
        VL_DBG_MSGF("         'stl' region trigger index 89 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x5aU)) {
        VL_DBG_MSGF("         'stl' region trigger index 90 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x5bU)) {
        VL_DBG_MSGF("         'stl' region trigger index 91 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x5cU)) {
        VL_DBG_MSGF("         'stl' region trigger index 92 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x5dU)) {
        VL_DBG_MSGF("         'stl' region trigger index 93 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x5eU)) {
        VL_DBG_MSGF("         'stl' region trigger index 94 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x5fU)) {
        VL_DBG_MSGF("         'stl' region trigger index 95 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x60U)) {
        VL_DBG_MSGF("         'stl' region trigger index 96 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x61U)) {
        VL_DBG_MSGF("         'stl' region trigger index 97 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x62U)) {
        VL_DBG_MSGF("         'stl' region trigger index 98 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x63U)) {
        VL_DBG_MSGF("         'stl' region trigger index 99 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x64U)) {
        VL_DBG_MSGF("         'stl' region trigger index 100 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x65U)) {
        VL_DBG_MSGF("         'stl' region trigger index 101 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x66U)) {
        VL_DBG_MSGF("         'stl' region trigger index 102 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x67U)) {
        VL_DBG_MSGF("         'stl' region trigger index 103 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPvuTop___024root___stl_sequent__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT___GEN_7;
    PvuTop__DOT___GEN_7 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_8;
    PvuTop__DOT___GEN_8 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_13;
    PvuTop__DOT___GEN_13 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_14;
    PvuTop__DOT___GEN_14 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_19;
    PvuTop__DOT___GEN_19 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_20;
    PvuTop__DOT___GEN_20 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_25;
    PvuTop__DOT___GEN_25 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_26;
    PvuTop__DOT___GEN_26 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_35;
    PvuTop__DOT___GEN_35 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_38;
    PvuTop__DOT___GEN_38 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_89;
    PvuTop__DOT___GEN_89 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_90;
    PvuTop__DOT___GEN_90 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_91;
    PvuTop__DOT___GEN_91 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_92;
    PvuTop__DOT___GEN_92 = 0;
    CData/*0:0*/ PvuTop__DOT___GEN_93;
    PvuTop__DOT___GEN_93 = 0;
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
    CData/*0:0*/ PvuTop__DOT____VdfgTmp_haaab2f5c__0;
    PvuTop__DOT____VdfgTmp_haaab2f5c__0 = 0;
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
    CData/*3:0*/ PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN;
    PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN = 0;
    CData/*3:0*/ PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN_0;
    PvuTop__DOT__float2posit_fp4__DOT__floatDecoder__DOT___GEN_0 = 0;
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
    CData/*0:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0;
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0 = 0;
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
    CData/*0:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0;
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0 = 0;
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
    CData/*0:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0;
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0 = 0;
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
    CData/*0:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0 = 0;
    IData/*26:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 = 0;
    CData/*0:0*/ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0;
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0 = 0;
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
    VlWide<8>/*255:0*/ __Vtemp_h1a5da261__0;
    VlWide<8>/*255:0*/ __Vtemp_h4e191511__0;
    VlWide<8>/*255:0*/ __Vtemp_h855a228d__0;
    VlWide<8>/*255:0*/ __Vtemp_h1d6d2f75__0;
    // Body
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13 
        = (((QData)((IData)((1U & (IData)((vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale 
                                           >> 0x20U))))) 
            << 0x20U) | (QData)((IData)((vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale 
                                         >> 1U))));
    vlSelf->PvuTop__DOT___GEN_87 = ((6U > (IData)(vlSelf->io_op)) 
                                    & (5U == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT___GEN_50 = ((7U != (IData)(vlSelf->io_op)) 
                                    | (IData)(vlSelf->io_float_posit));
    vlSelf->PvuTop__DOT___GEN_105 = ((7U == (IData)(vlSelf->io_op)) 
                                     | ((8U == (IData)(vlSelf->io_op)) 
                                        | ((9U == (IData)(vlSelf->io_op)) 
                                           | (0xaU 
                                              == (IData)(vlSelf->io_op)))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_12 
        = (((QData)((IData)((1U & (IData)((vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale 
                                           >> 0x20U))))) 
            << 0x21U) | vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale);
    vlSelf->PvuTop__DOT___GEN_94 = ((6U <= (IData)(vlSelf->io_op)) 
                                    | (5U == (IData)(vlSelf->io_op)));
    PvuTop__DOT____VdfgTmp_h4a2a4b59__0 = ((5U != (IData)(vlSelf->io_op)) 
                                           & (6U > (IData)(vlSelf->io_op)));
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
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR 
        = (IData)((0x80000000U == vlSelf->io_posit_i1_0));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_1 
        = (IData)((0x80000000U == vlSelf->io_posit_i1_1));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_2 
        = (IData)((0x80000000U == vlSelf->io_posit_i1_2));
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_3 
        = (IData)((0x80000000U == vlSelf->io_posit_i1_3));
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
    PvuTop__DOT____VdfgTmp_haaab2f5c__0 = ((5U == (IData)(vlSelf->io_op)) 
                                           | (6U == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT__greater__DOT___GEN_14 = ((0x80000000U 
                                                   == vlSelf->io_posit_i1_3) 
                                                  & (0x80000000U 
                                                     == vlSelf->io_posit_i2_3));
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
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0 = 0U;
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0 = 0U;
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
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0 
            = (0xffU & (IData)((vlSelf->io_float_i_0 
                                >> 0x17U)));
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0 
            = (0xffU & (IData)((vlSelf->io_float_i_1 
                                >> 0x17U)));
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0 
            = (0xffU & (IData)((vlSelf->io_float_i_2 
                                >> 0x17U)));
        vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0 
            = (0xffU & (IData)((vlSelf->io_float_i_3 
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
    vlSelf->PvuTop__DOT____VdfgTmp_h41d5b416__0 = ((IData)(vlSelf->PvuTop__DOT___GEN_87) 
                                                   & (5U 
                                                      == (IData)(vlSelf->io_op)));
    PvuTop__DOT___GEN_93 = ((~ (IData)(vlSelf->io_Isposit)) 
                            & (IData)(vlSelf->PvuTop__DOT___GEN_87));
    vlSelf->PvuTop__DOT__greater__DOT___GEN_19 = (IData)(
                                                         (((IData)(vlSelf->io_dst_posit_width) 
                                                           >> 5U) 
                                                          | ((0x20U 
                                                              < (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH)) 
                                                             | (0U 
                                                                == (IData)(vlSelf->io_dst_posit_width)))));
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
    vlSelf->PvuTop__DOT___GEN_41 = (IData)((((IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH) 
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
    vlSelf->PvuTop__DOT___GEN_106 = ((IData)(PvuTop__DOT____VdfgTmp_haaab2f5c__0) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_105));
    vlSelf->PvuTop__DOT___GEN_63 = ((IData)(PvuTop__DOT____VdfgTmp_haaab2f5c__0) 
                                    | (7U == (IData)(vlSelf->io_op)));
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
    vlSelf->PvuTop__DOT___GEN_77 = ((9U == (IData)(vlSelf->io_op)) 
                                    & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0));
    vlSelf->PvuTop__DOT____VdfgTmp_h9b56b116__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                                   & (IData)(PvuTop__DOT____VdfgTmp_h4a2a4b59__0));
    vlSelf->__VdfgTmp_he5c1ee02__0 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)) 
                                            | (5U == (IData)(vlSelf->io_op))));
    vlSelf->PvuTop__DOT____VdfgTmp_hfcce9a03__0 = (
                                                   (~ (IData)(vlSelf->io_Isposit)) 
                                                   & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0));
    vlSelf->PvuTop__DOT___GEN_24 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)) 
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
    vlSelf->PvuTop__DOT___GEN_74 = ((9U == (IData)(vlSelf->io_op)) 
                                    & (2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)));
    vlSelf->PvuTop__DOT____VdfgTmp_h4d703b6d__0 = (
                                                   (2U 
                                                    < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (IData)(PvuTop__DOT____VdfgTmp_h4a2a4b59__0));
    vlSelf->__VdfgTmp_h58084909__0 = ((2U >= (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                      | (5U == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT____VdfgTmp_hf8feb26e__0 = (
                                                   (~ (IData)(vlSelf->io_Isposit)) 
                                                   & (2U 
                                                      < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)));
    vlSelf->PvuTop__DOT___GEN_18 = ((2U >= (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                    | (IData)(vlSelf->io_Isposit));
    vlSelf->PvuTop__DOT___GEN_71 = ((9U == (IData)(vlSelf->io_op)) 
                                    & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0));
    vlSelf->PvuTop__DOT____VdfgTmp_hfe6df398__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                   & (IData)(PvuTop__DOT____VdfgTmp_h4a2a4b59__0));
    vlSelf->__VdfgTmp_hb8dc97df__0 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)) 
                                            | (5U == (IData)(vlSelf->io_op))));
    vlSelf->PvuTop__DOT____VdfgTmp_ha4ea0160__0 = (
                                                   (~ (IData)(vlSelf->io_Isposit)) 
                                                   & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0));
    vlSelf->PvuTop__DOT___GEN_12 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)) 
                                          | (IData)(vlSelf->io_Isposit)));
    vlSelf->PvuTop__DOT___GEN_68 = ((9U == (IData)(vlSelf->io_op)) 
                                    & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0));
    vlSelf->PvuTop__DOT____VdfgTmp_h48f6830c__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                   & (IData)(PvuTop__DOT____VdfgTmp_h4a2a4b59__0));
    vlSelf->__VdfgTmp_h49ee0820__0 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)) 
                                            | (5U == (IData)(vlSelf->io_op))));
    vlSelf->PvuTop__DOT____VdfgTmp_hfc1dda1b__0 = (
                                                   (~ (IData)(vlSelf->io_Isposit)) 
                                                   & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0));
    vlSelf->PvuTop__DOT___GEN_6 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)) 
                                         | (IData)(vlSelf->io_Isposit)));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isInf) 
                 | (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isNaN)));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_1 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isInf) 
                  | (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isNaN)) 
                 >> 1U));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_3 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isInf) 
                  | (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isNaN)) 
                 >> 2U));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_5 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isInf) 
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
    PvuTop__DOT___GEN_35 = ((IData)(PvuTop__DOT____VdfgTmp_h60524ea4__0) 
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
    PvuTop__DOT____VdfgTmp_h592cae14__0 = ((~ (IData)(vlSelf->io_Isposit)) 
                                           & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfe6df398__0));
    PvuTop__DOT____VdfgTmp_h94b45f98__0 = ((~ (IData)(vlSelf->io_Isposit)) 
                                           & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h48f6830c__0));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                 | (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN)));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                  >> 1U) | (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_1)));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4 
        = (1U & (((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                  >> 2U) | (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_3)));
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6 
        = (IData)((((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                    >> 3U) | (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_5)));
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
    vlSelf->PvuTop__DOT___GEN_96 = (1U & ((~ (IData)(PvuTop__DOT___GEN_35)) 
                                          | (IData)(vlSelf->PvuTop__DOT___GEN_94)));
    PvuTop__DOT___GEN_38 = ((IData)(PvuTop__DOT___GEN_35) 
                            | (5U == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT___GEN_36 = ((5U != (IData)(vlSelf->io_op)) 
                                    | (IData)(PvuTop__DOT___GEN_35));
    PvuTop__DOT___GEN_89 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfc1dda1b__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isNaN) 
                               | (IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isNaN)));
    PvuTop__DOT___GEN_90 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha4ea0160__0) 
                            & (((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isNaN) 
                                | (IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isNaN)) 
                               >> 1U));
    PvuTop__DOT___GEN_91 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hf8feb26e__0) 
                            & (((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isNaN) 
                                | (IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isNaN)) 
                               >> 2U));
    PvuTop__DOT___GEN_92 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfcce9a03__0) 
                            & (((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isNaN) 
                                | (IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isNaN)) 
                               >> 3U));
    PvuTop__DOT___GEN_7 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfc1dda1b__0) 
                           & (IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isInf));
    PvuTop__DOT___GEN_13 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha4ea0160__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isInf) 
                               >> 1U));
    PvuTop__DOT___GEN_19 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hf8feb26e__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isInf) 
                               >> 2U));
    PvuTop__DOT___GEN_25 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfcce9a03__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isInf) 
                               >> 3U));
    PvuTop__DOT___GEN_8 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfc1dda1b__0) 
                           & (IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isInf));
    PvuTop__DOT___GEN_14 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha4ea0160__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isInf) 
                               >> 1U));
    PvuTop__DOT___GEN_20 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hf8feb26e__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isInf) 
                               >> 2U));
    PvuTop__DOT___GEN_26 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfcce9a03__0) 
                            & ((IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isInf) 
                               >> 3U));
    vlSelf->PvuTop__DOT____VdfgTmp_hda612c41__0 = (
                                                   (((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero)) 
                                                     & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN) 
                                                        | (IData)(
                                                                  (vlSelf->io_float_i_0 
                                                                   >> 3U)))) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                                                         ? 0U
                                                         : 
                                                        (0x6000000U 
                                                         & ((IData)(vlSelf->io_float_i_0) 
                                                            << 0x19U)))))
                                                    ? 0x80000000U
                                                    : 0U);
    vlSelf->PvuTop__DOT____VdfgTmp_hdafc45ff__0 = (
                                                   (((~ 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                                                       >> 1U)) 
                                                     & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_1) 
                                                        | (IData)(
                                                                  (vlSelf->io_float_i_1 
                                                                   >> 3U)))) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                                                         ? 0U
                                                         : 
                                                        (0x6000000U 
                                                         & ((IData)(vlSelf->io_float_i_1) 
                                                            << 0x19U)))))
                                                    ? 0x80000000U
                                                    : 0U);
    vlSelf->PvuTop__DOT____VdfgTmp_hdb7ad73c__0 = (
                                                   (((~ 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                                                       >> 2U)) 
                                                     & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_3) 
                                                        | (IData)(
                                                                  (vlSelf->io_float_i_2 
                                                                   >> 3U)))) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                                                         ? 0U
                                                         : 
                                                        (0x6000000U 
                                                         & ((IData)(vlSelf->io_float_i_2) 
                                                            << 0x19U)))))
                                                    ? 0x80000000U
                                                    : 0U);
    vlSelf->PvuTop__DOT____VdfgTmp_hd7ed38aa__0 = (
                                                   (((~ 
                                                      ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_5) 
                                                        | (IData)(
                                                                  (vlSelf->io_float_i_3 
                                                                   >> 3U)))) 
                                                    & (0U 
                                                       == 
                                                       ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                                                         ? 0U
                                                         : 
                                                        (0x6000000U 
                                                         & ((IData)(vlSelf->io_float_i_3) 
                                                            << 0x19U)))))
                                                    ? 0x80000000U
                                                    : 0U);
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)) 
           & (IData)(vlSelf->__VdfgTmp_haf7f5c8c__0));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)
            ? 0U : (0x7000000U & ((IData)(vlSelf->io_float_i_0) 
                                  << 0x18U)));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)) 
           & (IData)(__VdfgTmp_he17e1b5c__0));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)) 
           & (IData)(vlSelf->__VdfgTmp_ha54cdad1__0));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)
            ? 0U : (0x7000000U & ((IData)(vlSelf->io_float_i_1) 
                                  << 0x18U)));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)) 
           & (IData)(__VdfgTmp_hd5001709__0));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)) 
           & (IData)(vlSelf->__VdfgTmp_hcbfe9c52__0));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)
            ? 0U : (0x7000000U & ((IData)(vlSelf->io_float_i_2) 
                                  << 0x18U)));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)) 
           & (IData)(__VdfgTmp_hf52b612b__0));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)) 
           & (IData)(vlSelf->__VdfgTmp_h18d17475__0));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)
            ? 0U : (0x7000000U & ((IData)(vlSelf->io_float_i_3) 
                                  << 0x18U)));
    PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)) 
           & (IData)(__VdfgTmp_hec5fca5a__0));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)) 
           & (IData)(vlSelf->__VdfgTmp_hcb4a60e4__0));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)
            ? 0U : (0x7fe0000U & ((IData)(vlSelf->io_float_i_0) 
                                  << 0x11U)));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c349387__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)) 
           & (IData)(__VdfgTmp_h47dd10e4__0));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)) 
           & (IData)(vlSelf->__VdfgTmp_hebcb5633__0));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)
            ? 0U : (0x7fe0000U & ((IData)(vlSelf->io_float_i_1) 
                                  << 0x11U)));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c547640__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)) 
           & (IData)(__VdfgTmp_h5ae47e0d__0));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)) 
           & (IData)(vlSelf->__VdfgTmp_hfd1b85c0__0));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)
            ? 0U : (0x7fe0000U & ((IData)(vlSelf->io_float_i_2) 
                                  << 0x11U)));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1c07425a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)) 
           & (IData)(__VdfgTmp_hbb0fca81__0));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)) 
           & (IData)(vlSelf->__VdfgTmp_h36dad77c__0));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0 
        = ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)
            ? 0U : (0x7fe0000U & ((IData)(vlSelf->io_float_i_3) 
                                  << 0x11U)));
    PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h1ce7231a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)) 
           & (IData)(__VdfgTmp_heea12cbb__0));
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)) 
           & (IData)(vlSelf->__VdfgTmp_h4303f8d5__0));
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
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)) 
           & (IData)(vlSelf->__VdfgTmp_h4fd42478__0));
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
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)) 
           & (IData)(vlSelf->__VdfgTmp_hdbd751b3__0));
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
    PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)) 
           & (IData)(vlSelf->__VdfgTmp_h1abfe04b__0));
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
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0)) 
           & (vlSelf->__VdfgTmp_h0416f4a1__0 >> 0x1bU));
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
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2)) 
           & (vlSelf->__VdfgTmp_h49c93cb3__0 >> 0x1bU));
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
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4)) 
           & (vlSelf->__VdfgTmp_h3d13dd16__0 >> 0x1bU));
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
    PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6)) 
           & (vlSelf->__VdfgTmp_hfd79a1bb__0 >> 0x1bU));
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
    vlSelf->PvuTop__DOT____VdfgTmp_h98a4b7ad__0 = (
                                                   (~ (IData)(PvuTop__DOT___GEN_38)) 
                                                   & (6U 
                                                      == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT___GEN_51 = ((IData)(PvuTop__DOT___GEN_38) 
                                    | (6U == (IData)(vlSelf->io_op)));
    vlSelf->PvuTop__DOT___GEN_39 = ((6U != (IData)(vlSelf->io_op)) 
                                    | (IData)(PvuTop__DOT___GEN_38));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13a8a89__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_h94b45f98__0) 
           & (IData)(PvuTop__DOT___GEN_89));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13edb1c__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_h592cae14__0) 
           & (IData)(PvuTop__DOT___GEN_90));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f6aa23__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_h882ee63f__0) 
           & (IData)(PvuTop__DOT___GEN_91));
    vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isNaN 
        = ((IData)(PvuTop__DOT___GEN_93) & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                             & (IData)(PvuTop__DOT___GEN_92)) 
                                            | (((2U 
                                                 < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                & (IData)(PvuTop__DOT___GEN_91)) 
                                               | (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                   & (IData)(PvuTop__DOT___GEN_90)) 
                                                  | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                     & (IData)(PvuTop__DOT___GEN_89))))));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f17ab6__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_hfa146d96__0) 
           & (IData)(PvuTop__DOT___GEN_92));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_h94b45f98__0) 
           & ((IData)(PvuTop__DOT___GEN_7) | (IData)(PvuTop__DOT___GEN_8)));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_h592cae14__0) 
           & ((IData)(PvuTop__DOT___GEN_13) | (IData)(PvuTop__DOT___GEN_14)));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_h882ee63f__0) 
           & ((IData)(PvuTop__DOT___GEN_19) | (IData)(PvuTop__DOT___GEN_20)));
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0 
        = ((IData)(PvuTop__DOT____VdfgTmp_hfa146d96__0) 
           & ((IData)(PvuTop__DOT___GEN_25) | (IData)(PvuTop__DOT___GEN_26)));
    vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isInf 
        = ((IData)(PvuTop__DOT___GEN_93) & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                             & (((~ 
                                                  ((IData)(vlSelf->PvuTop__DOT___GEN_24) 
                                                   | ((IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isZero) 
                                                      >> 3U))) 
                                                 & (IData)(PvuTop__DOT___GEN_25)) 
                                                | ((~ 
                                                    ((IData)(vlSelf->PvuTop__DOT___GEN_24) 
                                                     | ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isZero) 
                                                        >> 3U))) 
                                                   & (IData)(PvuTop__DOT___GEN_26)))) 
                                            | (((2U 
                                                 < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                & (((~ 
                                                     ((IData)(vlSelf->PvuTop__DOT___GEN_18) 
                                                      | ((IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isZero) 
                                                         >> 2U))) 
                                                    & (IData)(PvuTop__DOT___GEN_19)) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->PvuTop__DOT___GEN_18) 
                                                        | ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isZero) 
                                                           >> 2U))) 
                                                      & (IData)(PvuTop__DOT___GEN_20)))) 
                                               | (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                   & (((~ 
                                                        ((IData)(vlSelf->PvuTop__DOT___GEN_12) 
                                                         | ((IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isZero) 
                                                            >> 1U))) 
                                                       & (IData)(PvuTop__DOT___GEN_13)) 
                                                      | ((~ 
                                                          ((IData)(vlSelf->PvuTop__DOT___GEN_12) 
                                                           | ((IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isZero) 
                                                              >> 1U))) 
                                                         & (IData)(PvuTop__DOT___GEN_14)))) 
                                                  | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                     & (((~ 
                                                          ((IData)(vlSelf->PvuTop__DOT___GEN_6) 
                                                           | (IData)(vlSelf->PvuTop__DOT___floatDecode2_io_isZero))) 
                                                         & (IData)(PvuTop__DOT___GEN_7)) 
                                                        | ((~ 
                                                            ((IData)(vlSelf->PvuTop__DOT___GEN_6) 
                                                             | (IData)(vlSelf->PvuTop__DOT___floatDecode1_io_isZero))) 
                                                           & (IData)(PvuTop__DOT___GEN_8))))))));
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
    vlSelf->PvuTop__DOT___GEN_81 = ((IData)(vlSelf->PvuTop__DOT___GEN_51) 
                                    | ((7U == (IData)(vlSelf->io_op)) 
                                       | ((8U == (IData)(vlSelf->io_op)) 
                                          | (9U == (IData)(vlSelf->io_op)))));
    vlSelf->PvuTop__DOT___GEN_101 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_51));
    vlSelf->PvuTop__DOT___GEN_102 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_51));
    vlSelf->PvuTop__DOT___GEN_103 = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_51));
    vlSelf->PvuTop__DOT___GEN_104 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                     | (IData)(vlSelf->PvuTop__DOT___GEN_51));
    vlSelf->PvuTop__DOT___GEN_52 = ((IData)(vlSelf->PvuTop__DOT___GEN_51) 
                                    | (IData)(vlSelf->PvuTop__DOT___GEN_50));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_0_T))))
                                                       : PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_0_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_1_T))))
                                                       : PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_1_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_2_T))))
                                                       : PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_2_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_3_T))))
                                                       : PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___value_after_round_3_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_0_T))))
                                                       : PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_0_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_1_T))))
                                                       : PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_1_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_2_T))))
                                                       : PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_2_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_3_T))))
                                                       : PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___value_after_round_3_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_0_T))))
                                                       : PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_0_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_1_T))))
                                                       : PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_1_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_2_T))))
                                                       : PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_2_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_3_T))))
                                                       : PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___value_after_round_3_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h91c3a767__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962bc56e__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_0_T))))
                                                       : PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_0_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h962fac1b__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96fafde4__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_1_T))))
                                                       : PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_1_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h96e1f5ff__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9343d2f5__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_2_T))))
                                                       : PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_2_T)
                                                      : 0U)));
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
                                                        & ((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0) 
                                                           & (0U 
                                                              == PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h9347f0fa__0))))
                                                     ? 0x40000000U
                                                     : 
                                                    ((IData)(PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h930d41a5__0)
                                                      ? 
                                                     ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h878add96__0)
                                                       ? 
                                                      (0x80000000U 
                                                       | (0x7fffffffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_3_T))))
                                                       : PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___value_after_round_3_T)
                                                      : 0U)));
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
    if (vlSelf->PvuTop__DOT___GEN_41) {
        __Vtemp_h1a5da261__0[0U] = vlSelf->PvuTop__DOT____VdfgTmp_hda612c41__0;
        __Vtemp_h1a5da261__0[1U] = vlSelf->PvuTop__DOT____VdfgTmp_hc7defc58__0;
        __Vtemp_h1a5da261__0[2U] = vlSelf->PvuTop__DOT____VdfgTmp_hd2aca441__0;
        __Vtemp_h1a5da261__0[3U] = vlSelf->PvuTop__DOT____VdfgTmp_h66bfb906__0;
        __Vtemp_h1a5da261__0[4U] = vlSelf->PvuTop__DOT____VdfgTmp_h8172b135__0;
        __Vtemp_h4e191511__0[0U] = vlSelf->PvuTop__DOT____VdfgTmp_hdafc45ff__0;
        __Vtemp_h4e191511__0[1U] = vlSelf->PvuTop__DOT____VdfgTmp_hc45095f6__0;
        __Vtemp_h4e191511__0[2U] = vlSelf->PvuTop__DOT____VdfgTmp_hd322ddff__0;
        __Vtemp_h4e191511__0[3U] = vlSelf->PvuTop__DOT____VdfgTmp_h6731d6b0__0;
        __Vtemp_h4e191511__0[4U] = vlSelf->PvuTop__DOT____VdfgTmp_h81ccee83__0;
        __Vtemp_h855a228d__0[0U] = vlSelf->PvuTop__DOT____VdfgTmp_hdb7ad73c__0;
        __Vtemp_h855a228d__0[1U] = vlSelf->PvuTop__DOT____VdfgTmp_hc4af0733__0;
        __Vtemp_h855a228d__0[2U] = vlSelf->PvuTop__DOT____VdfgTmp_hd3bd5f3c__0;
        __Vtemp_h855a228d__0[3U] = vlSelf->PvuTop__DOT____VdfgTmp_h67b04079__0;
        __Vtemp_h855a228d__0[4U] = vlSelf->PvuTop__DOT____VdfgTmp_h864b4868__0;
        __Vtemp_h1d6d2f75__0[0U] = vlSelf->PvuTop__DOT____VdfgTmp_hd7ed38aa__0;
        __Vtemp_h1d6d2f75__0[1U] = vlSelf->PvuTop__DOT____VdfgTmp_hc159885d__0;
        __Vtemp_h1d6d2f75__0[2U] = vlSelf->PvuTop__DOT____VdfgTmp_hec2bc0aa__0;
        __Vtemp_h1d6d2f75__0[3U] = vlSelf->PvuTop__DOT____VdfgTmp_h6036cde7__0;
        __Vtemp_h1d6d2f75__0[4U] = vlSelf->PvuTop__DOT____VdfgTmp_h82fdd5f6__0;
    } else if ((0x1fU >= (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))) {
        __Vtemp_h1a5da261__0[0U] = (PvuTop__DOT____VdfgTmp_hce16df71__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h1a5da261__0[1U] = (PvuTop__DOT____VdfgTmp_hb4870dfb__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h1a5da261__0[2U] = (PvuTop__DOT____VdfgTmp_hddbbb971__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h1a5da261__0[3U] = (PvuTop__DOT____VdfgTmp_h96ce9dc5__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h1a5da261__0[4U] = (PvuTop__DOT____VdfgTmp_h40a2cba0__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h4e191511__0[0U] = (PvuTop__DOT____VdfgTmp_h2707afdc__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h4e191511__0[1U] = (PvuTop__DOT____VdfgTmp_h6a403491__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h4e191511__0[2U] = (PvuTop__DOT____VdfgTmp_h3b6e9ddc__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h4e191511__0[3U] = (PvuTop__DOT____VdfgTmp_h8ba9a789__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h4e191511__0[4U] = (PvuTop__DOT____VdfgTmp_h78ae3f63__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h855a228d__0[0U] = (PvuTop__DOT____VdfgTmp_h0432f868__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h855a228d__0[1U] = (PvuTop__DOT____VdfgTmp_h4245c9a7__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h855a228d__0[2U] = (PvuTop__DOT____VdfgTmp_h610e8268__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h855a228d__0[3U] = (PvuTop__DOT____VdfgTmp_hefd4ca7b__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h855a228d__0[4U] = (PvuTop__DOT____VdfgTmp_h9b6b58ef__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h1d6d2f75__0[0U] = (PvuTop__DOT____VdfgTmp_h6a62818e__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h1d6d2f75__0[1U] = (PvuTop__DOT____VdfgTmp_h2b4b6eb6__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h1d6d2f75__0[2U] = (PvuTop__DOT____VdfgTmp_h2cd1ef8e__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h1d6d2f75__0[3U] = (PvuTop__DOT____VdfgTmp_hc4a05ece__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
        __Vtemp_h1d6d2f75__0[4U] = (PvuTop__DOT____VdfgTmp_h95914491__0 
                                    << (0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))));
    } else {
        __Vtemp_h1a5da261__0[0U] = 0U;
        __Vtemp_h1a5da261__0[1U] = 0U;
        __Vtemp_h1a5da261__0[2U] = 0U;
        __Vtemp_h1a5da261__0[3U] = 0U;
        __Vtemp_h1a5da261__0[4U] = 0U;
        __Vtemp_h4e191511__0[0U] = 0U;
        __Vtemp_h4e191511__0[1U] = 0U;
        __Vtemp_h4e191511__0[2U] = 0U;
        __Vtemp_h4e191511__0[3U] = 0U;
        __Vtemp_h4e191511__0[4U] = 0U;
        __Vtemp_h855a228d__0[0U] = 0U;
        __Vtemp_h855a228d__0[1U] = 0U;
        __Vtemp_h855a228d__0[2U] = 0U;
        __Vtemp_h855a228d__0[3U] = 0U;
        __Vtemp_h855a228d__0[4U] = 0U;
        __Vtemp_h1d6d2f75__0[0U] = 0U;
        __Vtemp_h1d6d2f75__0[1U] = 0U;
        __Vtemp_h1d6d2f75__0[2U] = 0U;
        __Vtemp_h1d6d2f75__0[3U] = 0U;
        __Vtemp_h1d6d2f75__0[4U] = 0U;
    }
    __Vtemp_h1a5da261__0[5U] = 0U;
    __Vtemp_h1a5da261__0[6U] = 0U;
    __Vtemp_h1a5da261__0[7U] = 0U;
    __Vtemp_h4e191511__0[5U] = 0U;
    __Vtemp_h4e191511__0[6U] = 0U;
    __Vtemp_h4e191511__0[7U] = 0U;
    __Vtemp_h855a228d__0[5U] = 0U;
    __Vtemp_h855a228d__0[6U] = 0U;
    __Vtemp_h855a228d__0[7U] = 0U;
    __Vtemp_h1d6d2f75__0[5U] = 0U;
    __Vtemp_h1d6d2f75__0[6U] = 0U;
    __Vtemp_h1d6d2f75__0[7U] = 0U;
    if (vlSelf->io_float_posit) {
        vlSelf->PvuTop__DOT___GEN_57 = (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->io_float_mode) 
                                                    << 5U)))
                                          ? 0U : (__Vtemp_h1a5da261__0[
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
                                        | (__Vtemp_h1a5da261__0[
                                           (7U & (IData)(vlSelf->io_float_mode))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->io_float_mode) 
                                                  << 5U))));
        vlSelf->PvuTop__DOT___GEN_58 = (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->io_float_mode) 
                                                    << 5U)))
                                          ? 0U : (__Vtemp_h4e191511__0[
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
                                        | (__Vtemp_h4e191511__0[
                                           (7U & (IData)(vlSelf->io_float_mode))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->io_float_mode) 
                                                  << 5U))));
        vlSelf->PvuTop__DOT___GEN_59 = (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->io_float_mode) 
                                                    << 5U)))
                                          ? 0U : (__Vtemp_h855a228d__0[
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
                                        | (__Vtemp_h855a228d__0[
                                           (7U & (IData)(vlSelf->io_float_mode))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->io_float_mode) 
                                                  << 5U))));
        vlSelf->PvuTop__DOT___GEN_60 = (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->io_float_mode) 
                                                    << 5U)))
                                          ? 0U : (__Vtemp_h1d6d2f75__0[
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
                                        | (__Vtemp_h1d6d2f75__0[
                                           (7U & (IData)(vlSelf->io_float_mode))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->io_float_mode) 
                                                  << 5U))));
    } else {
        vlSelf->PvuTop__DOT___GEN_57 = 0U;
        vlSelf->PvuTop__DOT___GEN_58 = 0U;
        vlSelf->PvuTop__DOT___GEN_59 = 0U;
        vlSelf->PvuTop__DOT___GEN_60 = 0U;
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
        VL_DBG_MSGF("         'ico' region trigger index 6 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(7U)) {
        VL_DBG_MSGF("         'ico' region trigger index 7 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(8U)) {
        VL_DBG_MSGF("         'ico' region trigger index 8 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(9U)) {
        VL_DBG_MSGF("         'ico' region trigger index 9 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'ico' region trigger index 10 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'ico' region trigger index 11 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'ico' region trigger index 12 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'ico' region trigger index 13 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'ico' region trigger index 14 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'ico' region trigger index 15 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'ico' region trigger index 16 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'ico' region trigger index 17 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'ico' region trigger index 18 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'ico' region trigger index 19 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'ico' region trigger index 20 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'ico' region trigger index 21 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'ico' region trigger index 22 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'ico' region trigger index 23 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'ico' region trigger index 24 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'ico' region trigger index 25 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 26 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 27 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 28 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 29 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 30 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 31 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'ico' region trigger index 32 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x21U)) {
        VL_DBG_MSGF("         'ico' region trigger index 33 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x22U)) {
        VL_DBG_MSGF("         'ico' region trigger index 34 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x23U)) {
        VL_DBG_MSGF("         'ico' region trigger index 35 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x24U)) {
        VL_DBG_MSGF("         'ico' region trigger index 36 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x25U)) {
        VL_DBG_MSGF("         'ico' region trigger index 37 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x26U)) {
        VL_DBG_MSGF("         'ico' region trigger index 38 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x27U)) {
        VL_DBG_MSGF("         'ico' region trigger index 39 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x28U)) {
        VL_DBG_MSGF("         'ico' region trigger index 40 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x29U)) {
        VL_DBG_MSGF("         'ico' region trigger index 41 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x2aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 42 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x2bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 43 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x2cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 44 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x2dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 45 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x2eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 46 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x2fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 47 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x30U)) {
        VL_DBG_MSGF("         'ico' region trigger index 48 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x31U)) {
        VL_DBG_MSGF("         'ico' region trigger index 49 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x32U)) {
        VL_DBG_MSGF("         'ico' region trigger index 50 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x33U)) {
        VL_DBG_MSGF("         'ico' region trigger index 51 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x34U)) {
        VL_DBG_MSGF("         'ico' region trigger index 52 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x35U)) {
        VL_DBG_MSGF("         'ico' region trigger index 53 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x36U)) {
        VL_DBG_MSGF("         'ico' region trigger index 54 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x37U)) {
        VL_DBG_MSGF("         'ico' region trigger index 55 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x38U)) {
        VL_DBG_MSGF("         'ico' region trigger index 56 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x39U)) {
        VL_DBG_MSGF("         'ico' region trigger index 57 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x3aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 58 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x3bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 59 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x3cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 60 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x3dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 61 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x3eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 62 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x3fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 63 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x40U)) {
        VL_DBG_MSGF("         'ico' region trigger index 64 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x41U)) {
        VL_DBG_MSGF("         'ico' region trigger index 65 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x42U)) {
        VL_DBG_MSGF("         'ico' region trigger index 66 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x43U)) {
        VL_DBG_MSGF("         'ico' region trigger index 67 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x44U)) {
        VL_DBG_MSGF("         'ico' region trigger index 68 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x45U)) {
        VL_DBG_MSGF("         'ico' region trigger index 69 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x46U)) {
        VL_DBG_MSGF("         'ico' region trigger index 70 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x47U)) {
        VL_DBG_MSGF("         'ico' region trigger index 71 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x48U)) {
        VL_DBG_MSGF("         'ico' region trigger index 72 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x49U)) {
        VL_DBG_MSGF("         'ico' region trigger index 73 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x4aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 74 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x4bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 75 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x4cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 76 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x4dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 77 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x4eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 78 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x4fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 79 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x50U)) {
        VL_DBG_MSGF("         'ico' region trigger index 80 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x51U)) {
        VL_DBG_MSGF("         'ico' region trigger index 81 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x52U)) {
        VL_DBG_MSGF("         'ico' region trigger index 82 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x53U)) {
        VL_DBG_MSGF("         'ico' region trigger index 83 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x54U)) {
        VL_DBG_MSGF("         'ico' region trigger index 84 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x55U)) {
        VL_DBG_MSGF("         'ico' region trigger index 85 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x56U)) {
        VL_DBG_MSGF("         'ico' region trigger index 86 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x57U)) {
        VL_DBG_MSGF("         'ico' region trigger index 87 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x58U)) {
        VL_DBG_MSGF("         'ico' region trigger index 88 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x59U)) {
        VL_DBG_MSGF("         'ico' region trigger index 89 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x5aU)) {
        VL_DBG_MSGF("         'ico' region trigger index 90 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x5bU)) {
        VL_DBG_MSGF("         'ico' region trigger index 91 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x5cU)) {
        VL_DBG_MSGF("         'ico' region trigger index 92 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x5dU)) {
        VL_DBG_MSGF("         'ico' region trigger index 93 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x5eU)) {
        VL_DBG_MSGF("         'ico' region trigger index 94 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x5fU)) {
        VL_DBG_MSGF("         'ico' region trigger index 95 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x60U)) {
        VL_DBG_MSGF("         'ico' region trigger index 96 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x61U)) {
        VL_DBG_MSGF("         'ico' region trigger index 97 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x62U)) {
        VL_DBG_MSGF("         'ico' region trigger index 98 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x63U)) {
        VL_DBG_MSGF("         'ico' region trigger index 99 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x64U)) {
        VL_DBG_MSGF("         'ico' region trigger index 100 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x65U)) {
        VL_DBG_MSGF("         'ico' region trigger index 101 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x66U)) {
        VL_DBG_MSGF("         'ico' region trigger index 102 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x67U)) {
        VL_DBG_MSGF("         'ico' region trigger index 103 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
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
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x21U)) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x22U)) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x23U)) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x24U)) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x25U)) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x26U)) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x27U)) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x28U)) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x29U)) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2aU)) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2bU)) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2cU)) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2dU)) {
        VL_DBG_MSGF("         'act' region trigger index 45 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2eU)) {
        VL_DBG_MSGF("         'act' region trigger index 46 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2fU)) {
        VL_DBG_MSGF("         'act' region trigger index 47 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x30U)) {
        VL_DBG_MSGF("         'act' region trigger index 48 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x31U)) {
        VL_DBG_MSGF("         'act' region trigger index 49 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x32U)) {
        VL_DBG_MSGF("         'act' region trigger index 50 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x33U)) {
        VL_DBG_MSGF("         'act' region trigger index 51 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x34U)) {
        VL_DBG_MSGF("         'act' region trigger index 52 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x35U)) {
        VL_DBG_MSGF("         'act' region trigger index 53 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x36U)) {
        VL_DBG_MSGF("         'act' region trigger index 54 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x37U)) {
        VL_DBG_MSGF("         'act' region trigger index 55 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x38U)) {
        VL_DBG_MSGF("         'act' region trigger index 56 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x39U)) {
        VL_DBG_MSGF("         'act' region trigger index 57 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x3aU)) {
        VL_DBG_MSGF("         'act' region trigger index 58 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x3bU)) {
        VL_DBG_MSGF("         'act' region trigger index 59 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x3cU)) {
        VL_DBG_MSGF("         'act' region trigger index 60 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x3dU)) {
        VL_DBG_MSGF("         'act' region trigger index 61 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x3eU)) {
        VL_DBG_MSGF("         'act' region trigger index 62 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x3fU)) {
        VL_DBG_MSGF("         'act' region trigger index 63 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x40U)) {
        VL_DBG_MSGF("         'act' region trigger index 64 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x41U)) {
        VL_DBG_MSGF("         'act' region trigger index 65 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x42U)) {
        VL_DBG_MSGF("         'act' region trigger index 66 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x43U)) {
        VL_DBG_MSGF("         'act' region trigger index 67 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x44U)) {
        VL_DBG_MSGF("         'act' region trigger index 68 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x45U)) {
        VL_DBG_MSGF("         'act' region trigger index 69 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x46U)) {
        VL_DBG_MSGF("         'act' region trigger index 70 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x47U)) {
        VL_DBG_MSGF("         'act' region trigger index 71 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x48U)) {
        VL_DBG_MSGF("         'act' region trigger index 72 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x49U)) {
        VL_DBG_MSGF("         'act' region trigger index 73 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x4aU)) {
        VL_DBG_MSGF("         'act' region trigger index 74 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x4bU)) {
        VL_DBG_MSGF("         'act' region trigger index 75 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x4cU)) {
        VL_DBG_MSGF("         'act' region trigger index 76 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x4dU)) {
        VL_DBG_MSGF("         'act' region trigger index 77 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x4eU)) {
        VL_DBG_MSGF("         'act' region trigger index 78 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x4fU)) {
        VL_DBG_MSGF("         'act' region trigger index 79 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x50U)) {
        VL_DBG_MSGF("         'act' region trigger index 80 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x51U)) {
        VL_DBG_MSGF("         'act' region trigger index 81 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x52U)) {
        VL_DBG_MSGF("         'act' region trigger index 82 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x53U)) {
        VL_DBG_MSGF("         'act' region trigger index 83 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x54U)) {
        VL_DBG_MSGF("         'act' region trigger index 84 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x55U)) {
        VL_DBG_MSGF("         'act' region trigger index 85 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x56U)) {
        VL_DBG_MSGF("         'act' region trigger index 86 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x57U)) {
        VL_DBG_MSGF("         'act' region trigger index 87 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x58U)) {
        VL_DBG_MSGF("         'act' region trigger index 88 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x59U)) {
        VL_DBG_MSGF("         'act' region trigger index 89 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x5aU)) {
        VL_DBG_MSGF("         'act' region trigger index 90 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x5bU)) {
        VL_DBG_MSGF("         'act' region trigger index 91 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x5cU)) {
        VL_DBG_MSGF("         'act' region trigger index 92 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x5dU)) {
        VL_DBG_MSGF("         'act' region trigger index 93 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x5eU)) {
        VL_DBG_MSGF("         'act' region trigger index 94 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x5fU)) {
        VL_DBG_MSGF("         'act' region trigger index 95 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x60U)) {
        VL_DBG_MSGF("         'act' region trigger index 96 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x61U)) {
        VL_DBG_MSGF("         'act' region trigger index 97 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x62U)) {
        VL_DBG_MSGF("         'act' region trigger index 98 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x63U)) {
        VL_DBG_MSGF("         'act' region trigger index 99 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x64U)) {
        VL_DBG_MSGF("         'act' region trigger index 100 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x65U)) {
        VL_DBG_MSGF("         'act' region trigger index 101 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x66U)) {
        VL_DBG_MSGF("         'act' region trigger index 102 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(0x67U)) {
        VL_DBG_MSGF("         'act' region trigger index 103 is active: @(posedge clock)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] PvuTop.frac_norm_add.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([hybrid] PvuTop.frac_norm_sub.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([hybrid] PvuTop.dot_decoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x21U)) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x22U)) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @([hybrid] PvuTop.frac_norm_mul.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x23U)) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes or [hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x24U)) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @([hybrid] PvuTop.frac_norm_div.lzcMod_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x25U)) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x26U)) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x27U)) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x28U)) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @([hybrid] PvuTop.decode1.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x29U)) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @([hybrid] PvuTop.decode1.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 45 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 46 is active: @([hybrid] PvuTop.decode1.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 47 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x30U)) {
        VL_DBG_MSGF("         'nba' region trigger index 48 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x31U)) {
        VL_DBG_MSGF("         'nba' region trigger index 49 is active: @([hybrid] PvuTop.decode1.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x32U)) {
        VL_DBG_MSGF("         'nba' region trigger index 50 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x33U)) {
        VL_DBG_MSGF("         'nba' region trigger index 51 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x34U)) {
        VL_DBG_MSGF("         'nba' region trigger index 52 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x35U)) {
        VL_DBG_MSGF("         'nba' region trigger index 53 is active: @([hybrid] PvuTop.decode2.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x36U)) {
        VL_DBG_MSGF("         'nba' region trigger index 54 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x37U)) {
        VL_DBG_MSGF("         'nba' region trigger index 55 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x38U)) {
        VL_DBG_MSGF("         'nba' region trigger index 56 is active: @([hybrid] PvuTop.decode2.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x39U)) {
        VL_DBG_MSGF("         'nba' region trigger index 57 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 58 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 59 is active: @([hybrid] PvuTop.decode2.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 60 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 61 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 62 is active: @([hybrid] PvuTop.decode2.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 63 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x40U)) {
        VL_DBG_MSGF("         'nba' region trigger index 64 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x41U)) {
        VL_DBG_MSGF("         'nba' region trigger index 65 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x42U)) {
        VL_DBG_MSGF("         'nba' region trigger index 66 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x43U)) {
        VL_DBG_MSGF("         'nba' region trigger index 67 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x44U)) {
        VL_DBG_MSGF("         'nba' region trigger index 68 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x45U)) {
        VL_DBG_MSGF("         'nba' region trigger index 69 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x46U)) {
        VL_DBG_MSGF("         'nba' region trigger index 70 is active: @([hybrid] PvuTop.posit2float_fp4.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x47U)) {
        VL_DBG_MSGF("         'nba' region trigger index 71 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x48U)) {
        VL_DBG_MSGF("         'nba' region trigger index 72 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x49U)) {
        VL_DBG_MSGF("         'nba' region trigger index 73 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 74 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 75 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 76 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 77 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 78 is active: @([hybrid] PvuTop.posit2float_fp8.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 79 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x50U)) {
        VL_DBG_MSGF("         'nba' region trigger index 80 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x51U)) {
        VL_DBG_MSGF("         'nba' region trigger index 81 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x52U)) {
        VL_DBG_MSGF("         'nba' region trigger index 82 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x53U)) {
        VL_DBG_MSGF("         'nba' region trigger index 83 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x54U)) {
        VL_DBG_MSGF("         'nba' region trigger index 84 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x55U)) {
        VL_DBG_MSGF("         'nba' region trigger index 85 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x56U)) {
        VL_DBG_MSGF("         'nba' region trigger index 86 is active: @([hybrid] PvuTop.posit2float_fp16.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x57U)) {
        VL_DBG_MSGF("         'nba' region trigger index 87 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x58U)) {
        VL_DBG_MSGF("         'nba' region trigger index 88 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x59U)) {
        VL_DBG_MSGF("         'nba' region trigger index 89 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 90 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 91 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 92 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 93 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 94 is active: @([hybrid] PvuTop.posit2float_fp32.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 95 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x60U)) {
        VL_DBG_MSGF("         'nba' region trigger index 96 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x61U)) {
        VL_DBG_MSGF("         'nba' region trigger index 97 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x62U)) {
        VL_DBG_MSGF("         'nba' region trigger index 98 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_1.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x63U)) {
        VL_DBG_MSGF("         'nba' region trigger index 99 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x64U)) {
        VL_DBG_MSGF("         'nba' region trigger index 100 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_2.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x65U)) {
        VL_DBG_MSGF("         'nba' region trigger index 101 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes or [hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x66U)) {
        VL_DBG_MSGF("         'nba' region trigger index 102 is active: @([hybrid] PvuTop.posit2float_fp64.positDecoder.lzcModule_3.gen_lzc.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x67U)) {
        VL_DBG_MSGF("         'nba' region trigger index 103 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPvuTop___024root___ctor_var_reset(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_posit_i1_0 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i1_1 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i1_2 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i1_3 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i2_0 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i2_1 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i2_2 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_i2_3 = VL_RAND_RESET_I(32);
    vlSelf->io_op = VL_RAND_RESET_I(4);
    vlSelf->io_Isposit = VL_RAND_RESET_I(1);
    vlSelf->io_Outposit = VL_RAND_RESET_I(1);
    vlSelf->io_float_i_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i2_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i2_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i2_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_i2_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_mode = VL_RAND_RESET_I(3);
    vlSelf->io_float_posit = VL_RAND_RESET_I(1);
    vlSelf->io_src_posit_width = VL_RAND_RESET_I(6);
    vlSelf->io_vector_size = VL_RAND_RESET_I(3);
    vlSelf->io_dst_posit_width = VL_RAND_RESET_I(6);
    vlSelf->io_float_o_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_o_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_float_dot_o = VL_RAND_RESET_Q(64);
    vlSelf->io_posit_o_0 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_1 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_2 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_o_3 = VL_RAND_RESET_I(32);
    vlSelf->io_posit_dot_o = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_0 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_1 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_2 = VL_RAND_RESET_I(32);
    vlSelf->io_int_o_3 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___convert_io_pir_sign_o = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT___floatDecode2_io_isNaN = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT___floatDecode2_io_isInf = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT___floatDecode2_io_isZero = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT___floatDecode1_io_isNaN = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT___floatDecode1_io_isInf = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT___floatDecode1_io_isZero = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE = VL_RAND_RESET_I(3);
    vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH = VL_RAND_RESET_I(6);
    vlSelf->PvuTop__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_39 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_41 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_50 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_51 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_52 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_53 = VL_RAND_RESET_Q(64);
    vlSelf->PvuTop__DOT___GEN_54 = VL_RAND_RESET_Q(64);
    vlSelf->PvuTop__DOT___GEN_55 = VL_RAND_RESET_Q(64);
    vlSelf->PvuTop__DOT___GEN_56 = VL_RAND_RESET_Q(64);
    vlSelf->PvuTop__DOT___GEN_57 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___GEN_58 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___GEN_59 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___GEN_60 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___GEN_63 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_64 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_65 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_66 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_67 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_68 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_69 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___GEN_70 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___GEN_71 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_72 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___GEN_73 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___GEN_74 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_75 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___GEN_76 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___GEN_77 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_78 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___GEN_79 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT___GEN_81 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__pir_frac_normed_dot = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT___GEN_87 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_88 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT___GEN_94 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_95 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT___GEN_96 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_97 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT___GEN_98 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT___GEN_99 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT___GEN_101 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_102 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_103 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_104 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_105 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_106 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT___GEN_112 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->PvuTop__DOT____Vcellinp__decode1__io_posit);
    VL_RAND_RESET_W(128, vlSelf->PvuTop__DOT____Vcellinp__decode2__io_posit);
    vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp2_i = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i = VL_RAND_RESET_Q(59);
    vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT____Vcellout__dot_encoder__io_posit = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isZero = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isInf = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isNaN = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT____VdfgTmp_hd471070e__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h12086d12__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h3d760f20__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h098a558a__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h418052cc__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_he55579d4__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h9ede8a21__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h461f427a__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h8628893a__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h9f50fb9f__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h4699d5bf__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hbd281acc__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h9faf7d5c__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h430c3929__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h5909e0af__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h9859deca__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hfc1dda1b__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h0b0f880c__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_ha4ea0160__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h4a52317c__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hf8feb26e__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hf3890887__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hfcce9a03__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h1b581970__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h8172b135__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h66bfb906__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hd2aca441__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hc7defc58__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hda612c41__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h81ccee83__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h6731d6b0__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hd322ddff__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hc45095f6__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hdafc45ff__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h864b4868__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h67b04079__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hd3bd5f3c__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hc4af0733__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hdb7ad73c__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h82fdd5f6__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h6036cde7__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hec2bc0aa__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hc159885d__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hd7ed38aa__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hb66c10f5__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hb6e28043__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hb77deba8__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hb3e87736__0 = 0;
    VL_ZERO_RESET_W(68, vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0);
    VL_ZERO_RESET_W(68, vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0);
    VL_ZERO_RESET_W(68, vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0);
    VL_ZERO_RESET_W(68, vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0);
    vlSelf->PvuTop__DOT____VdfgTmp_h41d5b416__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h98a4b7ad__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h9b56b116__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h4d703b6d__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_hfe6df398__0 = 0;
    vlSelf->PvuTop__DOT____VdfgTmp_h48f6830c__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a383c23__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a383c23__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h898ddcf9__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8933512e__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h88bc2594__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0 = 0;
    vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT__sum = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT__sum_1 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT__sum_2 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT__sum_3 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_he2d6c4d8__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h4e8a04cd__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h7d9bb2b0__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h64b1905c__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h3a630f85__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0b529d0d__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h39ddc1a5__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0e8cac5d__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h39412272__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0e3057ea__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h38f0a4f9__0 = 0;
    vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h09a65a41__0 = 0;
    vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_0_T_1 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_1_T_1 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_2_T_1 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__fracalign_1__DOT___io_pir_max_exp_3_T_1 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_he277ccc5__0 = 0;
    vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h93d9b867__0 = 0;
    vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_hab574a14__0 = 0;
    vlSelf->PvuTop__DOT__sub__DOT____VdfgTmp_h957bba59__0 = 0;
    vlSelf->PvuTop__DOT__div_inst__DOT___exp_diff_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__div_inst__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__div_inst__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_1 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_2 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_3 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_4 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_5 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_6 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_7 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_8 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_9 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_10 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_11 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_12 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_13 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_14 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_15 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_16 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_17 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_18 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_19 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_20 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_21 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_22 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_23 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_24 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_25 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_26 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_27 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_28 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_29 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_30 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_31 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_32 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_33 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_34 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_35 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_36 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_37 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_38 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_39 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_40 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_41 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_42 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_43 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_44 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_45 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_46 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_47 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_48 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_49 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_50 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_51 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_52 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(117, vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T);
    vlSelf->PvuTop__DOT__div_inst__DOT___exp_diff_T_2 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_55 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_56 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_57 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_58 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_59 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_60 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_61 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_62 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_63 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_64 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_65 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_66 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_67 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_68 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_69 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_70 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_71 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_72 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_73 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_74 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_75 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_76 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_77 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_78 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_79 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_80 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_81 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_82 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_83 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_84 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_85 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_86 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_87 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_88 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_89 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_90 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_91 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_92 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_93 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_94 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_95 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_96 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_97 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_98 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_99 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_100 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_101 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_102 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_103 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_104 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_105 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_106 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_1 = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(117, vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1);
    vlSelf->PvuTop__DOT__div_inst__DOT___exp_diff_T_4 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_109 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_110 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_111 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_112 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_113 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_114 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_115 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_116 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_117 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_118 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_119 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_120 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_121 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_122 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_123 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_124 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_125 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_126 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_127 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_128 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_129 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_130 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_131 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_132 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_133 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_134 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_135 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_136 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_137 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_138 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_139 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_140 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_141 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_142 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_143 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_144 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_145 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_146 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_147 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_148 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_149 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_150 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_151 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_152 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_153 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_154 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_155 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_156 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_157 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_158 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_159 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_160 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_2 = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(117, vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2);
    vlSelf->PvuTop__DOT__div_inst__DOT___exp_diff_T_6 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_163 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_164 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_165 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_166 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_167 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_168 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_169 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_170 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_171 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_172 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_173 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_174 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_175 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_176 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_177 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_178 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_179 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_180 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_181 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_182 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_183 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_184 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_185 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_186 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_187 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_188 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_189 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_190 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_191 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_192 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_193 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_194 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_195 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_196 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_197 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_198 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_199 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_200 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_201 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_202 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_203 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_204 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_205 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_206 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_207 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_208 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_209 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_210 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_211 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_212 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_213 = VL_RAND_RESET_I(29);
    vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_214 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_3 = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(117, vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3);
    vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_hc77c2139__0 = 0;
    vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_h191d4ea2__0 = 0;
    vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_hc0233086__0 = 0;
    vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_h40459468__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_sum_o = VL_RAND_RESET_Q(58);
    vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_carry_o = VL_RAND_RESET_Q(58);
    vlSelf->PvuTop__DOT__dotproduct__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__io_pir_sign_o = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum = VL_RAND_RESET_I(9);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1 = VL_RAND_RESET_I(9);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2 = VL_RAND_RESET_I(9);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3 = VL_RAND_RESET_I(9);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___comptree_io_result_o = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_0_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_1_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_2_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_3_T = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeB_io_result_o = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT___compTreeA_io_result_o = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_b = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeA__DOT____Vcellinp__comparator__io_operand_a = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_b = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT__comptree__DOT__compTreeB__DOT____Vcellinp__comparator__io_operand_a = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0 = 0;
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_h31758f64__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isNaN = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isInf = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___floatDecoder_io_isZero = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_1 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base_1 = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_2 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base_2 = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__isNaR_3 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__safe_shift_amount_3 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__shifted_base_3 = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h968e33b0__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96ba1187__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96e1e338__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isNaN = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isInf = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___floatDecoder_io_isZero = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h878add96__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp8__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_1 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base_1 = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_2 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base_2 = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__safe_shift_amount_3 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__shifted_base_3 = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96d5f417__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h968546ec__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96b7909b__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96e1e07c__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isNaN = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isInf = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___floatDecoder_io_isZero = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h878add96__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp16__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_1 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base_1 = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_2 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base_2 = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__safe_shift_amount_3 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__shifted_base_3 = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_14 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->PvuTop__DOT__posit2float_fp16__DOT____Vcellinp__positDecoder__io_posit);
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h972069b6__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h974ef2fe__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96daf448__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96e1e122__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isNaN = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isInf = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___floatDecoder_io_isZero = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0 = 0;
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h878add96__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp32__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_1 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base_1 = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_2 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base_2 = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__safe_shift_amount_3 = VL_RAND_RESET_I(8);
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__shifted_base_3 = VL_RAND_RESET_I(28);
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isNaN = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isInf = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___floatDecoder_io_isZero = VL_RAND_RESET_I(4);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0 = 0;
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_3_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_2_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_1_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i);
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h878add96__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h878e0f03__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h87f57e3c__0 = 0;
    vlSelf->PvuTop__DOT__float2posit_fp64__DOT__positEncoder__DOT____VdfgTmp_h87f12fa9__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h912770d6__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h9005e3f6__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h97139b66__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0 = 0;
    vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h96e1ed81__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH = VL_RAND_RESET_I(6);
    vlSelf->PvuTop__DOT__greater__DOT__is_zero1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT__is_zero2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT__is_zero1_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT__is_zero2_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT__is_zero1_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT__is_zero2_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT__is_zero1_3 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT__is_zero2_3 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he0b8de2f__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_hc14b0578__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he40e72a1__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he68aee29__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he7b3fb78__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h897751e3__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he73d8bce__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h972e8323__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h799ff3f5__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2894fb38__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b829ab6__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7ed67781__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h29ad7f4e__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h097c16a4__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b53ba00__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2a5eb3cf__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_hc3975437__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7bc97152__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2ad44887__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h459f37c1__0 = 0;
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_3_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_2_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_1_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i);
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i);
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i);
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h878add96__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h878e0f03__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h87f57e3c__0 = 0;
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h87f12fa9__0 = 0;
    vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he0b8de2f__0 = 0;
    vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he40e72a1__0 = 0;
    vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he7b3fb78__0 = 0;
    vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he73d8bce__0 = 0;
    vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc528e02b__0 = 0;
    vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hda3bad21__0 = 0;
    vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc3b54484__0 = 0;
    vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_h0207e970__0 = 0;
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_3_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_2_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_1_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i);
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i);
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i);
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h878add96__0 = 0;
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h878e0f03__0 = 0;
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h87f57e3c__0 = 0;
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h87f12fa9__0 = 0;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalMax = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalMin = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMax = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMin = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal = VL_RAND_RESET_I(6);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1 = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_1 = VL_RAND_RESET_I(6);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4 = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_2 = VL_RAND_RESET_I(6);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7 = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_3 = VL_RAND_RESET_I(6);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3 = VL_RAND_RESET_I(32);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10 = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_12 = VL_RAND_RESET_Q(34);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled = VL_RAND_RESET_Q(34);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13 = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_1 = VL_RAND_RESET_Q(34);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1 = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_1 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_2 = VL_RAND_RESET_Q(34);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2 = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_2 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_3 = VL_RAND_RESET_Q(34);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3 = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_3 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T_7 = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T = VL_RAND_RESET_Q(33);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hb5fc9007__0 = 0;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h22e7a075__0 = 0;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5221cc71__0 = 0;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h4eff933c__0 = 0;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hf936d8b2__0 = 0;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd092db84__0 = 0;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h75cc7c16__0 = 0;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hebc2a567__0 = 0;
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__frac_shifted = VL_RAND_RESET_Q(55);
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_Q(59);
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 = VL_RAND_RESET_Q(59);
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 = VL_RAND_RESET_Q(59);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter__io_operand_i = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_1__io_operand_i = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_2__io_operand_i = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT____Vcellinp__shifter_3__io_operand_i = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter__io_operand_i = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_1__io_operand_i = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_2__io_operand_i = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT____Vcellinp__shifter_3__io_operand_i = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(30);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i);
    VL_RAND_RESET_W(68, vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode_dot__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__encode_dot__DOT___value_after_round_T = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->PvuTop__DOT__encode_dot__DOT____VdfgTmp_h1c349387__0 = 0;
    vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dot_decoder__DOT___barrel_shifter_io_result_o = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__dot_decoder__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6 = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__dot_decoder__DOT____Vcellinp__lzcModule__in_i = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h962bc56e__0 = 0;
    vlSelf->PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h91c3a767__0 = 0;
    vlSelf->PvuTop__DOT__floatDotEncoder__DOT____VdfgTmp_h96e1e555__0 = 0;
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_3_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_2_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_1_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__convert_encoder__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i);
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i);
    vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__convert_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i);
    vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h878add96__0 = 0;
    vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h930d41a5__0 = 0;
    vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h9347f0fa__0 = 0;
    vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h878e0f03__0 = 0;
    vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h9343d2f5__0 = 0;
    vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h87f57e3c__0 = 0;
    vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h96fafde4__0 = 0;
    vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h962fac1b__0 = 0;
    vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h87f12fa9__0 = 0;
    vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h962bc56e__0 = 0;
    vlSelf->PvuTop__DOT__convert_encoder__DOT____VdfgTmp_h91c3a767__0 = 0;
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_3_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_2_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_1_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T = VL_RAND_RESET_I(31);
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i);
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i);
    vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i);
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h930d41a5__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h9347f0fa__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h9343d2f5__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f57e3c__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h96fafde4__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h962fac1b__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f12fa9__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h962bc56e__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h91c3a767__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c349387__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c28779a__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c547640__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c495847__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1c07425a__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce83255__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1ce7231a__0 = 0;
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h1cf3a611__0 = 0;
    vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0 = 0;
    vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0 = 0;
    vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0 = 0;
    vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0 = 0;
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_3_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_2_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_1_io_result_o);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__result_encoder__DOT___barrel_shifter_io_result_o);
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i);
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_1__io_operand_i);
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_2__io_operand_i);
    vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_shift_amount = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(90, vlSelf->PvuTop__DOT__result_encoder__DOT____Vcellinp__barrel_shifter_3__io_operand_i);
    vlSelf->PvuTop__DOT__result_encoder__DOT____VdfgTmp_h878add96__0 = 0;
    vlSelf->PvuTop__DOT__result_encoder__DOT____VdfgTmp_h930d41a5__0 = 0;
    vlSelf->PvuTop__DOT__result_encoder__DOT____VdfgTmp_h9347f0fa__0 = 0;
    vlSelf->PvuTop__DOT__result_encoder__DOT____VdfgTmp_h878e0f03__0 = 0;
    vlSelf->PvuTop__DOT__result_encoder__DOT____VdfgTmp_h9343d2f5__0 = 0;
    vlSelf->PvuTop__DOT__result_encoder__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    vlSelf->PvuTop__DOT__result_encoder__DOT____VdfgTmp_h87f57e3c__0 = 0;
    vlSelf->PvuTop__DOT__result_encoder__DOT____VdfgTmp_h96fafde4__0 = 0;
    vlSelf->PvuTop__DOT__result_encoder__DOT____VdfgTmp_h962fac1b__0 = 0;
    vlSelf->PvuTop__DOT__result_encoder__DOT____VdfgTmp_h87f12fa9__0 = 0;
    vlSelf->PvuTop__DOT__result_encoder__DOT____VdfgTmp_h962bc56e__0 = 0;
    vlSelf->PvuTop__DOT__result_encoder__DOT____VdfgTmp_h91c3a767__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f17ab6__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f6aa23__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13edb1c__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13a8a89__0 = 0;
    vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0 = 0;
    vlSelf->__VdfgTmp_h87baa85a__0 = 0;
    vlSelf->__VdfgTmp_h10c27d8c__0 = 0;
    vlSelf->__VdfgTmp_h0453aeb4__0 = 0;
    vlSelf->__VdfgTmp_hee1354a9__0 = 0;
    vlSelf->__VdfgTmp_h20089437__0 = 0;
    vlSelf->__VdfgTmp_h59018146__0 = 0;
    vlSelf->__VdfgTmp_h2c94c8d9__0 = 0;
    vlSelf->__VdfgTmp_h0a27806e__0 = 0;
    vlSelf->__VdfgTmp_h544e4e80__0 = 0;
    vlSelf->__VdfgTmp_h3327fc28__0 = 0;
    vlSelf->__VdfgTmp_hf9553680__0 = 0;
    vlSelf->__VdfgTmp_h341b6622__0 = 0;
    vlSelf->__VdfgTmp_h55cd16c8__0 = 0;
    vlSelf->__VdfgTmp_h943bd71d__0 = 0;
    vlSelf->__VdfgTmp_h7d90114e__0 = 0;
    vlSelf->__VdfgTmp_h208688f8__0 = 0;
    vlSelf->__VdfgTmp_hfeb2b7ac__0 = 0;
    vlSelf->__VdfgTmp_h0c48c69a__0 = 0;
    vlSelf->__VdfgTmp_h858cd4b3__0 = 0;
    vlSelf->__VdfgTmp_h49d63918__0 = 0;
    vlSelf->__VdfgTmp_h74bddf7d__0 = 0;
    vlSelf->__VdfgTmp_h637fac64__0 = 0;
    vlSelf->__VdfgTmp_h87dd8442__0 = 0;
    vlSelf->__VdfgTmp_h146ea22a__0 = 0;
    vlSelf->__VdfgTmp_h4c08f538__0 = 0;
    vlSelf->__VdfgTmp_h5f8b4dd4__0 = 0;
    vlSelf->__VdfgTmp_hce76d41b__0 = 0;
    vlSelf->__VdfgTmp_h7fe49659__0 = 0;
    vlSelf->__VdfgTmp_h71c5bb7f__0 = 0;
    vlSelf->__VdfgTmp_h5dbe1e6a__0 = 0;
    vlSelf->__VdfgTmp_h1a8c0352__0 = 0;
    vlSelf->__VdfgTmp_h35a0e36b__0 = 0;
    vlSelf->__VdfgTmp_h34eee576__0 = 0;
    vlSelf->__VdfgTmp_h9c6aa78d__0 = 0;
    vlSelf->__VdfgTmp_hbeca2c52__0 = 0;
    vlSelf->__VdfgTmp_hf52bdd2a__0 = 0;
    vlSelf->__VdfgTmp_hb9ec287b__0 = 0;
    vlSelf->__VdfgTmp_h40a686be__0 = 0;
    vlSelf->__VdfgTmp_h18d17475__0 = 0;
    vlSelf->__VdfgTmp_hcbfe9c52__0 = 0;
    vlSelf->__VdfgTmp_ha54cdad1__0 = 0;
    vlSelf->__VdfgTmp_haf7f5c8c__0 = 0;
    vlSelf->__VdfgTmp_hb7970779__0 = 0;
    vlSelf->__VdfgTmp_h9e39cbf9__0 = 0;
    vlSelf->__VdfgTmp_h8b0fae15__0 = 0;
    vlSelf->__VdfgTmp_h4f025f70__0 = 0;
    vlSelf->__VdfgTmp_h36dad77c__0 = 0;
    vlSelf->__VdfgTmp_hfd1b85c0__0 = 0;
    vlSelf->__VdfgTmp_hebcb5633__0 = 0;
    vlSelf->__VdfgTmp_hcb4a60e4__0 = 0;
    vlSelf->__VdfgTmp_h8be48673__0 = 0;
    vlSelf->__VdfgTmp_h2da98235__0 = 0;
    vlSelf->__VdfgTmp_h459491c7__0 = 0;
    vlSelf->__VdfgTmp_he84adc79__0 = 0;
    vlSelf->__VdfgTmp_h1abfe04b__0 = 0;
    vlSelf->__VdfgTmp_hdbd751b3__0 = 0;
    vlSelf->__VdfgTmp_h4fd42478__0 = 0;
    vlSelf->__VdfgTmp_h4303f8d5__0 = 0;
    vlSelf->__VdfgTmp_h8c68a7bd__0 = 0;
    vlSelf->__VdfgTmp_h6f085be2__0 = 0;
    vlSelf->__VdfgTmp_h00901bc7__0 = 0;
    vlSelf->__VdfgTmp_h8592d4be__0 = 0;
    vlSelf->__VdfgTmp_hfd79a1bb__0 = 0;
    vlSelf->__VdfgTmp_h3d13dd16__0 = 0;
    vlSelf->__VdfgTmp_h49c93cb3__0 = 0;
    vlSelf->__VdfgTmp_h0416f4a1__0 = 0;
    vlSelf->__VdfgTmp_ha768b880__0 = 0;
    vlSelf->__VdfgTmp_h0ac2602d__0 = 0;
    vlSelf->__VdfgTmp_h7f9446f2__0 = 0;
    vlSelf->__VdfgTmp_hb52a27cf__0 = 0;
    vlSelf->__VdfgTmp_h431d52cc__0 = 0;
    vlSelf->__VdfgTmp_h175b7e19__0 = 0;
    vlSelf->__VdfgTmp_h7300ed44__0 = 0;
    vlSelf->__VdfgTmp_hb5d700b8__0 = 0;
    vlSelf->__VdfgTmp_ha0210fbc__0 = 0;
    vlSelf->__VdfgTmp_h91b2e26a__0 = 0;
    vlSelf->__VdfgTmp_hc465359f__0 = 0;
    vlSelf->__VdfgTmp_hfe81dba1__0 = 0;
    vlSelf->__VdfgTmp_h72d9ce31__0 = 0;
    vlSelf->__VdfgTmp_he53970bf__0 = 0;
    vlSelf->__VdfgTmp_hf7267e6a__0 = 0;
    vlSelf->__VdfgTmp_hffb5dbbb__0 = 0;
    vlSelf->__VdfgTmp_h49ee0820__0 = 0;
    vlSelf->__VdfgTmp_h53a64afd__0 = 0;
    vlSelf->__VdfgTmp_hb297405c__0 = 0;
    vlSelf->__VdfgTmp_hb8dc97df__0 = 0;
    vlSelf->__VdfgTmp_ha0da9dfc__0 = 0;
    vlSelf->__VdfgTmp_h5e98c5db__0 = 0;
    vlSelf->__VdfgTmp_h58084909__0 = 0;
    vlSelf->__VdfgTmp_haf2e1e74__0 = 0;
    vlSelf->__VdfgTmp_h5f274f7a__0 = 0;
    vlSelf->__VdfgTmp_he5c1ee02__0 = 0;
    vlSelf->__VdfgTmp_h73f6f5eb__0 = 0;
    vlSelf->__VdfgTmp_h9415c337__0 = 0;
    vlSelf->__VdfgTmp_h0cc2f08a__0 = 0;
    vlSelf->__VdfgTmp_h7b8aa9cd__0 = 0;
    vlSelf->__VdfgTmp_h1134ac7c__0 = 0;
    vlSelf->__VdfgTmp_hfb655b56__0 = 0;
    vlSelf->__VdfgTmp_h7ffb051e__0 = 0;
    vlSelf->__VdfgTmp_h993763af__0 = 0;
    vlSelf->__VdfgTmp_hb8a4099c__0 = 0;
    vlSelf->__VdfgTmp_ha6f23dc5__0 = 0;
    vlSelf->__VdfgTmp_h67c762b7__0 = 0;
    vlSelf->__VdfgTmp_h3ba1ecff__0 = 0;
    vlSelf->__VdfgTmp_hac6b94cd__0 = 0;
    vlSelf->__VdfgTmp_h0a8ed410__0 = 0;
    vlSelf->__VdfgTmp_hbd21ddc4__0 = 0;
    vlSelf->__VdfgTmp_h40b5ec32__0 = 0;
    vlSelf->__VdfgTmp_hec9ddcc6__0 = 0;
    vlSelf->__VdfgTmp_hd68df511__0 = 0;
    vlSelf->__VdfgTmp_h876083fa__0 = 0;
    vlSelf->__VdfgTmp_h01f62327__0 = 0;
    vlSelf->__VdfgTmp_h4fb214a8__0 = 0;
    vlSelf->__VdfgTmp_haaab3f46__0 = 0;
    vlSelf->__VdfgTmp_h97718ca4__0 = 0;
    vlSelf->__VdfgTmp_h79f5616b__0 = 0;
    vlSelf->__VdfgTmp_hae798458__0 = 0;
    vlSelf->__VdfgTmp_hfd59c922__0 = 0;
    vlSelf->__VdfgTmp_h00c4dd81__0 = 0;
    vlSelf->__VdfgTmp_h7ae519d9__0 = 0;
    vlSelf->__VdfgTmp_h53ace542__0 = 0;
    vlSelf->__VdfgTmp_h2a16531b__0 = 0;
    vlSelf->__VdfgTmp_h88f0c350__0 = 0;
    vlSelf->__VdfgTmp_hfc141949__0 = 0;
    vlSelf->__VdfgTmp_hf5799464__0 = 0;
    vlSelf->__VdfgTmp_h492a5605__0 = 0;
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(384, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    VL_RAND_RESET_W(128, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes);
    VL_RAND_RESET_W(896, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes);
    VL_RAND_RESET_W(128, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__sel_nodes);
    VL_RAND_RESET_W(896, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod____PVT__gen_lzc__DOT__index_nodes);
    VL_RAND_RESET_W(128, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes);
    VL_RAND_RESET_W(896, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes);
    VL_RAND_RESET_W(128, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__sel_nodes);
    VL_RAND_RESET_W(896, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1____PVT__gen_lzc__DOT__index_nodes);
    VL_RAND_RESET_W(128, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes);
    VL_RAND_RESET_W(896, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes);
    VL_RAND_RESET_W(128, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__sel_nodes);
    VL_RAND_RESET_W(896, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2____PVT__gen_lzc__DOT__index_nodes);
    VL_RAND_RESET_W(128, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes);
    VL_RAND_RESET_W(896, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes);
    VL_RAND_RESET_W(128, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__sel_nodes);
    VL_RAND_RESET_W(896, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3____PVT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode1____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__decode2____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder____PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 149; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
