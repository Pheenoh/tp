#
# Generated By: dol2asm
#

M138_TARGET := $(BUILD_DIR)/rel/d/a/b/d_a_b_bh.plf
M138_LDSCRIPT := $(BUILD_DIR)/rel/d/a/b/d_a_b_bh.lcf
M138_MAP := $(BUILD_DIR)/rel/d/a/b/d_a_b_bh.map

M138_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/b/d_a_b_bh/d_a_b_bh.cpp \

M138_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/b/d_a_b_bh/d_a_b_bh.o \

M138_LIBS := \

M138_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M138_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M138_LDSCRIPT) \
	-unused -map $(M138_MAP) \
	-w off \

$(M138_TARGET): $(M138_O_FILES) $(M138_LIBS)
	@echo [138] creating $(M138_TARGET)
	@echo $(M138_LIBS) $(M138_O_FILES) > build/M138_ofiles
	@python3 tools/lcf.py rel 138 --output $(M138_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M138_LDFLAGS) -o $(M138_TARGET) @build/M138_ofiles

$(BUILD_DIR)/rel/d/a/b/d_a_b_bh/%.o: rel/d/a/b/d_a_b_bh/%.cpp
	@echo [138] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M138_CFLAGS) -c -o $@ $@.iconv.cpp


