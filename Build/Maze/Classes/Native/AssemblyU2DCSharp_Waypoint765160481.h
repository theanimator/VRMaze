#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_Waypoint_State2500045059.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Waypoint
struct  Waypoint_t765160481  : public MonoBehaviour_t667441552
{
public:
	// Waypoint/State Waypoint::_state
	int32_t ____state_2;
	// UnityEngine.Color Waypoint::_color_origional
	Color_t4194546905  ____color_origional_3;
	// UnityEngine.Color Waypoint::_color
	Color_t4194546905  ____color_4;
	// System.Single Waypoint::_scale
	float ____scale_5;
	// System.Single Waypoint::_animated_lerp
	float ____animated_lerp_6;
	// UnityEngine.AudioSource Waypoint::_audio_source
	AudioSource_t1740077639 * ____audio_source_7;
	// UnityEngine.Material Waypoint::_material
	Material_t3870600107 * ____material_8;
	// UnityEngine.Material Waypoint::material
	Material_t3870600107 * ___material_9;
	// UnityEngine.Color Waypoint::color_hilight
	Color_t4194546905  ___color_hilight_10;
	// System.Single Waypoint::lerp_idle
	float ___lerp_idle_11;
	// System.Single Waypoint::lerp_focus
	float ___lerp_focus_12;
	// System.Single Waypoint::lerp_hide
	float ___lerp_hide_13;
	// System.Single Waypoint::lerp_clicked
	float ___lerp_clicked_14;
	// System.Single Waypoint::scale_clicked_max
	float ___scale_clicked_max_15;
	// System.Single Waypoint::scale_animation
	float ___scale_animation_16;
	// System.Single Waypoint::scale_idle_min
	float ___scale_idle_min_17;
	// System.Single Waypoint::scale_idle_max
	float ___scale_idle_max_18;
	// System.Single Waypoint::scale_focus_min
	float ___scale_focus_min_19;
	// System.Single Waypoint::scale_focus_max
	float ___scale_focus_max_20;
	// UnityEngine.AudioClip Waypoint::clip_click
	AudioClip_t794140988 * ___clip_click_21;
	// System.Single Waypoint::threshold
	float ___threshold_22;

public:
	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____state_2)); }
	inline int32_t get__state_2() const { return ____state_2; }
	inline int32_t* get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(int32_t value)
	{
		____state_2 = value;
	}

	inline static int32_t get_offset_of__color_origional_3() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____color_origional_3)); }
	inline Color_t4194546905  get__color_origional_3() const { return ____color_origional_3; }
	inline Color_t4194546905 * get_address_of__color_origional_3() { return &____color_origional_3; }
	inline void set__color_origional_3(Color_t4194546905  value)
	{
		____color_origional_3 = value;
	}

	inline static int32_t get_offset_of__color_4() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____color_4)); }
	inline Color_t4194546905  get__color_4() const { return ____color_4; }
	inline Color_t4194546905 * get_address_of__color_4() { return &____color_4; }
	inline void set__color_4(Color_t4194546905  value)
	{
		____color_4 = value;
	}

	inline static int32_t get_offset_of__scale_5() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____scale_5)); }
	inline float get__scale_5() const { return ____scale_5; }
	inline float* get_address_of__scale_5() { return &____scale_5; }
	inline void set__scale_5(float value)
	{
		____scale_5 = value;
	}

	inline static int32_t get_offset_of__animated_lerp_6() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____animated_lerp_6)); }
	inline float get__animated_lerp_6() const { return ____animated_lerp_6; }
	inline float* get_address_of__animated_lerp_6() { return &____animated_lerp_6; }
	inline void set__animated_lerp_6(float value)
	{
		____animated_lerp_6 = value;
	}

	inline static int32_t get_offset_of__audio_source_7() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____audio_source_7)); }
	inline AudioSource_t1740077639 * get__audio_source_7() const { return ____audio_source_7; }
	inline AudioSource_t1740077639 ** get_address_of__audio_source_7() { return &____audio_source_7; }
	inline void set__audio_source_7(AudioSource_t1740077639 * value)
	{
		____audio_source_7 = value;
		Il2CppCodeGenWriteBarrier(&____audio_source_7, value);
	}

	inline static int32_t get_offset_of__material_8() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____material_8)); }
	inline Material_t3870600107 * get__material_8() const { return ____material_8; }
	inline Material_t3870600107 ** get_address_of__material_8() { return &____material_8; }
	inline void set__material_8(Material_t3870600107 * value)
	{
		____material_8 = value;
		Il2CppCodeGenWriteBarrier(&____material_8, value);
	}

	inline static int32_t get_offset_of_material_9() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___material_9)); }
	inline Material_t3870600107 * get_material_9() const { return ___material_9; }
	inline Material_t3870600107 ** get_address_of_material_9() { return &___material_9; }
	inline void set_material_9(Material_t3870600107 * value)
	{
		___material_9 = value;
		Il2CppCodeGenWriteBarrier(&___material_9, value);
	}

	inline static int32_t get_offset_of_color_hilight_10() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___color_hilight_10)); }
	inline Color_t4194546905  get_color_hilight_10() const { return ___color_hilight_10; }
	inline Color_t4194546905 * get_address_of_color_hilight_10() { return &___color_hilight_10; }
	inline void set_color_hilight_10(Color_t4194546905  value)
	{
		___color_hilight_10 = value;
	}

	inline static int32_t get_offset_of_lerp_idle_11() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___lerp_idle_11)); }
	inline float get_lerp_idle_11() const { return ___lerp_idle_11; }
	inline float* get_address_of_lerp_idle_11() { return &___lerp_idle_11; }
	inline void set_lerp_idle_11(float value)
	{
		___lerp_idle_11 = value;
	}

	inline static int32_t get_offset_of_lerp_focus_12() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___lerp_focus_12)); }
	inline float get_lerp_focus_12() const { return ___lerp_focus_12; }
	inline float* get_address_of_lerp_focus_12() { return &___lerp_focus_12; }
	inline void set_lerp_focus_12(float value)
	{
		___lerp_focus_12 = value;
	}

	inline static int32_t get_offset_of_lerp_hide_13() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___lerp_hide_13)); }
	inline float get_lerp_hide_13() const { return ___lerp_hide_13; }
	inline float* get_address_of_lerp_hide_13() { return &___lerp_hide_13; }
	inline void set_lerp_hide_13(float value)
	{
		___lerp_hide_13 = value;
	}

	inline static int32_t get_offset_of_lerp_clicked_14() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___lerp_clicked_14)); }
	inline float get_lerp_clicked_14() const { return ___lerp_clicked_14; }
	inline float* get_address_of_lerp_clicked_14() { return &___lerp_clicked_14; }
	inline void set_lerp_clicked_14(float value)
	{
		___lerp_clicked_14 = value;
	}

	inline static int32_t get_offset_of_scale_clicked_max_15() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___scale_clicked_max_15)); }
	inline float get_scale_clicked_max_15() const { return ___scale_clicked_max_15; }
	inline float* get_address_of_scale_clicked_max_15() { return &___scale_clicked_max_15; }
	inline void set_scale_clicked_max_15(float value)
	{
		___scale_clicked_max_15 = value;
	}

	inline static int32_t get_offset_of_scale_animation_16() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___scale_animation_16)); }
	inline float get_scale_animation_16() const { return ___scale_animation_16; }
	inline float* get_address_of_scale_animation_16() { return &___scale_animation_16; }
	inline void set_scale_animation_16(float value)
	{
		___scale_animation_16 = value;
	}

	inline static int32_t get_offset_of_scale_idle_min_17() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___scale_idle_min_17)); }
	inline float get_scale_idle_min_17() const { return ___scale_idle_min_17; }
	inline float* get_address_of_scale_idle_min_17() { return &___scale_idle_min_17; }
	inline void set_scale_idle_min_17(float value)
	{
		___scale_idle_min_17 = value;
	}

	inline static int32_t get_offset_of_scale_idle_max_18() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___scale_idle_max_18)); }
	inline float get_scale_idle_max_18() const { return ___scale_idle_max_18; }
	inline float* get_address_of_scale_idle_max_18() { return &___scale_idle_max_18; }
	inline void set_scale_idle_max_18(float value)
	{
		___scale_idle_max_18 = value;
	}

	inline static int32_t get_offset_of_scale_focus_min_19() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___scale_focus_min_19)); }
	inline float get_scale_focus_min_19() const { return ___scale_focus_min_19; }
	inline float* get_address_of_scale_focus_min_19() { return &___scale_focus_min_19; }
	inline void set_scale_focus_min_19(float value)
	{
		___scale_focus_min_19 = value;
	}

	inline static int32_t get_offset_of_scale_focus_max_20() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___scale_focus_max_20)); }
	inline float get_scale_focus_max_20() const { return ___scale_focus_max_20; }
	inline float* get_address_of_scale_focus_max_20() { return &___scale_focus_max_20; }
	inline void set_scale_focus_max_20(float value)
	{
		___scale_focus_max_20 = value;
	}

	inline static int32_t get_offset_of_clip_click_21() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___clip_click_21)); }
	inline AudioClip_t794140988 * get_clip_click_21() const { return ___clip_click_21; }
	inline AudioClip_t794140988 ** get_address_of_clip_click_21() { return &___clip_click_21; }
	inline void set_clip_click_21(AudioClip_t794140988 * value)
	{
		___clip_click_21 = value;
		Il2CppCodeGenWriteBarrier(&___clip_click_21, value);
	}

	inline static int32_t get_offset_of_threshold_22() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___threshold_22)); }
	inline float get_threshold_22() const { return ___threshold_22; }
	inline float* get_address_of_threshold_22() { return &___threshold_22; }
	inline void set_threshold_22(float value)
	{
		___threshold_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
