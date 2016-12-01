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

// Waypoint
struct Waypoint_t765160481;
// UnityEngine.Material
struct Material_t3870600107;
// System.Object
struct Il2CppObject;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.MeshRenderer
struct MeshRenderer_t2804666580;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_Waypoint765160481.h"
#include "AssemblyU2DCSharp_Waypoint765160481MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_Color4194546905MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material3870600107MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_Camera2727095145MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer3076687687MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "AssemblyU2DCSharp_Waypoint_State2500045059.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_MeshRenderer2804666580.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "AssemblyU2DCSharp_Waypoint_State2500045059MethodDeclarations.h"

// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3133387403_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method);
#define Object_Instantiate_TisIl2CppObject_m3133387403(__this /* static, unused */, p0, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3133387403_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Material>(!!0)
#define Object_Instantiate_TisMaterial_t3870600107_m124020212(__this /* static, unused */, p0, method) ((  Material_t3870600107 * (*) (Il2CppObject * /* static, unused */, Material_t3870600107 *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3133387403_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2447772384(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
#define GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151(__this, method) ((  AudioSource_t1740077639 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponentInChildren_TisIl2CppObject_m782999868_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_GetComponentInChildren_TisIl2CppObject_m782999868(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponentInChildren_TisIl2CppObject_m782999868_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.MeshRenderer>()
#define GameObject_GetComponentInChildren_TisMeshRenderer_t2804666580_m3118202586(__this, method) ((  MeshRenderer_t2804666580 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponentInChildren_TisIl2CppObject_m782999868_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Waypoint::.ctor()
extern "C"  void Waypoint__ctor_m1920362394 (Waypoint_t765160481 * __this, const MethodInfo* method)
{
	{
		Color_t4194546905  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m2252924356(&L_0, (0.0f), (1.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		__this->set__color_origional_3(L_0);
		Color_t4194546905  L_1 = Color_get_white_m3038282331(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__color_4(L_1);
		__this->set__scale_5((1.0f));
		__this->set__animated_lerp_6((1.0f));
		Color_t4194546905  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Color__ctor_m2252924356(&L_2, (0.8f), (0.8f), (1.0f), (0.125f), /*hidden argument*/NULL);
		__this->set_color_hilight_10(L_2);
		__this->set_scale_animation_16((3.0f));
		__this->set_threshold_22((0.125f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Waypoint::Awake()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisMaterial_t3870600107_m124020212_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151_MethodInfo_var;
extern const uint32_t Waypoint_Awake_m2157967613_MetadataUsageId;
extern "C"  void Waypoint_Awake_m2157967613 (Waypoint_t765160481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Waypoint_Awake_m2157967613_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Material_t3870600107 * L_0 = __this->get_material_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Material_t3870600107 * L_1 = Object_Instantiate_TisMaterial_t3870600107_m124020212(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisMaterial_t3870600107_m124020212_MethodInfo_var);
		__this->set__material_8(L_1);
		Material_t3870600107 * L_2 = __this->get__material_8();
		NullCheck(L_2);
		Color_t4194546905  L_3 = Material_get_color_m2268945527(L_2, /*hidden argument*/NULL);
		__this->set__color_origional_3(L_3);
		Color_t4194546905  L_4 = __this->get__color_origional_3();
		__this->set__color_4(L_4);
		GameObject_t3674682005 * L_5 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		AudioSource_t1740077639 * L_6 = GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151(L_5, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151_MethodInfo_var);
		__this->set__audio_source_7(L_6);
		AudioSource_t1740077639 * L_7 = __this->get__audio_source_7();
		AudioClip_t794140988 * L_8 = __this->get_clip_click_21();
		NullCheck(L_7);
		AudioSource_set_clip_m19502010(L_7, L_8, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_9 = __this->get__audio_source_7();
		NullCheck(L_9);
		AudioSource_set_playOnAwake_m1884534674(L_9, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Waypoint::Update()
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponentInChildren_TisMeshRenderer_t2804666580_m3118202586_MethodInfo_var;
extern const uint32_t Waypoint_Update_m1128554163_MetadataUsageId;
extern "C"  void Waypoint_Update_m1128554163 (Waypoint_t765160481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Waypoint_Update_m1128554163_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	Waypoint_t765160481 * G_B4_0 = NULL;
	Waypoint_t765160481 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Waypoint_t765160481 * G_B5_1 = NULL;
	Waypoint_t765160481 * G_B9_0 = NULL;
	Waypoint_t765160481 * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	Waypoint_t765160481 * G_B10_1 = NULL;
	Waypoint_t765160481 * G_B13_0 = NULL;
	Waypoint_t765160481 * G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	Waypoint_t765160481 * G_B14_1 = NULL;
	Waypoint_t765160481 * G_B17_0 = NULL;
	Waypoint_t765160481 * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	Waypoint_t765160481 * G_B18_1 = NULL;
	{
		Camera_t2727095145 * L_0 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_3 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t1659122786 * L_4 = GameObject_get_transform_m1278640159(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		bool L_6 = Vector3_op_Equality_m582817895(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = __this->get__state_2();
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (L_8 == 0)
		{
			goto IL_005f;
		}
		if (L_8 == 1)
		{
			goto IL_0082;
		}
		if (L_8 == 2)
		{
			goto IL_008d;
		}
		if (L_8 == 3)
		{
			goto IL_00c8;
		}
		if (L_8 == 4)
		{
			goto IL_0119;
		}
		if (L_8 == 5)
		{
			goto IL_0119;
		}
		if (L_8 == 6)
		{
			goto IL_0119;
		}
		if (L_8 == 7)
		{
			goto IL_00eb;
		}
		if (L_8 == 8)
		{
			goto IL_0119;
		}
		if (L_8 == 9)
		{
			goto IL_010e;
		}
	}
	{
		goto IL_0119;
	}

IL_005f:
	{
		Waypoint_Idle_m3329459518(__this, /*hidden argument*/NULL);
		bool L_9 = V_0;
		G_B3_0 = __this;
		if (!L_9)
		{
			G_B4_0 = __this;
			goto IL_0072;
		}
	}
	{
		G_B5_0 = 7;
		G_B5_1 = G_B3_0;
		goto IL_0078;
	}

IL_0072:
	{
		int32_t L_10 = __this->get__state_2();
		G_B5_0 = ((int32_t)(L_10));
		G_B5_1 = G_B4_0;
	}

IL_0078:
	{
		NullCheck(G_B5_1);
		G_B5_1->set__state_2(G_B5_0);
		goto IL_011e;
	}

IL_0082:
	{
		Waypoint_Focus_m2073643920(__this, /*hidden argument*/NULL);
		goto IL_011e;
	}

IL_008d:
	{
		Waypoint_Clicked_m610131295(__this, /*hidden argument*/NULL);
		float L_11 = __this->get__scale_5();
		float L_12 = __this->get_scale_clicked_max_15();
		V_1 = (bool)((((int32_t)((!(((float)L_11) >= ((float)((float)((float)L_12*(float)(0.95f))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		G_B8_0 = __this;
		if (!L_13)
		{
			G_B9_0 = __this;
			goto IL_00b8;
		}
	}
	{
		G_B10_0 = 3;
		G_B10_1 = G_B8_0;
		goto IL_00be;
	}

IL_00b8:
	{
		int32_t L_14 = __this->get__state_2();
		G_B10_0 = ((int32_t)(L_14));
		G_B10_1 = G_B9_0;
	}

IL_00be:
	{
		NullCheck(G_B10_1);
		G_B10_1->set__state_2(G_B10_0);
		goto IL_011e;
	}

IL_00c8:
	{
		Waypoint_Hide_m3305209644(__this, /*hidden argument*/NULL);
		bool L_15 = V_0;
		G_B12_0 = __this;
		if (!L_15)
		{
			G_B13_0 = __this;
			goto IL_00db;
		}
	}
	{
		G_B14_0 = 7;
		G_B14_1 = G_B12_0;
		goto IL_00e1;
	}

IL_00db:
	{
		int32_t L_16 = __this->get__state_2();
		G_B14_0 = ((int32_t)(L_16));
		G_B14_1 = G_B13_0;
	}

IL_00e1:
	{
		NullCheck(G_B14_1);
		G_B14_1->set__state_2(G_B14_0);
		goto IL_011e;
	}

IL_00eb:
	{
		Waypoint_Hide_m3305209644(__this, /*hidden argument*/NULL);
		bool L_17 = V_0;
		G_B16_0 = __this;
		if (L_17)
		{
			G_B17_0 = __this;
			goto IL_00fe;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		goto IL_0104;
	}

IL_00fe:
	{
		int32_t L_18 = __this->get__state_2();
		G_B18_0 = ((int32_t)(L_18));
		G_B18_1 = G_B17_0;
	}

IL_0104:
	{
		NullCheck(G_B18_1);
		G_B18_1->set__state_2(G_B18_0);
		goto IL_011e;
	}

IL_010e:
	{
		Waypoint_Hide_m3305209644(__this, /*hidden argument*/NULL);
		goto IL_011e;
	}

IL_0119:
	{
		goto IL_011e;
	}

IL_011e:
	{
		GameObject_t3674682005 * L_19 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		MeshRenderer_t2804666580 * L_20 = GameObject_GetComponentInChildren_TisMeshRenderer_t2804666580_m3118202586(L_19, /*hidden argument*/GameObject_GetComponentInChildren_TisMeshRenderer_t2804666580_m3118202586_MethodInfo_var);
		NullCheck(L_20);
		Material_t3870600107 * L_21 = Renderer_get_material_m2720864603(L_20, /*hidden argument*/NULL);
		Color_t4194546905  L_22 = __this->get__color_4();
		NullCheck(L_21);
		Material_set_color_m3296857020(L_21, L_22, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_23 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_t1659122786 * L_24 = GameObject_get_transform_m1278640159(L_23, /*hidden argument*/NULL);
		Vector3_t4282066566  L_25 = Vector3_get_one_m886467710(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_26 = __this->get__scale_5();
		Vector3_t4282066566  L_27 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localScale_m310756934(L_24, L_27, /*hidden argument*/NULL);
		float L_28 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_29 = __this->get_scale_animation_16();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_30 = cosf(((float)((float)L_28*(float)L_29)));
		float L_31 = fabsf(L_30);
		__this->set__animated_lerp_6(L_31);
		return;
	}
}
// System.Void Waypoint::Enter()
extern "C"  void Waypoint_Enter_m1172733328 (Waypoint_t765160481 * __this, const MethodInfo* method)
{
	Waypoint_t765160481 * G_B2_0 = NULL;
	Waypoint_t765160481 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Waypoint_t765160481 * G_B3_1 = NULL;
	{
		int32_t L_0 = __this->get__state_2();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0012:
	{
		int32_t L_1 = __this->get__state_2();
		G_B3_0 = ((int32_t)(L_1));
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__state_2(G_B3_0);
		return;
	}
}
// System.Void Waypoint::Exit()
extern "C"  void Waypoint_Exit_m3233338376 (Waypoint_t765160481 * __this, const MethodInfo* method)
{
	{
		__this->set__state_2(0);
		return;
	}
}
// System.Void Waypoint::Click()
extern "C"  void Waypoint_Click_m3625209920 (Waypoint_t765160481 * __this, const MethodInfo* method)
{
	Waypoint_t765160481 * G_B2_0 = NULL;
	Waypoint_t765160481 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Waypoint_t765160481 * G_B3_1 = NULL;
	{
		int32_t L_0 = __this->get__state_2();
		G_B1_0 = __this;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0013:
	{
		int32_t L_1 = __this->get__state_2();
		G_B3_0 = ((int32_t)(L_1));
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__state_2(G_B3_0);
		AudioSource_t1740077639 * L_2 = __this->get__audio_source_7();
		NullCheck(L_2);
		AudioSource_Play_m1360558992(L_2, /*hidden argument*/NULL);
		Camera_t2727095145 * L_3 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(L_3, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_5 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t1659122786 * L_6 = GameObject_get_transform_m1278640159(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t4282066566  L_7 = Transform_get_position_m2211398607(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m3111394108(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Waypoint::Idle()
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const uint32_t Waypoint_Idle_m3329459518_MetadataUsageId;
extern "C"  void Waypoint_Idle_m3329459518 (Waypoint_t765160481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Waypoint_Idle_m3329459518_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Color_t4194546905  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = __this->get_scale_idle_min_17();
		float L_1 = __this->get_scale_idle_max_18();
		float L_2 = __this->get__animated_lerp_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Color_t4194546905  L_4 = __this->get__color_origional_3();
		Color_t4194546905  L_5 = __this->get_color_hilight_10();
		float L_6 = __this->get__animated_lerp_6();
		Color_t4194546905  L_7 = Color_Lerp_m3494628845(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = __this->get__scale_5();
		float L_9 = V_0;
		float L_10 = __this->get_lerp_idle_11();
		float L_11 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->set__scale_5(L_11);
		Color_t4194546905  L_12 = __this->get__color_4();
		Color_t4194546905  L_13 = V_1;
		float L_14 = __this->get_lerp_idle_11();
		Color_t4194546905  L_15 = Color_Lerp_m3494628845(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		__this->set__color_4(L_15);
		return;
	}
}
// System.Void Waypoint::Focus()
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const uint32_t Waypoint_Focus_m2073643920_MetadataUsageId;
extern "C"  void Waypoint_Focus_m2073643920 (Waypoint_t765160481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Waypoint_Focus_m2073643920_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Color_t4194546905  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = __this->get_scale_focus_min_19();
		float L_1 = __this->get_scale_focus_max_20();
		float L_2 = __this->get__animated_lerp_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Color_t4194546905  L_4 = __this->get__color_origional_3();
		Color_t4194546905  L_5 = __this->get_color_hilight_10();
		float L_6 = __this->get__animated_lerp_6();
		Color_t4194546905  L_7 = Color_Lerp_m3494628845(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = __this->get__scale_5();
		float L_9 = V_0;
		float L_10 = __this->get_lerp_focus_12();
		float L_11 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->set__scale_5(L_11);
		Color_t4194546905  L_12 = __this->get__color_4();
		Color_t4194546905  L_13 = V_1;
		float L_14 = __this->get_lerp_focus_12();
		Color_t4194546905  L_15 = Color_Lerp_m3494628845(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		__this->set__color_4(L_15);
		return;
	}
}
// System.Void Waypoint::Clicked()
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const uint32_t Waypoint_Clicked_m610131295_MetadataUsageId;
extern "C"  void Waypoint_Clicked_m610131295 (Waypoint_t765160481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Waypoint_Clicked_m610131295_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = __this->get__scale_5();
		float L_1 = __this->get_scale_clicked_max_15();
		float L_2 = __this->get_lerp_clicked_14();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set__scale_5(L_3);
		Color_t4194546905  L_4 = __this->get__color_4();
		Color_t4194546905  L_5 = __this->get_color_hilight_10();
		float L_6 = __this->get_lerp_clicked_14();
		Color_t4194546905  L_7 = Color_Lerp_m3494628845(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->set__color_4(L_7);
		return;
	}
}
// System.Void Waypoint::Hide()
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const uint32_t Waypoint_Hide_m3305209644_MetadataUsageId;
extern "C"  void Waypoint_Hide_m3305209644 (Waypoint_t765160481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Waypoint_Hide_m3305209644_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = __this->get__scale_5();
		float L_1 = __this->get_lerp_hide_13();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_0, (0.0f), L_1, /*hidden argument*/NULL);
		__this->set__scale_5(L_2);
		Color_t4194546905  L_3 = __this->get__color_4();
		Color_t4194546905  L_4 = Color_get_clear_m2578346879(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = __this->get_lerp_hide_13();
		Color_t4194546905  L_6 = Color_Lerp_m3494628845(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->set__color_4(L_6);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
