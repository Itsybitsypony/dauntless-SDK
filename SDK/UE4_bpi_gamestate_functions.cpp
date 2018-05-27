// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_gamestate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpi_gamestate.bpi_gamestate_C.GetExpectedPlayerCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            ExpectedPlayerCount            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            DebugRawExpectedPlayerCountVariable (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamestate_C::GetExpectedPlayerCount(int* ExpectedPlayerCount, int* DebugRawExpectedPlayerCountVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.GetExpectedPlayerCount");

	Ubpi_gamestate_C_GetExpectedPlayerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpectedPlayerCount != nullptr)
		*ExpectedPlayerCount = params.ExpectedPlayerCount;
	if (DebugRawExpectedPlayerCountVariable != nullptr)
		*DebugRawExpectedPlayerCountVariable = params.DebugRawExpectedPlayerCountVariable;
}


// Function bpi_gamestate.bpi_gamestate_C.SetCombatTextType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ecombat_text_type> CombatTextType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamestate_C::SetCombatTextType(TEnumAsByte<Ecombat_text_type> CombatTextType)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.SetCombatTextType");

	Ubpi_gamestate_C_SetCombatTextType_Params params;
	params.CombatTextType = CombatTextType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpi_gamestate.bpi_gamestate_C.GetSpawnedBehemoths
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AArchonBehemoth*> SpawnedBehemoths               (Parm, OutParm, ZeroConstructor)

void Ubpi_gamestate_C::GetSpawnedBehemoths(TArray<class AArchonBehemoth*>* SpawnedBehemoths)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.GetSpawnedBehemoths");

	Ubpi_gamestate_C_GetSpawnedBehemoths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedBehemoths != nullptr)
		*SpawnedBehemoths = params.SpawnedBehemoths;
}


// Function bpi_gamestate.bpi_gamestate_C.TrackBehemothSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         NewBehemoth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamestate_C::TrackBehemothSpawn(class AArchonBehemoth* NewBehemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.TrackBehemothSpawn");

	Ubpi_gamestate_C_TrackBehemothSpawn_Params params;
	params.NewBehemoth = NewBehemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpi_gamestate.bpi_gamestate_C.GetCombatTextType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<Ecombat_text_type> CombatTextType                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamestate_C::GetCombatTextType(TEnumAsByte<Ecombat_text_type>* CombatTextType)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.GetCombatTextType");

	Ubpi_gamestate_C_GetCombatTextType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CombatTextType != nullptr)
		*CombatTextType = params.CombatTextType;
}


// Function bpi_gamestate.bpi_gamestate_C.PlayersArrivedOnIsland
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpi_gamestate_C::PlayersArrivedOnIsland()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.PlayersArrivedOnIsland");

	Ubpi_gamestate_C_PlayersArrivedOnIsland_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpi_gamestate.bpi_gamestate_C.AuthInformMaxDangerActiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MaxDangerActive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamestate_C::AuthInformMaxDangerActiveState(bool MaxDangerActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.AuthInformMaxDangerActiveState");

	Ubpi_gamestate_C_AuthInformMaxDangerActiveState_Params params;
	params.MaxDangerActive = MaxDangerActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpi_gamestate.bpi_gamestate_C.IsPowerAndResistanceEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           PowerAndResistanceEnabled      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamestate_C::IsPowerAndResistanceEnabled(bool* PowerAndResistanceEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.IsPowerAndResistanceEnabled");

	Ubpi_gamestate_C_IsPowerAndResistanceEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PowerAndResistanceEnabled != nullptr)
		*PowerAndResistanceEnabled = params.PowerAndResistanceEnabled;
}


// Function bpi_gamestate.bpi_gamestate_C.GetMissionTimeRemaining
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeRemaining                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamestate_C::GetMissionTimeRemaining(float* TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.GetMissionTimeRemaining");

	Ubpi_gamestate_C_GetMissionTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeRemaining != nullptr)
		*TimeRemaining = params.TimeRemaining;
}


// Function bpi_gamestate.bpi_gamestate_C.AuthUpdateRemainingTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RemainingTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamestate_C::AuthUpdateRemainingTime(float RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.AuthUpdateRemainingTime");

	Ubpi_gamestate_C_AuthUpdateRemainingTime_Params params;
	params.RemainingTime = RemainingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpi_gamestate.bpi_gamestate_C.IsDebugEQSGameplayEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           DebugEQSGameplayEnabled        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamestate_C::IsDebugEQSGameplayEnabled(bool* DebugEQSGameplayEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.IsDebugEQSGameplayEnabled");

	Ubpi_gamestate_C_IsDebugEQSGameplayEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugEQSGameplayEnabled != nullptr)
		*DebugEQSGameplayEnabled = params.DebugEQSGameplayEnabled;
}


// Function bpi_gamestate.bpi_gamestate_C.AuthSetDebugEQSGameplayEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamestate_C::AuthSetDebugEQSGameplayEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.AuthSetDebugEQSGameplayEnabled");

	Ubpi_gamestate_C_AuthSetDebugEQSGameplayEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpi_gamestate.bpi_gamestate_C.IsCombatTextEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           CombatTextEnabled              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamestate_C::IsCombatTextEnabled(bool* CombatTextEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamestate.bpi_gamestate_C.IsCombatTextEnabled");

	Ubpi_gamestate_C_IsCombatTextEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CombatTextEnabled != nullptr)
		*CombatTextEnabled = params.CombatTextEnabled;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
