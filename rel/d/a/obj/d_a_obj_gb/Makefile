#
# Generated By: dol2asm
#

M457_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_gb.plf
M457_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_gb.lcf
M457_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_gb.map

M457_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_gb/d_a_obj_gb.cpp \

M457_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_gb/d_a_obj_gb.o \

M457_LIBS := \

M457_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M457_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M457_LDSCRIPT) \
	-unused -map $(M457_MAP) \
	-w off \

$(M457_TARGET): $(M457_O_FILES) $(M457_LIBS)
	@echo [457] creating $(M457_TARGET)
	@echo $(M457_LIBS) $(M457_O_FILES) > build/M457_ofiles
	@python3 tools/lcf.py rel 457 --output $(M457_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M457_LDFLAGS) -o $(M457_TARGET) @build/M457_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_gb/%.o: rel/d/a/obj/d_a_obj_gb/%.cpp $(BUILD_DIR)/rel/d/a/obj/d_a_obj_gb/%.d
	@echo [457] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M457_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M457_D_FILES := $(M457_O_FILES:.o=.d)
$(M457_D_FILES):
include $(wildcard $(M457_D_FILES))
endif


