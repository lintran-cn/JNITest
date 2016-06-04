//
// Created by  凌权 on 16/6/3.
//

#include "ling_jnitest_NativeMethods.h"
#include <android/log.h>

JNIEXPORT void JNICALL Java_ling_jnitest_NativeMethods_printInfo
        (JNIEnv *env, jclass jc, jstring js) {
    __android_log_print(ANDROID_LOG_DEBUG, "jni_log", env->GetStringUTFChars(js, false));
}