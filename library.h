/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class Main */

#ifndef _Included_library
#define _Included_library
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com.pigopoyo.jni.Main
 * Method:    hello
 * Signature: ()V
 */
JNIEXPORT jstring JNICALL Java_com_pigopoyo_jni_Main_message(JNIEnv *, jobject, jstring);

JNIEXPORT jdouble JNICALL Java_com_pigopoyo_jni_Main_avg(JNIEnv *, jobject, jint, jint);

JNIEXPORT jdoubleArray JNICALL Java_com_pigopoyo_jni_Main_sumAvg(JNIEnv *, jobject , jintArray );

JNIEXPORT void JNICALL Java_com_pigopoyo_jni_Main_modifyValues(JNIEnv *, jobject);

JNIEXPORT void JNICALL Java_com_pigopoyo_jni_Main_nativeCall(JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif