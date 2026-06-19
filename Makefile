TARGET  = Instr_Mem_tb
OUT_DIR = output_dump

RTL = Instr_Mem.sv
TB  = testbenches/Instr_Mem_tb.sv
PKG = include/cpu_pkg.sv

all: run

$(OUT_DIR):
	mkdir -p $(OUT_DIR)

$(OUT_DIR)/$(TARGET): $(PKG) $(RTL) $(TB) | $(OUT_DIR)
	iverilog -g2012 \
	-I include \
	-s $(TARGET) \
	-o $@ \
	$^

run: $(OUT_DIR)/$(TARGET)
	vvp $<

clean:
	rm -rf $(OUT_DIR)

.PHONY: all run clean