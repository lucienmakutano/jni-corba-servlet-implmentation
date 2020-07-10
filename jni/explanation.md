# Java implementation

we are creating a static environment to load the native class

## calculateModulus() method

will take to parameters `num1` and `num2` and then return the mod of them

# Usage

## java compilation

we compile the java class

`bash 
    javac -h . ModulusCalculation.java
`

## C implementation

### Java_ModulusCalculation_calculateModulus function

it has the implemenation in c

`C
    JNIEXPORT jint JNICALL Java_ModulusCalculation_calculateModulus 
    (JNIEnv *env, jobject thisObj, jint num1, jint num2) {
        return (jint) num1 % num2;
    }
`

## modulus.dll file

we create a modulus.dll file

`bash
    gcc -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" -shared -o modulus.dll calculate_modulus.c
`

## run the program

`bash
    java ModulusCalculation
`

# Authors
@KennethTL @Lusiji254 @tadomikikuto-bit