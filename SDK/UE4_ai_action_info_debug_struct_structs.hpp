#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ai_action_info_debug_struct.ai_action_info_debug_struct
// 0x0021
struct Fai_action_info_debug_struct
{
	class FString                                      ActionName_3_85456D114556CC60B66325814E742099;            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MaxCooldown_6_DCD0003F4825A982DCCB6EB279E22F68;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentCooldown_10_5B5A56F7454F3C85F8F1A69C6C2AFAA6;      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActionScore_13_7651632249B116C8152486AEBC69889B;          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActionHelperScore_16_A71565C14E9EEDBC2707B4AA20664C2B;    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InProgress_18_9513E92B4D495A3597CAD8B0EE4C4174;           // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
