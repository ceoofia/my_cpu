TARGET  = PC_Fetch_tb
OUT_DIR = output_dump

RTL = PC_Fetch.sv
TB  = testbenches/PC_Fetch_tb.sv
PKG = cpu_pkg.sv

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