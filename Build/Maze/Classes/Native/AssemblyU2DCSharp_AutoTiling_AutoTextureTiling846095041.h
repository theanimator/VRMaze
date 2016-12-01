#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AutoTiling.FaceData[]
struct FaceDataU5BU5D_t1960330276;
// UnityEngine.MeshFilter
struct MeshFilter_t3839065225;
// UnityEngine.MeshRenderer
struct MeshRenderer_t2804666580;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_AutoTiling_UnwrapType1174250991.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AutoTiling.AutoTextureTiling
struct  AutoTextureTiling_t846095041  : public MonoBehaviour_t667441552
{
public:
	// System.Single AutoTiling.AutoTextureTiling::faceUnwrappingNormalTolerance
	float ___faceUnwrappingNormalTolerance_2;
	// System.Boolean AutoTiling.AutoTextureTiling::useUnifiedScaling
	bool ___useUnifiedScaling_3;
	// UnityEngine.Vector2 AutoTiling.AutoTextureTiling::_topScale
	Vector2_t4282066565  ____topScale_4;
	// UnityEngine.Vector2 AutoTiling.AutoTextureTiling::_bottomScale
	Vector2_t4282066565  ____bottomScale_5;
	// UnityEngine.Vector2 AutoTiling.AutoTextureTiling::_leftScale
	Vector2_t4282066565  ____leftScale_6;
	// UnityEngine.Vector2 AutoTiling.AutoTextureTiling::_rightScale
	Vector2_t4282066565  ____rightScale_7;
	// UnityEngine.Vector2 AutoTiling.AutoTextureTiling::_frontScale
	Vector2_t4282066565  ____frontScale_8;
	// UnityEngine.Vector2 AutoTiling.AutoTextureTiling::_backScale
	Vector2_t4282066565  ____backScale_9;
	// System.Boolean AutoTiling.AutoTextureTiling::useUnifiedOffset
	bool ___useUnifiedOffset_10;
	// UnityEngine.Vector2 AutoTiling.AutoTextureTiling::_topOffset
	Vector2_t4282066565  ____topOffset_11;
	// UnityEngine.Vector2 AutoTiling.AutoTextureTiling::_bottomOffset
	Vector2_t4282066565  ____bottomOffset_12;
	// UnityEngine.Vector2 AutoTiling.AutoTextureTiling::_leftOffset
	Vector2_t4282066565  ____leftOffset_13;
	// UnityEngine.Vector2 AutoTiling.AutoTextureTiling::_rightOffset
	Vector2_t4282066565  ____rightOffset_14;
	// UnityEngine.Vector2 AutoTiling.AutoTextureTiling::_frontOffset
	Vector2_t4282066565  ____frontOffset_15;
	// UnityEngine.Vector2 AutoTiling.AutoTextureTiling::_backOffset
	Vector2_t4282066565  ____backOffset_16;
	// System.Single AutoTiling.AutoTextureTiling::_topRotation
	float ____topRotation_17;
	// System.Single AutoTiling.AutoTextureTiling::_bottomRotation
	float ____bottomRotation_18;
	// System.Single AutoTiling.AutoTextureTiling::_leftRotation
	float ____leftRotation_19;
	// System.Single AutoTiling.AutoTextureTiling::_rightRotation
	float ____rightRotation_20;
	// System.Single AutoTiling.AutoTextureTiling::_frontRotation
	float ____frontRotation_21;
	// System.Single AutoTiling.AutoTextureTiling::_backRotation
	float ____backRotation_22;
	// System.Int32 AutoTiling.AutoTextureTiling::_topMaterialIndex
	int32_t ____topMaterialIndex_23;
	// System.Int32 AutoTiling.AutoTextureTiling::_bottomMaterialIndex
	int32_t ____bottomMaterialIndex_24;
	// System.Int32 AutoTiling.AutoTextureTiling::_leftMaterialIndex
	int32_t ____leftMaterialIndex_25;
	// System.Int32 AutoTiling.AutoTextureTiling::_rightMaterialIndex
	int32_t ____rightMaterialIndex_26;
	// System.Int32 AutoTiling.AutoTextureTiling::_frontMaterialIndex
	int32_t ____frontMaterialIndex_27;
	// System.Int32 AutoTiling.AutoTextureTiling::_backMaterialIndex
	int32_t ____backMaterialIndex_28;
	// System.Boolean AutoTiling.AutoTextureTiling::_topFlipX
	bool ____topFlipX_29;
	// System.Boolean AutoTiling.AutoTextureTiling::_topFlipY
	bool ____topFlipY_30;
	// System.Boolean AutoTiling.AutoTextureTiling::_bottomFlipX
	bool ____bottomFlipX_31;
	// System.Boolean AutoTiling.AutoTextureTiling::_bottomFlipY
	bool ____bottomFlipY_32;
	// System.Boolean AutoTiling.AutoTextureTiling::_leftFlipX
	bool ____leftFlipX_33;
	// System.Boolean AutoTiling.AutoTextureTiling::_leftFlipY
	bool ____leftFlipY_34;
	// System.Boolean AutoTiling.AutoTextureTiling::_rightFlipX
	bool ____rightFlipX_35;
	// System.Boolean AutoTiling.AutoTextureTiling::_rightFlipY
	bool ____rightFlipY_36;
	// System.Boolean AutoTiling.AutoTextureTiling::_frontFlipX
	bool ____frontFlipX_37;
	// System.Boolean AutoTiling.AutoTextureTiling::_frontFlipY
	bool ____frontFlipY_38;
	// System.Boolean AutoTiling.AutoTextureTiling::_backFlipX
	bool ____backFlipX_39;
	// System.Boolean AutoTiling.AutoTextureTiling::_backFlipY
	bool ____backFlipY_40;
	// System.Boolean AutoTiling.AutoTextureTiling::_useBakedMesh
	bool ____useBakedMesh_41;
	// AutoTiling.FaceData[] AutoTiling.AutoTextureTiling::_faceUnwrapData
	FaceDataU5BU5D_t1960330276* ____faceUnwrapData_42;
	// AutoTiling.UnwrapType AutoTiling.AutoTextureTiling::_unwrapMethod
	int32_t ____unwrapMethod_43;
	// System.Single AutoTiling.AutoTextureTiling::scaleX
	float ___scaleX_44;
	// System.Single AutoTiling.AutoTextureTiling::scaleY
	float ___scaleY_45;
	// System.Single AutoTiling.AutoTextureTiling::scaleZ
	float ___scaleZ_46;
	// UnityEngine.MeshFilter AutoTiling.AutoTextureTiling::_meshFilter
	MeshFilter_t3839065225 * ____meshFilter_47;
	// UnityEngine.MeshRenderer AutoTiling.AutoTextureTiling::meshRenderer
	MeshRenderer_t2804666580 * ___meshRenderer_48;

public:
	inline static int32_t get_offset_of_faceUnwrappingNormalTolerance_2() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ___faceUnwrappingNormalTolerance_2)); }
	inline float get_faceUnwrappingNormalTolerance_2() const { return ___faceUnwrappingNormalTolerance_2; }
	inline float* get_address_of_faceUnwrappingNormalTolerance_2() { return &___faceUnwrappingNormalTolerance_2; }
	inline void set_faceUnwrappingNormalTolerance_2(float value)
	{
		___faceUnwrappingNormalTolerance_2 = value;
	}

	inline static int32_t get_offset_of_useUnifiedScaling_3() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ___useUnifiedScaling_3)); }
	inline bool get_useUnifiedScaling_3() const { return ___useUnifiedScaling_3; }
	inline bool* get_address_of_useUnifiedScaling_3() { return &___useUnifiedScaling_3; }
	inline void set_useUnifiedScaling_3(bool value)
	{
		___useUnifiedScaling_3 = value;
	}

	inline static int32_t get_offset_of__topScale_4() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____topScale_4)); }
	inline Vector2_t4282066565  get__topScale_4() const { return ____topScale_4; }
	inline Vector2_t4282066565 * get_address_of__topScale_4() { return &____topScale_4; }
	inline void set__topScale_4(Vector2_t4282066565  value)
	{
		____topScale_4 = value;
	}

	inline static int32_t get_offset_of__bottomScale_5() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____bottomScale_5)); }
	inline Vector2_t4282066565  get__bottomScale_5() const { return ____bottomScale_5; }
	inline Vector2_t4282066565 * get_address_of__bottomScale_5() { return &____bottomScale_5; }
	inline void set__bottomScale_5(Vector2_t4282066565  value)
	{
		____bottomScale_5 = value;
	}

	inline static int32_t get_offset_of__leftScale_6() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____leftScale_6)); }
	inline Vector2_t4282066565  get__leftScale_6() const { return ____leftScale_6; }
	inline Vector2_t4282066565 * get_address_of__leftScale_6() { return &____leftScale_6; }
	inline void set__leftScale_6(Vector2_t4282066565  value)
	{
		____leftScale_6 = value;
	}

	inline static int32_t get_offset_of__rightScale_7() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____rightScale_7)); }
	inline Vector2_t4282066565  get__rightScale_7() const { return ____rightScale_7; }
	inline Vector2_t4282066565 * get_address_of__rightScale_7() { return &____rightScale_7; }
	inline void set__rightScale_7(Vector2_t4282066565  value)
	{
		____rightScale_7 = value;
	}

	inline static int32_t get_offset_of__frontScale_8() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____frontScale_8)); }
	inline Vector2_t4282066565  get__frontScale_8() const { return ____frontScale_8; }
	inline Vector2_t4282066565 * get_address_of__frontScale_8() { return &____frontScale_8; }
	inline void set__frontScale_8(Vector2_t4282066565  value)
	{
		____frontScale_8 = value;
	}

	inline static int32_t get_offset_of__backScale_9() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____backScale_9)); }
	inline Vector2_t4282066565  get__backScale_9() const { return ____backScale_9; }
	inline Vector2_t4282066565 * get_address_of__backScale_9() { return &____backScale_9; }
	inline void set__backScale_9(Vector2_t4282066565  value)
	{
		____backScale_9 = value;
	}

	inline static int32_t get_offset_of_useUnifiedOffset_10() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ___useUnifiedOffset_10)); }
	inline bool get_useUnifiedOffset_10() const { return ___useUnifiedOffset_10; }
	inline bool* get_address_of_useUnifiedOffset_10() { return &___useUnifiedOffset_10; }
	inline void set_useUnifiedOffset_10(bool value)
	{
		___useUnifiedOffset_10 = value;
	}

	inline static int32_t get_offset_of__topOffset_11() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____topOffset_11)); }
	inline Vector2_t4282066565  get__topOffset_11() const { return ____topOffset_11; }
	inline Vector2_t4282066565 * get_address_of__topOffset_11() { return &____topOffset_11; }
	inline void set__topOffset_11(Vector2_t4282066565  value)
	{
		____topOffset_11 = value;
	}

	inline static int32_t get_offset_of__bottomOffset_12() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____bottomOffset_12)); }
	inline Vector2_t4282066565  get__bottomOffset_12() const { return ____bottomOffset_12; }
	inline Vector2_t4282066565 * get_address_of__bottomOffset_12() { return &____bottomOffset_12; }
	inline void set__bottomOffset_12(Vector2_t4282066565  value)
	{
		____bottomOffset_12 = value;
	}

	inline static int32_t get_offset_of__leftOffset_13() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____leftOffset_13)); }
	inline Vector2_t4282066565  get__leftOffset_13() const { return ____leftOffset_13; }
	inline Vector2_t4282066565 * get_address_of__leftOffset_13() { return &____leftOffset_13; }
	inline void set__leftOffset_13(Vector2_t4282066565  value)
	{
		____leftOffset_13 = value;
	}

	inline static int32_t get_offset_of__rightOffset_14() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____rightOffset_14)); }
	inline Vector2_t4282066565  get__rightOffset_14() const { return ____rightOffset_14; }
	inline Vector2_t4282066565 * get_address_of__rightOffset_14() { return &____rightOffset_14; }
	inline void set__rightOffset_14(Vector2_t4282066565  value)
	{
		____rightOffset_14 = value;
	}

	inline static int32_t get_offset_of__frontOffset_15() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____frontOffset_15)); }
	inline Vector2_t4282066565  get__frontOffset_15() const { return ____frontOffset_15; }
	inline Vector2_t4282066565 * get_address_of__frontOffset_15() { return &____frontOffset_15; }
	inline void set__frontOffset_15(Vector2_t4282066565  value)
	{
		____frontOffset_15 = value;
	}

	inline static int32_t get_offset_of__backOffset_16() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____backOffset_16)); }
	inline Vector2_t4282066565  get__backOffset_16() const { return ____backOffset_16; }
	inline Vector2_t4282066565 * get_address_of__backOffset_16() { return &____backOffset_16; }
	inline void set__backOffset_16(Vector2_t4282066565  value)
	{
		____backOffset_16 = value;
	}

	inline static int32_t get_offset_of__topRotation_17() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____topRotation_17)); }
	inline float get__topRotation_17() const { return ____topRotation_17; }
	inline float* get_address_of__topRotation_17() { return &____topRotation_17; }
	inline void set__topRotation_17(float value)
	{
		____topRotation_17 = value;
	}

	inline static int32_t get_offset_of__bottomRotation_18() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____bottomRotation_18)); }
	inline float get__bottomRotation_18() const { return ____bottomRotation_18; }
	inline float* get_address_of__bottomRotation_18() { return &____bottomRotation_18; }
	inline void set__bottomRotation_18(float value)
	{
		____bottomRotation_18 = value;
	}

	inline static int32_t get_offset_of__leftRotation_19() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____leftRotation_19)); }
	inline float get__leftRotation_19() const { return ____leftRotation_19; }
	inline float* get_address_of__leftRotation_19() { return &____leftRotation_19; }
	inline void set__leftRotation_19(float value)
	{
		____leftRotation_19 = value;
	}

	inline static int32_t get_offset_of__rightRotation_20() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____rightRotation_20)); }
	inline float get__rightRotation_20() const { return ____rightRotation_20; }
	inline float* get_address_of__rightRotation_20() { return &____rightRotation_20; }
	inline void set__rightRotation_20(float value)
	{
		____rightRotation_20 = value;
	}

	inline static int32_t get_offset_of__frontRotation_21() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____frontRotation_21)); }
	inline float get__frontRotation_21() const { return ____frontRotation_21; }
	inline float* get_address_of__frontRotation_21() { return &____frontRotation_21; }
	inline void set__frontRotation_21(float value)
	{
		____frontRotation_21 = value;
	}

	inline static int32_t get_offset_of__backRotation_22() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____backRotation_22)); }
	inline float get__backRotation_22() const { return ____backRotation_22; }
	inline float* get_address_of__backRotation_22() { return &____backRotation_22; }
	inline void set__backRotation_22(float value)
	{
		____backRotation_22 = value;
	}

	inline static int32_t get_offset_of__topMaterialIndex_23() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____topMaterialIndex_23)); }
	inline int32_t get__topMaterialIndex_23() const { return ____topMaterialIndex_23; }
	inline int32_t* get_address_of__topMaterialIndex_23() { return &____topMaterialIndex_23; }
	inline void set__topMaterialIndex_23(int32_t value)
	{
		____topMaterialIndex_23 = value;
	}

	inline static int32_t get_offset_of__bottomMaterialIndex_24() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____bottomMaterialIndex_24)); }
	inline int32_t get__bottomMaterialIndex_24() const { return ____bottomMaterialIndex_24; }
	inline int32_t* get_address_of__bottomMaterialIndex_24() { return &____bottomMaterialIndex_24; }
	inline void set__bottomMaterialIndex_24(int32_t value)
	{
		____bottomMaterialIndex_24 = value;
	}

	inline static int32_t get_offset_of__leftMaterialIndex_25() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____leftMaterialIndex_25)); }
	inline int32_t get__leftMaterialIndex_25() const { return ____leftMaterialIndex_25; }
	inline int32_t* get_address_of__leftMaterialIndex_25() { return &____leftMaterialIndex_25; }
	inline void set__leftMaterialIndex_25(int32_t value)
	{
		____leftMaterialIndex_25 = value;
	}

	inline static int32_t get_offset_of__rightMaterialIndex_26() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____rightMaterialIndex_26)); }
	inline int32_t get__rightMaterialIndex_26() const { return ____rightMaterialIndex_26; }
	inline int32_t* get_address_of__rightMaterialIndex_26() { return &____rightMaterialIndex_26; }
	inline void set__rightMaterialIndex_26(int32_t value)
	{
		____rightMaterialIndex_26 = value;
	}

	inline static int32_t get_offset_of__frontMaterialIndex_27() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____frontMaterialIndex_27)); }
	inline int32_t get__frontMaterialIndex_27() const { return ____frontMaterialIndex_27; }
	inline int32_t* get_address_of__frontMaterialIndex_27() { return &____frontMaterialIndex_27; }
	inline void set__frontMaterialIndex_27(int32_t value)
	{
		____frontMaterialIndex_27 = value;
	}

	inline static int32_t get_offset_of__backMaterialIndex_28() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____backMaterialIndex_28)); }
	inline int32_t get__backMaterialIndex_28() const { return ____backMaterialIndex_28; }
	inline int32_t* get_address_of__backMaterialIndex_28() { return &____backMaterialIndex_28; }
	inline void set__backMaterialIndex_28(int32_t value)
	{
		____backMaterialIndex_28 = value;
	}

	inline static int32_t get_offset_of__topFlipX_29() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____topFlipX_29)); }
	inline bool get__topFlipX_29() const { return ____topFlipX_29; }
	inline bool* get_address_of__topFlipX_29() { return &____topFlipX_29; }
	inline void set__topFlipX_29(bool value)
	{
		____topFlipX_29 = value;
	}

	inline static int32_t get_offset_of__topFlipY_30() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____topFlipY_30)); }
	inline bool get__topFlipY_30() const { return ____topFlipY_30; }
	inline bool* get_address_of__topFlipY_30() { return &____topFlipY_30; }
	inline void set__topFlipY_30(bool value)
	{
		____topFlipY_30 = value;
	}

	inline static int32_t get_offset_of__bottomFlipX_31() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____bottomFlipX_31)); }
	inline bool get__bottomFlipX_31() const { return ____bottomFlipX_31; }
	inline bool* get_address_of__bottomFlipX_31() { return &____bottomFlipX_31; }
	inline void set__bottomFlipX_31(bool value)
	{
		____bottomFlipX_31 = value;
	}

	inline static int32_t get_offset_of__bottomFlipY_32() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____bottomFlipY_32)); }
	inline bool get__bottomFlipY_32() const { return ____bottomFlipY_32; }
	inline bool* get_address_of__bottomFlipY_32() { return &____bottomFlipY_32; }
	inline void set__bottomFlipY_32(bool value)
	{
		____bottomFlipY_32 = value;
	}

	inline static int32_t get_offset_of__leftFlipX_33() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____leftFlipX_33)); }
	inline bool get__leftFlipX_33() const { return ____leftFlipX_33; }
	inline bool* get_address_of__leftFlipX_33() { return &____leftFlipX_33; }
	inline void set__leftFlipX_33(bool value)
	{
		____leftFlipX_33 = value;
	}

	inline static int32_t get_offset_of__leftFlipY_34() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____leftFlipY_34)); }
	inline bool get__leftFlipY_34() const { return ____leftFlipY_34; }
	inline bool* get_address_of__leftFlipY_34() { return &____leftFlipY_34; }
	inline void set__leftFlipY_34(bool value)
	{
		____leftFlipY_34 = value;
	}

	inline static int32_t get_offset_of__rightFlipX_35() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____rightFlipX_35)); }
	inline bool get__rightFlipX_35() const { return ____rightFlipX_35; }
	inline bool* get_address_of__rightFlipX_35() { return &____rightFlipX_35; }
	inline void set__rightFlipX_35(bool value)
	{
		____rightFlipX_35 = value;
	}

	inline static int32_t get_offset_of__rightFlipY_36() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____rightFlipY_36)); }
	inline bool get__rightFlipY_36() const { return ____rightFlipY_36; }
	inline bool* get_address_of__rightFlipY_36() { return &____rightFlipY_36; }
	inline void set__rightFlipY_36(bool value)
	{
		____rightFlipY_36 = value;
	}

	inline static int32_t get_offset_of__frontFlipX_37() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____frontFlipX_37)); }
	inline bool get__frontFlipX_37() const { return ____frontFlipX_37; }
	inline bool* get_address_of__frontFlipX_37() { return &____frontFlipX_37; }
	inline void set__frontFlipX_37(bool value)
	{
		____frontFlipX_37 = value;
	}

	inline static int32_t get_offset_of__frontFlipY_38() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____frontFlipY_38)); }
	inline bool get__frontFlipY_38() const { return ____frontFlipY_38; }
	inline bool* get_address_of__frontFlipY_38() { return &____frontFlipY_38; }
	inline void set__frontFlipY_38(bool value)
	{
		____frontFlipY_38 = value;
	}

	inline static int32_t get_offset_of__backFlipX_39() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____backFlipX_39)); }
	inline bool get__backFlipX_39() const { return ____backFlipX_39; }
	inline bool* get_address_of__backFlipX_39() { return &____backFlipX_39; }
	inline void set__backFlipX_39(bool value)
	{
		____backFlipX_39 = value;
	}

	inline static int32_t get_offset_of__backFlipY_40() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____backFlipY_40)); }
	inline bool get__backFlipY_40() const { return ____backFlipY_40; }
	inline bool* get_address_of__backFlipY_40() { return &____backFlipY_40; }
	inline void set__backFlipY_40(bool value)
	{
		____backFlipY_40 = value;
	}

	inline static int32_t get_offset_of__useBakedMesh_41() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____useBakedMesh_41)); }
	inline bool get__useBakedMesh_41() const { return ____useBakedMesh_41; }
	inline bool* get_address_of__useBakedMesh_41() { return &____useBakedMesh_41; }
	inline void set__useBakedMesh_41(bool value)
	{
		____useBakedMesh_41 = value;
	}

	inline static int32_t get_offset_of__faceUnwrapData_42() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____faceUnwrapData_42)); }
	inline FaceDataU5BU5D_t1960330276* get__faceUnwrapData_42() const { return ____faceUnwrapData_42; }
	inline FaceDataU5BU5D_t1960330276** get_address_of__faceUnwrapData_42() { return &____faceUnwrapData_42; }
	inline void set__faceUnwrapData_42(FaceDataU5BU5D_t1960330276* value)
	{
		____faceUnwrapData_42 = value;
		Il2CppCodeGenWriteBarrier(&____faceUnwrapData_42, value);
	}

	inline static int32_t get_offset_of__unwrapMethod_43() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____unwrapMethod_43)); }
	inline int32_t get__unwrapMethod_43() const { return ____unwrapMethod_43; }
	inline int32_t* get_address_of__unwrapMethod_43() { return &____unwrapMethod_43; }
	inline void set__unwrapMethod_43(int32_t value)
	{
		____unwrapMethod_43 = value;
	}

	inline static int32_t get_offset_of_scaleX_44() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ___scaleX_44)); }
	inline float get_scaleX_44() const { return ___scaleX_44; }
	inline float* get_address_of_scaleX_44() { return &___scaleX_44; }
	inline void set_scaleX_44(float value)
	{
		___scaleX_44 = value;
	}

	inline static int32_t get_offset_of_scaleY_45() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ___scaleY_45)); }
	inline float get_scaleY_45() const { return ___scaleY_45; }
	inline float* get_address_of_scaleY_45() { return &___scaleY_45; }
	inline void set_scaleY_45(float value)
	{
		___scaleY_45 = value;
	}

	inline static int32_t get_offset_of_scaleZ_46() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ___scaleZ_46)); }
	inline float get_scaleZ_46() const { return ___scaleZ_46; }
	inline float* get_address_of_scaleZ_46() { return &___scaleZ_46; }
	inline void set_scaleZ_46(float value)
	{
		___scaleZ_46 = value;
	}

	inline static int32_t get_offset_of__meshFilter_47() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ____meshFilter_47)); }
	inline MeshFilter_t3839065225 * get__meshFilter_47() const { return ____meshFilter_47; }
	inline MeshFilter_t3839065225 ** get_address_of__meshFilter_47() { return &____meshFilter_47; }
	inline void set__meshFilter_47(MeshFilter_t3839065225 * value)
	{
		____meshFilter_47 = value;
		Il2CppCodeGenWriteBarrier(&____meshFilter_47, value);
	}

	inline static int32_t get_offset_of_meshRenderer_48() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041, ___meshRenderer_48)); }
	inline MeshRenderer_t2804666580 * get_meshRenderer_48() const { return ___meshRenderer_48; }
	inline MeshRenderer_t2804666580 ** get_address_of_meshRenderer_48() { return &___meshRenderer_48; }
	inline void set_meshRenderer_48(MeshRenderer_t2804666580 * value)
	{
		___meshRenderer_48 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_48, value);
	}
};

