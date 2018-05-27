#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EndOfHunt_cinematic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.OnRep_SlayerActors
struct AEndOfHunt_cinematic_C_OnRep_SlayerActors_Params
{
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.UserConstructionScript
struct AEndOfHunt_cinematic_C_UserConstructionScript_Params
{
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.BlendCameraOut
struct AEndOfHunt_cinematic_C_BlendCameraOut_Params
{
	float                                              BlendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ToggleShowSequenceTime
struct AEndOfHunt_cinematic_C_ToggleShowSequenceTime_Params
{
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.SwapCineMatsOut
struct AEndOfHunt_cinematic_C_SwapCineMatsOut_Params
{
	class AArchonCharacter*                            Player_Char;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.SetClientCinematicState
struct AEndOfHunt_cinematic_C_SetClientCinematicState_Params
{
	TEnumAsByte<ECinematicPlayerState>                 CinematicState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.SetCinematicMaterials
struct AEndOfHunt_cinematic_C_SetCinematicMaterials_Params
{
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ReceiveBeginPlay
struct AEndOfHunt_cinematic_C_ReceiveBeginPlay_Params
{
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.Play
struct AEndOfHunt_cinematic_C_Play_Params
{
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.Reload
struct AEndOfHunt_cinematic_C_Reload_Params
{
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.SkipCinematic
struct AEndOfHunt_cinematic_C_SkipCinematic_Params
{
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.OnServerStop
struct AEndOfHunt_cinematic_C_OnServerStop_Params
{
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.OnClientStop
struct AEndOfHunt_cinematic_C_OnClientStop_Params
{
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ExecuteUbergraph_EndOfHunt_cinematic
struct AEndOfHunt_cinematic_C_ExecuteUbergraph_EndOfHunt_cinematic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ClientPlaybackComplete__DelegateSignature
struct AEndOfHunt_cinematic_C_ClientPlaybackComplete__DelegateSignature_Params
{
};

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ServerPlaybackComplete__DelegateSignature
struct AEndOfHunt_cinematic_C_ServerPlaybackComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
