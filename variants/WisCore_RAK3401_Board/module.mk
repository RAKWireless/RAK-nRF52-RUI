LIB_SRC := board_basic.c utils.c variant.cpp
LIB_SRC += rui_inner_main.c

LIB_ASRC :=
LIBRARY_NAME := rak3400
LOCAL_CFLAGS :=
LOCAL_AFLAGS :=
LOCAL_INC +=

RELEASE_SRC := 2
$(eval $(call build-lib,$(LIBRARY_NAME),$(LIB_SRC),$(LIB_ASRC),$(LOCAL_CFLAGS),$(LOCAL_INC),$(LOCAL_AFLAGS),$(MYDIR)))
