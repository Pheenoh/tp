#
# Generated By: dol2asm
#

M404_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_bbox.plf
M404_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_bbox.lcf
M404_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_bbox.map

M404_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox.cpp \

M404_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_bbox/d_a_obj_bbox.o \

M404_LIBS := \

M404_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M404_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M404_LDSCRIPT) \
	-unused -map $(M404_MAP) \
	-w off \

$(M404_TARGET): $(M404_O_FILES) $(M404_LIBS)
	@echo [404] creating $(M404_TARGET)
	@echo $(M404_LIBS) $(M404_O_FILES) > build/M404_ofiles
	@python3 tools/lcf.py rel 404 --output $(M404_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M404_LDFLAGS) -o $(M404_TARGET) @build/M404_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_bbox/%.o: rel/d/a/obj/d_a_obj_bbox/%.cpp
	@echo [404] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M404_CFLAGS) -c -o $@ $@.iconv.cpp


