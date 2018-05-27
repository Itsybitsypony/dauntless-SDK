// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_play_menu_details_base_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_play_menu_details_base_bpw.w_play_menu_details_base_bpw_C.ItemArrayToRewardRange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayFabDropTableItem> Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FString                  RewardTableRow                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)
// int                            MinRange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxRange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_details_base_bpw_C::ItemArrayToRewardRange(const class FString& RewardTableRow, TArray<struct FPlayFabDropTableItem>* Items, class FString* ItemID, int* MinRange, int* MaxRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_details_base_bpw.w_play_menu_details_base_bpw_C.ItemArrayToRewardRange");

	Uw_play_menu_details_base_bpw_C_ItemArrayToRewardRange_Params params;
	params.RewardTableRow = RewardTableRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (ItemID != nullptr)
		*ItemID = params.ItemID;
	if (MinRange != nullptr)
		*MinRange = params.MinRange;
	if (MaxRange != nullptr)
		*MaxRange = params.MaxRange;
}


// Function w_play_menu_details_base_bpw.w_play_menu_details_base_bpw_C.PopulateRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerHuntTableData    HuntData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPanelWidget*            RewardsParent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPanelWidget*            HorizontalRewardsParent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_details_base_bpw_C::PopulateRewards(const struct FPlayerHuntTableData& HuntData, class UPanelWidget* RewardsParent, class UPanelWidget* HorizontalRewardsParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_details_base_bpw.w_play_menu_details_base_bpw_C.PopulateRewards");

	Uw_play_menu_details_base_bpw_C_PopulateRewards_Params params;
	params.HuntData = HuntData;
	params.RewardsParent = RewardsParent;
	params.HorizontalRewardsParent = HorizontalRewardsParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
