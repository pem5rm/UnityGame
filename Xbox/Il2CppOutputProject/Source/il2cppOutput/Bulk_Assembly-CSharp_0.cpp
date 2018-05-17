#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// BulletController
struct BulletController_t2979835697;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Component
struct Component_t1923634451;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// GroundCheck
struct GroundCheck_t2401657261;
// GunController
struct GunController_t1414244952;
// UnityEngine.Transform
struct Transform_t3600365921;
// InstantiateBullet
struct InstantiateBullet_t2967190384;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// PlayerController
struct PlayerController_t2064355688;
// System.Void
struct Void_t1185182177;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;

extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3128802752;
extern const uint32_t BulletController_OnTriggerEnter2D_m2287572358_MetadataUsageId;
extern const uint32_t GroundCheck_OnTriggerEnter2D_m3997567688_MetadataUsageId;
extern const uint32_t GroundCheck_OnTriggerExit2D_m1398381619_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4105162317;
extern String_t* _stringLiteral2167972859;
extern const uint32_t GunController_FixedUpdate_m731471220_MetadataUsageId;
extern String_t* _stringLiteral3228161487;
extern const uint32_t InstantiateBullet_FixedUpdate_m1681359339_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m587845175_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013_RuntimeMethod_var;
extern const uint32_t InstantiateBullet_InstantiateObject_m1946908393_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentInChildren_TisGroundCheck_t2401657261_m3305283154_RuntimeMethod_var;
extern const uint32_t PlayerController_Start_m1746698410_MetadataUsageId;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral2984908384;
extern String_t* _stringLiteral1930566815;
extern const uint32_t PlayerController_FixedUpdate_m1610259746_MetadataUsageId;
extern const uint32_t PlayerController_Move_m4157780474_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745563_H
#define U3CMODULEU3E_T692745563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745563 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745563_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_3)); }
	inline Vector3_t3722313464  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t3722313464  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_4)); }
	inline Vector3_t3722313464  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t3722313464 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t3722313464  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_5)); }
	inline Vector3_t3722313464  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t3722313464 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t3722313464  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_6)); }
	inline Vector3_t3722313464  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t3722313464 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t3722313464  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_7)); }
	inline Vector3_t3722313464  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t3722313464 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t3722313464  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_8)); }
	inline Vector3_t3722313464  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t3722313464 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t3722313464  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_9)); }
	inline Vector3_t3722313464  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t3722313464  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_10)); }
	inline Vector3_t3722313464  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t3722313464 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t3722313464  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef GUNCONTROLLER_T1414244952_H
#define GUNCONTROLLER_T1414244952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GunController
struct  GunController_t1414244952  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUNCONTROLLER_T1414244952_H
#ifndef BULLETCONTROLLER_T2979835697_H
#define BULLETCONTROLLER_T2979835697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletController
struct  BulletController_t2979835697  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BULLETCONTROLLER_T2979835697_H
#ifndef GROUNDCHECK_T2401657261_H
#define GROUNDCHECK_T2401657261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GroundCheck
struct  GroundCheck_t2401657261  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean GroundCheck::isGrounded
	bool ___isGrounded_2;

