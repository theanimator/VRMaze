#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AutoTiling.FaceData
struct  FaceData_t4021998169  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 AutoTiling.FaceData::uvScale
	Vector2_t4282066565  ___uvScale_0;
	// UnityEngine.Vector2 AutoTiling.FaceData::uvOffset
	Vector2_t4282066565  ___uvOffset_1;
	// System.Single AutoTiling.FaceData::rotation
	float ___rotation_2;
	// System.Boolean AutoTiling.FaceData::flipUVx
	bool ___flipUVx_3;
	// System.Boolean AutoTiling.FaceData::flipUVy
	bool ___flipUVy_4;
	// System.Int32 AutoTiling.FaceData::materialIndex
	int32_t ___materialIndex_5;
	// System.Int32[] AutoTiling.FaceData::triangles
	Int32U5BU5D_t3230847821* ___triangles_6;
	// UnityEngine.Vector3[] AutoTiling.FaceData::normals
	Vector3U5BU5D_t215400611* ___normals_7;
	// UnityEngine.Vector3 AutoTiling.FaceData::averageNormal
	Vector3_t4282066566  ___averageNormal_8;
	// System.Boolean AutoTiling.FaceData::initialized
	bool ___initialized_9;

public:
	inline static int32_t get_offset_of_uvScale_0() { return static_cast<int32_t>(offsetof(FaceData_t4021998169, ___uvScale_0)); }
	inline Vector2_t4282066565  get_uvScale_0() const { return ___uvScale_0; }
	inline Vector2_t4282066565 * get_address_of_uvScale_0() { return &___uvScale_0; }
	inline void set_uvScale_0(Vector2_t4282066565  value)
	{
		___uvScale_0 = value;
	}

	inline static int32_t get_offset_of_uvOffset_1() { return static_cast<int32_t>(offsetof(FaceData_t4021998169, ___uvOffset_1)); }
	inline Vector2_t4282066565  get_uvOffset_1() const { return ___uvOffset_1; }
	inline Vector2_t4282066565 * get_address_of_uvOffset_1() { return &___uvOffset_1; }
	inline void set_uvOffset_1(Vector2_t4282066565  value)
	{
		___uvOffset_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(FaceData_t4021998169, ___rotation_2)); }
	inline float get_rotation_2() const { return ___rotation_2; }
	inline float* get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(float value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_flipUVx_3() { return static_cast<int32_t>(offsetof(FaceData_t4021998169, ___flipUVx_3)); }
	inline bool get_flipUVx_3() const { return ___flipUVx_3; }
	inline bool* get_address_of_flipUVx_3() { return &___flipUVx_3; }
	inline void set_flipUVx_3(bool value)
	{
		___flipUVx_3 = value;
	}

	inline static int32_t get_offset_of_flipUVy_4() { return static_cast<int32_t>(offsetof(FaceData_t4021998169, ___flipUVy_4)); }
	inline bool get_flipUVy_4() const { return ___flipUVy_4; }
	inline bool* get_address_of_flipUVy_4() { return &___flipUVy_4; }
	inline void set_flipUVy_4(bool value)
	{
		___flipUVy_4 = value;
	}

	inline static int32_t get_offset_of_materialIndex_5() { return static_cast<int32_t>(offsetof(FaceData_t4021998169, ___materialIndex_5)); }
	inline int32_t get_materialIndex_5() const { return ___materialIndex_5; }
	inline int32_t* get_address_of_materialIndex_5() { return &___materialIndex_5; }
	inline void set_materialIndex_5(int32_t value)
	{
		___materialIndex_5 = value;
	}

	inline static int32_t get_offset_of_triangles_6() { return static_cast<int32_t>(offsetof(FaceData_t4021998169, ___triangles_6)); }
	inline Int32U5BU5D_t3230847821* get_triangles_6() const { return ___triangles_6; }
	inline Int32U5BU5D_t3230847821** get_address_of_triangles_6() { return &___triangles_6; }
	inline void set_triangles_6(Int32U5BU5D_t3230847821* value)
	{
		___triangles_6 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_6, value);
	}

	inline static int32_t get_offset_of_normals_7() { return static_cast<int32_t>(offsetof(FaceData_t4021998169, ___normals_7)); }
	inline Vector3U5BU5D_t215400611* get_normals_7() const { return ___normals_7; }
	inline Vector3U5BU5D_t215400611** get_address_of_normals_7() { return &___normals_7; }
	inline void set_normals_7(Vector3U5BU5D_t215400611* value)
	{
		___normals_7 = value;
		Il2CppCodeGenWriteBarrier(&___normals_7, value);
	}

	inline static int32_t get_offset_of_averageNormal_8() { return static_cast<int32_t>(offsetof(FaceData_t4021998169, ___averageNormal_8)); }
	inline Vector3_t4282066566  get_averageNormal_8() const { return ___averageNormal_8; }
	inline Vector3_t4282066566 * get_address_of_averageNormal_8() { return &___averageNormal_8; }
	inline void set_averageNormal_8(Vector3_t4282066566  value)
	{
		___averageNormal_8 = value;
	}

	inline static int32_t get_offset_of_initialized_9() { return static_cast<int32_t>(offsetof(FaceData_t4021998169, ___initialized_9)); }
	inline bool get_initialized_9() const { return ___initialized_9; }
	inline bool* get_address_of_initialized_9() { return &___initialized_9; }
	inline void set_initialized_9(bool value)
	{
		___initialized_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
