/* DO NOT EDIT THIS FILE - it is machine generated */
#include"NativeLib.h"
#include"src/main.h"

/*
 * Class:     com_iqbal_ndkhello2_ndk_NativeLib
 * Method:    getAdd
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_iqbal_ndkhello2_ndk_NativeLib_getAdd(
		JNIEnv *env, jclass clz, jint a, jint b) {
	int c=add(a,b);
	return c;
}

/*
 * Class:     com_iqbal_ndkhello2_ndk_NativeLib
 * Method:    getSub
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_iqbal_ndkhello2_ndk_NativeLib_getSub(
		JNIEnv *env, jclass clz, jint a, jint b) {
	return sub(a,b);
}
/*
 * Class:     com_iqbal_ndkhello2_ndk_NativeLib
 * Method:    getMult
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_iqbal_ndkhello2_ndk_NativeLib_getMult(
		JNIEnv *env, jclass clz, jint a, jint b) {
	return mult(a,b);
}
/*
 * Class:     com_iqbal_ndkhello2_ndk_NativeLib
 * Method:    getDivi
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_iqbal_ndkhello2_ndk_NativeLib_getDivi(
		JNIEnv *env, jclass clz, jint a, jint b) {
	return divi(a,b);
}
