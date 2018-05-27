#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_challenge_track_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_challenge_track.bpw_challenge_track_C.CreateChallenge
struct Ubpw_challenge_track_C_CreateChallenge_Params
{
	class UScrollBox*                                  Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       RewardText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ProgressText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Completed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   TimeUntilNextChallenge;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bpw_challenge_track.bpw_challenge_track_C.OnLoaded_AE799D59470CE46D53F732B385DAA6F6
struct Ubpw_challenge_track_C_OnLoaded_AE799D59470CE46D53F732B385DAA6F6_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_challenge_track.bpw_challenge_track_C.SetupData
struct Ubpw_challenge_track_C_SetupData_Params
{
	TAssetPtr<class UObject>                           Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       Track;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_challenge_track.bpw_challenge_track_C.ExecuteUbergraph_bpw_challenge_track
struct Ubpw_challenge_track_C_ExecuteUbergraph_bpw_challenge_track_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
