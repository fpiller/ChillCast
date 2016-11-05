#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_chillcast_fpiller_chillcast_MainChillCastActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
