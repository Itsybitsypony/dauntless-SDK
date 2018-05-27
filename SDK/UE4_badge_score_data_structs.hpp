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

// UserDefinedStruct badge_score_data.badge_score_data
// 0x000E
struct Fbadge_score_data
{
	class APlayerState*                                PlayerState_2_02666D7D4FB6D41BA2DB1C992C510E1D;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              ImpressivenessScore_18_B021C2714EA526E856522B91131BDD98;  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebadge_levels>                         Level_10_733A77374C6EEA7D97C7C7A3F3B9ED71;                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebadge_elite_status>                   Elite_16_8AF6778B4377ED677FFEA4AF971763EF;                // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
