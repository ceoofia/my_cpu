TARGET ?= IF_Stage_tb
OUT_DIR = output_dump

PKG = rtl/cpu_pkg.sv
RTL := $(wildcard rtl/*.sv)

TB = testbenches/$(TARGET).sv

all: run

$(OUT_DIR):
	mkdir -p $(OUT_DIR)

$(OUT_DIR)/$(TARGET): $(PKG) $(RTL) $(TB) | $(OUT_DIR)
	iverilog -g2012 \
	-s $(TARGET) \
	-o $@ \
	$^

run: $(OUT_DIR)/$(TARGET)
	vvp $<

clean:
	rm -rf $(OUT_DIR)

.PHONY: all run clean