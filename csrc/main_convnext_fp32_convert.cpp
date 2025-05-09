#include "../config.h"
#ifdef CONFIG_CONVNEXT_FP32_PRECISION_TEST

#include <fstream>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <chrono>

// 配置参数
#define OP 11  // op11为浮点转换操作
const char* FP32_FILE = "/home/wuxy/BPVU/test_src/ConvNeXt/fp32_data.bin"; // 测试数据文件
int SAMPLE_NUM = 1000;  // 测试样本数，可通过命令行修改
int VECTOR_SIZE = 4;    // 向量处理大小
const char* WAVEFORM_FILE = "waveform.vcd";  // 波形文件
const float EPSILON = 1e-10;  // 零判断阈值
bool ENABLE_WAVEFORM = false; // 是否生成波形
bool ENABLE_PRINTING = false; // 是否启用详细打印

enum FloatFormat {FP4=0, FP8=1, FP16=2, FP32=3, FP64=4}; // 浮点格式定义

// 误差统计结构
struct ErrorStats {
    double min_error = std::numeric_limits<double>::max(); // 最小误差
    double max_error = 0.0;                                // 最大误差
    double avg_error = 0.0;                                // 平均误差
    double median_error = 0.0;                             // 中位数误差
    double avg_rel_error = 0.0;                            // 平均相对误差
    double mse = 0.0;                                      // 均方误差
    double rsnr = 0.0;                                     // 相对信噪比
    int nan_count = 0;                                     // NaN数量
    int zero_count = 0;                                    // 零值数量
    int overflow_count = 0;                                // 溢出数量
    int underflow_count = 0;                               // 下溢数量
    std::vector<double> all_errors;                        // 所有误差值
};

// 函数声明
std::string get_format_name(FloatFormat format) {return format==FP4?"FP4":format==FP8?"FP8":format==FP16?"FP16":format==FP32?"FP32":format==FP64?"FP64":"未知";} // 获取格式名称
ErrorStats calculate_error_stats(const std::vector<float>& hw_results, const std::vector<float>& sw_results);
void print_error_stats(const ErrorStats& stats, FloatFormat src, FloatFormat dst);
float (*get_conversion_function(FloatFormat src, FloatFormat dst))(float);

// 打印浮点数的二进制表示
void print_float_bits(float value) {
    uint32_t bits; std::memcpy(&bits, &value, sizeof(float));
    std::cout<<"浮点值 "<<std::scientific<<std::setprecision(8)<<value<<" 二进制: "<<((bits>>31)&1)<<" | ";
    for(int i=30;i>=23;i--) std::cout<<((bits>>i)&1); std::cout<<" | ";
    for(int i=22;i>=0;i--) std::cout<<((bits>>i)&1); std::cout<<std::endl;
}

// 加载测试数据
std::vector<float> load_fp32_data(const char* filename, int sample_count) {
    std::vector<float> data(sample_count);
    std::ifstream file(filename, std::ios::binary);
    if(!file.is_open()) {std::cerr<<"无法打开数据文件: "<<filename<<std::endl; exit(EXIT_FAILURE);}
    file.read(reinterpret_cast<char*>(data.data()), sizeof(float)*sample_count);
    file.close();
    
    if(ENABLE_PRINTING) {
        std::cout<<"数据样例（前5个）："<<std::endl;
        for(int i=0;i<std::min(5,sample_count);i++) {
            std::cout<<"样本["<<i<<"]: "<<std::scientific<<std::setprecision(8)<<data[i]<<std::endl;
            print_float_bits(data[i]);
        }
    }
    return data;
}

// 浮点转换函数的通用处理逻辑
inline uint32_t preprocess_float(float input, uint32_t& sign) {
    uint32_t bits;
    std::memcpy(&bits, &input, sizeof(float));
    sign = (bits >> 31) & 0x1;
    return bits;
}

inline float postprocess_float(uint32_t result_bits) {
    float result;
    std::memcpy(&result, &result_bits, sizeof(float));
    return result;
}

