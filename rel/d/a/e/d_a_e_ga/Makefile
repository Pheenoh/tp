#
# Generated By: dol2asm
#

M67_TARGET := $(BUILD_DIR)/rel/d/a/e/d_a_e_ga.plf
M67_LDSCRIPT := $(BUILD_DIR)/rel/d/a/e/d_a_e_ga.lcf
M67_MAP := $(BUILD_DIR)/rel/d/a/e/d_a_e_ga.map

M67_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/e/d_a_e_ga/d_a_e_ga.cpp \

M67_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/e/d_a_e_ga/d_a_e_ga.o \

M67_LIBS := \

M67_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M67_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M67_LDSCRIPT) \
	-unused -map $(M67_MAP) \
	-w off \

$(M67_TARGET): $(M67_O_FILES) $(M67_LIBS)
	@echo [ 67] creating $(M67_TARGET)
	@echo $(M67_LIBS) $(M67_O_FILES) > build/M67_ofiles
	@python3 tools/lcf.py rel 67 --output $(M67_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M67_LDFLAGS) -o $(M67_TARGET) @build/M67_ofiles

$(BUILD_DIR)/rel/d/a/e/d_a_e_ga/%.o: rel/d/a/e/d_a_e_ga/%.cpp
	@echo [ 67] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M67_CFLAGS) -c -o $@ $@.iconv.cpp


