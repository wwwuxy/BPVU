#include"../config.h"
#ifdef CONFIG_EFFICIENTNET_CONVERT_P32

/**
 * RegNet Posit32到Posit16和Posit8转换测试程序
 * 
 * 程序功能:
 * 1. 从文件加载Posit32输入数据
 * 2. 使用硬件加速器进行Posit32到Posit16和Posit8的转换
 * 3. 与软件生成的Posit16和Posit8数据进行比较
 * 4. 统计转换结果的精度损失和性能指标
 */

#include <verilated.h>
// #include <verilated_vcd_c.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <chrono>  // 添加计时库
#include "VPvuTop.h"
#include "/home/wuxy/SoftPosit/source/include/softposit.h"

// 实现posit到double的转换函数，替代SoftPosit库中的函数
// 硬件P8转换为double，使用es=2
double convertP8ToDouble(posit8_t p) {
    if (p.v == 0) return 0.0;
    
    int8_t bits = p.v;
    bool sign = (bits & 0x80) != 0;
    
    if (bits == 0x80) return sign ? -INFINITY : INFINITY; // 检查是否为NaR
    
    // 提取regime、exponent和fraction
    uint8_t absPos = sign ? -bits : bits;
    int k = 0;
    uint8_t mask = 0x40;
    bool regimeBit = (absPos & mask) != 0;
    
    // 计算regime值
    while (((absPos & mask) != 0) == regimeBit && mask > 0x1) {
        k++;
        mask >>= 1;
    }
    
    if (!regimeBit) k = -k;
    
    // 所有posit格式使用es=2，需要提取2位exponent
    int exponent = 0;
    if (k < 6) { // 确保有足够位来提取exponent
        exponent = (absPos >> (5 - k)) & 0x3;
    }
    
    // 提取fraction部分
    uint8_t fraction = (absPos << (k + 4)) & 0xFF;
    
    // 计算实际值
    double value = 1.0 + (double)fraction / 256.0;
    if (sign) value = -value;
    value *= pow(2.0, k * 4 + exponent);
    
    return value;
}

// 硬件P16转换为double，使用es=2
double convertP16ToDouble(posit16_t p) {
    if (p.v == 0) return 0.0;
    
    int16_t bits = p.v;
    bool sign = (bits & 0x8000) != 0;
    
    if (bits == 0x8000) return sign ? -INFINITY : INFINITY; // 检查是否为NaR
    
    // 提取regime、exponent和fraction
    uint16_t absPos = sign ? -bits : bits;
    int k = 0;
    uint16_t mask = 0x4000;
    bool regimeBit = (absPos & mask) != 0;
    
    // 计算regime值
    while (((absPos & mask) != 0) == regimeBit && mask > 0x1) {
        k++;
        mask >>= 1;
    }
    
    if (!regimeBit) k = -k;
    
    // 所有posit格式使用es=2，需要提取2位exponent
    int exponent = 0;
    if (k < 14) { // 确保有足够位来提取exponent
        exponent = (absPos >> (13 - k)) & 0x3;
    }
    
    // 提取fraction部分
    uint16_t fraction = (absPos << (k + 4)) & 0xFFFF;
    
    // 计算实际值
    double value = 1.0 + (double)fraction / 65536.0;
    if (sign) value = -value;
    value *= pow(2.0, k * 4 + exponent);
    
    return value;
}

// 标准P8转换为double，使用es=0
double convertStdP8ToDouble(posit8_t p) {
    if (p.v == 0) return 0.0;
    
    int8_t bits = p.v;
    bool sign = (bits & 0x80) != 0;
    
    if (bits == 0x80) return sign ? -INFINITY : INFINITY; // 检查是否为NaR
    
    // 提取regime、exponent和fraction
    uint8_t absPos = sign ? -bits : bits;
    int k = 0;
    uint8_t mask = 0x40;
    bool regimeBit = (absPos & mask) != 0;
    
    // 计算regime值
    while (((absPos & mask) != 0) == regimeBit && mask > 0x1) {
        k++;
        mask >>= 1;
    }
    
    if (!regimeBit) k = -k;
    
    // 标准P8使用es=0，无需提取exponent
    // 提取fraction部分
    uint8_t fraction = (absPos << (k + 2)) & 0xFF;
    
    // 计算实际值
    double value = 1.0 + (double)fraction / 256.0;
    if (sign) value = -value;
    value *= pow(2.0, k);
    
    return value;
}

