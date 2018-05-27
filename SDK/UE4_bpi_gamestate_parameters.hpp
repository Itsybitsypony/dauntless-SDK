#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_gamestate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpi_gamestate.bpi_gamestate_C.GetExpectedPlayerCount
struct Ubpi_gamestate_C_GetExpectedPlayerCount_Params
{
	int                                                ExpectedPlayerCount;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DebugRawExpectedPlayerCountVariable;                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamestate.bpi_gamestate_C.SetCombatTextType
struct Ubpi_gamestate_C_SetCombatTextType_Params
{
	TEnumAsByte<Ecombat_text_type>                     CombatTextType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamestate.bpi_gamestate_C.GetSpawnedBehemoths
struct Ubpi_gamestate_C_GetSpawnedBehemoths_Params
{
	TArray<class AArchonBehemoth*>                     SpawnedBehemoths;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function bpi_gamestate.bpi_gamestate_C.TrackBehemothSpawn
struct Ubpi_gamestate_C_TrackBehemothSpawn_Params
{
	class AArchonBehemoth*                             NewBehemoth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamestate.bpi_gamestate_C.GetCombatTextType
struct Ubpi_gamestate_C_GetCombatTextType_Params
{
	TEnumAsByte<Ecombat_text_type>                     CombatTextType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamestate.bpi_gamestate_C.PlayersArrivedOnIsland
struct Ubpi_gamestate_C_PlayersArrivedOnIsland_Params
{
};

// Function bpi_gamestate.bpi_gamestate_C.AuthInformMaxDangerActiveState
struct Ubpi_gamestate_C_AuthInformMaxDangerActiveState_Params
{
	bool                                               MaxDangerActive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamestate.bpi_gamestate_C.IsPowerAndResistanceEnabled
struct Ubpi_gamestate_C_IsPowerAndResistanceEnabled_Params
{
	bool                                               PowerAndResistanceEnabled;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamestate.bpi_gamestate_C.GetMissionTimeRemaining
struct Ubpi_gamestate_C_GetMissionTimeRemaining_Params
{
	float                                              TimeRemaining;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamestate.bpi_gamestate_C.AuthUpdateRemainingTime
struct Ubpi_gamestate_C_AuthUpdateRemainingTime_Params
{
	float                                              RemainingTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamestate.bpi_gamestate_C.IsDebugEQSGameplayEnabled
struct Ubpi_gamestate_C_IsDebugEQSGameplayEnabled_Params
{
	bool                                               DebugEQSGameplayEnabled;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamestate.bpi_gamestate_C.AuthSetDebugEQSGameplayEnabled
struct Ubpi_gamestate_C_AuthSetDebugEQSGameplayEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_gamestate.bpi_gamestate_C.IsCombatTextEnabled
struct Ubpi_gamestate_C_IsCombatTextEnabled_Params
{
	bool                                               CombatTextEnabled;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
