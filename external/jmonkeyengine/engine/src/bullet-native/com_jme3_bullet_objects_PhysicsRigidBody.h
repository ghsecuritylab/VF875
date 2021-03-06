/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jme3_bullet_objects_PhysicsRigidBody */

#ifndef _Included_com_jme3_bullet_objects_PhysicsRigidBody
#define _Included_com_jme3_bullet_objects_PhysicsRigidBody
#ifdef __cplusplus
extern "C" {
#endif
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_NONE
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_NONE 0L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_01
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_01 1L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_02
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_02 2L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_03
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_03 4L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_04
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_04 8L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_05
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_05 16L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_06
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_06 32L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_07
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_07 64L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_08
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_08 128L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_09
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_09 256L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_10
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_10 512L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_11
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_11 1024L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_12
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_12 2048L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_13
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_13 4096L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_14
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_14 8192L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_15
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_15 16384L
#undef com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_16
#define com_jme3_bullet_objects_PhysicsRigidBody_COLLISION_GROUP_16 32768L
/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    createRigidBody
 * Signature: (FJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_createRigidBody
  (JNIEnv *, jobject, jfloat, jlong, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    isInWorld
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_isInWorld
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setPhysicsLocation
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setPhysicsLocation
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setPhysicsRotation
 * Signature: (JLcom/jme3/math/Matrix3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setPhysicsRotation__JLcom_jme3_math_Matrix3f_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setPhysicsRotation
 * Signature: (JLcom/jme3/math/Quaternion;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setPhysicsRotation__JLcom_jme3_math_Quaternion_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getPhysicsLocation
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getPhysicsLocation
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getPhysicsRotation
 * Signature: (JLcom/jme3/math/Quaternion;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getPhysicsRotation
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getPhysicsRotationMatrix
 * Signature: (JLcom/jme3/math/Matrix3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getPhysicsRotationMatrix
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setKinematic
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setKinematic
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setCcdSweptSphereRadius
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setCcdSweptSphereRadius
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setCcdMotionThreshold
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setCcdMotionThreshold
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getCcdSweptSphereRadius
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getCcdSweptSphereRadius
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getCcdMotionThreshold
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getCcdMotionThreshold
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getCcdSquareMotionThreshold
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getCcdSquareMotionThreshold
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setStatic
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setStatic
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    updateMassProps
 * Signature: (JJF)J
 */
JNIEXPORT jlong JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_updateMassProps
  (JNIEnv *, jobject, jlong, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getGravity
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getGravity
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setGravity
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setGravity
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getFriction
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getFriction
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setFriction
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setFriction
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setDamping
 * Signature: (JFF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setDamping
  (JNIEnv *, jobject, jlong, jfloat, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setAngularDamping
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setAngularDamping
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getLinearDamping
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getLinearDamping
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getAngularDamping
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getAngularDamping
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getRestitution
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getRestitution
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setRestitution
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setRestitution
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getAngularVelocity
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getAngularVelocity
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setAngularVelocity
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setAngularVelocity
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getLinearVelocity
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getLinearVelocity
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setLinearVelocity
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setLinearVelocity
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    applyForce
 * Signature: (JLcom/jme3/math/Vector3f;Lcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_applyForce
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    applyCentralForce
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_applyCentralForce
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    applyTorque
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_applyTorque
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    applyImpulse
 * Signature: (JLcom/jme3/math/Vector3f;Lcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_applyImpulse
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    applyTorqueImpulse
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_applyTorqueImpulse
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    clearForces
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_clearForces
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setCollisionShape
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setCollisionShape
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    activate
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_activate
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    isActive
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_isActive
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setSleepingThresholds
 * Signature: (JFF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setSleepingThresholds
  (JNIEnv *, jobject, jlong, jfloat, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setLinearSleepingThreshold
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setLinearSleepingThreshold
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setAngularSleepingThreshold
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setAngularSleepingThreshold
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getLinearSleepingThreshold
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getLinearSleepingThreshold
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getAngularSleepingThreshold
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getAngularSleepingThreshold
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    getAngularFactor
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_getAngularFactor
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsRigidBody
 * Method:    setAngularFactor
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsRigidBody_setAngularFactor
  (JNIEnv *, jobject, jlong, jfloat);

#ifdef __cplusplus
}
#endif
#endif
