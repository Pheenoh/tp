#
# Generated By: dol2asm
#

M728_TARGET := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_mmsg.plf
M728_LDSCRIPT := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_mmsg.lcf
M728_MAP := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_mmsg.map

M728_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/tag/d_a_tag_mmsg/d_a_tag_mmsg.cpp \

M728_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/tag/d_a_tag_mmsg/d_a_tag_mmsg.o \

M728_LIBS := \

M728_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M728_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M728_LDSCRIPT) \
	-unused -map $(M728_MAP) \
	-w off \

$(M728_TARGET): $(M728_O_FILES) $(M728_LIBS)
	@echo [728] creating $(M728_TARGET)
	@echo $(M728_LIBS) $(M728_O_FILES) > build/M728_ofiles
	@python3 tools/lcf.py rel 728 --output $(M728_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M728_LDFLAGS) -o $(M728_TARGET) @build/M728_ofiles

$(BUILD_DIR)/rel/d/a/tag/d_a_tag_mmsg/%.o: rel/d/a/tag/d_a_tag_mmsg/%.cpp
	@echo [728] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M728_CFLAGS) -c -o $@ $@.iconv.cpp


