LOCAL_PATH:=$(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE:=hello2
LOCAL_SRC_FILES:=NativeLib.c src/main.c

include $(BUILD_SHARED_LIBRARY)