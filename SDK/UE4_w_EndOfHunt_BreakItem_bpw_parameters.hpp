#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EndOfHunt_BreakItem_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EndOfHunt_BreakItem_bpw.w_EndOfHunt_BreakItem_bpw_C.GetToolTipWidget_1
struct Uw_EndOfHunt_BreakItem_bpw_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EndOfHunt_BreakItem_bpw.w_EndOfHunt_BreakItem_bpw_C.GetToolTipText_1
struct Uw_EndOfHunt_BreakItem_bpw_C_GetToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EndOfHunt_BreakItem_bpw.w_EndOfHunt_BreakItem_bpw_C.Get_RewardName_Text_1
struct Uw_EndOfHunt_BreakItem_bpw_C_Get_RewardName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EndOfHunt_BreakItem_bpw.w_EndOfHunt_BreakItem_bpw_C.OnLoaded_7376D0A9405DAD6B29C6C7AB28AA74F0
struct Uw_EndOfHunt_BreakItem_bpw_C_OnLoaded_7376D0A9405DAD6B29C6C7AB28AA74F0_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EndOfHunt_BreakItem_bpw.w_EndOfHunt_BreakItem_bpw_C.Construct
struct Uw_EndOfHunt_BreakItem_bpw_C_Construct_Params
{
};

// Function w_EndOfHunt_BreakItem_bpw.w_EndOfHunt_BreakItem_bpw_C.PlayEntranceAnim
struct Uw_EndOfHunt_BreakItem_bpw_C_PlayEntranceAnim_Params
{
};

// Function w_EndOfHunt_BreakItem_bpw.w_EndOfHunt_BreakItem_bpw_C.Load Reward
struct Uw_EndOfHunt_BreakItem_bpw_C_Load_Reward_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemRarityLevelType                               Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EndOfHunt_BreakItem_bpw.w_EndOfHunt_BreakItem_bpw_C.ExecuteUbergraph_w_EndOfHunt_BreakItem_bpw
struct Uw_EndOfHunt_BreakItem_bpw_C_ExecuteUbergraph_w_EndOfHunt_BreakItem_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
