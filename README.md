Hi,

This is my Second NDKHello2 Demo project for newbies

Please add appcompat library to run this project

In this demo I added a folder src in jni folder and tried to compile.

I followed this process to make this project.

#Create NativeLib.java file

#Open terminal and head to project directo
	cd bin/classes and
	generate header files of NativeLib.java using this command
	javah -jni com.iqbal.ndkhello.ndk.NativeLib
	
#Copy NativeLib.h file in jni folder (Create if not exist in project root)
or you can use this command javah -jni -o ../../jni/NativeLib.h com.iqbal.ndkhello.ndk.NativeLib

#Create NativeLib.c file and copy method signature in NativeLib.c
and don't foreget to include NativeLib.h
	
	Method Signature eg:
	JNIEXPORT jstring JNICALL Java_com_iqbal_ndkhello_ndk_NativeLib_getHello2
(JNIEnv *, jclass);
	this is the declared method in header files and change to method defination
	
	#include"NativeLib.h"
JNIEXPORT jstring JNICALL Java_com_iqbal_ndkhello_ndk_NativeLib_getHello
  (JNIEnv *env, jclass clz){
	return (*env)->NewStringUTF(env,"Hello World2");
}

Note:NewStringUTF sometimes this function shows error means red line to suppress this error please update your CDT.

#Add new folder in jni called src add some c files and header files as I did main.c and main.h

#Call main.h function in NativeLib.c by including main.h header files.
	Eg:
	#include"src/main.h"
	JNIEXPORT jint JNICALL Java_com_iqbal_ndkhello2_ndk_NativeLib_getAdd(
		JNIEnv *env, jclass clz, jint a, jint b) {
	int c=add(a,b); //this function declared in main.h and defiened in main.c
	return c;
	}
	
#Now create Android.mk file and write these lines to build
LOCAL_PATH:=$(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE:=hello2
LOCAL_SRC_FILES:=NativeLib.c src/main.c

include $(BUILD_SHARED_LIBRARY)

#Create Application.mk to suppress the Warnning or error android-19 is larger than minsdkversion 8....
and write this lines
APP_PLATFORM:=android-8
android-8 is my minsdkversion so be sure about this change according to minsdkversion in AndroidManifest.xml


#Open terminal head to project root and fire this command 
ndk-build

#Now run your Android NDKHello Project.
	
