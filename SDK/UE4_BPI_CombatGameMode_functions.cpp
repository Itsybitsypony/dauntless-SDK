// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_CombatGameMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_CombatGameMode.BPI_CombatGameMode_C.GetDangerLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          danger                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::GetDangerLevel(float* danger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.GetDangerLevel");

	UBPI_CombatGameMode_C_GetDangerLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (danger != nullptr)
		*danger = params.danger;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.GetCurrentMissionInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobbyMissionInfo MissionInfo                    (Parm, OutParm)

void UBPI_CombatGameMode_C::GetCurrentMissionInfo(struct FArchonLobbyMissionInfo* MissionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.GetCurrentMissionInfo");

	UBPI_CombatGameMode_C_GetCurrentMissionInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionInfo != nullptr)
		*MissionInfo = params.MissionInfo;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.PauseMissionTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_CombatGameMode_C::PauseMissionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.PauseMissionTimer");

	UBPI_CombatGameMode_C_PauseMissionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.DebugGetRawExpectedPlayerCountVariable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RawExpectedPlayerCount         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::DebugGetRawExpectedPlayerCountVariable(int* RawExpectedPlayerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.DebugGetRawExpectedPlayerCountVariable");

	UBPI_CombatGameMode_C_DebugGetRawExpectedPlayerCountVariable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RawExpectedPlayerCount != nullptr)
		*RawExpectedPlayerCount = params.RawExpectedPlayerCount;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.IsDangerMaxed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           DangerMaxed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::IsDangerMaxed(bool* DangerMaxed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.IsDangerMaxed");

	UBPI_CombatGameMode_C_IsDangerMaxed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DangerMaxed != nullptr)
		*DangerMaxed = params.DangerMaxed;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.SetMissionTimeRemaining
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MissionTimeRemaining           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::SetMissionTimeRemaining(float MissionTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.SetMissionTimeRemaining");

	UBPI_CombatGameMode_C_SetMissionTimeRemaining_Params params;
	params.MissionTimeRemaining = MissionTimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.PlayIntroCinematic
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_CombatGameMode_C::PlayIntroCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.PlayIntroCinematic");

	UBPI_CombatGameMode_C_PlayIntroCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.SetDangerSystemOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnOn_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::SetDangerSystemOverride(bool TurnOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.SetDangerSystemOverride");

	UBPI_CombatGameMode_C_SetDangerSystemOverride_Params params;
	params.TurnOn_ = TurnOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.setDanger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          danger                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::setDanger(float danger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.setDanger");

	UBPI_CombatGameMode_C_setDanger_Params params;
	params.danger = danger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.GetSpawnedBehemoths
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AArchonBehemoth*> Behemoths                      (Parm, OutParm, ZeroConstructor)

void UBPI_CombatGameMode_C::GetSpawnedBehemoths(TArray<class AArchonBehemoth*>* Behemoths)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.GetSpawnedBehemoths");

	UBPI_CombatGameMode_C_GetSpawnedBehemoths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Behemoths != nullptr)
		*Behemoths = params.Behemoths;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.RegisterStartOfCombat
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_CombatGameMode_C::RegisterStartOfCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.RegisterStartOfCombat");

	UBPI_CombatGameMode_C_RegisterStartOfCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.BehemothRequested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::BehemothRequested(const struct FName& Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.BehemothRequested");

	UBPI_CombatGameMode_C_BehemothRequested_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.RegisterBehemothFlee
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_CombatGameMode_C::RegisterBehemothFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.RegisterBehemothFlee");

	UBPI_CombatGameMode_C_RegisterBehemothFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.RegisterPlayerRevived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::RegisterPlayerRevived(class AArchonCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.RegisterPlayerRevived");

	UBPI_CombatGameMode_C_RegisterPlayerRevived_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.BindBehemothDeathEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerEndOfMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::BindBehemothDeathEvent(class AArchonBehemoth* Behemoth, bool TriggerEndOfMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.BindBehemothDeathEvent");

	UBPI_CombatGameMode_C_BindBehemothDeathEvent_Params params;
	params.Behemoth = Behemoth;
	params.TriggerEndOfMission = TriggerEndOfMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.GetExpectedPlayerCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::GetExpectedPlayerCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.GetExpectedPlayerCount");

	UBPI_CombatGameMode_C_GetExpectedPlayerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.Assign Free Player Color Index
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OutColorIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::Assign_Free_Player_Color_Index(int* OutColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.Assign Free Player Color Index");

	UBPI_CombatGameMode_C_Assign_Free_Player_Color_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutColorIndex != nullptr)
		*OutColorIndex = params.OutColorIndex;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.Debug Get Player Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InColorIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Linear_Color                   (Parm, OutParm, IsPlainOldData)

void UBPI_CombatGameMode_C::Debug_Get_Player_Color(int InColorIndex, struct FLinearColor* Linear_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.Debug Get Player Color");

	UBPI_CombatGameMode_C_Debug_Get_Player_Color_Params params;
	params.InColorIndex = InColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Linear_Color != nullptr)
		*Linear_Color = params.Linear_Color;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.Mission Failure
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_CombatGameMode_C::Mission_Failure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.Mission Failure");

	UBPI_CombatGameMode_C_Mission_Failure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.Get Remaining Player Rescues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Remaining_Player_Rescue_Count  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::Get_Remaining_Player_Rescues(int* Remaining_Player_Rescue_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.Get Remaining Player Rescues");

	UBPI_CombatGameMode_C_Get_Remaining_Player_Rescues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Remaining_Player_Rescue_Count != nullptr)
		*Remaining_Player_Rescue_Count = params.Remaining_Player_Rescue_Count;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.Register Player Reaching 0 HP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Dying_Player                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::Register_Player_Reaching_0_HP(class AArchonCharacter* Dying_Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.Register Player Reaching 0 HP");

	UBPI_CombatGameMode_C_Register_Player_Reaching_0_HP_Params params;
	params.Dying_Player = Dying_Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_CombatGameMode.BPI_CombatGameMode_C.On Monster Death
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FightDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerEndOfGameCeremony       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_CombatGameMode_C::On_Monster_Death(class AArchonBehemoth* Behemoth, float FightDuration, bool TriggerEndOfGameCeremony)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatGameMode.BPI_CombatGameMode_C.On Monster Death");

	UBPI_CombatGameMode_C_On_Monster_Death_Params params;
	params.Behemoth = Behemoth;
	params.FightDuration = FightDuration;
	params.TriggerEndOfGameCeremony = TriggerEndOfGameCeremony;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
