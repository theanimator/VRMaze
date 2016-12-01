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
// System.Object
struct Il2CppObject;
// Coin
struct Coin_t2106033;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Coin/<PlayAudio>c__Iterator2
struct  U3CPlayAudioU3Ec__Iterator2_t3215614139  : public Il2CppObject
{
public:
	// UnityEngine.AudioSource Coin/<PlayAudio>c__Iterator2::<audio>__0
	AudioSource_t1740077639 * ___U3CaudioU3E__0_0;
	// System.Int32 Coin/<PlayAudio>c__Iterator2::$PC
	int32_t ___U24PC_1;
	// System.Object Coin/<PlayAudio>c__Iterator2::$current
	Il2CppObject * ___U24current_2;
	// Coin Coin/<PlayAudio>c__Iterator2::<>f__this
	Coin_t2106033 * ___U3CU3Ef__this_3;

public:
	inline static int32_t get_offset_of_U3CaudioU3E__0_0() { return static_cast<int32_t>(offsetof(U3CPlayAudioU3Ec__Iterator2_t3215614139, ___U3CaudioU3E__0_0)); }
	inline AudioSource_t1740077639 * get_U3CaudioU3E__0_0() const { return ___U3CaudioU3E__0_0; }
	inline AudioSource_t1740077639 ** get_address_of_U3CaudioU3E__0_0() { return &___U3CaudioU3E__0_0; }
	inline void set_U3CaudioU3E__0_0(AudioSource_t1740077639 * value)
	{
		___U3CaudioU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CaudioU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U24PC_1() { return static_cast<int32_t>(offsetof(U3CPlayAudioU3Ec__Iterator2_t3215614139, ___U24PC_1)); }
	inline int32_t get_U24PC_1() const { return ___U24PC_1; }
	inline int32_t* get_address_of_U24PC_1() { return &___U24PC_1; }
	inline void set_U24PC_1(int32_t value)
	{
		___U24PC_1 = value;
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CPlayAudioU3Ec__Iterator2_t3215614139, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_3() { return static_cast<int32_t>(offsetof(U3CPlayAudioU3Ec__Iterator2_t3215614139, ___U3CU3Ef__this_3)); }
	inline Coin_t2106033 * get_U3CU3Ef__this_3() const { return ___U3CU3Ef__this_3; }
	inline Coin_t2106033 ** get_address_of_U3CU3Ef__this_3() { return &___U3CU3Ef__this_3; }
	inline void set_U3CU3Ef__this_3(Coin_t2106033 * value)
	{
		___U3CU3Ef__this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