// 标准P16转换为double，使用es=1
double convertStdP16ToDouble(posit16_t p) {
    if (p.v == 0) return 0.0;
    
    int16_t bits = p.v;
    bool sign = (bits & 0x8000) != 0;
    
    if (bits == 0x8000) return sign ? -INFINITY : INFINITY; // 检查是否为NaR
    
    // 提取regime、exponent和fraction
    uint16_t absPos = sign ? -bits : bits;
    int k = 0;
    uint16_t mask = 0x4000;
    bool regimeBit = (absPos & mask) != 0;
    
    // 计算regime值
    while (((absPos & mask) != 0) == regimeBit && mask > 0x1) {
        k++;
        mask >>= 1;
    }
    
    if (!regimeBit) k = -k;
    
    // 标准P16使用es=1，需要提取1位exponent
    int exponent = 0;
    if (k < 14) { // 确保有足够位来提取exponent
        exponent = (absPos >> (13 - k)) & 0x1;
    }
    
    // 提取fraction部分
    uint16_t fraction = (absPos << (k + 3)) & 0xFFFF;
    
    // 计算实际值
    double value = 1.0 + (double)fraction / 65536.0;
    if (sign) value = -value;
    value *= pow(2.0, k * 2 + exponent);
    
    return value;
}

// P32转换为double
double convertP32ToDouble(posit32_t p) {
    if (p.v == 0) return 0.0;
    
    int32_t bits = p.v;
    bool sign = (bits & 0x80000000) != 0;
    
    if (bits == 0x80000000) return sign ? -INFINITY : INFINITY; // 检查是否为NaR
    
    // 提取regime、exponent和fraction
    uint32_t absPos = sign ? -bits : bits;
    int k = 0;
    uint32_t mask = 0x40000000;
    bool regimeBit = (absPos & mask) != 0;
    
    // 计算regime值
    while (((absPos & mask) != 0) == regimeBit && mask > 0x1) {
        k++;
        mask >>= 1;
    }
    
    if (!regimeBit) k = -k;
    
    // P32的es=2，需要提取2位exponent
    int exponent = 0;
    if (k < 30) { // 确保有足够位来提取exponent
        exponent = (absPos >> (29 - k)) & 0x3;
    }
    
    // 提取fraction部分
    uint32_t fraction = (absPos << (k + 4)) & 0xFFFFFFFF;
    
    // 计算实际值
    double value = 1.0 + (double)fraction / 4294967296.0;
    if (sign) value = -value;
    value *= pow(2.0, k * 4 + exponent);
    
    return value;
}

//---------------- 配置参数 -------------------
#define OP   6                     // Posit精度转换操作码为6
const char* POSIT32_INPUT_FILE   = "./test_src/EfficientNet/posit_activations.bin";
const int SAMPLE_NUM             = 1000;            // 测试样本数量
const int TOTAL_ELEMENTS         = 4000;            // 总元素数量，用于向量模式测试
const int MAX_VECTOR_SIZE        = 4;               // 最大向量大小
const int BIN_COUNT              = 5;               // 分布统计的区间数
//--------------------------------------------

// 定义目标位宽
enum PositWidth {
    POSIT8 = 8,
    POSIT16 = 16,
    POSIT32 = 32
};

struct TestData {
    std::vector<std::vector<uint32_t>> posit32_input;  // Posit32输入数据
    
