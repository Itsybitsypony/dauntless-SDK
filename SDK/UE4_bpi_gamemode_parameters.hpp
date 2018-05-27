#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_gamemode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpi_gamemode.bpi_gamemode_C.GetMusicSystem
struct Ubpi_gamemode_C_GetMusicSystem_Params
{
	TScriptInterface<class UBPI_MusicSystem_C>         MusicSystem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamemode.bpi_gamemode_C.GetCurrentSpawnedBehemoths
struct Ubpi_gamemode_C_GetCurrentSpawnedBehemoths_Params
{
	TArray<class AArchonBehemoth*>                     CurrentSpawnedBehemoths;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function bpi_gamemode.bpi_gamemode_C.IsIntroCinematicEnabled
struct Ubpi_gamemode_C_IsIntroCinematicEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamemode.bpi_gamemode_C.MoveCharactersToArrival
struct Ubpi_gamemode_C_MoveCharactersToArrival_Params
{
};

// Function bpi_gamemode.bpi_gamemode_C.TriggerEndOfHuntSequence
struct Ubpi_gamemode_C_TriggerEndOfHuntSequence_Params
{
};

// Function bpi_gamemode.bpi_gamemode_C.TriggerIntroCinematic
struct Ubpi_gamemode_C_TriggerIntroCinematic_Params
{
	class APlayerController*                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamemode.bpi_gamemode_C.DidSetupIntroCinematic
struct Ubpi_gamemode_C_DidSetupIntroCinematic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpi_gamemode.bpi_gamemode_C.GetGameModeType
struct Ubpi_gamemode_C_GetGameModeType_Params
{
	TEnumAsByte<Egame_mode_type>                       GameModeType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
