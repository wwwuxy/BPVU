# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VPvuTop.mk

default: VPvuTop

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VPvuTop
# Module prefix (from --prefix)
VM_MODPREFIX = VPvuTop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	main_alexnet_add_p32 \
	main_alexnet_convert_p32 \
	main_alexnet_div_p32 \
	main_alexnet_dot_p32 \
	main_alexnet_fp32Top32 \
	main_alexnet_fp32_convert \
	main_alexnet_greater_p32 \
	main_alexnet_less_p32 \
	main_alexnet_mul_p32 \
	main_alexnet_p32Tofp32 \
	main_alexnet_sub_p32 \
	main_alexnet_truncate_p32 \
	main_convnext_add_p32 \
	main_convnext_convert_p32 \
	main_convnext_div_p32 \
	main_convnext_dot_p32 \
	main_convnext_fp32Top32 \
	main_convnext_fp32_convert \
	main_convnext_greater_p32 \
	main_convnext_less_p32 \
	main_convnext_mul_p32 \
	main_convnext_p32Tofp32 \
	main_convnext_sub_p32 \
	main_convnext_truncate_p32 \
	main_efficientnet_add_p32 \
	main_efficientnet_convert_p32 \
	main_efficientnet_div_p32 \
	main_efficientnet_dot_p32 \
	main_efficientnet_fp32Top32 \
	main_efficientnet_fp32_convert \
	main_efficientnet_greater_p32 \
	main_efficientnet_less_p32 \
	main_efficientnet_mul_p32 \
	main_efficientnet_p32Tofp32 \
	main_efficientnet_sub_p32 \
	main_efficientnet_truncate_p32 \
	main_lenet_add_p32 \
	main_lenet_convert_p32 \
	main_lenet_div_p32 \
	main_lenet_dot_p32 \
	main_lenet_fp32Top32 \
	main_lenet_fp32_convert \
	main_lenet_greater_p32 \
	main_lenet_less_p32 \
	main_lenet_mul_p32 \
	main_lenet_p32Tofp32 \
	main_lenet_sub_p32 \
	main_lenet_truncate_p32 \
	main_mobilenet_add_p32 \
	main_mobilenet_convert_p32 \
	main_mobilenet_div_p32 \
	main_mobilenet_dot_p32 \
	main_mobilenet_fp32Top32 \
	main_mobilenet_fp32_convert \
	main_mobilenet_greater_p32 \
	main_mobilenet_less_p32 \
	main_mobilenet_mul_p32 \
	main_mobilenet_p32Tofp32 \
	main_mobilenet_sub_p32 \
	main_mobilenet_truncate_p32 \
	main_regnet_add_p32 \
	main_regnet_convert_p32 \
	main_regnet_div_p32 \
	main_regnet_dot_p32 \
	main_regnet_fp32Top32 \
	main_regnet_fp32_convert \
	main_regnet_greater_p32 \
	main_regnet_less_p32 \
	main_regnet_mul_p32 \
	main_regnet_p32Tofp32 \
	main_regnet_sub_p32 \
	main_regnet_truncate_p32 \
	main_resnet_add_p32 \
	main_resnet_convert_p32 \
	main_resnet_div_p32 \
	main_resnet_dot_p32 \
	main_resnet_fp32Top32 \
	main_resnet_fp32_convert \
	main_resnet_greater_p32 \
	main_resnet_less_p32 \
	main_resnet_mul_p32 \
	main_resnet_p32Tofp32 \
	main_resnet_sub_p32 \
	main_resnet_truncate_p32 \
	main_shufflenetv2_add_p32 \
	main_shufflenetv2_convert_p32 \
	main_shufflenetv2_div_p32 \
	main_shufflenetv2_dot_p32 \
	main_shufflenetv2_fp32Top32 \
	main_shufflenetv2_fp32_convert \
	main_shufflenetv2_greater_p32 \
	main_shufflenetv2_less_p32 \
	main_shufflenetv2_mul_p32 \
	main_shufflenetv2_p32Tofp32 \
	main_shufflenetv2_sub_p32 \
	main_shufflenetv2_truncate_p32 \
	main_simple_test \
	main_squeezenet_add_p32 \
	main_squeezenet_convert_p32 \
	main_squeezenet_div_p32 \
	main_squeezenet_dot_p32 \
	main_squeezenet_fp32Top32 \
	main_squeezenet_fp32_convert \
	main_squeezenet_greater_p32 \
	main_squeezenet_less_p32 \
	main_squeezenet_mul_p32 \
	main_squeezenet_p32Tofp32 \
	main_squeezenet_sub_p32 \
	main_squeezenet_truncate_p32 \
	main_vgg_add_p32 \
	main_vgg_convert_p32 \
	main_vgg_div_p32 \
	main_vgg_dot_p32 \
	main_vgg_fp32Top32 \
	main_vgg_fp32_convert \
	main_vgg_greater_p32 \
	main_vgg_less_p32 \
	main_vgg_mul_p32 \
	main_vgg_p32Tofp32 \
	main_vgg_sub_p32 \
	main_vgg_truncate_p32 \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/wuxy/BPVU/csrc \


