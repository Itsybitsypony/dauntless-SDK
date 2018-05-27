#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_play_menu_details_base_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_play_menu_details_base_bpw.w_play_menu_details_base_bpw_C
// 0x0018 (0x02E8 - 0x02D0)
class Uw_play_menu_details_base_bpw_C : public UUserWidget
{
public:
	struct FName                                       HuntRegionID;                                             // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               HuntIds;                                                  // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_play_menu_details_base_bpw.w_play_menu_details_base_bpw_C");
		return ptr;
	}


	void ItemArrayToRewardRange(const class FString& RewardTableRow, TArray<struct FPlayFabDropTableItem>* Items, class FString* ItemID, int* MinRange, int* MaxRange);
	void PopulateRewards(const struct FPlayerHuntTableData& HuntData, class UPanelWidget* RewardsParent, class UPanelWidget* HorizontalRewardsParent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
