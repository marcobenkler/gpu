golden_%:
	python3 verify/golden_model/$*_golden_model.py

RTL_PKG_FILE := $(shell find rtl -name "*_pkg.sv")

FILES_sfu_sign_expo := \
	rtl/execute/sfu/sfu_sign_expo.sv \
	verify/assertions/sfu/sfu_sign_expo_assertions.sv \
	verify/bind/sfu/sfu_sign_expo_bind.sv 
FILES_tb_sfu_sign_expo := verify/tb/sfu/tb_sfu_sign_expo.sv 

FILES_fpu_golden := \
	rtl/execute/FU/Float/fpu_add_sub.sv \
	rtl/execute/FU/Float/fpu_cmp.sv \
	rtl/execute/FU/Float/fpu_cvt.sv \
	rtl/execute/FU/Float/fpu_mul.sv \
	rtl/execute/FU/Float/fpu_normalize.sv \
	rtl/execute/FU/Float/fpu_rounding.sv \
	rtl/execute/FU/Float/fpu_shifter.sv \
	rtl/execute/FU/Float/fpu_top.sv \
	rtl/execute/FU/Float/fpu_unpack.sv
FILES_tb_fpu_golden := verify/tb/execute/fpu/tb_fpu_golden.sv

FILES_gpu := $(shell find rtl -name "*.sv" ! -name "*_pkg.sv" ! -path "*/sfu/*")
FILES_tb_gpu := verify/tb/tb_gpu.sv

.PHONY: vsim

cocotb:
	$(MAKE) -f $(shell cocotb-config --makefiles)/Makefile.sim \
		SIM=verilator \
		TOPLEVEL_LANG=verilog \
		VERILOG_SOURCES="$(RTL_PKG_FILE) $(FILES_gpu)" \
		TOPLEVEL=gpu \
		COCOTB_TEST_MODULES=smoke_test \
		SIM_BUILD=sim_build \
		EXTRA_ARGS="--trace-fst --trace-structs" \
		PYTHONPATH="$(PWD)/verify/tb"

vsim: 
ifndef TEST
	$(error Enter test, e.g. make sim TEST=sfu_sign_expo)
endif
ifndef FILES_$(TEST)
	$(error Unknown test: $(TEST))
endif
	verilator --binary --trace-fst --assert --trace-structs -sv -coverage \
		-Mdir obj_dir -o sim_$(TEST) \
		$(RTL_PKG_FILE) $(FILES_$(TEST)) $(FILES_tb_$(TEST)) \
		--top-module tb_$(TEST)
	./obj_dir/sim_$(TEST)
	verilator_coverage --annotate logs/coverage_$(TEST) coverage.dat
	mv coverage.dat logs/coverage_$(TEST).dat