    // 构造函数，初始化数据结构
    TestData(int sample_num, int vector_size) {
        posit32_input.resize(sample_num, std::vector<uint32_t>(vector_size));
    }
};

// 读取32位posit数据
uint32_t read_p32_data(std::ifstream& file) {
    uint32_t data;
    if (file.read(reinterpret_cast<char*>(&data), sizeof(uint32_t))) {
        return data;
    }
    return 0;  // 如果读取失败，返回0
}

TestData load_testdata(int sample_count, int vector_size) {
    TestData td(sample_count, vector_size);

    // 读取Posit32输入数据
    std::ifstream posit32_in(POSIT32_INPUT_FILE, std::ios::binary);
    if (!posit32_in.is_open()) {
        std::cerr << "无法打开Posit32输入数据文件: " << POSIT32_INPUT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < sample_count; ++i) {
        for (int j = 0; j < vector_size; ++j) {
            td.posit32_input[i][j] = read_p32_data(posit32_in);
        }
    }
    posit32_in.close();

    return td;
}

// 统计信息结构体
struct PositStats {
    double min_error;
    double max_error;
    double avg_error;
    double mse;          // 均方误差
    double psnr;         // 峰值信噪比
    int exact_matches;   // 精确匹配的数量
    int total_elements;  // 总元素数量
    double rel_error;    // 相对误差
};

// 性能统计结构体
struct PerformanceStats {
    double total_time;        // 总运行时间 (ms)
    double compute_time;      // 计算时间 (ms)
    double avg_compute_time;  // 平均每次计算时间 (ms)
    double throughput;        // 吞吐量 (元素/秒)
};

// 比较Posit32与转换后的Posit16结果
PositStats compare_p32_to_p16(
    const std::vector<std::vector<uint32_t>>& p32_input,
    const std::vector<std::vector<uint32_t>>& hw_results,
    int sample_count,
    int vector_size
) {
    PositStats stats;
    stats.min_error = std::numeric_limits<double>::max();
    stats.max_error = 0.0;
    stats.avg_error = 0.0;
    stats.mse = 0.0;
    stats.exact_matches = 0;
    stats.total_elements = 0;
    stats.rel_error = 0.0;
    
    double sum_error = 0.0;
    double sum_squared_error = 0.0;
    double sum_rel_error = 0.0;
    int total_values = 0;
    
    for (int i = 0; i < sample_count; ++i) {
        for (int j = 0; j < vector_size; ++j) {
            // 提取原始Posit32输入
            uint32_t orig_p32 = p32_input[i][j];
            
            // 提取硬件结果的低16位作为Posit16结果
            uint16_t hw_p16 = static_cast<uint16_t>(hw_results[i][j] & 0xFFFF);
            
            // 转换为double进行比较
            posit32_t orig_posit;
            posit16_t hw_posit;
            orig_posit.v = orig_p32;
            hw_posit.v = hw_p16;
            
            double orig_val = convertP32ToDouble(orig_posit);
            double hw_val = convertP16ToDouble(hw_posit);
            
            // 计算误差
            double abs_error = std::abs(hw_val - orig_val);
            sum_error += abs_error;
            sum_squared_error += abs_error * abs_error;
            
            // 计算相对误差（避免除以零）
            double rel_error = 0.0;
            if (std::abs(orig_val) > 1e-10) {
                rel_error = abs_error / std::abs(orig_val);
                sum_rel_error += rel_error;
            }
            
            if (abs_error < stats.min_error) stats.min_error = abs_error;
            if (abs_error > stats.max_error) stats.max_error = abs_error;
            
            total_values++;
        }
    }
    
    stats.total_elements = total_values;
    stats.avg_error = sum_error / total_values;
    stats.mse = sum_squared_error / total_values;
    stats.rel_error = sum_rel_error / total_values;
    
    // 计算PSNR (使用理论最大值作为参考)
    double max_val = 65536.0; // 16位无符号整数的最大值
    stats.psnr = 10.0 * std::log10((max_val * max_val) / (stats.mse + 1e-10)); // 避免除以零
    
    return stats;
}

