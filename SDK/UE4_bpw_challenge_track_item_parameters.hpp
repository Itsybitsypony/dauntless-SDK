#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_challenge_track_item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_challenge_track_item.bpw_challenge_track_item_C.OnLoaded_DCB28B4D410E8127D5153C975ACFD77D
struct Ubpw_challenge_track_item_C_OnLoaded_DCB28B4D410E8127D5153C975ACFD77D_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_challenge_track_item.bpw_challenge_track_item_C.SetupData
struct Ubpw_challenge_track_item_C_SetupData_Params
{
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       RewardText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ProgressText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Completed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   TimeUntilNextChallenge;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bpw_challenge_track_item.bpw_challenge_track_item_C.ExecuteUbergraph_bpw_challenge_track_item
struct Ubpw_challenge_track_item_C_ExecuteUbergraph_bpw_challenge_track_item_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
