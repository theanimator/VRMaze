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

// AutoTiling.FaceData
struct FaceData_t4021998169;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_AutoTiling_FaceData4021998169.h"

// System.Void AutoTiling.FaceData::.ctor()
extern "C"  void FaceData__ctor_m1939705136 (FaceData_t4021998169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AutoTiling.FaceData::get_AverageNormal()
extern "C"  Vector3_t4282066566  FaceData_get_AverageNormal_m2222536643 (FaceData_t4021998169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AutoTiling.FaceData::get_Initialized()
extern "C"  bool FaceData_get_Initialized_m1391247981 (FaceData_t4021998169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] AutoTiling.FaceData::get_Triangles()
extern "C"  Int32U5BU5D_t3230847821* FaceData_get_Triangles_m882854396 (FaceData_t4021998169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.FaceData::Initialize()
extern "C"  void FaceData_Initialize_m1747421028 (FaceData_t4021998169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.FaceData::Initialize(AutoTiling.FaceData)
extern "C"  void FaceData_Initialize_m4187328467 (FaceData_t4021998169 * __this, FaceData_t4021998169 * ___dataForCopyingSettings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.FaceData::CopySettingsFrom(AutoTiling.FaceData)
extern "C"  void FaceData_CopySettingsFrom_m3087720033 (FaceData_t4021998169 * __this, FaceData_t4021998169 * ___dataForCopyingSettings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.FaceData::AddTriangle(System.Int32[],UnityEngine.Vector3)
extern "C"  void FaceData_AddTriangle_m3246745 (FaceData_t4021998169 * __this, Int32U5BU5D_t3230847821* ___triangleVertexIndices0, Vector3_t4282066566  ___normal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AutoTiling.FaceData::IsWithinNormalAngleRange(UnityEngine.Vector3,System.Single)
extern "C"  bool FaceData_IsWithinNormalAngleRange_m3923290904 (FaceData_t4021998169 * __this, Vector3_t4282066566  ___triangleNormal0, float ___faceUnwrappingNormalTolerance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoTiling.FaceData::SetTriangles(System.Int32[])
extern "C"  void FaceData_SetTriangles_m3413272428 (FaceData_t4021998169 * __this, Int32U5BU5D_t3230847821* ___newFaceTriangleIndices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AutoTiling.FaceData::TrianglesToString()
extern "C"  String_t* FaceData_TrianglesToString_m179204904 (FaceData_t4021998169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