### Default rules...
# Include list of all generated classes
include VPvuTop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

main_alexnet_add_p32.o: /home/wuxy/BPVU/csrc/main_alexnet_add_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_convert_p32.o: /home/wuxy/BPVU/csrc/main_alexnet_convert_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_div_p32.o: /home/wuxy/BPVU/csrc/main_alexnet_div_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_dot_p32.o: /home/wuxy/BPVU/csrc/main_alexnet_dot_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_fp32Top32.o: /home/wuxy/BPVU/csrc/main_alexnet_fp32Top32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_fp32_convert.o: /home/wuxy/BPVU/csrc/main_alexnet_fp32_convert.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_greater_p32.o: /home/wuxy/BPVU/csrc/main_alexnet_greater_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_less_p32.o: /home/wuxy/BPVU/csrc/main_alexnet_less_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_mul_p32.o: /home/wuxy/BPVU/csrc/main_alexnet_mul_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_p32Tofp32.o: /home/wuxy/BPVU/csrc/main_alexnet_p32Tofp32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_sub_p32.o: /home/wuxy/BPVU/csrc/main_alexnet_sub_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_truncate_p32.o: /home/wuxy/BPVU/csrc/main_alexnet_truncate_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_add_p32.o: /home/wuxy/BPVU/csrc/main_convnext_add_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_convert_p32.o: /home/wuxy/BPVU/csrc/main_convnext_convert_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_div_p32.o: /home/wuxy/BPVU/csrc/main_convnext_div_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_dot_p32.o: /home/wuxy/BPVU/csrc/main_convnext_dot_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_fp32Top32.o: /home/wuxy/BPVU/csrc/main_convnext_fp32Top32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_fp32_convert.o: /home/wuxy/BPVU/csrc/main_convnext_fp32_convert.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_greater_p32.o: /home/wuxy/BPVU/csrc/main_convnext_greater_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_less_p32.o: /home/wuxy/BPVU/csrc/main_convnext_less_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_mul_p32.o: /home/wuxy/BPVU/csrc/main_convnext_mul_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_p32Tofp32.o: /home/wuxy/BPVU/csrc/main_convnext_p32Tofp32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_sub_p32.o: /home/wuxy/BPVU/csrc/main_convnext_sub_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_truncate_p32.o: /home/wuxy/BPVU/csrc/main_convnext_truncate_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_add_p32.o: /home/wuxy/BPVU/csrc/main_efficientnet_add_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_convert_p32.o: /home/wuxy/BPVU/csrc/main_efficientnet_convert_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_div_p32.o: /home/wuxy/BPVU/csrc/main_efficientnet_div_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_dot_p32.o: /home/wuxy/BPVU/csrc/main_efficientnet_dot_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_fp32Top32.o: /home/wuxy/BPVU/csrc/main_efficientnet_fp32Top32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_fp32_convert.o: /home/wuxy/BPVU/csrc/main_efficientnet_fp32_convert.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_greater_p32.o: /home/wuxy/BPVU/csrc/main_efficientnet_greater_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_less_p32.o: /home/wuxy/BPVU/csrc/main_efficientnet_less_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_mul_p32.o: /home/wuxy/BPVU/csrc/main_efficientnet_mul_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_p32Tofp32.o: /home/wuxy/BPVU/csrc/main_efficientnet_p32Tofp32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_sub_p32.o: /home/wuxy/BPVU/csrc/main_efficientnet_sub_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_truncate_p32.o: /home/wuxy/BPVU/csrc/main_efficientnet_truncate_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_add_p32.o: /home/wuxy/BPVU/csrc/main_lenet_add_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_convert_p32.o: /home/wuxy/BPVU/csrc/main_lenet_convert_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_div_p32.o: /home/wuxy/BPVU/csrc/main_lenet_div_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_dot_p32.o: /home/wuxy/BPVU/csrc/main_lenet_dot_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_fp32Top32.o: /home/wuxy/BPVU/csrc/main_lenet_fp32Top32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_fp32_convert.o: /home/wuxy/BPVU/csrc/main_lenet_fp32_convert.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_greater_p32.o: /home/wuxy/BPVU/csrc/main_lenet_greater_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_less_p32.o: /home/wuxy/BPVU/csrc/main_lenet_less_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_mul_p32.o: /home/wuxy/BPVU/csrc/main_lenet_mul_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_p32Tofp32.o: /home/wuxy/BPVU/csrc/main_lenet_p32Tofp32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_sub_p32.o: /home/wuxy/BPVU/csrc/main_lenet_sub_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_truncate_p32.o: /home/wuxy/BPVU/csrc/main_lenet_truncate_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_add_p32.o: /home/wuxy/BPVU/csrc/main_mobilenet_add_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_convert_p32.o: /home/wuxy/BPVU/csrc/main_mobilenet_convert_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_div_p32.o: /home/wuxy/BPVU/csrc/main_mobilenet_div_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_dot_p32.o: /home/wuxy/BPVU/csrc/main_mobilenet_dot_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_fp32Top32.o: /home/wuxy/BPVU/csrc/main_mobilenet_fp32Top32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_fp32_convert.o: /home/wuxy/BPVU/csrc/main_mobilenet_fp32_convert.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_greater_p32.o: /home/wuxy/BPVU/csrc/main_mobilenet_greater_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_less_p32.o: /home/wuxy/BPVU/csrc/main_mobilenet_less_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_mul_p32.o: /home/wuxy/BPVU/csrc/main_mobilenet_mul_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_p32Tofp32.o: /home/wuxy/BPVU/csrc/main_mobilenet_p32Tofp32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_sub_p32.o: /home/wuxy/BPVU/csrc/main_mobilenet_sub_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_truncate_p32.o: /home/wuxy/BPVU/csrc/main_mobilenet_truncate_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_add_p32.o: /home/wuxy/BPVU/csrc/main_regnet_add_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_convert_p32.o: /home/wuxy/BPVU/csrc/main_regnet_convert_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_div_p32.o: /home/wuxy/BPVU/csrc/main_regnet_div_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_dot_p32.o: /home/wuxy/BPVU/csrc/main_regnet_dot_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_fp32Top32.o: /home/wuxy/BPVU/csrc/main_regnet_fp32Top32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_fp32_convert.o: /home/wuxy/BPVU/csrc/main_regnet_fp32_convert.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_greater_p32.o: /home/wuxy/BPVU/csrc/main_regnet_greater_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_less_p32.o: /home/wuxy/BPVU/csrc/main_regnet_less_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_mul_p32.o: /home/wuxy/BPVU/csrc/main_regnet_mul_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_p32Tofp32.o: /home/wuxy/BPVU/csrc/main_regnet_p32Tofp32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_sub_p32.o: /home/wuxy/BPVU/csrc/main_regnet_sub_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_truncate_p32.o: /home/wuxy/BPVU/csrc/main_regnet_truncate_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_add_p32.o: /home/wuxy/BPVU/csrc/main_resnet_add_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_convert_p32.o: /home/wuxy/BPVU/csrc/main_resnet_convert_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_div_p32.o: /home/wuxy/BPVU/csrc/main_resnet_div_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_dot_p32.o: /home/wuxy/BPVU/csrc/main_resnet_dot_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_fp32Top32.o: /home/wuxy/BPVU/csrc/main_resnet_fp32Top32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_fp32_convert.o: /home/wuxy/BPVU/csrc/main_resnet_fp32_convert.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_greater_p32.o: /home/wuxy/BPVU/csrc/main_resnet_greater_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_less_p32.o: /home/wuxy/BPVU/csrc/main_resnet_less_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_mul_p32.o: /home/wuxy/BPVU/csrc/main_resnet_mul_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_p32Tofp32.o: /home/wuxy/BPVU/csrc/main_resnet_p32Tofp32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_sub_p32.o: /home/wuxy/BPVU/csrc/main_resnet_sub_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_truncate_p32.o: /home/wuxy/BPVU/csrc/main_resnet_truncate_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_add_p32.o: /home/wuxy/BPVU/csrc/main_shufflenetv2_add_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_convert_p32.o: /home/wuxy/BPVU/csrc/main_shufflenetv2_convert_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_div_p32.o: /home/wuxy/BPVU/csrc/main_shufflenetv2_div_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_dot_p32.o: /home/wuxy/BPVU/csrc/main_shufflenetv2_dot_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_fp32Top32.o: /home/wuxy/BPVU/csrc/main_shufflenetv2_fp32Top32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_fp32_convert.o: /home/wuxy/BPVU/csrc/main_shufflenetv2_fp32_convert.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_greater_p32.o: /home/wuxy/BPVU/csrc/main_shufflenetv2_greater_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_less_p32.o: /home/wuxy/BPVU/csrc/main_shufflenetv2_less_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_mul_p32.o: /home/wuxy/BPVU/csrc/main_shufflenetv2_mul_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_p32Tofp32.o: /home/wuxy/BPVU/csrc/main_shufflenetv2_p32Tofp32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_sub_p32.o: /home/wuxy/BPVU/csrc/main_shufflenetv2_sub_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_truncate_p32.o: /home/wuxy/BPVU/csrc/main_shufflenetv2_truncate_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_simple_test.o: /home/wuxy/BPVU/csrc/main_simple_test.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_add_p32.o: /home/wuxy/BPVU/csrc/main_squeezenet_add_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_convert_p32.o: /home/wuxy/BPVU/csrc/main_squeezenet_convert_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_div_p32.o: /home/wuxy/BPVU/csrc/main_squeezenet_div_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_dot_p32.o: /home/wuxy/BPVU/csrc/main_squeezenet_dot_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_fp32Top32.o: /home/wuxy/BPVU/csrc/main_squeezenet_fp32Top32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_fp32_convert.o: /home/wuxy/BPVU/csrc/main_squeezenet_fp32_convert.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_greater_p32.o: /home/wuxy/BPVU/csrc/main_squeezenet_greater_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_less_p32.o: /home/wuxy/BPVU/csrc/main_squeezenet_less_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_mul_p32.o: /home/wuxy/BPVU/csrc/main_squeezenet_mul_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_p32Tofp32.o: /home/wuxy/BPVU/csrc/main_squeezenet_p32Tofp32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_sub_p32.o: /home/wuxy/BPVU/csrc/main_squeezenet_sub_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_truncate_p32.o: /home/wuxy/BPVU/csrc/main_squeezenet_truncate_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_add_p32.o: /home/wuxy/BPVU/csrc/main_vgg_add_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_convert_p32.o: /home/wuxy/BPVU/csrc/main_vgg_convert_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_div_p32.o: /home/wuxy/BPVU/csrc/main_vgg_div_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_dot_p32.o: /home/wuxy/BPVU/csrc/main_vgg_dot_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_fp32Top32.o: /home/wuxy/BPVU/csrc/main_vgg_fp32Top32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_fp32_convert.o: /home/wuxy/BPVU/csrc/main_vgg_fp32_convert.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_greater_p32.o: /home/wuxy/BPVU/csrc/main_vgg_greater_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_less_p32.o: /home/wuxy/BPVU/csrc/main_vgg_less_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_mul_p32.o: /home/wuxy/BPVU/csrc/main_vgg_mul_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_p32Tofp32.o: /home/wuxy/BPVU/csrc/main_vgg_p32Tofp32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_sub_p32.o: /home/wuxy/BPVU/csrc/main_vgg_sub_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_truncate_p32.o: /home/wuxy/BPVU/csrc/main_vgg_truncate_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VPvuTop: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