public:
	inline static int32_t get_offset_of_isGrounded_2() { return static_cast<int32_t>(offsetof(GroundCheck_t2401657261, ___isGrounded_2)); }
	inline bool get_isGrounded_2() const { return ___isGrounded_2; }
	inline bool* get_address_of_isGrounded_2() { return &___isGrounded_2; }
	inline void set_isGrounded_2(bool value)
	{
		___isGrounded_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUNDCHECK_T2401657261_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef PLAYERCONTROLLER_T2064355688_H
#define PLAYERCONTROLLER_T2064355688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2064355688  : public MonoBehaviour_t3962482529
{
public:
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.LayerMask PlayerController::groundLayer
	LayerMask_t3493934918  ___groundLayer_3;
	// UnityEngine.Transform PlayerController::myTrans
	Transform_t3600365921 * ___myTrans_4;
	// UnityEngine.Transform PlayerController::tagGround
	Transform_t3600365921 * ___tagGround_5;
	// UnityEngine.Rigidbody2D PlayerController::myBody
	Rigidbody2D_t939494601 * ___myBody_6;
	// System.Single PlayerController::hInput
	float ___hInput_7;
	// System.Single PlayerController::acceleration
	float ___acceleration_8;
	// GroundCheck PlayerController::_shortcutFromPlayerControllerToGroundCheck
	GroundCheck_t2401657261 * ____shortcutFromPlayerControllerToGroundCheck_9;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_groundLayer_3() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___groundLayer_3)); }
	inline LayerMask_t3493934918  get_groundLayer_3() const { return ___groundLayer_3; }
	inline LayerMask_t3493934918 * get_address_of_groundLayer_3() { return &___groundLayer_3; }
	inline void set_groundLayer_3(LayerMask_t3493934918  value)
	{
		___groundLayer_3 = value;
	}

	inline static int32_t get_offset_of_myTrans_4() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___myTrans_4)); }
	inline Transform_t3600365921 * get_myTrans_4() const { return ___myTrans_4; }
	inline Transform_t3600365921 ** get_address_of_myTrans_4() { return &___myTrans_4; }
	inline void set_myTrans_4(Transform_t3600365921 * value)
	{
		___myTrans_4 = value;
		Il2CppCodeGenWriteBarrier((&___myTrans_4), value);
	}

	inline static int32_t get_offset_of_tagGround_5() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___tagGround_5)); }
	inline Transform_t3600365921 * get_tagGround_5() const { return ___tagGround_5; }
	inline Transform_t3600365921 ** get_address_of_tagGround_5() { return &___tagGround_5; }
	inline void set_tagGround_5(Transform_t3600365921 * value)
	{
		___tagGround_5 = value;
		Il2CppCodeGenWriteBarrier((&___tagGround_5), value);
	}

	inline static int32_t get_offset_of_myBody_6() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___myBody_6)); }
	inline Rigidbody2D_t939494601 * get_myBody_6() const { return ___myBody_6; }
	inline Rigidbody2D_t939494601 ** get_address_of_myBody_6() { return &___myBody_6; }
	inline void set_myBody_6(Rigidbody2D_t939494601 * value)
	{
		___myBody_6 = value;
		Il2CppCodeGenWriteBarrier((&___myBody_6), value);
	}

	inline static int32_t get_offset_of_hInput_7() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___hInput_7)); }
	inline float get_hInput_7() const { return ___hInput_7; }
	inline float* get_address_of_hInput_7() { return &___hInput_7; }
	inline void set_hInput_7(float value)
	{
		___hInput_7 = value;
	}

	inline static int32_t get_offset_of_acceleration_8() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___acceleration_8)); }
	inline float get_acceleration_8() const { return ___acceleration_8; }
	inline float* get_address_of_acceleration_8() { return &___acceleration_8; }
	inline void set_acceleration_8(float value)
	{
		___acceleration_8 = value;
	}

	inline static int32_t get_offset_of__shortcutFromPlayerControllerToGroundCheck_9() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ____shortcutFromPlayerControllerToGroundCheck_9)); }
	inline GroundCheck_t2401657261 * get__shortcutFromPlayerControllerToGroundCheck_9() const { return ____shortcutFromPlayerControllerToGroundCheck_9; }
	inline GroundCheck_t2401657261 ** get_address_of__shortcutFromPlayerControllerToGroundCheck_9() { return &____shortcutFromPlayerControllerToGroundCheck_9; }
	inline void set__shortcutFromPlayerControllerToGroundCheck_9(GroundCheck_t2401657261 * value)
	{
		____shortcutFromPlayerControllerToGroundCheck_9 = value;
		Il2CppCodeGenWriteBarrier((&____shortcutFromPlayerControllerToGroundCheck_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T2064355688_H
#ifndef INSTANTIATEBULLET_T2967190384_H
#define INSTANTIATEBULLET_T2967190384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InstantiateBullet
struct  InstantiateBullet_t2967190384  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject InstantiateBullet::bullet
	GameObject_t1113636619 * ___bullet_2;
	// System.Single InstantiateBullet::bulletSpeed
	float ___bulletSpeed_3;
	// System.Single InstantiateBullet::rateOfFire
	float ___rateOfFire_4;
	// UnityEngine.AudioClip InstantiateBullet::laserClip
	AudioClip_t3680889665 * ___laserClip_5;
	// UnityEngine.AudioSource InstantiateBullet::laserSource
	AudioSource_t3935305588 * ___laserSource_6;
	// System.Single InstantiateBullet::lastShot
	float ___lastShot_7;

public:
	inline static int32_t get_offset_of_bullet_2() { return static_cast<int32_t>(offsetof(InstantiateBullet_t2967190384, ___bullet_2)); }
	inline GameObject_t1113636619 * get_bullet_2() const { return ___bullet_2; }
	inline GameObject_t1113636619 ** get_address_of_bullet_2() { return &___bullet_2; }
	inline void set_bullet_2(GameObject_t1113636619 * value)
	{
		___bullet_2 = value;
		Il2CppCodeGenWriteBarrier((&___bullet_2), value);
	}

	inline static int32_t get_offset_of_bulletSpeed_3() { return static_cast<int32_t>(offsetof(InstantiateBullet_t2967190384, ___bulletSpeed_3)); }
	inline float get_bulletSpeed_3() const { return ___bulletSpeed_3; }
	inline float* get_address_of_bulletSpeed_3() { return &___bulletSpeed_3; }
	inline void set_bulletSpeed_3(float value)
	{
		___bulletSpeed_3 = value;
	}

	inline static int32_t get_offset_of_rateOfFire_4() { return static_cast<int32_t>(offsetof(InstantiateBullet_t2967190384, ___rateOfFire_4)); }
	inline float get_rateOfFire_4() const { return ___rateOfFire_4; }
	inline float* get_address_of_rateOfFire_4() { return &___rateOfFire_4; }
	inline void set_rateOfFire_4(float value)
	{
		___rateOfFire_4 = value;
	}

	inline static int32_t get_offset_of_laserClip_5() { return static_cast<int32_t>(offsetof(InstantiateBullet_t2967190384, ___laserClip_5)); }
	inline AudioClip_t3680889665 * get_laserClip_5() const { return ___laserClip_5; }
	inline AudioClip_t3680889665 ** get_address_of_laserClip_5() { return &___laserClip_5; }
	inline void set_laserClip_5(AudioClip_t3680889665 * value)
	{
		___laserClip_5 = value;
		Il2CppCodeGenWriteBarrier((&___laserClip_5), value);
	}

	inline static int32_t get_offset_of_laserSource_6() { return static_cast<int32_t>(offsetof(InstantiateBullet_t2967190384, ___laserSource_6)); }
	inline AudioSource_t3935305588 * get_laserSource_6() const { return ___laserSource_6; }
	inline AudioSource_t3935305588 ** get_address_of_laserSource_6() { return &___laserSource_6; }
	inline void set_laserSource_6(AudioSource_t3935305588 * value)
	{
		___laserSource_6 = value;
		Il2CppCodeGenWriteBarrier((&___laserSource_6), value);
	}

	inline static int32_t get_offset_of_lastShot_7() { return static_cast<int32_t>(offsetof(InstantiateBullet_t2967190384, ___lastShot_7)); }
	inline float get_lastShot_7() const { return ___lastShot_7; }
	inline float* get_address_of_lastShot_7() { return &___lastShot_7; }
	inline void set_lastShot_7(float value)
	{
		___lastShot_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANTIATEBULLET_T2967190384_H


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m3060171005_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1187897296_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m2716693327 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C"  Vector3_t3722313464  Vector3_get_back_m4077847766 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_AngleAxis_m1767165696 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void InstantiateBullet::InstantiateObject()
extern "C"  void InstantiateBullet_InstantiateObject_m1946908393 (InstantiateBullet_t2967190384 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m587845175(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m3060171005_gshared)(__this /* static, unused */, p0, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013(__this, method) ((  Rigidbody2D_t939494601 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C"  Vector3_t3722313464  Transform_get_up_m3972993886 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponentInChildren<GroundCheck>()
#define GameObject_GetComponentInChildren_TisGroundCheck_t2401657261_m3305283154(__this, method) ((  GroundCheck_t2401657261 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m1187897296_gshared)(__this, method)
// System.Void PlayerController::Move(System.Single,System.Single)
extern "C"  void PlayerController_Move_m4157780474 (PlayerController_t2064355688 * __this, float ___horizonalInput0, float ___verticalInput1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButton(System.String)
extern "C"  bool Input_GetButton_m2064261504 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t2156229523  Rigidbody2D_get_velocity_m366589732 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C"  float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m1113499586 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BulletController::Start()
extern "C"  void BulletController_Start_m2193310410 (BulletController_t2979835697 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BulletController::Update()
extern "C"  void BulletController_Update_m3137663766 (BulletController_t2979835697 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BulletController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void BulletController_OnTriggerEnter2D_m2287572358 (BulletController_t2979835697 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BulletController_OnTriggerEnter2D_m2287572358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(other.tag);
		Collider2D_t2806799626 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// if (other.tag == "ground")
		Collider2D_t2806799626 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = Component_get_tag_m2716693327(L_2, /*hidden argument*/NULL);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, _stringLiteral3128802752, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void BulletController::.ctor()
extern "C"  void BulletController__ctor_m1432626990 (BulletController_t2979835697 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GroundCheck::Start()
extern "C"  void GroundCheck_Start_m1371965780 (GroundCheck_t2401657261 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GroundCheck::Update()
extern "C"  void GroundCheck_Update_m195578486 (GroundCheck_t2401657261 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GroundCheck::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void GroundCheck_OnTriggerEnter2D_m3997567688 (GroundCheck_t2401657261 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GroundCheck_OnTriggerEnter2D_m3997567688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(other.tag);
		Collider2D_t2806799626 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// if (other.tag == "ground")
		Collider2D_t2806799626 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = Component_get_tag_m2716693327(L_2, /*hidden argument*/NULL);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, _stringLiteral3128802752, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// isGrounded = true;
		__this->set_isGrounded_2((bool)1);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void GroundCheck::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C"  void GroundCheck_OnTriggerExit2D_m1398381619 (GroundCheck_t2401657261 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GroundCheck_OnTriggerExit2D_m1398381619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "ground")
		Collider2D_t2806799626 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral3128802752, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// isGrounded = false;
		__this->set_isGrounded_2((bool)0);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GroundCheck::.ctor()
extern "C"  void GroundCheck__ctor_m4229044970 (GroundCheck_t2401657261 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GunController::Start()
extern "C"  void GunController_Start_m2192569310 (GunController_t1414244952 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GunController::FixedUpdate()
extern "C"  void GunController_FixedUpdate_m731471220 (GunController_t1414244952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GunController_FixedUpdate_m731471220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// var x = Input.GetAxis("Horizontal2");
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral4105162317, /*hidden argument*/NULL);
		V_0 = L_0;
		// var y = Input.GetAxis("Vertical2");
		float L_1 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral2167972859, /*hidden argument*/NULL);
		V_1 = L_1;
		// if (x != 0.0 || y != 0.0)
		float L_2 = V_0;
		if ((!(((double)(((double)((double)L_2)))) == ((double)(0.0)))))
		{
			goto IL_0030;
		}
	}
	{
		float L_3 = V_1;
		if ((((double)(((double)((double)L_3)))) == ((double)(0.0))))
		{
			goto IL_0055;
		}
	}

IL_0030:
	{
		// var angle = Mathf.Atan2(y, x) * Mathf.Rad2Deg;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = atan2f(L_4, L_5);
		V_2 = ((float)il2cpp_codegen_multiply((float)L_6, (float)(57.29578f)));
		// transform.rotation = Quaternion.AngleAxis(angle, Vector3.back);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_8 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_get_back_m4077847766(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_10 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m3524318132(L_7, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0055:
	{
		// transform.rotation = Quaternion.AngleAxis(0, Vector3.back);
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Vector3_get_back_m4077847766(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_13 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (0.0f), L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_rotation_m3524318132(L_11, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GunController::.ctor()
extern "C"  void GunController__ctor_m2506903264 (GunController_t1414244952 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InstantiateBullet::Start()
extern "C"  void InstantiateBullet_Start_m3837794186 (InstantiateBullet_t2967190384 * __this, const RuntimeMethod* method)
{
	{
		// laserSource.clip = laserClip;
		AudioSource_t3935305588 * L_0 = __this->get_laserSource_6();
		AudioClip_t3680889665 * L_1 = __this->get_laserClip_5();
		NullCheck(L_0);
		AudioSource_set_clip_m31653938(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InstantiateBullet::FixedUpdate()
extern "C"  void InstantiateBullet_FixedUpdate_m1681359339 (InstantiateBullet_t2967190384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstantiateBullet_FixedUpdate_m1681359339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetAxis("Fire1") > 0f && (Time.time > rateOfFire + lastShot))
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral3228161487, /*hidden argument*/NULL);
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		float L_1 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_rateOfFire_4();
		float L_3 = __this->get_lastShot_7();
		if ((!(((float)L_1) > ((float)((float)il2cpp_codegen_add((float)L_2, (float)L_3))))))
		{
			goto IL_0041;
		}
	}
	{
		// InstantiateObject();
		InstantiateBullet_InstantiateObject_m1946908393(__this, /*hidden argument*/NULL);
		// laserSource.Play();
		AudioSource_t3935305588 * L_4 = __this->get_laserSource_6();
		NullCheck(L_4);
		AudioSource_Play_m48294159(L_4, /*hidden argument*/NULL);
		// lastShot = Time.time;
		float L_5 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastShot_7(L_5);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void InstantiateBullet::InstantiateObject()
extern "C"  void InstantiateBullet_InstantiateObject_m1946908393 (InstantiateBullet_t2967190384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstantiateBullet_InstantiateObject_m1946908393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t1113636619 * V_2 = NULL;
	float V_3 = 0.0f;
	{
		// var x = Input.GetAxis("Horizontal2");
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral4105162317, /*hidden argument*/NULL);
		V_0 = L_0;
		// var y = Input.GetAxis("Vertical2");
		float L_1 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral2167972859, /*hidden argument*/NULL);
		V_1 = L_1;
		// GameObject bulletPrefab = Instantiate(bullet) as GameObject;
		GameObject_t1113636619 * L_2 = __this->get_bullet_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_3 = Object_Instantiate_TisGameObject_t1113636619_m587845175(NULL /*static, unused*/, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m587845175_RuntimeMethod_var);
		V_2 = L_3;
		// bulletPrefab.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z - 2);
		GameObject_t1113636619 * L_4 = V_2;
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_0();
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_1();
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_z_2();
		Vector3_t3722313464  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m3353183577((&L_15), L_8, L_11, ((float)il2cpp_codegen_subtract((float)L_14, (float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_15, /*hidden argument*/NULL);
		// if (x != 0.0 || y != 0.0)
		float L_16 = V_0;
		if ((!(((double)(((double)((double)L_16)))) == ((double)(0.0)))))
		{
			goto IL_0082;
		}
	}
	{
		float L_17 = V_1;
		if ((((double)(((double)((double)L_17)))) == ((double)(0.0))))
		{
			goto IL_00a8;
		}
	}

IL_0082:
	{
		// var angle = Mathf.Atan2(y, x) * Mathf.Rad2Deg;
		float L_18 = V_1;
		float L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_20 = atan2f(L_18, L_19);
		V_3 = ((float)il2cpp_codegen_multiply((float)L_20, (float)(57.29578f)));
		// bulletPrefab.transform.rotation = Quaternion.AngleAxis(angle, Vector3.back);
		GameObject_t1113636619 * L_21 = V_2;
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = GameObject_get_transform_m1369836730(L_21, /*hidden argument*/NULL);
		float L_23 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_24 = Vector3_get_back_m4077847766(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_25 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_rotation_m3524318132(L_22, L_25, /*hidden argument*/NULL);
		// }
		goto IL_00c2;
	}

IL_00a8:
	{
		// bulletPrefab.transform.rotation = Quaternion.AngleAxis(0, Vector3.back);
		GameObject_t1113636619 * L_26 = V_2;
		NullCheck(L_26);
		Transform_t3600365921 * L_27 = GameObject_get_transform_m1369836730(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_28 = Vector3_get_back_m4077847766(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_29 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (0.0f), L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_rotation_m3524318132(L_27, L_29, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		// bulletPrefab.GetComponent<Rigidbody2D>().velocity = transform.up * bulletSpeed;
		GameObject_t1113636619 * L_30 = V_2;
		NullCheck(L_30);
		Rigidbody2D_t939494601 * L_31 = GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013(L_30, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013_RuntimeMethod_var);
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t3722313464  L_33 = Transform_get_up_m3972993886(L_32, /*hidden argument*/NULL);
		float L_34 = __this->get_bulletSpeed_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_35 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_36 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		NullCheck(L_31);
		Rigidbody2D_set_velocity_m2898400508(L_31, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InstantiateBullet::.ctor()
extern "C"  void InstantiateBullet__ctor_m2738229690 (InstantiateBullet_t2967190384 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1746698410 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1746698410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myBody = this.GetComponent<Rigidbody2D>();//Unity 5+
		Rigidbody2D_t939494601 * L_0 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_myBody_6(L_0);
		// myTrans = this.transform;
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		__this->set_myTrans_4(L_1);
		// _shortcutFromPlayerControllerToGroundCheck = gameObject.GetComponentInChildren<GroundCheck>();
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GroundCheck_t2401657261 * L_3 = GameObject_GetComponentInChildren_TisGroundCheck_t2401657261_m3305283154(L_2, /*hidden argument*/GameObject_GetComponentInChildren_TisGroundCheck_t2401657261_m3305283154_RuntimeMethod_var);
		__this->set__shortcutFromPlayerControllerToGroundCheck_9(L_3);
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern "C"  void PlayerController_FixedUpdate_m1610259746 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_FixedUpdate_m1610259746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Move(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		float L_1 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		PlayerController_Move_m4157780474(__this, L_0, L_1, /*hidden argument*/NULL);
		// if (Input.GetButton("Jump"))
		bool L_2 = Input_GetButton_m2064261504(NULL /*static, unused*/, _stringLiteral1930566815, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// acceleration = moveSpeed * 2;
		float L_3 = __this->get_moveSpeed_2();
		__this->set_acceleration_8(((float)il2cpp_codegen_multiply((float)L_3, (float)(2.0f))));
		// }
		return;
	}

IL_0039:
	{
		// acceleration = moveSpeed;
		float L_4 = __this->get_moveSpeed_2();
		__this->set_acceleration_8(L_4);
		// }
		return;
	}
}
// System.Void PlayerController::Move(System.Single,System.Single)
extern "C"  void PlayerController_Move_m4157780474 (PlayerController_t2064355688 * __this, float ___horizonalInput0, float ___verticalInput1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Move_m4157780474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// Vector2 moveVel = myBody.velocity;
		Rigidbody2D_t939494601 * L_0 = __this->get_myBody_6();
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = Rigidbody2D_get_velocity_m366589732(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// moveVel.x = Mathf.Lerp(0, horizonalInput * acceleration * 10f, 0.8f);
		float L_2 = ___horizonalInput0;
		float L_3 = __this->get_acceleration_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), (float)(10.0f))), (0.8f), /*hidden argument*/NULL);
		(&V_0)->set_x_0(L_4);
		// moveVel.y = Mathf.Lerp(0, verticalInput * acceleration * 10f, 0.8f);
		float L_5 = ___verticalInput1;
		float L_6 = __this->get_acceleration_8();
		float L_7 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), (float)(10.0f))), (0.8f), /*hidden argument*/NULL);
		(&V_0)->set_y_1(L_7);
		// if (myBody.velocity.magnitude < moveVel.magnitude)
		Rigidbody2D_t939494601 * L_8 = __this->get_myBody_6();
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = Rigidbody2D_get_velocity_m366589732(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = Vector2_get_magnitude_m2752892833((Vector2_t2156229523 *)(&V_1), /*hidden argument*/NULL);
		float L_11 = Vector2_get_magnitude_m2752892833((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_007c;
		}
	}
	{
		// myBody.AddForce(moveVel);
		Rigidbody2D_t939494601 * L_12 = __this->get_myBody_6();
		Vector2_t2156229523  L_13 = V_0;
		NullCheck(L_12);
		Rigidbody2D_AddForce_m1113499586(L_12, L_13, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void PlayerController::StartMoving(System.Single)
extern "C"  void PlayerController_StartMoving_m2492158728 (PlayerController_t2064355688 * __this, float ___horizonalInput0, const RuntimeMethod* method)
{
	{
		// hInput = horizonalInput;
		float L_0 = ___horizonalInput0;
		__this->set_hInput_7(L_0);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m1333951952 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
