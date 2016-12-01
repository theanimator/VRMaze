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

// Coin
struct  Coin_t2106033  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Coin::CoinPoofPrefab
	GameObject_t3674682005 * ___CoinPoofPrefab_2;
	// UnityEngine.GameObject Coin::CoinScoreText
	GameObject_t3674682005 * ___CoinScoreText_3;

public:
	inline static int32_t get_offset_of_CoinPoofPrefab_2() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___CoinPoofPrefab_2)); }
	inline GameObject_t3674682005 * get_CoinPoofPrefab_2() const { return ___CoinPoofPrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_CoinPoofPrefab_2() { return &___CoinPoofPrefab_2; }
	inline void set_CoinPoofPrefab_2(GameObject_t3674682005 * value)
	{
		___CoinPoofPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___CoinPoofPrefab_2, value);
	}

	inline static int32_t get_offset_of_CoinScoreText_3() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___CoinScoreText_3)); }
	inline GameObject_t3674682005 * get_CoinScoreText_3() const { return ___CoinScoreText_3; }
	inline GameObject_t3674682005 ** get_address_of_CoinScoreText_3() { return &___CoinScoreText_3; }
	inline void set_CoinScoreText_3(GameObject_t3674682005 * value)
	{
		___CoinScoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___CoinScoreText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
