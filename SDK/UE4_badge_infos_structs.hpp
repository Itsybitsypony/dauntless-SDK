#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_badge_score_data_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct badge_infos.badge_infos
// 0x0018
struct Fbadge_infos
{
	class UClass*                                      BadgeClass_2_28448B7A4343835B74ED809AEE0EDC82;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct Fbadge_score_data>                   BadgeScoreData_8_C54EE551473C85A04F44719C1E27451E;        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
