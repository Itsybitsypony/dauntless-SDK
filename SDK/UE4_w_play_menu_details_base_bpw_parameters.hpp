#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_play_menu_details_base_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_play_menu_details_base_bpw.w_play_menu_details_base_bpw_C.ItemArrayToRewardRange
struct Uw_play_menu_details_base_bpw_C_ItemArrayToRewardRange_Params
{
	TArray<struct FPlayFabDropTableItem>               Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FString                                      RewardTableRow;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
	int                                                MinRange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxRange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_play_menu_details_base_bpw.w_play_menu_details_base_bpw_C.PopulateRewards
struct Uw_play_menu_details_base_bpw_C_PopulateRewards_Params
{
	struct FPlayerHuntTableData                        HuntData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UPanelWidget*                                RewardsParent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPanelWidget*                                HorizontalRewardsParent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
