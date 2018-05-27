#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EndOfHunt_Reward_Slot_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EndOfHunt_Reward_Slot_bpw.w_EndOfHunt_Reward_Slot_bpw_C.GetText_1
struct Uw_EndOfHunt_Reward_Slot_bpw_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EndOfHunt_Reward_Slot_bpw.w_EndOfHunt_Reward_Slot_bpw_C.OnLoaded_A2A4E9FA4EAE3F82078055AE99BB4C4C
struct Uw_EndOfHunt_Reward_Slot_bpw_C_OnLoaded_A2A4E9FA4EAE3F82078055AE99BB4C4C_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EndOfHunt_Reward_Slot_bpw.w_EndOfHunt_Reward_Slot_bpw_C.Construct
struct Uw_EndOfHunt_Reward_Slot_bpw_C_Construct_Params
{
};

// Function w_EndOfHunt_Reward_Slot_bpw.w_EndOfHunt_Reward_Slot_bpw_C.PlayEntranceAnim
struct Uw_EndOfHunt_Reward_Slot_bpw_C_PlayEntranceAnim_Params
{
};

// Function w_EndOfHunt_Reward_Slot_bpw.w_EndOfHunt_Reward_Slot_bpw_C.Load Reward
struct Uw_EndOfHunt_Reward_Slot_bpw_C_Load_Reward_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EndOfHunt_Reward_Slot_bpw.w_EndOfHunt_Reward_Slot_bpw_C.ExecuteUbergraph_w_EndOfHunt_Reward_Slot_bpw
struct Uw_EndOfHunt_Reward_Slot_bpw_C_ExecuteUbergraph_w_EndOfHunt_Reward_Slot_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