// FP32转换函数
float convert_to_fp4(float input) {
    if(std::isnan(input) || std::isinf(input) || input == 0.0f) return input;
    
    uint32_t sign;
    uint32_t bits = preprocess_float(input, sign);
    
    uint32_t exp = (bits >> 23) & 0xFF;
    uint32_t mantissa = bits & 0x7FFFFF;
    
    int fp4_exp_bias = 1, fp32_exp_bias = 127;
    int unbiased_exp = exp - fp32_exp_bias;
    unbiased_exp = std::max(-1, std::min(0, unbiased_exp));
    
    uint32_t fp4_exp = unbiased_exp + fp4_exp_bias;
    uint32_t fp4_mantissa = (mantissa >> 21) & 0x3;
    
    uint32_t result_exp = (fp4_exp == 0) ? 0 : ((unbiased_exp + fp32_exp_bias) & 0xFF);
    uint32_t result_mantissa = fp4_mantissa << 21;
    
    uint32_t result_bits = (sign << 31) | (result_exp << 23) | result_mantissa;
    return postprocess_float(result_bits);
}

float convert_to_fp8(float input) {
    if(std::isnan(input) || std::isinf(input) || input == 0.0f) return input;
    
    uint32_t sign;
    uint32_t bits = preprocess_float(input, sign);
    
    uint32_t exp = (bits >> 23) & 0xFF;
    uint32_t mantissa = bits & 0x7FFFFF;
    
    int fp8_exp_bias = 7, fp32_exp_bias = 127;
    int unbiased_exp = exp - fp32_exp_bias;
    unbiased_exp = std::max(-7, std::min(8, unbiased_exp));
    
    uint32_t fp8_exp = unbiased_exp + fp8_exp_bias;
    uint32_t fp8_mantissa = (mantissa >> 20) & 0x7;
    
    uint32_t result_exp = (fp8_exp == 0) ? 0 : ((unbiased_exp + fp32_exp_bias) & 0xFF);
    uint32_t result_mantissa = fp8_mantissa << 20;
    
    uint32_t result_bits = (sign << 31) | (result_exp << 23) | result_mantissa;
    return postprocess_float(result_bits);
}

float convert_to_fp16(float input) {
    if(std::isnan(input) || std::isinf(input) || input == 0.0f) return input;
    
    uint32_t sign;
    uint32_t bits = preprocess_float(input, sign);
    
    uint32_t exp = (bits >> 23) & 0xFF;
    uint32_t mantissa = bits & 0x7FFFFF;
    
    int fp16_exp_bias = 15, fp32_exp_bias = 127;
    int unbiased_exp = exp - fp32_exp_bias;
    unbiased_exp = std::max(-14, std::min(16, unbiased_exp));
    
    uint32_t fp16_exp = unbiased_exp + fp16_exp_bias;
    uint32_t fp16_mantissa = (mantissa >> 13) & 0x3FF;
    
    uint32_t result_exp = (fp16_exp == 0) ? 0 : ((unbiased_exp + fp32_exp_bias) & 0xFF);
    uint32_t result_mantissa = fp16_mantissa << 13;
    
    uint32_t result_bits = (sign << 31) | (result_exp << 23) | result_mantissa;
    return postprocess_float(result_bits);
}

// 其他格式间转换函数
float convert_fp4_to_fp8(float input) {
    if(std::isnan(input) || std::isinf(input) || input == 0.0f) return input;
    
    uint32_t sign;
    uint32_t bits = preprocess_float(input, sign);
    
    uint32_t fp4_exp = (bits >> 23) & 0x1;
    uint32_t fp4_mantissa = (bits >> 21) & 0x3;
    
    int fp4_unbiased_exp = (fp4_exp == 0) ? 0 : (fp4_exp - 1);
    
    uint32_t fp8_exp = fp4_unbiased_exp + 7;
    uint32_t fp8_mantissa = fp4_mantissa << 1;
    
    uint32_t result_exp = (fp8_exp == 0) ? 0 : ((fp4_unbiased_exp + 127) & 0xFF);
    uint32_t result_mantissa = fp8_mantissa << 20;
    
    uint32_t result_bits = (sign << 31) | (result_exp << 23) | result_mantissa;
    return postprocess_float(result_bits);
}

float convert_fp4_to_fp16(float input) {
    if(std::isnan(input) || std::isinf(input) || input == 0.0f) return input;
    
    uint32_t sign;
    uint32_t bits = preprocess_float(input, sign);
    
    uint32_t fp4_exp = (bits >> 23) & 0x1;
    uint32_t fp4_mantissa = (bits >> 21) & 0x3;
    
    int fp4_unbiased_exp = (fp4_exp == 0) ? 0 : (fp4_exp - 1);
    
    uint32_t fp16_exp = fp4_unbiased_exp + 15;
    uint32_t fp16_mantissa = fp4_mantissa << 8;
    
    uint32_t result_exp = (fp16_exp == 0) ? 0 : ((fp4_unbiased_exp + 127) & 0xFF);
    uint32_t result_mantissa = fp16_mantissa << 13;
    
    uint32_t result_bits = (sign << 31) | (result_exp << 23) | result_mantissa;
    return postprocess_float(result_bits);
}

