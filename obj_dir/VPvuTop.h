// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPVUTOP_H_
#define VERILATED_VPVUTOP_H_  // guard

#include "verilated.h"

class VPvuTop__Syms;
class VPvuTop___024root;
class VerilatedVcdC;
class VPvuTop_PositDecode;
class VPvuTop_Radix4BoothMultiplier;
class VPvuTop_LZC__M1_W44;


// This class is the main interface to the Verilated model
class VPvuTop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VPvuTop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_op,3,0);
    VL_IN8(&io_Isposit,0,0);
    VL_IN8(&io_Outposit,0,0);
    VL_IN8(&io_float_mode,2,0);
    VL_IN8(&io_float_posit,0,0);
    VL_IN8(&io_dst_float_mode,3,0);
    VL_IN8(&io_src_posit_width,5,0);
    VL_IN8(&io_vector_size,2,0);
    VL_IN8(&io_dst_posit_width,5,0);
    VL_IN(&io_posit_i1_0,31,0);
    VL_IN(&io_posit_i1_1,31,0);
    VL_IN(&io_posit_i1_2,31,0);
    VL_IN(&io_posit_i1_3,31,0);
    VL_IN(&io_posit_i2_0,31,0);
    VL_IN(&io_posit_i2_1,31,0);
    VL_IN(&io_posit_i2_2,31,0);
    VL_IN(&io_posit_i2_3,31,0);
    VL_OUT(&io_posit_o_0,31,0);
    VL_OUT(&io_posit_o_1,31,0);
    VL_OUT(&io_posit_o_2,31,0);
    VL_OUT(&io_posit_o_3,31,0);
    VL_OUT(&io_posit_dot_o,31,0);
    VL_OUT(&io_int_o_0,31,0);
    VL_OUT(&io_int_o_1,31,0);
    VL_OUT(&io_int_o_2,31,0);
    VL_OUT(&io_int_o_3,31,0);
    VL_IN64(&io_float_i_0,63,0);
    VL_IN64(&io_float_i_1,63,0);
    VL_IN64(&io_float_i_2,63,0);
    VL_IN64(&io_float_i_3,63,0);
    VL_IN64(&io_float_i2_0,63,0);
    VL_IN64(&io_float_i2_1,63,0);
    VL_IN64(&io_float_i2_2,63,0);
    VL_IN64(&io_float_i2_3,63,0);
    VL_OUT64(&io_float_o_0,63,0);
    VL_OUT64(&io_float_o_1,63,0);
    VL_OUT64(&io_float_o_2,63,0);
    VL_OUT64(&io_float_o_3,63,0);
    VL_OUT64(&io_float_dot_o,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VPvuTop_PositDecode* const __PVT__PvuTop__DOT__decode1;
    VPvuTop_PositDecode* const __PVT__PvuTop__DOT__decode2;
    VPvuTop_PositDecode* const __PVT__PvuTop__DOT__result_converted_decoder;
    VPvuTop_Radix4BoothMultiplier* const __PVT__PvuTop__DOT__mul__DOT__radix4BoothMultiplier;
    VPvuTop_Radix4BoothMultiplier* const __PVT__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1;
    VPvuTop_Radix4BoothMultiplier* const __PVT__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2;
    VPvuTop_Radix4BoothMultiplier* const __PVT__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3;
    VPvuTop_Radix4BoothMultiplier* const __PVT__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier;
    VPvuTop_Radix4BoothMultiplier* const __PVT__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1;
    VPvuTop_Radix4BoothMultiplier* const __PVT__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2;
    VPvuTop_Radix4BoothMultiplier* const __PVT__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3;
    VPvuTop_PositDecode* const __PVT__PvuTop__DOT__posit2float_fp4__DOT__positDecoder;
    VPvuTop_PositDecode* const __PVT__PvuTop__DOT__posit2float_fp8__DOT__positDecoder;
    VPvuTop_PositDecode* const __PVT__PvuTop__DOT__posit2float_fp16__DOT__positDecoder;
    VPvuTop_PositDecode* const __PVT__PvuTop__DOT__posit2float_fp32__DOT__positDecoder;
    VPvuTop_PositDecode* const __PVT__PvuTop__DOT__posit2float_fp64__DOT__positDecoder;
    VPvuTop_LZC__M1_W44* const __PVT__PvuTop__DOT__frac_norm_mul__DOT__lzcMod;
    VPvuTop_LZC__M1_W44* const __PVT__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1;
    VPvuTop_LZC__M1_W44* const __PVT__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2;
    VPvuTop_LZC__M1_W44* const __PVT__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3;
    VPvuTop_LZC__M1_W44* const __PVT__PvuTop__DOT__frac_norm_div__DOT__lzcMod;
    VPvuTop_LZC__M1_W44* const __PVT__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1;
    VPvuTop_LZC__M1_W44* const __PVT__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2;
    VPvuTop_LZC__M1_W44* const __PVT__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VPvuTop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VPvuTop(VerilatedContext* contextp, const char* name = "TOP");
    explicit VPvuTop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VPvuTop();
  private:
    VL_UNCOPYABLE(VPvuTop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