// 比较Posit32与转换后的Posit8结果
PositStats compare_p32_to_p8(
    const std::vector<std::vector<uint32_t>>& p32_input,
    const std::vector<std::vector<uint32_t>>& hw_results,
    int sample_count,
    int vector_size
) {
    PositStats stats;
    stats.min_error = std::numeric_limits<double>::max();
    stats.max_error = 0.0;
    stats.avg_error = 0.0;
    stats.mse = 0.0;
    stats.exact_matches = 0;
    stats.total_elements = 0;
    stats.rel_error = 0.0;
    
    double sum_error = 0.0;
    double sum_squared_error = 0.0;
    double sum_rel_error = 0.0;
    int total_values = 0;
    
    for (int i = 0; i < sample_count; ++i) {
        for (int j = 0; j < vector_size; ++j) {
            // 提取原始Posit32输入
            uint32_t orig_p32 = p32_input[i][j];
            
            // 提取硬件结果的低8位作为Posit8结果
            uint8_t hw_p8 = static_cast<uint8_t>(hw_results[i][j] & 0xFF);
            
            // 转换为double进行比较
            posit32_t orig_posit;
            posit8_t hw_posit;
            orig_posit.v = orig_p32;
            hw_posit.v = hw_p8;
            
            double orig_val = convertP32ToDouble(orig_posit);
            double hw_val = convertP8ToDouble(hw_posit);
            
            // 计算误差
            double abs_error = std::abs(hw_val - orig_val);
            sum_error += abs_error;
            sum_squared_error += abs_error * abs_error;
            
            // 计算相对误差（避免除以零）
            double rel_error = 0.0;
            if (std::abs(orig_val) > 1e-10) {
                rel_error = abs_error / std::abs(orig_val);
                sum_rel_error += rel_error;
            }
            
            if (abs_error < stats.min_error) stats.min_error = abs_error;
            if (abs_error > stats.max_error) stats.max_error = abs_error;
            
            total_values++;
        }
    }
    
    stats.total_elements = total_values;
    stats.avg_error = sum_error / total_values;
    stats.mse = sum_squared_error / total_values;
    stats.rel_error = sum_rel_error / total_values;
    
    // 计算PSNR (使用理论最大值作为参考)
    double max_val = 256.0; // 8位无符号整数的最大值
    stats.psnr = 10.0 * std::log10((max_val * max_val) / (stats.mse + 1e-10)); // 避免除以零
    
    return stats;
}

