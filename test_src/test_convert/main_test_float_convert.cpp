#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <assert.h>
#include <iostream>

// FP16和FP64格式转换测试程序 #测试浮点数转换功能

// 简单的测试框架，不依赖Verilator
int main(int argc, char** argv) {
    printf("模拟测试FP16到FP64转换\n");
    
    // 测试几种典型的FP16数值
    uint16_t fp16_values[] = {
        0x0000,     // 零值
        0x3C00,     // 1.0
        0xC000,     // -2.0
        0x3800,     // 0.5
        0x7BFF,     // 最大规格化数 65504.0
        0x0400      // 小数 0.0001
    };
    
    int test_count = sizeof(fp16_values) / sizeof(fp16_values[0]);
    
    for (int i = 0; i < test_count; i++) {
        uint16_t fp16 = fp16_values[i];
        
        // 从FP16提取组件
        uint16_t sign_bit = (fp16 & 0x8000) >> 15;
        uint16_t exp_bits = (fp16 & 0x7C00) >> 10;
        uint16_t frac_bits = (fp16 & 0x03FF);
        
        // 计算FP64表示
        uint64_t fp64_sign = (uint64_t)sign_bit << 63;
        uint64_t fp64_exp, fp64_frac;
        
        if (exp_bits == 0) {
            // 零或子规格化数
            if (frac_bits == 0) {
                // 零
                fp64_exp = 0;
                fp64_frac = 0;
            } else {
                // 子规格化数 - 转为FP64中的规格化数
                int leading_zeros = __builtin_clz((uint32_t)frac_bits) - 22; // 32-10位
                fp64_exp = 1023ULL - 15 - leading_zeros;
                fp64_frac = ((uint64_t)frac_bits << (leading_zeros + 1)) & 0x3FF;
                fp64_frac = fp64_frac << (52 - 10); // 移至正确位置
            }
        } else if (exp_bits == 31) {
            // 无穷大或NaN
            fp64_exp = 2047ULL;
            fp64_frac = frac_bits == 0 ? 0 : ((uint64_t)1 << 51); // 保留NaN标志
        } else {
            // 规格化数
            fp64_exp = (uint64_t)(exp_bits - 15 + 1023);
            fp64_frac = (uint64_t)frac_bits << (52 - 10);
        }
        
        uint64_t fp64 = fp64_sign | (fp64_exp << 52) | fp64_frac;
        
        // 输出结果
        printf("测试 %d: FP16(0x%04x) -> FP64(0x%016lx)\n", i, fp16, fp64);
    }
    
    printf("测试完成\n");
    return 0;
}
