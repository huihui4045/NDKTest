
#include "com_ndk_test_FileUtils.h"
#include <android/log.h>
#include <assert.h>

#define TAG "HUIHUI"

#define LOGI(...)  __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__);



JNIEXPORT jstring JNICALL
Java_com_ndk_test_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject jobj) {

    return (*env)->NewStringUTF(env,"我来自JNI");
}

JNIEXPORT void JNICALL Java_com_ndk_test_FileUtils_diff
        (JNIEnv * env, jclass jcls, jstring str1, jstring str2, jint ji){


    LOGI("JNI begin 动态注册的方法 ");

}

/*
 * Class:     com_ndk_test_FileUtils
 * Method:    sum
 * Signature: (Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_ndk_test_FileUtils_sum
        (JNIEnv * env, jobject jobj, jstring str, jint a, jint b){

    LOGI("Java_com_ndk_test_FileUtils_sum");

    char *ch=(*env)->GetStringUTFChars(env,str,NULL);

    LOGI("=========%c",*ch);





    return a+b;
}