// 性能和精度测试函数
PerformanceStats run_test(
    PositWidth dst_width, 
    int vector_size, 
    int sample_count, 
    bool enable_waveform = false, 
    bool print_stats = true
) {
    VPvuTop* top = new VPvuTop;
    
    // 波形生成代码被禁用，保留参数仅为兼容性
    // 初始化信号
    top->clock = 0;
    top->reset = 1;
    top->eval();
    
    // 加载测试数据
    TestData td = load_testdata(sample_count, vector_size);
    
    // 复位序列（4周期）
    for (int i = 0; i < 4; ++i) {
        top->clock = !top->clock;
        top->eval();
    }
    
    // 释放复位
    top->reset = 0;
    top->eval();
    
    // 准备存储硬件计算结果
    std::vector<std::vector<uint32_t>> hw_results(sample_count, std::vector<uint32_t>(vector_size, 0));
    
    // 性能统计
    auto start_time = std::chrono::high_resolution_clock::now();
    double compute_time = 0.0;
    
    // 执行测试循环
    for (int i = 0; i < sample_count; ++i) {
        // 设置输入数据
        top->io_posit_i1_0 = td.posit32_input[i][0];
        if (vector_size > 1) top->io_posit_i1_1 = td.posit32_input[i][1];
        if (vector_size > 2) top->io_posit_i1_2 = td.posit32_input[i][2];
        if (vector_size > 3) top->io_posit_i1_3 = td.posit32_input[i][3];
        
        // 不需要第二个操作数
        top->io_posit_i2_0 = 0;
        if (vector_size > 1) top->io_posit_i2_1 = 0;
        if (vector_size > 2) top->io_posit_i2_2 = 0;
        if (vector_size > 3) top->io_posit_i2_3 = 0;
        
        // 设置操作信息
        top->io_op = OP;
        top->io_Isposit = 1;  // 输入是posit格式
        top->io_Outposit = 1; // 输出为posit格式
        top->io_src_posit_width = 32; // 源格式为posit32
        top->io_dst_posit_width = dst_width; // 目标格式宽度（8或16）
        top->io_vector_size = vector_size;
        
        // 记录当前输入状态
        top->eval();
        
        // 启动计算
        auto compute_start = std::chrono::high_resolution_clock::now();
        
        // 上升沿，开始计算
        top->clock = 1;
        top->eval();
        
        // 下降沿
        top->clock = 0;
        top->eval();
        
        // 时钟周期 - 增加更多周期确保计算完成
        const int WAIT_CYCLES = 20; // 增加到20个周期，确保足够的时间完成计算
        for (int cycle = 0; cycle < WAIT_CYCLES; cycle++) {
            // 上升沿
            top->clock = 1;
            top->eval();
            
            // 下降沿
            top->clock = 0;
            top->eval();
        }
        
        auto compute_end = std::chrono::high_resolution_clock::now();
        compute_time += std::chrono::duration<double, std::milli>(compute_end - compute_start).count();
        
        // 获取结果
        for (int j = 0; j < vector_size; ++j) {
            if (j == 0) hw_results[i][j] = top->io_posit_o_0;
            else if (j == 1) hw_results[i][j] = top->io_posit_o_1;
            else if (j == 2) hw_results[i][j] = top->io_posit_o_2;
            else if (j == 3) hw_results[i][j] = top->io_posit_o_3;
        }
    }
    
    auto end_time = std::chrono::high_resolution_clock::now();
    double total_time = std::chrono::duration<double, std::milli>(end_time - start_time).count();
    
    // 比较结果与参考数据
    PositStats stats;
    if (dst_width == POSIT16) {
        stats = compare_p32_to_p16(td.posit32_input, hw_results, sample_count, vector_size);
    } else { // POSIT8
        stats = compare_p32_to_p8(td.posit32_input, hw_results, sample_count, vector_size);
    }
    
    // 输出统计信息
    if (print_stats) {
        std::cout << "=========================================" << std::endl;
        std::cout << "位宽: Posit32 -> Posit" << dst_width << " 转换结果" << std::endl;
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << "样本数量: " << sample_count << std::endl;
        std::cout << "向量大小: " << vector_size << std::endl;
        std::cout << "总元素数: " << stats.total_elements << std::endl;
        std::cout << "最小误差: " << stats.min_error << std::endl;
        std::cout << "最大误差: " << stats.max_error << std::endl;
        std::cout << "平均误差: " << stats.avg_error << std::endl;
        std::cout << "平均相对误差: " << (stats.rel_error * 100.0) << "%" << std::endl;
        std::cout << "均方误差: " << stats.mse << std::endl;
        std::cout << "PSNR: " << stats.psnr << " dB" << std::endl;
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << "计算总时间: " << compute_time << " ms" << std::endl;
        std::cout << "平均每样本时间: " << (compute_time / sample_count) << " ms" << std::endl;
        std::cout << "吞吐量: " << (stats.total_elements * 1000 / compute_time) << " 元素/秒" << std::endl;
        std::cout << "=========================================" << std::endl;
    }
    
    delete top;
    
    // 返回性能统计
    PerformanceStats perf;
    perf.total_time = total_time;
    perf.compute_time = compute_time;
    perf.avg_compute_time = compute_time / sample_count;
    perf.throughput = stats.total_elements * 1000 / compute_time;
    
    return perf;
}

