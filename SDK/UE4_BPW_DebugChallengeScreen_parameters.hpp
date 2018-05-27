#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_DebugChallengeScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.CreateTracks
struct UBPW_DebugChallengeScreen_C_CreateTracks_Params
{
};

// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.Show
struct UBPW_DebugChallengeScreen_C_Show_Params
{
};

// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.CreateTrack
struct UBPW_DebugChallengeScreen_C_CreateTrack_Params
{
	struct FName                                       TrackName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.ChallengeListUpdated
struct UBPW_DebugChallengeScreen_C_ChallengeListUpdated_Params
{
};

// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.UpdateScreen
struct UBPW_DebugChallengeScreen_C_UpdateScreen_Params
{
};

// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.TracksUpdated
struct UBPW_DebugChallengeScreen_C_TracksUpdated_Params
{
};

// Function BPW_DebugChallengeScreen.BPW_DebugChallengeScreen_C.ExecuteUbergraph_BPW_DebugChallengeScreen
struct UBPW_DebugChallengeScreen_C_ExecuteUbergraph_BPW_DebugChallengeScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
