#
# Generated By: dol2asm
#

M752_TARGET := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_wljump.plf
M752_LDSCRIPT := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_wljump.lcf
M752_MAP := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_wljump.map

M752_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/tag/d_a_tag_wljump/d_a_tag_wljump.cpp \

M752_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/tag/d_a_tag_wljump/d_a_tag_wljump.o \

M752_LIBS := \

M752_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M752_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M752_LDSCRIPT) \
	-unused -map $(M752_MAP) \
	-w off \

$(M752_TARGET): $(M752_O_FILES) $(M752_LIBS)
	@echo [752] creating $(M752_TARGET)
	@echo $(M752_LIBS) $(M752_O_FILES) > build/M752_ofiles
	@python3 tools/lcf.py rel 752 --output $(M752_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M752_LDFLAGS) -o $(M752_TARGET) @build/M752_ofiles

$(BUILD_DIR)/rel/d/a/tag/d_a_tag_wljump/%.o: rel/d/a/tag/d_a_tag_wljump/%.cpp
	@echo [752] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M752_CFLAGS) -c -o $@ $@.iconv.cpp


