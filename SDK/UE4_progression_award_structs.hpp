#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_progression_event_classes.hpp"
#include "UE4_progression_bonus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct progression_award.progression_award
// 0x0038
struct Fprogression_award
{
	struct FName                                       Track_9_EC9D40DC47C4F6C6799D03B7C9F73AA0;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct Fprogression_event>                  Events_3_2EAE32854FA302BCC647C983D0F1A5F1;                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              ItemsToGrant_6_E65E15C24E2A07C0EF623DBCCD2A6857;          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fprogression_bonus>                  Bonuses_13_EF2FF1BD4B5A70919507148583EFB02B;              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
