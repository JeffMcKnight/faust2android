/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include "faust_dsp.h"


static float *new_floatArray(int nelements) { 
  return new float[nelements]; 
}

static void delete_floatArray(float *ary) { 
  delete [] ary; 
}

static float floatArray_getitem(float *ary, int index) {
    return ary[index];
}
static void floatArray_setitem(float *ary, int index, float value) {
    ary[index] = value;
}


static char *new_charArray(int nelements) { 
  return new char[nelements]; 
}

static void delete_charArray(char *ary) { 
  delete [] ary; 
}

static char charArray_getitem(char *ary, int index) {
    return ary[index];
}
static void charArray_setitem(char *ary, int index, char value) {
    ary[index] = value;
}


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_new_1floatArray(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  float *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (float *)new_floatArray(arg1);
  *(float **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_delete_1floatArray(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  float *arg1 = (float *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(float **)&jarg1; 
  delete_floatArray(arg1);
}


SWIGEXPORT jfloat JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_floatArray_1getitem(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  jfloat jresult = 0 ;
  float *arg1 = (float *) 0 ;
  int arg2 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(float **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (float)floatArray_getitem(arg1,arg2);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_floatArray_1setitem(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jfloat jarg3) {
  float *arg1 = (float *) 0 ;
  int arg2 ;
  float arg3 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(float **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (float)jarg3; 
  floatArray_setitem(arg1,arg2,arg3);
}


SWIGEXPORT jstring JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_new_1charArray(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jstring jresult = 0 ;
  int arg1 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (char *)new_charArray(arg1);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_delete_1charArray(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  char *arg1 = (char *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return ;
  }
  delete_charArray(arg1);
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
}


SWIGEXPORT jchar JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_charArray_1getitem(JNIEnv *jenv, jclass jcls, jstring jarg1, jint jarg2) {
  jchar jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int arg2 ;
  char result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (int)jarg2; 
  result = (char)charArray_getitem(arg1,arg2);
  jresult = (jchar)result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_charArray_1setitem(JNIEnv *jenv, jclass jcls, jstring jarg1, jint jarg2, jchar jarg3) {
  char *arg1 = (char *) 0 ;
  int arg2 ;
  char arg3 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return ;
  }
  arg2 = (int)jarg2; 
  arg3 = (char)jarg3; 
  charArray_setitem(arg1,arg2,arg3);
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_Para_1cnt_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  Para *arg1 = (Para *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Para **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->cnt = arg2;
}


SWIGEXPORT jint JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_Para_1cnt_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Para *arg1 = (Para *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Para **)&jarg1; 
  result = (int) ((arg1)->cnt);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_Para_1cntHsliders_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  Para *arg1 = (Para *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Para **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->cntHsliders = arg2;
}


SWIGEXPORT jint JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_Para_1cntHsliders_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Para *arg1 = (Para *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Para **)&jarg1; 
  result = (int) ((arg1)->cntHsliders);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_Para_1cntVsliders_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  Para *arg1 = (Para *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Para **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->cntVsliders = arg2;
}


SWIGEXPORT jint JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_Para_1cntVsliders_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Para *arg1 = (Para *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Para **)&jarg1; 
  result = (int) ((arg1)->cntVsliders);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_new_1Para(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Para *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Para *)new Para();
  *(Para **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_delete_1Para(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Para *arg1 = (Para *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Para **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_faustObject_1initFaust(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  faustObject *arg1 = (faustObject *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(faustObject **)&jarg1; 
  (arg1)->initFaust();
}


SWIGEXPORT jstring JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_faustObject_1getJSON(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  faustObject *arg1 = (faustObject *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(faustObject **)&jarg1; 
  result = (char *)(arg1)->getJSON();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_faustObject_1getParamsCount(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  faustObject *arg1 = (faustObject *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(faustObject **)&jarg1; 
  result = (int)(arg1)->getParamsCount();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_faustObject_1startAudio(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  faustObject *arg1 = (faustObject *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(faustObject **)&jarg1; 
  (arg1)->startAudio();
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_faustObject_1setParam(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jfloat jarg3) {
  faustObject *arg1 = (faustObject *) 0 ;
  char *arg2 = (char *) 0 ;
  float arg3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(faustObject **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return ;
  }
  arg3 = (float)jarg3; 
  (arg1)->setParam((char const *)arg2,arg3);
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_faustObject_1stopAudio(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  faustObject *arg1 = (faustObject *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(faustObject **)&jarg1; 
  (arg1)->stopAudio();
}


SWIGEXPORT jstring JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_faustObject_1getParamPath(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  faustObject *arg1 = (faustObject *) 0 ;
  int arg2 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(faustObject **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (char *)(arg1)->getParamPath(arg2);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_new_1faustObject(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  faustObject *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (faustObject *)new faustObject();
  *(faustObject **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_grame_faust_1dsp_faust_1dspJNI_delete_1faustObject(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  faustObject *arg1 = (faustObject *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(faustObject **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif

