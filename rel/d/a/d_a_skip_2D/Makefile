#
# Generated By: dol2asm
#

M705_TARGET := $(BUILD_DIR)/rel/d/a/d_a_skip_2D.plf
M705_LDSCRIPT := $(BUILD_DIR)/rel/d/a/d_a_skip_2D.lcf
M705_MAP := $(BUILD_DIR)/rel/d/a/d_a_skip_2D.map

M705_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/d_a_skip_2D/d_a_skip_2D.cpp \

M705_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/d_a_skip_2D/d_a_skip_2D.o \

M705_LIBS := \

M705_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M705_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M705_LDSCRIPT) \
	-unused -map $(M705_MAP) \
	-w off \

$(M705_TARGET): $(M705_O_FILES) $(M705_LIBS)
	@echo [705] creating $(M705_TARGET)
	@echo $(M705_LIBS) $(M705_O_FILES) > build/M705_ofiles
	@python3 tools/lcf.py rel 705 --output $(M705_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M705_LDFLAGS) -o $(M705_TARGET) @build/M705_ofiles

$(BUILD_DIR)/rel/d/a/d_a_skip_2D/%.o: rel/d/a/d_a_skip_2D/%.cpp $(BUILD_DIR)/rel/d/a/d_a_skip_2D/%.d
	@echo [705] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M705_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M705_D_FILES := $(M705_O_FILES:.o=.d)
$(M705_D_FILES):
include $(wildcard $(M705_D_FILES))
endif


