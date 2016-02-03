#include <jni.h>
#include "SFE_LSM9DS0.h"
#ifndef _Included_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
#define _Included_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    ctor0
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_ctor0
  (JNIEnv *, jclass, jint gAddr, jint xmAddr) {
	return (jlong) new LSM9DS0(gAddr, xmAddr);
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    gx0
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_gx0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->gx;
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    gy0
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_gy0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->gy;
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    gz0
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_gz0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->gz;
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    ax0
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_ax0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->ax;
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    ay0
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_ay0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->ay;
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    az0
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_az0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->az;
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    mx0
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_mx0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->mx;
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    my0
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_my0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->my;
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    mz0
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_mz0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->mz;
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    temperature0
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_temperature0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->temperature;
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    begin0
 * Signature: (JIIIIII)S
 */
JNIEXPORT jshort JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_begin0
  (JNIEnv *, jclass, jlong ptr, jint gScl, jint aScl, jint mScl, jint gRate, jint aRate, jint mRate) {
	return ((LSM9DS0*) ptr)->begin(
			(LSM9DS0::gyro_scale) gScl,
			(LSM9DS0::accel_scale) aScl,
			(LSM9DS0::mag_scale) mScl,
			(LSM9DS0::gyro_odr) gRate,
			(LSM9DS0::accel_odr) aRate,
			(LSM9DS0::mag_odr) mRate);
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    readGyro0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_readGyro0
  (JNIEnv *, jclass, jlong ptr) {
	((LSM9DS0*) ptr)->readGyro();
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    readAccel0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_readAccel0
  (JNIEnv *, jclass, jlong ptr) {
	((LSM9DS0*) ptr)->readAccel();
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    readMag0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_readMag0
  (JNIEnv *, jclass, jlong ptr) {
	((LSM9DS0*) ptr)->readMag();
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    readTemp0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_readTemp0
  (JNIEnv *, jclass, jlong ptr) {
	((LSM9DS0*) ptr)->readTemp();
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    calcGyro0
 * Signature: (JS)F
 */
JNIEXPORT jfloat JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_calcGyro0
  (JNIEnv *, jclass, jlong ptr, jshort g) {
	return ((LSM9DS0*) ptr)->calcGyro(g);
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    calcAccel0
 * Signature: (JS)F
 */
JNIEXPORT jfloat JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_calcAccel0
  (JNIEnv *, jclass, jlong ptr, jshort a) {
	return ((LSM9DS0*) ptr)->calcAccel(a);
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    calcMag0
 * Signature: (JS)F
 */
JNIEXPORT jfloat JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_calcMag0
  (JNIEnv *, jclass, jlong ptr, jshort m) {
	return ((LSM9DS0*) ptr)->calcMag(m);
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    setGryoScale0
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_setGryoScale0
  (JNIEnv *, jclass, jlong ptr, jint s) {
	((LSM9DS0*) ptr)->setGyroScale((LSM9DS0::gyro_scale) s);
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    setAccelScale0
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_setAccelScale0
  (JNIEnv *, jclass, jlong ptr, jint a) {
	((LSM9DS0*) ptr)->setAccelScale((LSM9DS0::accel_scale) a);
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    setMagScale0
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_setMagScale0
  (JNIEnv *, jclass, jlong ptr, jint m) {
	((LSM9DS0*) ptr)->setMagScale((LSM9DS0::mag_scale) m);
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    setGyroODR0
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_setGyroODR0
  (JNIEnv *, jclass, jlong ptr, jint g) {
	((LSM9DS0*) ptr)->setGyroODR((LSM9DS0::gyro_odr) g);
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    setAccelODR0
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_setAccelODR0
  (JNIEnv *, jclass, jlong ptr, jint a) {
	((LSM9DS0*) ptr)->setAccelODR((LSM9DS0::accel_odr) a);
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    setAccelABW0
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_setAccelABW0
  (JNIEnv *, jclass, jlong ptr, jint a) {
	((LSM9DS0*) ptr)->setAccelABW((LSM9DS0::accel_abw) a);
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    setMagODR0
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_setMagODR0
  (JNIEnv *, jclass, jlong ptr, jint m) {
	((LSM9DS0*) ptr)->setMagODR((LSM9DS0::mag_odr) m);
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    newXData0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_newXData0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->newXData();
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    newMData0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_newMData0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->newMData();
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    newGData0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_newGData0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->newGData();
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    xDataOverflow0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_xDataOverflow0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->xDataOverflow();
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    gDataOverflow0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_gDataOverflow0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->gDataOverflow();
}

/*
 * Class:     com_robinkirkman_edison_sparkfun_ninedofblock_SFE_LSM9DS0_JNI
 * Method:    mDataOverflow0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_robinkirkman_edison_sparkfun_ninedofblock_SFE_1LSM9DS0_1JNI_mDataOverflow0
  (JNIEnv *, jclass, jlong ptr) {
	return ((LSM9DS0*) ptr)->mDataOverflow();
}

#ifdef __cplusplus
}
#endif
#endif
