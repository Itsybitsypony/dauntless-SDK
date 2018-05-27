#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_OnlineSubsystemPhoenix_classes.hpp"
#include "UE4_Archon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct player_loot_instance.player_loot_instance
// 0x001A
struct Fplayer_loot_instance
{
	class APlayerState*                                PlayerState_2_C39AD04E463302159D4C34A1BB1A11B1;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FGiveItemInfo>                       Items_14_B70BCE4340721B30A9F74D9B5928E6CB;                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EItemRarityLevelType>                  MaxRarity_15_3F3B201B423DA984B93F46A2290DA969;            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldAutoGrant_17_C826BA3741064EA7A8FEABA5EA20E81C;      // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
