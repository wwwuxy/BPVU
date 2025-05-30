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
	main_resnet_add_p32 \
	main_resnet_div_p32 \
	main_resnet_dot_p32 \
	main_resnet_fp32Top32 \
	main_resnet_greater_p32 \
	main_resnet_less_p32 \
	main_resnet_mul_p32 \
	main_resnet_p32Tofp32 \
	main_resnet_sub_p32 \
	main_resnet_truncate_p32 \
	main_simple_test \

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

main_resnet_add_p32.o: /home/wuxy/BPVU/csrc/main_resnet_add_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_div_p32.o: /home/wuxy/BPVU/csrc/main_resnet_div_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_dot_p32.o: /home/wuxy/BPVU/csrc/main_resnet_dot_p32.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_fp32Top32.o: /home/wuxy/BPVU/csrc/main_resnet_fp32Top32.cpp
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
main_simple_test.o: /home/wuxy/BPVU/csrc/main_simple_test.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VPvuTop: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
