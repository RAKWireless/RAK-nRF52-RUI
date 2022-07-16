LIB_SRC := board_basic.c bg96.c rak5010_sensor.cpp
LIB_SRC += rui_inner_main.c

LIB_ASRC :=
LIBRARY_NAME := rak5010
LOCAL_CFLAGS :=
LOCAL_AFLAGS :=
LOCAL_INC +=

RELEASE_SRC := 2
$(eval $(call build-lib,$(LIBRARY_NAME),$(LIB_SRC),$(LIB_ASRC),$(LOCAL_CFLAGS),$(LOCAL_INC),$(LOCAL_AFLAGS),$(MYDIR)))
