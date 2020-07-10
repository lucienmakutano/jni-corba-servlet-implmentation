#include <jni.h> // JNI header provided by JDK
#include <stdio.h> // C Standard IO Header
#include "ModulusCalculation.h" // Generated

JNIEXPORT jint JNICALL Java_ModulusCalculation_calculateModulus 
(JNIEnv *env, jobject thisObj, jint num1, jint num2) {
    return (jint) num1 % num2;
}