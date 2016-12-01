#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Door
struct  Door_t2136014  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean Door::locked
	bool ___locked_2;
	// UnityEngine.AudioClip Door::lockedSound
	AudioClip_t794140988 * ___lockedSound_3;
	// UnityEngine.AudioClip Door::unlockedSound
	AudioClip_t794140988 * ___unlockedSound_4;

public:
	inline static int32_t get_offset_of_locked_2() { return static_cast<int32_t>(offsetof(Door_t2136014, ___locked_2)); }
	inline bool get_locked_2() const { return ___locked_2; }
	inline bool* get_address_of_locked_2() { return &___locked_2; }
	inline void set_locked_2(bool value)
	{
		___locked_2 = value;
	}

	inline static int32_t get_offset_of_lockedSound_3() { return static_cast<int32_t>(offsetof(Door_t2136014, ___lockedSound_3)); }
	inline AudioClip_t794140988 * get_lockedSound_3() const { return ___lockedSound_3; }
	inline AudioClip_t794140988 ** get_address_of_lockedSound_3() { return &___lockedSound_3; }
	inline void set_lockedSound_3(AudioClip_t794140988 * value)
	{
		___lockedSound_3 = value;
		Il2CppCodeGenWriteBarrier(&___lockedSound_3, value);
	}

	inline static int32_t get_offset_of_unlockedSound_4() { return static_cast<int32_t>(offsetof(Door_t2136014, ___unlockedSound_4)); }
	inline AudioClip_t794140988 * get_unlockedSound_4() const { return ___unlockedSound_4; }
	inline AudioClip_t794140988 ** get_address_of_unlockedSound_4() { return &___unlockedSound_4; }
	inline void set_unlockedSound_4(AudioClip_t794140988 * value)
	{
		___unlockedSound_4 = value;
		Il2CppCodeGenWriteBarrier(&___unlockedSound_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
