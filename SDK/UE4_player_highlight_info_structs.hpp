#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_badge_elite_status_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct player_highlight_info.player_highlight_info
// 0x0019
struct Fplayer_highlight_info
{
	class APlayerState*                                PlayerState_3_8500BBCF4B975C0EE7D11A930679FF2E;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              TotalBadgeScore_12_198AEBD1409B8C66CE793EA1841B2F55;      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RankingScore_13_52E6C65240B6FE7AEAA0B3838A661306;         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BestBadgeType_8_6804225245758E7677A2F480921BCDBE;         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<Ebadge_elite_status>                   BestBadgeEliteStatus_16_1709C5914D31FD27FDA9C1B5E6DF07D3; // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
