LIB_SRC := board_basic.c utils.c variant.cpp
LIB_SRC += rui_inner_main.c
ifneq ($(strip $(SUPPORT_LORA)),0)
LIB_SRC += sx126x-board.c gpio-board.c delay-board.c spi-board.c board.c rtc-board.c
endif

LIB_ASRC :=
LIBRARY_NAME := rak4631
LOCAL_CFLAGS :=
LOCAL_AFLAGS :=
LOCAL_INC +=

RELEASE_SRC := 2
$(eval $(call build-lib,$(LIBRARY_NAME),$(LIB_SRC),$(LIB_ASRC),$(LOCAL_CFLAGS),$(LOCAL_INC),$(LOCAL_AFLAGS),$(MYDIR)))