// 简单转换函数
float convert_fp4_to_fp32(float input) {return input;}
float convert_fp8_to_fp32(float input) {return input;}
float convert_fp16_to_fp32(float input) {return input;}
float convert_to_fp64(float input) {return input;}
float convert_fp4_to_fp64(float input) {return input;}
float convert_fp8_to_fp64(float input) {return input;}
float convert_fp16_to_fp64(float input) {return input;}

float convert_fp8_to_fp4(float input) {
    if(std::isnan(input) || std::isinf(input) || input == 0.0f) return input;
    
    uint32_t sign;
    uint32_t bits = preprocess_float(input, sign);
    
    uint32_t fp8_exp = (bits >> 23) & 0xF;
    uint32_t fp8_mantissa = (bits >> 20) & 0x7;
    
    int fp8_unbiased_exp = (fp8_exp == 0) ? 0 : (fp8_exp - 7);
    fp8_unbiased_exp = std::max(-1, std::min(0, fp8_unbiased_exp));
    
    uint32_t fp4_exp = fp8_unbiased_exp + 1;
    uint32_t fp4_mantissa = (fp8_mantissa >> 1) & 0x3;
    
    uint32_t result_exp = (fp4_exp == 0) ? 0 : ((fp8_unbiased_exp + 127) & 0xFF);
    uint32_t result_mantissa = fp4_mantissa << 21;
    
    uint32_t result_bits = (sign << 31) | (result_exp << 23) | result_mantissa;
    return postprocess_float(result_bits);
}

float convert_fp8_to_fp16(float input) {
    if(std::isnan(input) || std::isinf(input) || input == 0.0f) return input;
    
    uint32_t sign;
    uint32_t bits = preprocess_float(input, sign);
    
    uint32_t fp8_exp = (bits >> 23) & 0xF;
    uint32_t fp8_mantissa = (bits >> 20) & 0x7;
    
    int fp8_unbiased_exp = (fp8_exp == 0) ? 0 : (fp8_exp - 7);
    fp8_unbiased_exp = std::max(-14, std::min(16, fp8_unbiased_exp));
    
    uint32_t fp16_exp = fp8_unbiased_exp + 15;
    uint32_t fp16_mantissa = fp8_mantissa << 7;
    
    uint32_t result_exp = (fp16_exp == 0) ? 0 : ((fp8_unbiased_exp + 127) & 0xFF);
    uint32_t result_mantissa = fp16_mantissa << 13;
    
    uint32_t result_bits = (sign << 31) | (result_exp << 23) | result_mantissa;
    return postprocess_float(result_bits);
}

float convert_fp16_to_fp4(float input) {
    if(std::isnan(input) || std::isinf(input) || input == 0.0f) return input;
    
    uint32_t sign;
    uint32_t bits = preprocess_float(input, sign);
    
    uint32_t fp16_exp = (bits >> 23) & 0x1F;
    uint32_t fp16_mantissa = (bits >> 13) & 0x3FF;
    
    int fp16_unbiased_exp = (fp16_exp == 0) ? 0 : (fp16_exp - 15);
    fp16_unbiased_exp = std::max(-1, std::min(0, fp16_unbiased_exp));
    
    uint32_t fp4_exp = fp16_unbiased_exp + 1;
    uint32_t fp4_mantissa = (fp16_mantissa >> 8) & 0x3;
    
    uint32_t result_exp = (fp4_exp == 0) ? 0 : ((fp16_unbiased_exp + 127) & 0xFF);
    uint32_t result_mantissa = fp4_mantissa << 21;
    
    uint32_t result_bits = (sign << 31) | (result_exp << 23) | result_mantissa;
    return postprocess_float(result_bits);
}

