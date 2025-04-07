#include"../config.h"
#ifdef CONFIG_RESNET_TRUNCATE_P32

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include "VPvuTop.h"
#include "/home/wuxy/SoftPosit/source/include/softposit.h"

//---------------- 配置参数 -------------------
#define OP   10                     // Posit量化到Int8操作码为10
const char* POSIT_INPUT_FILE = "./test_src/posit_truncate_input.bin";
const char* TRUNCATE_RESULTS_FILE = "./test_src/truncate_results.bin";
const char* WAVEFORM_FILE    = "waveform.vcd";  // 波形输出文件
const int SAMPLE_NUM         = 1000;  // 测试样本数量
const int VECTOR_SIZE       = 4;      // 向量大小
const int BIN_COUNT        = 5;      // 分布统计的区间数
//--------------------------------------------

struct TestData {
    uint32_t posit_input[SAMPLE_NUM][VECTOR_SIZE];  // Posit输入数据
    int32_t truncate_results[SAMPLE_NUM][VECTOR_SIZE];  // 转换后的数据
};

// 跳过 fa0 并读取有效数据
uint32_t read_valid_posit_data(std::ifstream& file) {
    uint32_t data;
    while (file.read(reinterpret_cast<char*>(&data), sizeof(uint32_t))) {
        if (data != 0xfa0) {  // 忽略头部信息 fa0
            return data;
        }
    }
    return 0;  // 如果读取失败，返回 0
}

TestData load_testdata() {
    TestData td;

    // 读取Posit输入数据
    std::ifstream posit_in(POSIT_INPUT_FILE, std::ios::binary);
    if (!posit_in.is_open()) {
        std::cerr << "无法打开Posit输入数据文件: " << POSIT_INPUT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        for (int j = 0; j < VECTOR_SIZE; ++j) {
            td.posit_input[i][j] = read_valid_posit_data(posit_in);
        }
    }

    // 读取truncate_results数据
    std::ifstream truncate_in(TRUNCATE_RESULTS_FILE, std::ios::binary);
    if (!truncate_in.is_open()) {
        std::cerr << "无法打开truncate_results文件: " << TRUNCATE_RESULTS_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    
    // 跳过第一个数字（样本总数）
    int32_t total_samples;
    truncate_in.read(reinterpret_cast<char*>(&total_samples), sizeof(int32_t));
    
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        for (int j = 0; j < VECTOR_SIZE; ++j) {
            truncate_in.read(reinterpret_cast<char*>(&td.truncate_results[i][j]), sizeof(int32_t));
        }
    }

    return td;
}

// 统计信息结构体
struct QuantStats {
    std::vector<int8_t> all_values;  // 所有量化值
    int8_t min_value;                // 最小值
    int8_t max_value;                // 最大值
    double mean_value;               // 平均值
    double std_dev;                  // 标准差
    std::vector<int> bin_counts;     // 区间分布统计
    int8_t bin_width;                // 区间宽度
};

// 输入值统计结构体
struct InputStats {
    std::vector<int32_t> all_values;  // 所有输入值
    int32_t min_value;                // 最小值
    int32_t max_value;                // 最大值
    double mean_value;                // 平均值
    double std_dev;                   // 标准差
    std::vector<int> bin_counts;      // 区间分布统计
    int32_t bin_width;                // 区间宽度
};

// 计算量化统计信息
QuantStats calculate_quant_stats(const std::vector<int8_t>& values) {
    QuantStats stats;
    stats.all_values = values;
    
    // 计算基本统计量
    stats.min_value = *std::min_element(values.begin(), values.end());
    stats.max_value = *std::max_element(values.begin(), values.end());
    
    // 计算平均值
    double sum = 0.0;
    for (int8_t v : values) {
        sum += v;
    }
    stats.mean_value = sum / values.size();
    
    // 计算标准差
    double sum_sq_diff = 0.0;
    for (int8_t v : values) {
        double diff = v - stats.mean_value;
        sum_sq_diff += diff * diff;
    }
    stats.std_dev = std::sqrt(sum_sq_diff / values.size());
    
    // 计算区间分布
    stats.bin_counts.resize(BIN_COUNT, 0);
    stats.bin_width = (stats.max_value - stats.min_value) / BIN_COUNT;
    
    for (int8_t v : values) {
        int bin_index = static_cast<int>((v - stats.min_value) / stats.bin_width);
        if (bin_index >= 0 && bin_index < BIN_COUNT) {
            stats.bin_counts[bin_index]++;
        }
    }
    
    return stats;
}

