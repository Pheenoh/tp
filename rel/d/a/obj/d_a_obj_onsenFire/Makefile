#
# Generated By: dol2asm
#

M587_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_onsenFire.plf
M587_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_onsenFire.lcf
M587_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_onsenFire.map

M587_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_onsenFire/d_a_obj_onsenFire.cpp \

M587_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_onsenFire/d_a_obj_onsenFire.o \

M587_LIBS := \

M587_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M587_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M587_LDSCRIPT) \
	-unused -map $(M587_MAP) \
	-w off \

$(M587_TARGET): $(M587_O_FILES) $(M587_LIBS)
	@echo [587] creating $(M587_TARGET)
	@echo $(M587_LIBS) $(M587_O_FILES) > build/M587_ofiles
	@python3 tools/lcf.py rel 587 --output $(M587_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M587_LDFLAGS) -o $(M587_TARGET) @build/M587_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_onsenFire/%.o: rel/d/a/obj/d_a_obj_onsenFire/%.cpp
	@echo [587] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M587_CFLAGS) -c -o $@ $@.iconv.cpp