float convert_fp16_to_fp8(float input) {
    if(std::isnan(input) || std::isinf(input) || input == 0.0f) return input;
    
    uint32_t sign;
    uint32_t bits = preprocess_float(input, sign);
    
    uint32_t fp16_exp = (bits >> 23) & 0x1F;
    uint32_t fp16_mantissa = (bits >> 13) & 0x3FF;
    
    int fp16_unbiased_exp = (fp16_exp == 0) ? 0 : (fp16_exp - 15);
    fp16_unbiased_exp = std::max(-7, std::min(8, fp16_unbiased_exp));
    
    uint32_t fp8_exp = fp16_unbiased_exp + 7;
    uint32_t fp8_mantissa = (fp16_mantissa >> 7) & 0x7;
    
    uint32_t result_exp = (fp8_exp == 0) ? 0 : ((fp16_unbiased_exp + 127) & 0xFF);
    uint32_t result_mantissa = fp8_mantissa << 20;
    
    uint32_t result_bits = (sign << 31) | (result_exp << 23) | result_mantissa;
    return postprocess_float(result_bits);
}

// FP64相关的简单转换函数
float convert_fp64_to_fp4(float input) {return convert_to_fp4(input);}
float convert_fp64_to_fp8(float input) {return convert_to_fp8(input);}
float convert_fp64_to_fp16(float input) {return convert_to_fp16(input);}
float convert_fp64_to_fp32(float input) {return input;}

// 获取格式转换函数指针
float (*get_conversion_function(FloatFormat src, FloatFormat dst))(float) {
    static std::unordered_map<int, float(*)(float)> func_map;
    
    if(func_map.empty()) {
        func_map[FP4*10+FP4] = convert_fp4_to_fp32;
        func_map[FP4*10+FP8] = convert_fp4_to_fp8;
        func_map[FP4*10+FP16] = convert_fp4_to_fp16;
        func_map[FP4*10+FP32] = convert_fp4_to_fp32;
        func_map[FP4*10+FP64] = convert_fp4_to_fp64;
        
        func_map[FP8*10+FP4] = convert_fp8_to_fp4;
        func_map[FP8*10+FP8] = convert_fp8_to_fp32;
        func_map[FP8*10+FP16] = convert_fp8_to_fp16;
        func_map[FP8*10+FP32] = convert_fp8_to_fp32;
        func_map[FP8*10+FP64] = convert_fp8_to_fp64;
        
        func_map[FP16*10+FP4] = convert_fp16_to_fp4;
        func_map[FP16*10+FP8] = convert_fp16_to_fp8;
        func_map[FP16*10+FP16] = convert_fp16_to_fp32;
        func_map[FP16*10+FP32] = convert_fp16_to_fp32;
        func_map[FP16*10+FP64] = convert_fp16_to_fp64;
        
        func_map[FP32*10+FP4] = convert_to_fp4;
        func_map[FP32*10+FP8] = convert_to_fp8;
        func_map[FP32*10+FP16] = convert_to_fp16;
        func_map[FP32*10+FP32] = [](float x){return x;};
        func_map[FP32*10+FP64] = convert_to_fp64;
        
        func_map[FP64*10+FP4] = convert_fp64_to_fp4;
        func_map[FP64*10+FP8] = convert_fp64_to_fp8;
        func_map[FP64*10+FP16] = convert_fp64_to_fp16;
        func_map[FP64*10+FP32] = convert_fp64_to_fp32;
        func_map[FP64*10+FP64] = [](float x){return x;};
    }
    
    return func_map[src*10+dst];
}

// 修改 run_hw_conversion_test 函数，移除硬件部分，仅保留软件转换逻辑
std::vector<float> run_sw_conversion_test(FloatFormat src_format, FloatFormat dst_format, const std::vector<float>& input_data) {
    std::vector<float> results(input_data.size());
    
    float (*convert_func)(float) = get_conversion_function(src_format, dst_format);
    
    for(size_t i=0; i<input_data.size(); i++) {
        results[i] = convert_func(input_data[i]);
    }
    
    return results;
}

