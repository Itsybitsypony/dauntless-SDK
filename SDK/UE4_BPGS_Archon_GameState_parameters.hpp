#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPGS_Archon_GameState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.GetExpectedPlayerCount
struct ABPGS_Archon_GameState_C_GetExpectedPlayerCount_Params
{
	int                                                ExpectedPlayerCount;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DebugRawExpectedPlayerCountVariable;                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.GetSpawnedBehemoths
struct ABPGS_Archon_GameState_C_GetSpawnedBehemoths_Params
{
	TArray<class AArchonBehemoth*>                     SpawnedBehemoths;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.GetCombatTextType
struct ABPGS_Archon_GameState_C_GetCombatTextType_Params
{
	TEnumAsByte<Ecombat_text_type>                     CombatTextType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.IsPowerAndResistanceEnabled
struct ABPGS_Archon_GameState_C_IsPowerAndResistanceEnabled_Params
{
	bool                                               PowerAndResistanceEnabled;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.GetMissionTimeRemaining
struct ABPGS_Archon_GameState_C_GetMissionTimeRemaining_Params
{
	float                                              TimeRemaining;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.IsDebugEQSGameplayEnabled
struct ABPGS_Archon_GameState_C_IsDebugEQSGameplayEnabled_Params
{
	bool                                               DebugEQSGameplayEnabled;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.IsCombatTextEnabled
struct ABPGS_Archon_GameState_C_IsCombatTextEnabled_Params
{
	bool                                               CombatTextEnabled;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.OnRep_MaxDangerActive
struct ABPGS_Archon_GameState_C_OnRep_MaxDangerActive_Params
{
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.OnRep_CurrentMatchState
struct ABPGS_Archon_GameState_C_OnRep_CurrentMatchState_Params
{
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.OnRep_BehemothState
struct ABPGS_Archon_GameState_C_OnRep_BehemothState_Params
{
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.UserConstructionScript
struct ABPGS_Archon_GameState_C_UserConstructionScript_Params
{
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.AuthSetDebugEQSGameplayEnabled
struct ABPGS_Archon_GameState_C_AuthSetDebugEQSGameplayEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.DudEventForTimer
struct ABPGS_Archon_GameState_C_DudEventForTimer_Params
{
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.AuthUpdateRemainingTime
struct ABPGS_Archon_GameState_C_AuthUpdateRemainingTime_Params
{
	float                                              RemainingTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.MulticastUpdateDangerTimer
struct ABPGS_Archon_GameState_C_MulticastUpdateDangerTimer_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.AuthInformMaxDangerActiveState
struct ABPGS_Archon_GameState_C_AuthInformMaxDangerActiveState_Params
{
	bool                                               MaxDangerActive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.PlayersArrivedOnIsland
struct ABPGS_Archon_GameState_C_PlayersArrivedOnIsland_Params
{
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.TrackBehemothSpawn
struct ABPGS_Archon_GameState_C_TrackBehemothSpawn_Params
{
	class AArchonBehemoth*                             NewBehemoth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.SetCombatTextType
struct ABPGS_Archon_GameState_C_SetCombatTextType_Params
{
	TEnumAsByte<Ecombat_text_type>                     CombatTextType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.AuthUpdateNumPlayers
struct ABPGS_Archon_GameState_C_AuthUpdateNumPlayers_Params
{
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.ReceiveBeginPlay
struct ABPGS_Archon_GameState_C_ReceiveBeginPlay_Params
{
};

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.ExecuteUbergraph_BPGS_Archon_GameState
struct ABPGS_Archon_GameState_C_ExecuteUbergraph_BPGS_Archon_GameState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
