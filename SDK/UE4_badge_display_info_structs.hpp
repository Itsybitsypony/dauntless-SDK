#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_badge_levels_classes.hpp"
#include "UE4_badge_elite_status_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct badge_display_info.badge_display_info
// 0x0010
struct Fbadge_display_info
{
	class UClass*                                      BadgeClass_12_A83BCDC04FD0844281EE46A16A6CA4C2;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<Ebadge_levels>                         BadgeLevel_9_9FA41D364EEF454EFCFAE6BB9EA288F1;            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebadge_elite_status>                   EliteLevel_11_D26F56A542E1059524C82095B4C0FC0C;           // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              Impressiveness_8_2A313F4842896F23CDEA639493E4E7A7;        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
