#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoinScore
struct  CoinScore_t1265578593  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 CoinScore::score
	int32_t ___score_2;
	// UnityEngine.UI.Text CoinScore::scoreText
	Text_t9039225 * ___scoreText_3;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(CoinScore_t1265578593, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_scoreText_3() { return static_cast<int32_t>(offsetof(CoinScore_t1265578593, ___scoreText_3)); }
	inline Text_t9039225 * get_scoreText_3() const { return ___scoreText_3; }
	inline Text_t9039225 ** get_address_of_scoreText_3() { return &___scoreText_3; }
	inline void set_scoreText_3(Text_t9039225 * value)
	{
		___scoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
