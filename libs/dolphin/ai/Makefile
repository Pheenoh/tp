#
# Generated By: dol2asm
#

LIBAI_A_CPP_FILES := \
	libs/dolphin/ai/ai.c \

LIBAI_A_O_FILES := \
	$(BUILD_DIR)/libs/dolphin/ai/ai.o \

LIBAI_A_CFLAGS := \
	-Cpp_exceptions off \
	-proc gekko \
	-fp hard \
	-nodefaults \
	-str reuse \
	-inline auto \
	-RTTI off \
	-maxerrors 5 \
	-enum int $(INCLUDES) \
	-O4,p \
	-lang=c \

LIBAI_A_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \

$(BUILD_DIR)/libai.a: $(LIBAI_A_O_FILES)
	@echo linking... $(BUILD_DIR)/libai.a
	@echo $(LIBAI_A_O_FILES) > build/LIBAI_A_ofiles
	@$(LD) -xm l $(LIBAI_A_LDFLAGS) -o $(BUILD_DIR)/libai.a @build/LIBAI_A_ofiles

$(BUILD_DIR)/libs/dolphin/ai/%.o: libs/dolphin/ai/%.c $(BUILD_DIR)/libs/dolphin/ai/%.d
	@mkdir -p $(@D)
	@echo building... $<
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).c
	@$(DOLPHIN_LIB_CC) $(LIBAI_A_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).c
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
LIBAI_A_D_FILES := $(LIBAI_A_O_FILES:.o=.d)
$(LIBAI_A_D_FILES):
include $(wildcard $(LIBAI_A_D_FILES))
endif

