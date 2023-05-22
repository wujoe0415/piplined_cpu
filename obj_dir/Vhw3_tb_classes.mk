# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vhw3_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vhw3_tb \
	Vhw3_tb___024root__DepSet_hacb7507d__0 \
	Vhw3_tb___024root__DepSet_hc5bed11e__0 \
	Vhw3_tb_hw3_tb__DepSet_h33843fb5__0 \
	Vhw3_tb_core_top__DepSet_hfe4bd727__0 \
	Vhw3_tb_dmem__DepSet_h713ae65a__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vhw3_tb___024root__Slow \
	Vhw3_tb___024root__DepSet_hacb7507d__0__Slow \
	Vhw3_tb___024root__DepSet_hc5bed11e__0__Slow \
	Vhw3_tb_hw3_tb__Slow \
	Vhw3_tb_hw3_tb__DepSet_h529000e6__0__Slow \
	Vhw3_tb_core_top__Slow \
	Vhw3_tb_core_top__DepSet_h17425858__0__Slow \
	Vhw3_tb_dmem__Slow \
	Vhw3_tb_dmem__DepSet_h90314703__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vhw3_tb__Dpi \
	Vhw3_tb__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vhw3_tb__Syms \
	Vhw3_tb__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