// 将测试结果保存到文件
void save_results_to_file(const std::string& filename, int sample_count, int vector_size, const std::vector<std::vector<uint32_t>>& p32_input, const std::vector<std::vector<uint32_t>>& p16_results, const std::vector<std::vector<uint32_t>>& p8_results) {
    std::ofstream outfile(filename);
    if (!outfile.is_open()) {
        std::cerr << "无法打开输出文件: " << filename << std::endl;
        return;
    }
    
    outfile << "Posit32到Posit16和Posit8转换结果对比" << std::endl;
    outfile << "============================================================" << std::endl;
    outfile << "    Posit32(原始)    |    转换为P16    |    转换为P8    " << std::endl;
    outfile << "  Hex     Value      |  Value(精度损失) |  Value(精度损失) " << std::endl;
    outfile << "------------------------------------------------------------" << std::endl;
    
    for (int i = 0; i < sample_count; ++i) {
        for (int j = 0; j < vector_size; ++j) {
            // 提取原始Posit32输入
            posit32_t p32;
            p32.v = p32_input[i][j];
            double v32 = convertP32ToDouble(p32);
            
            // 提取Posit16结果
            uint16_t p16_bits = static_cast<uint16_t>(p16_results[i][j] & 0xFFFF);
            posit16_t p16;
            p16.v = p16_bits;
            double v16 = convertP16ToDouble(p16);
            
            // 提取Posit8结果
            uint8_t p8_bits = static_cast<uint8_t>(p8_results[i][j] & 0xFF);
            posit8_t p8;
            p8.v = p8_bits;
            double v8 = convertP8ToDouble(p8);
            
            // 计算精度损失
            double loss16 = 0.0;
            double loss8 = 0.0;
            if (std::abs(v32) > 1e-10) {
                loss16 = std::abs((v16 - v32) / v32) * 100.0;
                loss8 = std::abs((v8 - v32) / v32) * 100.0;
            }
            
            outfile << std::hex << std::setfill('0')
                   << "0x" << std::setw(8) << p32_input[i][j] << " "
                   << std::dec << std::setw(10) << std::fixed << std::setprecision(6) << v32 << " | "
                   << std::setw(10) << std::fixed << std::setprecision(6) << v16 << " "
                   << std::setw(7) << std::fixed << std::setprecision(2) << loss16 << "% | "
                   << std::setw(8) << std::fixed << std::setprecision(4) << v8 << " "
                   << std::setw(7) << std::fixed << std::setprecision(2) << loss8 << "%"
                   << std::endl;
        }
    }
    
    outfile << "------------------------------------------------------------" << std::endl;
    outfile.close();
    
    std::cout << "结果已保存到: " << filename << std::endl;
}

