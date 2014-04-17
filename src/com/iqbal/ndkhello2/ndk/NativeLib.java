package com.iqbal.ndkhello2.ndk;

public class NativeLib {
	static {
		System.loadLibrary("hello2");
	}

	public static native int getAdd(int a, int b);

	public static native int getSub(int a, int b);

	public static native int getMult(int a, int b);

	public static native int getDivi(int a, int b);
}
