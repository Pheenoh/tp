#
# Generated By: dol2asm
#

M202_TARGET := $(BUILD_DIR)/rel/d/a/e/d_a_e_hzelda.plf
M202_LDSCRIPT := $(BUILD_DIR)/rel/d/a/e/d_a_e_hzelda.lcf
M202_MAP := $(BUILD_DIR)/rel/d/a/e/d_a_e_hzelda.map

M202_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/e/d_a_e_hzelda/d_a_e_hzelda.cpp \

M202_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/e/d_a_e_hzelda/d_a_e_hzelda.o \

M202_LIBS := \

M202_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M202_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M202_LDSCRIPT) \
	-unused -map $(M202_MAP) \
	-w off \

$(M202_TARGET): $(M202_O_FILES) $(M202_LIBS)
	@echo [202] creating $(M202_TARGET)
	@echo $(M202_LIBS) $(M202_O_FILES) > build/M202_ofiles
	@python3 tools/lcf.py rel 202 --output $(M202_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M202_LDFLAGS) -o $(M202_TARGET) @build/M202_ofiles

$(BUILD_DIR)/rel/d/a/e/d_a_e_hzelda/%.o: rel/d/a/e/d_a_e_hzelda/%.cpp
	@echo [202] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M202_CFLAGS) -c -o $@ $@.iconv.cpp


