#
# Generated By: dol2asm
#

M462_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_gomikabe.plf
M462_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_gomikabe.lcf
M462_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_gomikabe.map

M462_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe.cpp \

M462_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_gomikabe/d_a_obj_gomikabe.o \

M462_LIBS := \

M462_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M462_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M462_LDSCRIPT) \
	-unused -map $(M462_MAP) \
	-w off \

$(M462_TARGET): $(M462_O_FILES) $(M462_LIBS)
	@echo [462] creating $(M462_TARGET)
	@echo $(M462_LIBS) $(M462_O_FILES) > build/M462_ofiles
	@python3 tools/lcf.py rel 462 --output $(M462_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M462_LDFLAGS) -o $(M462_TARGET) @build/M462_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_gomikabe/%.o: rel/d/a/obj/d_a_obj_gomikabe/%.cpp $(BUILD_DIR)/rel/d/a/obj/d_a_obj_gomikabe/%.d
	@echo [462] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M462_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M462_D_FILES := $(M462_O_FILES:.o=.d)
$(M462_D_FILES):
include $(wildcard $(M462_D_FILES))
endif


