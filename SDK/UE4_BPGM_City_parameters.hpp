#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPGM_City_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPGM_City.BPGM_City_C.GetCurrentSpawnedBehemoths
struct ABPGM_City_C_GetCurrentSpawnedBehemoths_Params
{
	TArray<class AArchonBehemoth*>                     CurrentSpawnedBehemoths;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BPGM_City.BPGM_City_C.GetMusicSystem
struct ABPGM_City_C_GetMusicSystem_Params
{
	TScriptInterface<class UBPI_MusicSystem_C>         MusicSystem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.IsIntroCinematicEnabled
struct ABPGM_City_C_IsIntroCinematicEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.DidSetupIntroCinematic
struct ABPGM_City_C_DidSetupIntroCinematic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.GetGameModeType
struct ABPGM_City_C_GetGameModeType_Params
{
	TEnumAsByte<Egame_mode_type>                       GameModeType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.SpawnAtmosphereFromClass
struct ABPGM_City_C_SpawnAtmosphereFromClass_Params
{
	class UClass*                                      In_Class;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.SetupAtmosphereVariables
struct ABPGM_City_C_SetupAtmosphereVariables_Params
{
	class AArchonGameMode*                             GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.SpawnAtmosphere
struct ABPGM_City_C_SpawnAtmosphere_Params
{
};

// Function BPGM_City.BPGM_City_C.CheckIfShouldRemoveBot
struct ABPGM_City_C_CheckIfShouldRemoveBot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.CheckIfShouldSpawnBot
struct ABPGM_City_C_CheckIfShouldSpawnBot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.RemoveBots
struct ABPGM_City_C_RemoveBots_Params
{
};

// Function BPGM_City.BPGM_City_C.SpawnBots
struct ABPGM_City_C_SpawnBots_Params
{
};

// Function BPGM_City.BPGM_City_C.UserConstructionScript
struct ABPGM_City_C_UserConstructionScript_Params
{
};

// Function BPGM_City.BPGM_City_C.OnLoaded_29A28FD8408E34782C4AE781BBA07BF8
struct ABPGM_City_C_OnLoaded_29A28FD8408E34782C4AE781BBA07BF8_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.TriggerIntroCinematic
struct ABPGM_City_C_TriggerIntroCinematic_Params
{
	class APlayerController*                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.TriggerEndOfHuntSequence
struct ABPGM_City_C_TriggerEndOfHuntSequence_Params
{
};

// Function BPGM_City.BPGM_City_C.MoveCharactersToArrival
struct ABPGM_City_C_MoveCharactersToArrival_Params
{
};

// Function BPGM_City.BPGM_City_C.ReceiveBeginPlay
struct ABPGM_City_C_ReceiveBeginPlay_Params
{
};

// Function BPGM_City.BPGM_City_C.K2_PostLogin
struct ABPGM_City_C_K2_PostLogin_Params
{
	class APlayerController**                          NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.K2_OnLogout
struct ABPGM_City_C_K2_OnLogout_Params
{
	class AController**                                ExitingController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.K2_OnSetMatchState
struct ABPGM_City_C_K2_OnSetMatchState_Params
{
	struct FName*                                      NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.StreamNewAtmosphere
struct ABPGM_City_C_StreamNewAtmosphere_Params
{
	int                                                NewAtmosphereIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_City.BPGM_City_C.CycleAtmosphere
struct ABPGM_City_C_CycleAtmosphere_Params
{
};

// Function BPGM_City.BPGM_City_C.ExecuteUbergraph_BPGM_City
struct ABPGM_City_C_ExecuteUbergraph_BPGM_City_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
