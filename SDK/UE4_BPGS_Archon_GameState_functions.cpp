// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPGS_Archon_GameState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.GetExpectedPlayerCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            ExpectedPlayerCount            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            DebugRawExpectedPlayerCountVariable (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::GetExpectedPlayerCount(int* ExpectedPlayerCount, int* DebugRawExpectedPlayerCountVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.GetExpectedPlayerCount");

	ABPGS_Archon_GameState_C_GetExpectedPlayerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpectedPlayerCount != nullptr)
		*ExpectedPlayerCount = params.ExpectedPlayerCount;
	if (DebugRawExpectedPlayerCountVariable != nullptr)
		*DebugRawExpectedPlayerCountVariable = params.DebugRawExpectedPlayerCountVariable;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.GetSpawnedBehemoths
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AArchonBehemoth*> SpawnedBehemoths               (Parm, OutParm, ZeroConstructor)

void ABPGS_Archon_GameState_C::GetSpawnedBehemoths(TArray<class AArchonBehemoth*>* SpawnedBehemoths)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.GetSpawnedBehemoths");

	ABPGS_Archon_GameState_C_GetSpawnedBehemoths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedBehemoths != nullptr)
		*SpawnedBehemoths = params.SpawnedBehemoths;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.GetCombatTextType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<Ecombat_text_type> CombatTextType                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::GetCombatTextType(TEnumAsByte<Ecombat_text_type>* CombatTextType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.GetCombatTextType");

	ABPGS_Archon_GameState_C_GetCombatTextType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CombatTextType != nullptr)
		*CombatTextType = params.CombatTextType;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.IsPowerAndResistanceEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           PowerAndResistanceEnabled      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::IsPowerAndResistanceEnabled(bool* PowerAndResistanceEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.IsPowerAndResistanceEnabled");

	ABPGS_Archon_GameState_C_IsPowerAndResistanceEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PowerAndResistanceEnabled != nullptr)
		*PowerAndResistanceEnabled = params.PowerAndResistanceEnabled;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.GetMissionTimeRemaining
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeRemaining                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::GetMissionTimeRemaining(float* TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.GetMissionTimeRemaining");

	ABPGS_Archon_GameState_C_GetMissionTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeRemaining != nullptr)
		*TimeRemaining = params.TimeRemaining;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.IsDebugEQSGameplayEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           DebugEQSGameplayEnabled        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::IsDebugEQSGameplayEnabled(bool* DebugEQSGameplayEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.IsDebugEQSGameplayEnabled");

	ABPGS_Archon_GameState_C_IsDebugEQSGameplayEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugEQSGameplayEnabled != nullptr)
		*DebugEQSGameplayEnabled = params.DebugEQSGameplayEnabled;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.IsCombatTextEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           CombatTextEnabled              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::IsCombatTextEnabled(bool* CombatTextEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.IsCombatTextEnabled");

	ABPGS_Archon_GameState_C_IsCombatTextEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CombatTextEnabled != nullptr)
		*CombatTextEnabled = params.CombatTextEnabled;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.OnRep_MaxDangerActive
// (BlueprintCallable, BlueprintEvent)

void ABPGS_Archon_GameState_C::OnRep_MaxDangerActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.OnRep_MaxDangerActive");

	ABPGS_Archon_GameState_C_OnRep_MaxDangerActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.OnRep_CurrentMatchState
// (BlueprintCallable, BlueprintEvent)

void ABPGS_Archon_GameState_C::OnRep_CurrentMatchState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.OnRep_CurrentMatchState");

	ABPGS_Archon_GameState_C_OnRep_CurrentMatchState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.OnRep_BehemothState
// (BlueprintCallable, BlueprintEvent)

void ABPGS_Archon_GameState_C::OnRep_BehemothState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.OnRep_BehemothState");

	ABPGS_Archon_GameState_C_OnRep_BehemothState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPGS_Archon_GameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.UserConstructionScript");

	ABPGS_Archon_GameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.AuthSetDebugEQSGameplayEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::AuthSetDebugEQSGameplayEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.AuthSetDebugEQSGameplayEnabled");

	ABPGS_Archon_GameState_C_AuthSetDebugEQSGameplayEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.DudEventForTimer
// (BlueprintCallable, BlueprintEvent)

void ABPGS_Archon_GameState_C::DudEventForTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.DudEventForTimer");

	ABPGS_Archon_GameState_C_DudEventForTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.AuthUpdateRemainingTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RemainingTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::AuthUpdateRemainingTime(float RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.AuthUpdateRemainingTime");

	ABPGS_Archon_GameState_C_AuthUpdateRemainingTime_Params params;
	params.RemainingTime = RemainingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.MulticastUpdateDangerTimer
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::MulticastUpdateDangerTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.MulticastUpdateDangerTimer");

	ABPGS_Archon_GameState_C_MulticastUpdateDangerTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.AuthInformMaxDangerActiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MaxDangerActive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::AuthInformMaxDangerActiveState(bool MaxDangerActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.AuthInformMaxDangerActiveState");

	ABPGS_Archon_GameState_C_AuthInformMaxDangerActiveState_Params params;
	params.MaxDangerActive = MaxDangerActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.PlayersArrivedOnIsland
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGS_Archon_GameState_C::PlayersArrivedOnIsland()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.PlayersArrivedOnIsland");

	ABPGS_Archon_GameState_C_PlayersArrivedOnIsland_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.TrackBehemothSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         NewBehemoth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::TrackBehemothSpawn(class AArchonBehemoth* NewBehemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.TrackBehemothSpawn");

	ABPGS_Archon_GameState_C_TrackBehemothSpawn_Params params;
	params.NewBehemoth = NewBehemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.SetCombatTextType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ecombat_text_type> CombatTextType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::SetCombatTextType(TEnumAsByte<Ecombat_text_type> CombatTextType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.SetCombatTextType");

	ABPGS_Archon_GameState_C_SetCombatTextType_Params params;
	params.CombatTextType = CombatTextType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.AuthUpdateNumPlayers
// (BlueprintCallable, BlueprintEvent)

void ABPGS_Archon_GameState_C::AuthUpdateNumPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.AuthUpdateNumPlayers");

	ABPGS_Archon_GameState_C_AuthUpdateNumPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPGS_Archon_GameState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.ReceiveBeginPlay");

	ABPGS_Archon_GameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.ExecuteUbergraph_BPGS_Archon_GameState
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGS_Archon_GameState_C::ExecuteUbergraph_BPGS_Archon_GameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGS_Archon_GameState.BPGS_Archon_GameState_C.ExecuteUbergraph_BPGS_Archon_GameState");

	ABPGS_Archon_GameState_C_ExecuteUbergraph_BPGS_Archon_GameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