int main(int argc, char** argv) {
    std::cout << "===================================================" << std::endl;
    std::cout << "RegNet Posit32到Posit16和Posit8转换测试程序" << std::endl;
    std::cout << "===================================================" << std::endl;
    
    // 直接使用run_test显示示例数据，不生成波形
    int sample_num = 5;
    std::cout << "\n[示例数据] Posit32 -> Posit16/8 转换示例" << std::endl;
    run_test(POSIT16, 1, sample_num, false);
    run_test(POSIT8, 1, sample_num, false);
    
    // 性能测试数据结构
    struct TestResult {
        PerformanceStats stats;
        int vector_size;
        PositWidth dst_width;
    };
    std::vector<TestResult> results;
    
    // 标量模式测试 - Posit16
    std::cout << "\n[测试1] Posit32 -> Posit16转换测试 (标量模式)" << std::endl;
    results.push_back({run_test(POSIT16, 1, SAMPLE_NUM, false), 1, POSIT16});
    
    // 标量模式测试 - Posit8
    std::cout << "\n[测试2] Posit32 -> Posit8转换测试 (标量模式)" << std::endl;
    results.push_back({run_test(POSIT8, 1, SAMPLE_NUM, false), 1, POSIT8});
    
    // 向量模式测试4 - Posit16
    std::cout << "\n[测试3] Posit32 -> Posit16转换测试 (向量模式, 大小=4)" << std::endl;
    results.push_back({run_test(POSIT16, 4, SAMPLE_NUM / 4, false), 4, POSIT16});
    
    // 向量模式测试4 - Posit8
    std::cout << "\n[测试4] Posit32 -> Posit8转换测试 (向量模式, 大小=4)" << std::endl;
    results.push_back({run_test(POSIT8, 4, SAMPLE_NUM / 4, false), 4, POSIT8});
    
    // 加载测试数据
    TestData td = load_testdata(SAMPLE_NUM, MAX_VECTOR_SIZE);
    
    // 用于存储所有测试结果
    std::vector<std::vector<uint32_t>> p16_results(SAMPLE_NUM, std::vector<uint32_t>(MAX_VECTOR_SIZE, 0));
    std::vector<std::vector<uint32_t>> p8_results(SAMPLE_NUM, std::vector<uint32_t>(MAX_VECTOR_SIZE, 0));
    
    // 为了生成文件，我们需要实际运行硬件并收集所有结果
    VPvuTop* top = new VPvuTop;
    
    // 初始化信号（不生成波形）
    top->clock = 0;
    top->reset = 1;
    top->eval();
    
    // 复位序列（4周期）
    for (int i = 0; i < 4; ++i) {
        top->clock = !top->clock;
        top->eval();
    }
    
    // 释放复位
    top->reset = 0;
    top->eval();
    
    // 执行P16转换
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        // 设置输入数据
        top->io_posit_i1_0 = td.posit32_input[i][0];
        if (MAX_VECTOR_SIZE > 1) top->io_posit_i1_1 = td.posit32_input[i][1];
        if (MAX_VECTOR_SIZE > 2) top->io_posit_i1_2 = td.posit32_input[i][2];
        if (MAX_VECTOR_SIZE > 3) top->io_posit_i1_3 = td.posit32_input[i][3];
        
        // 不需要第二个操作数
        top->io_posit_i2_0 = 0;
        if (MAX_VECTOR_SIZE > 1) top->io_posit_i2_1 = 0;
        if (MAX_VECTOR_SIZE > 2) top->io_posit_i2_2 = 0;
        if (MAX_VECTOR_SIZE > 3) top->io_posit_i2_3 = 0;
        
        // 设置操作信息
        top->io_op = OP;
        top->io_Isposit = 1;  // 输入是posit格式
        top->io_Outposit = 1; // 输出为posit格式
        top->io_src_posit_width = 32; // 源格式为posit32
        top->io_dst_posit_width = POSIT16; // 目标格式宽度16
        top->io_vector_size = MAX_VECTOR_SIZE;
        
        // 评估输入状态
        top->eval();
        
        // 时钟周期 - 增加更多周期确保计算完成
        const int WAIT_CYCLES = 20; // 增加到20个周期
        for (int cycle = 0; cycle < WAIT_CYCLES; cycle++) {
            top->clock = 1;
            top->eval();
            
            top->clock = 0;
            top->eval();
        }
        
        // 获取结果
        p16_results[i][0] = top->io_posit_o_0;
        p16_results[i][1] = top->io_posit_o_1;
        p16_results[i][2] = top->io_posit_o_2;
        p16_results[i][3] = top->io_posit_o_3;
    }
    
    // 执行P8转换
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        // 设置输入数据
        top->io_posit_i1_0 = td.posit32_input[i][0];
        if (MAX_VECTOR_SIZE > 1) top->io_posit_i1_1 = td.posit32_input[i][1];
        if (MAX_VECTOR_SIZE > 2) top->io_posit_i1_2 = td.posit32_input[i][2];
        if (MAX_VECTOR_SIZE > 3) top->io_posit_i1_3 = td.posit32_input[i][3];
        
        // 不需要第二个操作数
        top->io_posit_i2_0 = 0;
        if (MAX_VECTOR_SIZE > 1) top->io_posit_i2_1 = 0;
        if (MAX_VECTOR_SIZE > 2) top->io_posit_i2_2 = 0;
        if (MAX_VECTOR_SIZE > 3) top->io_posit_i2_3 = 0;
        
        // 设置操作信息
        top->io_op = OP;
        top->io_Isposit = 1;  // 输入是posit格式
        top->io_Outposit = 1; // 输出为posit格式
        top->io_src_posit_width = 32; // 源格式为posit32
        top->io_dst_posit_width = POSIT8; // 目标格式宽度8
        top->io_vector_size = MAX_VECTOR_SIZE;
        
        // 评估输入状态
        top->eval();
        
        // 时钟周期 - 增加更多周期确保计算完成
        const int WAIT_CYCLES = 20; // 增加到20个周期
        for (int cycle = 0; cycle < WAIT_CYCLES; cycle++) {
            top->clock = 1;
            top->eval();
            
            top->clock = 0;
            top->eval();
        }
        
        // 获取结果
        p8_results[i][0] = top->io_posit_o_0;
        p8_results[i][1] = top->io_posit_o_1;
        p8_results[i][2] = top->io_posit_o_2;
        p8_results[i][3] = top->io_posit_o_3;
    }
    
    delete top;
    
    // 将结果保存到文件
    save_results_to_file("/home/wuxy/BPVU/posit_conversion_results.txt", SAMPLE_NUM, MAX_VECTOR_SIZE, td.posit32_input, p16_results, p8_results);
    
    // 统计和打印矢量加速情况
    std::cout << "\n================ 矢量加速性能统计 =================" << std::endl;
    std::cout << "格式  | 向量大小 | 吞吐量(元素/秒) | 加速比 | 效率" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    
    // 统计Posit16结果
    std::cout << "Posit16转换性能：" << std::endl;
    double p16_scalar_throughput = 0;
    for (const auto& result : results) {
        if (result.dst_width == POSIT16 && result.vector_size == 1) {
            p16_scalar_throughput = result.stats.throughput;
            break;
        }
    }
    
    for (const auto& result : results) {
        if (result.dst_width == POSIT16) {
            double speedup = result.stats.throughput / p16_scalar_throughput;
            double efficiency = (speedup / result.vector_size) * 100.0;
            
            std::cout << "Posit16 | " << std::setw(8) << result.vector_size 
                      << " | " << std::setw(14) << std::fixed << std::setprecision(2) << result.stats.throughput 
                      << " | " << std::setw(6) << std::fixed << std::setprecision(2) << speedup 
                      << " | " << std::setw(4) << std::fixed << std::setprecision(1) << efficiency << "%" << std::endl;
        }
    }
    
    std::cout << std::endl;
    
    // 统计Posit8结果
    std::cout << "Posit8转换性能：" << std::endl;
    double p8_scalar_throughput = 0;
    for (const auto& result : results) {
        if (result.dst_width == POSIT8 && result.vector_size == 1) {
            p8_scalar_throughput = result.stats.throughput;
            break;
        }
    }
    
    for (const auto& result : results) {
        if (result.dst_width == POSIT8) {
            double speedup = result.stats.throughput / p8_scalar_throughput;
            double efficiency = (speedup / result.vector_size) * 100.0;
            
            std::cout << "Posit8  | " << std::setw(8) << result.vector_size 
                      << " | " << std::setw(14) << std::fixed << std::setprecision(2) << result.stats.throughput 
                      << " | " << std::setw(6) << std::fixed << std::setprecision(2) << speedup 
                      << " | " << std::setw(4) << std::fixed << std::setprecision(1) << efficiency << "%" << std::endl;
        }
    }
    
    std::cout << "====================================================" << std::endl;
    
    std::cout << "\n所有测试已完成!" << std::endl;
    return 0;
}

#endif 