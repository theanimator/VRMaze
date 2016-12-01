#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Key
struct  Key_t75327  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Key::PoofPrefab
	GameObject_t3674682005 * ___PoofPrefab_2;
	// UnityEngine.GameObject Key::Door
	GameObject_t3674682005 * ___Door_3;

public:
	inline static int32_t get_offset_of_PoofPrefab_2() { return static_cast<int32_t>(offsetof(Key_t75327, ___PoofPrefab_2)); }
	inline GameObject_t3674682005 * get_PoofPrefab_2() const { return ___PoofPrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_PoofPrefab_2() { return &___PoofPrefab_2; }
	inline void set_PoofPrefab_2(GameObject_t3674682005 * value)
	{
		___PoofPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___PoofPrefab_2, value);
	}

	inline static int32_t get_offset_of_Door_3() { return static_cast<int32_t>(offsetof(Key_t75327, ___Door_3)); }
	inline GameObject_t3674682005 * get_Door_3() const { return ___Door_3; }
	inline GameObject_t3674682005 ** get_address_of_Door_3() { return &___Door_3; }
	inline void set_Door_3(GameObject_t3674682005 * value)
	{
		___Door_3 = value;
		Il2CppCodeGenWriteBarrier(&___Door_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