// 计算输入值统计信息
InputStats calculate_input_stats(const std::vector<int32_t>& values) {
    InputStats stats;
    stats.all_values = values;
    
    // 计算基本统计量
    stats.min_value = *std::min_element(values.begin(), values.end());
    stats.max_value = *std::max_element(values.begin(), values.end());
    
    // 计算平均值
    double sum = 0.0;
    for (int32_t v : values) {
        sum += v;
    }
    stats.mean_value = sum / values.size();
    
    // 计算标准差
    double sum_sq_diff = 0.0;
    for (int32_t v : values) {
        double diff = v - stats.mean_value;
        sum_sq_diff += diff * diff;
    }
    stats.std_dev = std::sqrt(sum_sq_diff / values.size());
    
    // 计算区间分布
    stats.bin_counts.resize(BIN_COUNT, 0);
    stats.bin_width = (stats.max_value - stats.min_value) / BIN_COUNT;
    
    for (int32_t v : values) {
        int bin_index = static_cast<int>((v - stats.min_value) / stats.bin_width);
        if (bin_index >= 0 && bin_index < BIN_COUNT) {
            stats.bin_counts[bin_index]++;
        }
    }
    
    return stats;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // 启用波形跟踪
    Verilated::traceEverOn(true);

    VPvuTop* top = new VPvuTop;

    // 创建 VCD 文件对象用于波形输出
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // 设置波形深度
    tfp->open(WAVEFORM_FILE);  // 打开波形输出文件

    // 加载测试数据
    TestData td = load_testdata();

    // 初始化信号
    top->clock = 0;
    top->reset = 1;
    top->eval();

    // 复位序列（2周期）
    for (int i = 0; i < 2; ++i) {
        top->clock ^= 1;
        top->eval();
        tfp->dump(i);  // 转储波形数据
    }
    top->reset = 0;

    // 存储所有量化结果和输入值
    std::vector<int8_t> all_quantized_values;
    std::vector<int32_t> all_input_values;
    std::vector<int32_t> all_truncate_values;
    all_quantized_values.reserve(SAMPLE_NUM * VECTOR_SIZE);
    all_input_values.reserve(SAMPLE_NUM * VECTOR_SIZE);
    all_truncate_values.reserve(SAMPLE_NUM * VECTOR_SIZE);

    // 测试主循环
    for (size_t i = 0; i < SAMPLE_NUM; ++i) {
        // 设置posit输入数据
        uint32_t* posit_in = td.posit_input[i];

        top->io_posit_i1_0 = posit_in[0];
        top->io_posit_i1_1 = posit_in[1];
        top->io_posit_i1_2 = posit_in[2];
        top->io_posit_i1_3 = posit_in[3];
        
        // 第二个posit输入端不使用，设为0
        top->io_posit_i2_0 = 0;
        top->io_posit_i2_1 = 0;
        top->io_posit_i2_2 = 0;
        top->io_posit_i2_3 = 0;
        
        //设置float输入数据，不使用
        top->io_float_i_0 = 0;
        top->io_float_i_1 = 0;
        top->io_float_i_2 = 0;
        top->io_float_i_3 = 0;

        top->io_float_i2_0 = 0;
        top->io_float_i2_1 = 0;
        top->io_float_i2_2 = 0;
        top->io_float_i2_3 = 0;

        //设置信号量
        top->io_op = OP;              // 操作码10：Posit量化到Int8
        top->io_Isposit = true;       // 输入是posit数
        top->io_Outposit = false;     // 输出是Int8
        top->io_float_mode = 3;       // 使用FP32格式
        top->io_float_posit = true;   // 此选项无影响

        //设置数据位宽
        top->io_src_posit_width = 32; // 使用32位posit
        top->io_dst_posit_width = 8;  // 输出为Int8
        top->io_vector_size = VECTOR_SIZE;  // 使用4个元素的向量

        // 运行一次计算
        top->clock = 1;
        top->eval();
        tfp->dump(i*2 + 1);  // 转储波形数据

        top->clock = 0;
        top->eval();
        tfp->dump(i*2 + 2);  // 转储波形数据

        // 获取量化结果
        int8_t quantized[VECTOR_SIZE] = {
            static_cast<int8_t>(top->io_int_o_0),
            static_cast<int8_t>(top->io_int_o_1),
            static_cast<int8_t>(top->io_int_o_2),
            static_cast<int8_t>(top->io_int_o_3)
        };

        // 存储输入值和量化结果
        for(int j = 0; j < VECTOR_SIZE; j++) {
            all_input_values.push_back(td.truncate_results[i][j]);
            all_quantized_values.push_back(quantized[j]);
            all_truncate_values.push_back(td.truncate_results[i][j]);
        }

        // 打印当前样本的量化结果和输入值
        std::cout << "样本 " << i << ":\n";
        std::cout << "  输入值: ";
        for(int j = 0; j < VECTOR_SIZE; j++) {
            std::cout << td.truncate_results[i][j] << " ";
        }
        std::cout << "\n  量化结果: ";
        for(int j = 0; j < VECTOR_SIZE; j++) {
            std::cout << static_cast<int>(quantized[j]) << " ";
        }
        std::cout << std::endl;

        // 进度显示
        if ((i+1) % 100 == 0) {
            std::cout << "已处理 " << (i+1) << "/" << SAMPLE_NUM 
                      << " (" << ((i+1)*100/SAMPLE_NUM) << "%)" 
                      << std::endl;
        }
    }

    // 计算统计信息
    QuantStats quant_stats = calculate_quant_stats(all_quantized_values);
    InputStats input_stats = calculate_input_stats(all_input_values);
    InputStats truncate_stats = calculate_input_stats(all_truncate_values);  // 新增：计算truncate统计信息

    // 打印统计报告
    std::cout << "\n量化统计报告\n============="
              << "\n总样本数: " << SAMPLE_NUM
              << "\n总数据点: " << all_quantized_values.size()
              << "\n\n量化后统计:"
              << "\n最小值:   " << static_cast<int>(quant_stats.min_value)
              << "\n最大值:   " << static_cast<int>(quant_stats.max_value)
              << "\n平均值:   " << std::fixed << std::setprecision(2) << quant_stats.mean_value
              << "\n标准差:   " << std::fixed << std::setprecision(2) << quant_stats.std_dev
              << "\n\n量化前统计:"
              << "\n最小值:   " << input_stats.min_value
              << "\n最大值:   " << input_stats.max_value
              << "\n平均值:   " << std::fixed << std::setprecision(2) << input_stats.mean_value
              << "\n标准差:   " << std::fixed << std::setprecision(2) << input_stats.std_dev
              << "\n\nTruncate结果统计:"
              << "\n最小值:   " << truncate_stats.min_value
              << "\n最大值:   " << truncate_stats.max_value
              << "\n平均值:   " << std::fixed << std::setprecision(2) << truncate_stats.mean_value
              << "\n标准差:   " << std::fixed << std::setprecision(2) << truncate_stats.std_dev
              << "\n\n量化后值分布 (区间宽度: " << static_cast<int>(quant_stats.bin_width) << "):"
              << std::endl;

    // 打印量化后值分布统计
    for(int i = 0; i < BIN_COUNT; i++) {
        if(quant_stats.bin_counts[i] > 0) {
            int8_t bin_start = quant_stats.min_value + i * quant_stats.bin_width;
            int8_t bin_end = bin_start + quant_stats.bin_width;
            std::cout << "区间 [" << static_cast<int>(bin_start) << ", " << static_cast<int>(bin_end) << "): "
                      << quant_stats.bin_counts[i] << " 次 ("
                      << std::fixed << std::setprecision(2)
                      << (quant_stats.bin_counts[i] * 100.0 / all_quantized_values.size())
                      << "%)" << std::endl;
        }
    }

    // 打印truncate结果分布统计
    std::cout << "\nTruncate结果分布 (区间宽度: " << truncate_stats.bin_width << "):" << std::endl;
    for(int i = 0; i < BIN_COUNT; i++) {
        if(truncate_stats.bin_counts[i] > 0) {
            int32_t bin_start = truncate_stats.min_value + i * truncate_stats.bin_width;
            int32_t bin_end = bin_start + truncate_stats.bin_width;
            std::cout << "区间 [" << bin_start << ", " << bin_end << "): "
                      << truncate_stats.bin_counts[i] << " 次 ("
                      << std::fixed << std::setprecision(2)
                      << (truncate_stats.bin_counts[i] * 100.0 / all_truncate_values.size())
                      << "%)" << std::endl;
        }
    }

    // 资源清理
    tfp->close();  // 关闭波形文件
    top->final();
    delete top;
    delete tfp;

    return EXIT_SUCCESS;
}

#endif 