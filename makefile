golden_%:
	python3 verify/golden_model/$*_golden_model.py

RTL_PKG_FILE := $(shell find rtl -name "*_pkg.sv")

FILES_sfu_sign_expo := \
	rtl/execute/sfu/sfu_sign_expo.sv \
	verify/assertions/sfu/sfu_sign_expo_assertions.sv \
	verify/bind/sfu/sfu_sign_expo_bind.sv 

FILES_tb_sfu_sign_expo := verify/tb/sfu/tb_sfu_sign_expo.sv 

.PHONY: sim

sim: 
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