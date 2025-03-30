#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_jnirepro_MainApplication_00024Companion_getNativeMessage(JNIEnv *env, jobject /* this */) {
    std::string message = "Hello from native C++!";
    return env->NewStringUTF(message.c_str());
}