// 计算误差统计
ErrorStats calculate_error_stats(const std::vector<float>& hw_results, const std::vector<float>& sw_results) {
    ErrorStats stats;
    double total_error = 0.0;
    double total_rel_error = 0.0;
    double total_squared_error = 0.0;
    double total_signal_power = 0.0;
    
    for(size_t i=0;i<hw_results.size() && i<sw_results.size();++i) {
        float hw_val = hw_results[i], sw_val = sw_results[i];
        
        // 处理特殊情况
        if(std::isnan(hw_val) || std::isnan(sw_val)) {stats.nan_count++; continue;}
        if(std::abs(hw_val)<EPSILON && std::abs(sw_val)<EPSILON) {stats.zero_count++; continue;}
        if(std::isinf(hw_val) && !std::isinf(sw_val)) {stats.overflow_count++; continue;}
        if(std::abs(hw_val)<EPSILON && std::abs(sw_val)>=EPSILON) {stats.underflow_count++; continue;}
        
        // 计算绝对误差和相对误差
        double abs_error = std::abs(sw_val - hw_val);
        double rel_error = std::abs(sw_val) < EPSILON ? 0.0 : std::abs((sw_val-hw_val)/sw_val);
        double squared_error = (sw_val - hw_val) * (sw_val - hw_val);
        
        stats.all_errors.push_back(rel_error);
        
        // 更新统计
        stats.min_error = std::min(stats.min_error, abs_error);
        stats.max_error = std::max(stats.max_error, abs_error);
        total_error += abs_error;
        total_rel_error += rel_error;
        total_squared_error += squared_error;
        total_signal_power += sw_val * sw_val;
    }
    
    // 计算统计值
    size_t valid_count = stats.all_errors.size();
    if(valid_count > 0) {
        stats.avg_error = total_error / valid_count;
        stats.avg_rel_error = total_rel_error / valid_count;
        stats.mse = total_squared_error / valid_count;
        
        // 计算RSNR (Relative Signal-to-Noise Ratio)
        double signal_power = total_signal_power / valid_count;
        double noise_power = stats.mse;
        if(noise_power > EPSILON) {
            stats.rsnr = 10.0 * std::log10(signal_power / noise_power);
        } else {
            stats.rsnr = std::numeric_limits<double>::infinity(); // 无噪声情况
        }
        
        std::sort(stats.all_errors.begin(), stats.all_errors.end());
        stats.median_error = stats.all_errors[stats.all_errors.size()/2];
    }
    
    // 如果没有有效样本，将最小误差设置为0
    if(stats.min_error == std::numeric_limits<double>::max()) stats.min_error = 0.0;
    
    return stats;
}

// 打印误差统计结果
void print_error_stats(const ErrorStats& stats, FloatFormat src, FloatFormat dst) {
    int total_samples = stats.nan_count+stats.zero_count+stats.overflow_count+stats.underflow_count+stats.all_errors.size();
    
    std::cout<<get_format_name(src)<<"→"<<get_format_name(dst)<<": ";
    // 打印主要误差指标，使用小数形式
    std::cout<<"最小误差: "<<std::fixed<<std::setprecision(8)<<stats.min_error
             <<", 最大误差: "<<std::fixed<<std::setprecision(8)<<stats.max_error
             <<", 平均误差: "<<std::fixed<<std::setprecision(8)<<stats.avg_error
             <<", 平均相对误差率: "<<std::fixed<<std::setprecision(8)<<stats.avg_rel_error * 100.0<<"%"<<std::endl;
}

// 添加详细统计信息打印函数
void print_detailed_stats(const ErrorStats& stats, FloatFormat src, FloatFormat dst) {
    std::cout << "\n" << get_format_name(src) << "→" << get_format_name(dst) << " 详细统计:" << std::endl;
    std::cout << "------------------------" << std::endl;
    
    // 有效样本比例
    int total = stats.nan_count + stats.zero_count + stats.overflow_count + stats.underflow_count + stats.all_errors.size();
    double valid_rate = stats.all_errors.empty() ? 0.0 : 100.0 * stats.all_errors.size() / total;
    
    std::cout << "总样本数: " << total << std::endl;
    std::cout << "有效样本: " << stats.all_errors.size() << " (" << std::fixed << std::setprecision(2) << valid_rate << "%)" << std::endl;
    std::cout << "异常样本: " << (total - stats.all_errors.size()) << " (" << std::fixed << std::setprecision(2) << (100.0 - valid_rate) << "%)" << std::endl;
    
    // 异常样本细分
    std::cout << "  NaN: " << stats.nan_count << std::endl;
    std::cout << "  零值: " << stats.zero_count << std::endl;
    std::cout << "  溢出: " << stats.overflow_count << std::endl;
    std::cout << "  下溢: " << stats.underflow_count << std::endl;
    
    if (!stats.all_errors.empty()) {
        // 误差统计
        std::cout << "误差统计:" << std::endl;
        std::cout << "  最小误差: " << std::fixed << std::setprecision(8) << stats.min_error << std::endl;
        std::cout << "  最大误差: " << std::fixed << std::setprecision(8) << stats.max_error << std::endl;
        std::cout << "  平均误差: " << std::fixed << std::setprecision(8) << stats.avg_error << std::endl;
        std::cout << "  平均相对误差率: " << std::fixed << std::setprecision(8) << stats.avg_rel_error * 100.0 << "%" << std::endl;
    }
    std::cout << std::endl;
}

