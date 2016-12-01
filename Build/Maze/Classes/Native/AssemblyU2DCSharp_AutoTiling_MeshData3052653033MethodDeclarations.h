#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// AutoTiling.MeshData
struct MeshData_t3052653033;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// System.Collections.Generic.List`1<System.Int32>[]
struct List_1U5BU5D_t363438909;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1355284821;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1355284823;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1151101739;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t701588350;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void AutoTiling.MeshData::.ctor()
extern "C"  void MeshData__ctor_m1910118304 (MeshData_t3052653033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> AutoTiling.MeshData::get_Vertices()
extern "C"  List_1_t1355284822 * MeshData_get_Vertices_m3440835244 (MeshData_t3052653033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> AutoTiling.MeshData::get_Normals()
extern "C"  List_1_t1355284822 * MeshData_get_Normals_m2834828347 (MeshData_t3052653033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32>[] AutoTiling.MeshData::get_Triangles()
extern "C"  List_1U5BU5D_t363438909* MeshData_get_Triangles_m3191284992 (MeshData_t3052653033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> AutoTiling.MeshData::get_UV()
extern "C"  List_1_t1355284821 * MeshData_get_UV_m4289477845 (MeshData_t3052653033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> AutoTiling.MeshData::get_UV2()
extern "C"  List_1_t1355284821 * MeshData_get_UV2_m4124803935 (MeshData_t3052653033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector4> AutoTiling.MeshData::get_Tangents()
extern "C"  List_1_t1355284823 * MeshData_get_Tangents_m2673718496 (MeshData_t3052653033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AutoTiling.MeshData::get_subMeshCount()
extern "C"  int32_t MeshData_get_subMeshCount_m1765741441 (MeshData_t3052653033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::set_subMeshCount(System.Int32)
extern "C"  void MeshData_set_subMeshCount_m3580922772 (MeshData_t3052653033 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::AddQuadTriangles()
extern "C"  void MeshData_AddQuadTriangles_m2501761831 (MeshData_t3052653033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::AddTriangle(System.Int32)
extern "C"  void MeshData_AddTriangle_m716342616 (MeshData_t3052653033 * __this, int32_t ___tri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::AddTriangle(System.Int32,System.Int32)
extern "C"  void MeshData_AddTriangle_m330172031 (MeshData_t3052653033 * __this, int32_t ___tri0, int32_t ___materialIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::SetTriangles(UnityEngine.Mesh)
extern "C"  void MeshData_SetTriangles_m1022562921 (MeshData_t3052653033 * __this, Mesh_t4241756145 * ___mesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::SetTriangles(System.Int32[])
extern "C"  void MeshData_SetTriangles_m1003602684 (MeshData_t3052653033 * __this, Int32U5BU5D_t3230847821* ___newTriangles0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::AddVertex(UnityEngine.Vector3)
extern "C"  void MeshData_AddVertex_m1990628438 (MeshData_t3052653033 * __this, Vector3_t4282066566  ___vertex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::RemoveVertices(System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>)
extern "C"  void MeshData_RemoveVertices_m3852502666 (MeshData_t3052653033 * __this, Dictionary_2_t1151101739 * ___vertexIndexDict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::SetVertices(UnityEngine.Vector3[])
extern "C"  void MeshData_SetVertices_m1288876958 (MeshData_t3052653033 * __this, Vector3U5BU5D_t215400611* ___newVertices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::AddNormal(UnityEngine.Vector3)
extern "C"  void MeshData_AddNormal_m1669677299 (MeshData_t3052653033 * __this, Vector3_t4282066566  ___normal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::SetNormals(UnityEngine.Vector3[])
extern "C"  void MeshData_SetNormals_m3166283497 (MeshData_t3052653033 * __this, Vector3U5BU5D_t215400611* ___newNormals0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::AddTangent(UnityEngine.Vector4)
extern "C"  void MeshData_AddTangent_m1732943408 (MeshData_t3052653033 * __this, Vector4_t4282066567  ___tangent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::SetTangents(UnityEngine.Vector4[])
extern "C"  void MeshData_SetTangents_m777570696 (MeshData_t3052653033 * __this, Vector4U5BU5D_t701588350* ___newTangents0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::AddUVCoordinates(UnityEngine.Vector2[])
extern "C"  void MeshData_AddUVCoordinates_m1656217595 (MeshData_t3052653033 * __this, Vector2U5BU5D_t4024180168* ___uvCoordinates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::AddUVCoordinate(UnityEngine.Vector2)
extern "C"  void MeshData_AddUVCoordinate_m1495424162 (MeshData_t3052653033 * __this, Vector2_t4282066565  ___uvCoordinate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::SetUV2Coordinates(UnityEngine.Vector2[])
extern "C"  void MeshData_SetUV2Coordinates_m4001466350 (MeshData_t3052653033 * __this, Vector2U5BU5D_t4024180168* ___uvCoordinates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::AddUV2Coordinate(UnityEngine.Vector2)
extern "C"  void MeshData_AddUV2Coordinate_m2631130638 (MeshData_t3052653033 * __this, Vector2_t4282066565  ___coordinate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.MeshData::RemoveDoubles()
extern "C"  void MeshData_RemoveDoubles_m3139191260 (MeshData_t3052653033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