struct AutoTextureTiling_t846095041_StaticFields
{
public:
	// System.String AutoTiling.AutoTextureTiling::extensionString
	String_t* ___extensionString_49;
	// System.String AutoTiling.AutoTextureTiling::meshAssetPathString
	String_t* ___meshAssetPathString_50;

public:
	inline static int32_t get_offset_of_extensionString_49() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041_StaticFields, ___extensionString_49)); }
	inline String_t* get_extensionString_49() const { return ___extensionString_49; }
	inline String_t** get_address_of_extensionString_49() { return &___extensionString_49; }
	inline void set_extensionString_49(String_t* value)
	{
		___extensionString_49 = value;
		Il2CppCodeGenWriteBarrier(&___extensionString_49, value);
	}

	inline static int32_t get_offset_of_meshAssetPathString_50() { return static_cast<int32_t>(offsetof(AutoTextureTiling_t846095041_StaticFields, ___meshAssetPathString_50)); }
	inline String_t* get_meshAssetPathString_50() const { return ___meshAssetPathString_50; }
	inline String_t** get_address_of_meshAssetPathString_50() { return &___meshAssetPathString_50; }
	inline void set_meshAssetPathString_50(String_t* value)
	{
		___meshAssetPathString_50 = value;
		Il2CppCodeGenWriteBarrier(&___meshAssetPathString_50, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
