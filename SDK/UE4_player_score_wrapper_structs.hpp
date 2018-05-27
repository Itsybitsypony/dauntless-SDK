#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_player_score_info_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct player_score_wrapper.player_score_wrapper
// 0x0010
struct Fplayer_score_wrapper
{
	TArray<struct Fplayer_score_info>                  PlayerScoreInfos_3_FD1614AC4C091301EBEEB882A8EB059D;      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
