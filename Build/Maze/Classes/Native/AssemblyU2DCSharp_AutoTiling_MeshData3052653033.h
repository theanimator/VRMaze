#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// System.Collections.Generic.List`1<System.Int32>[]
struct List_1U5BU5D_t363438909;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1355284821;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1355284823;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AutoTiling.MeshData
struct  MeshData_t3052653033  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> AutoTiling.MeshData::vertices
	List_1_t1355284822 * ___vertices_0;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> AutoTiling.MeshData::normals
	List_1_t1355284822 * ___normals_1;
	// System.Collections.Generic.List`1<System.Int32>[] AutoTiling.MeshData::triangles
	List_1U5BU5D_t363438909* ___triangles_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> AutoTiling.MeshData::uv
	List_1_t1355284821 * ___uv_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> AutoTiling.MeshData::uv2
	List_1_t1355284821 * ___uv2_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> AutoTiling.MeshData::tangents
	List_1_t1355284823 * ___tangents_5;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(MeshData_t3052653033, ___vertices_0)); }
	inline List_1_t1355284822 * get_vertices_0() const { return ___vertices_0; }
	inline List_1_t1355284822 ** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(List_1_t1355284822 * value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_0, value);
	}

	inline static int32_t get_offset_of_normals_1() { return static_cast<int32_t>(offsetof(MeshData_t3052653033, ___normals_1)); }
	inline List_1_t1355284822 * get_normals_1() const { return ___normals_1; }
	inline List_1_t1355284822 ** get_address_of_normals_1() { return &___normals_1; }
	inline void set_normals_1(List_1_t1355284822 * value)
	{
		___normals_1 = value;
		Il2CppCodeGenWriteBarrier(&___normals_1, value);
	}

	inline static int32_t get_offset_of_triangles_2() { return static_cast<int32_t>(offsetof(MeshData_t3052653033, ___triangles_2)); }
	inline List_1U5BU5D_t363438909* get_triangles_2() const { return ___triangles_2; }
	inline List_1U5BU5D_t363438909** get_address_of_triangles_2() { return &___triangles_2; }
	inline void set_triangles_2(List_1U5BU5D_t363438909* value)
	{
		___triangles_2 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_2, value);
	}

	inline static int32_t get_offset_of_uv_3() { return static_cast<int32_t>(offsetof(MeshData_t3052653033, ___uv_3)); }
	inline List_1_t1355284821 * get_uv_3() const { return ___uv_3; }
	inline List_1_t1355284821 ** get_address_of_uv_3() { return &___uv_3; }
	inline void set_uv_3(List_1_t1355284821 * value)
	{
		___uv_3 = value;
		Il2CppCodeGenWriteBarrier(&___uv_3, value);
	}

	inline static int32_t get_offset_of_uv2_4() { return static_cast<int32_t>(offsetof(MeshData_t3052653033, ___uv2_4)); }
	inline List_1_t1355284821 * get_uv2_4() const { return ___uv2_4; }
	inline List_1_t1355284821 ** get_address_of_uv2_4() { return &___uv2_4; }
	inline void set_uv2_4(List_1_t1355284821 * value)
	{
		___uv2_4 = value;
		Il2CppCodeGenWriteBarrier(&___uv2_4, value);
	}

	inline static int32_t get_offset_of_tangents_5() { return static_cast<int32_t>(offsetof(MeshData_t3052653033, ___tangents_5)); }
	inline List_1_t1355284823 * get_tangents_5() const { return ___tangents_5; }
	inline List_1_t1355284823 ** get_address_of_tangents_5() { return &___tangents_5; }
	inline void set_tangents_5(List_1_t1355284823 * value)
	{
		___tangents_5 = value;
		Il2CppCodeGenWriteBarrier(&___tangents_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
