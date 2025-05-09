#!/bin/bash
# 简化版批量更新脚本 - 将ResNet的标准格式应用于其他文件

echo "开始更新所有文件..."

# 复制ResNet的模板文件到临时目录
mkdir -p tmp_templates
cp csrc/main_resnet_add_p32.cpp tmp_templates/add_template.cpp
cp csrc/main_resnet_sub_p32.cpp tmp_templates/sub_template.cpp
cp csrc/main_resnet_mul_p32.cpp tmp_templates/mul_template.cpp
cp csrc/main_resnet_div_p32.cpp tmp_templates/div_template.cpp
cp csrc/main_resnet_dot_p32.cpp tmp_templates/dot_template.cpp

# 网络列表
networks=("efficientnet" "shufflenetv2" "convnext" "squeezenet" "mobilenet" "lenet" "vgg" "alexnet" "regnet")

# 网络路径映射
declare -A net_paths
net_paths["efficientnet"]="EfficientNet"
net_paths["shufflenetv2"]="ShuffleNetv2"
net_paths["convnext"]="ConvNext"
net_paths["squeezenet"]="SqueezeNet"
net_paths["mobilenet"]="MobileNet"
net_paths["lenet"]="LeNet5"
net_paths["vgg"]="VGG"
net_paths["alexnet"]="AlexNet"
net_paths["regnet"]="RegNet"

# 更新函数
update_file() {
    local network=$1
    local op=$2
    local template="tmp_templates/${op}_template.cpp"
    local target="csrc/main_${network}_${op}_p32.cpp"
    local net_path=${net_paths[$network]}
    
    echo "更新 $target (网络=$network, 操作=$op)"
    
    # 复制模板
    cp "$template" "$target"
    
    # 替换配置名
    sed -i "s/CONFIG_RESNET_[A-Z]\+_P32/CONFIG_${network^^}_${op^^}_P32/g" "$target"
    
    # 替换数据路径
    sed -i "s|\"./test_src/ResNet50/|\"./test_src/$net_path/|g" "$target"
    
    echo "完成更新 $target"
}

# 为每个网络更新所有操作
for network in "${networks[@]}"; do
    update_file "$network" "add"
    update_file "$network" "sub"
    update_file "$network" "mul"
    update_file "$network" "div"
    update_file "$network" "dot"
done

# 清理临时目录
rm -rf tmp_templates

echo "所有文件更新完成！" 