// 修改 main 函数
int main(int argc, char* argv[]) {
    auto start_time = std::chrono::high_resolution_clock::now();
    bool detailed_output = false; // 是否输出详细统计信息
    
    // 解析命令行参数
    for(int i=1; i<argc; i++) {
        if(std::string(argv[i]) == "--samples" && i+1 < argc) {
            SAMPLE_NUM = std::stoi(argv[i+1]);
            i++;
        } else if(std::string(argv[i]) == "--vector-size" && i+1 < argc) {
            VECTOR_SIZE = std::stoi(argv[i+1]);
            i++;
        } else if(std::string(argv[i]) == "--wave") {
            ENABLE_WAVEFORM = true;
        } else if(std::string(argv[i]) == "--verbose") {
            ENABLE_PRINTING = true;
        } else if(std::string(argv[i]) == "--detailed") {
            detailed_output = true;
        }
    }
    
    std::cout << "ConvNeXt FP32转换精度测试工具" << std::endl;
    std::cout << "=======================" << std::endl;
    std::cout << "数据文件: " << FP32_FILE << std::endl;
    std::cout << "样本数量: " << SAMPLE_NUM << std::endl;
    std::cout << "向量大小: " << VECTOR_SIZE << std::endl;
    std::cout << std::endl;
    
    // 加载测试数据
    auto data = load_fp32_data(FP32_FILE, SAMPLE_NUM);
    
    // 仅测试FP32转换到其他格式的用例
    struct ConversionCase {FloatFormat src; FloatFormat dst;};
    std::vector<ConversionCase> test_cases = {
        {FP32, FP16}, {FP32, FP8}, {FP32, FP4}
    };
    
    // 整体统计
    struct OverallStats {
        double min_error = std::numeric_limits<double>::max();
        double max_error = 0.0;
        double total_avg_error = 0.0;
        double total_avg_rel_error = 0.0;
        int total_nan = 0;
        int total_zero = 0;
        int total_overflow = 0;
        int total_underflow = 0;
        int total_samples = 0;
    } overall;
    
    std::cout << "正在进行ConvNeXt FP32精度转换测试..." << std::endl;
    
    // 执行测试
    for(const auto& tc : test_cases) {
        auto converted = run_sw_conversion_test(tc.src, tc.dst, data);
        auto reference = run_sw_conversion_test(tc.dst, tc.src, converted); // 先转换后还原
        
        ErrorStats stats = calculate_error_stats(reference, data);
        print_error_stats(stats, tc.src, tc.dst);
        
        if(detailed_output) print_detailed_stats(stats, tc.src, tc.dst);
        
        // 累计整体统计
        int case_total = stats.nan_count + stats.zero_count + stats.overflow_count + stats.underflow_count + stats.all_errors.size();
        
        overall.min_error = std::min(overall.min_error, stats.min_error);
        overall.max_error = std::max(overall.max_error, stats.max_error);
        overall.total_avg_error += stats.avg_error;
        overall.total_avg_rel_error += stats.avg_rel_error;
        overall.total_nan += stats.nan_count;
        overall.total_zero += stats.zero_count;
        overall.total_overflow += stats.overflow_count;
        overall.total_underflow += stats.underflow_count;
        overall.total_samples += case_total;
    }
    
    // 输出整体统计
    std::cout << "\n整体统计结果" << std::endl;
    std::cout << "=================" << std::endl;
    std::cout << "最小误差: " << std::fixed << std::setprecision(8) << overall.min_error << std::endl;
    std::cout << "最大误差: " << std::fixed << std::setprecision(8) << overall.max_error << std::endl;
    std::cout << "平均误差: " << std::fixed << std::setprecision(8) << overall.total_avg_error / test_cases.size() << std::endl;
    std::cout << "平均相对误差率: " << std::fixed << std::setprecision(8) << overall.total_avg_rel_error / test_cases.size() * 100.0 << "%" << std::endl;
    std::cout << "NaN总数: " << overall.total_nan << std::endl;
    std::cout << "零值总数: " << overall.total_zero << std::endl;
    std::cout << "溢出总数: " << overall.total_overflow << std::endl;
    std::cout << "下溢总数: " << overall.total_underflow << std::endl;
    
    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    
    std::cout << "\n测试完成，总耗时: " << duration << "毫秒" << std::endl;
    
    return 0;
}
#endif 