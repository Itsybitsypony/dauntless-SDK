#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_CombatGameMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.GetDangerLevel
struct UBPI_CombatGameMode_C_GetDangerLevel_Params
{
	float                                              Danger;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.GetCurrentMissionInfo
struct UBPI_CombatGameMode_C_GetCurrentMissionInfo_Params
{
	struct FArchonLobbyMissionInfo                     MissionInfo;                                              // (Parm, OutParm)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.PauseMissionTimer
struct UBPI_CombatGameMode_C_PauseMissionTimer_Params
{
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.DebugGetRawExpectedPlayerCountVariable
struct UBPI_CombatGameMode_C_DebugGetRawExpectedPlayerCountVariable_Params
{
	int                                                RawExpectedPlayerCount;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.IsDangerMaxed
struct UBPI_CombatGameMode_C_IsDangerMaxed_Params
{
	bool                                               DangerMaxed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.SetMissionTimeRemaining
struct UBPI_CombatGameMode_C_SetMissionTimeRemaining_Params
{
	float                                              MissionTimeRemaining;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.PlayIntroCinematic
struct UBPI_CombatGameMode_C_PlayIntroCinematic_Params
{
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.SetDangerSystemOverride
struct UBPI_CombatGameMode_C_SetDangerSystemOverride_Params
{
	bool                                               TurnOn_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.setDanger
struct UBPI_CombatGameMode_C_setDanger_Params
{
	float                                              Danger;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.GetSpawnedBehemoths
struct UBPI_CombatGameMode_C_GetSpawnedBehemoths_Params
{
	TArray<class AArchonBehemoth*>                     Behemoths;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.RegisterStartOfCombat
struct UBPI_CombatGameMode_C_RegisterStartOfCombat_Params
{
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.BehemothRequested
struct UBPI_CombatGameMode_C_BehemothRequested_Params
{
	struct FName                                       Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.RegisterBehemothFlee
struct UBPI_CombatGameMode_C_RegisterBehemothFlee_Params
{
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.RegisterPlayerRevived
struct UBPI_CombatGameMode_C_RegisterPlayerRevived_Params
{
	class AArchonCharacter*                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.BindBehemothDeathEvent
struct UBPI_CombatGameMode_C_BindBehemothDeathEvent_Params
{
	class AArchonBehemoth*                             Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerEndOfMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.GetExpectedPlayerCount
struct UBPI_CombatGameMode_C_GetExpectedPlayerCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.Assign Free Player Color Index
struct UBPI_CombatGameMode_C_Assign_Free_Player_Color_Index_Params
{
	int                                                OutColorIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.Debug Get Player Color
struct UBPI_CombatGameMode_C_Debug_Get_Player_Color_Params
{
	int                                                InColorIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Linear_Color;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.Mission Failure
struct UBPI_CombatGameMode_C_Mission_Failure_Params
{
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.Get Remaining Player Rescues
struct UBPI_CombatGameMode_C_Get_Remaining_Player_Rescues_Params
{
	int                                                Remaining_Player_Rescue_Count;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.Register Player Reaching 0 HP
struct UBPI_CombatGameMode_C_Register_Player_Reaching_0_HP_Params
{
	class AArchonCharacter*                            Dying_Player;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.On Monster Death
struct UBPI_CombatGameMode_C_On_Monster_Death_Params
{
	class AArchonBehemoth*                             Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FightDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerEndOfGameCeremony;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
