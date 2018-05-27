// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_MusicSystem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MusicSystem.BP_MusicSystem_C.ToggleDebugMusicSystem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MusicSystem_C::ToggleDebugMusicSystem(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.ToggleDebugMusicSystem");

	ABP_MusicSystem_C_ToggleDebugMusicSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MusicSystem.BP_MusicSystem_C.NotifyIntroCinematicStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MusicSystem_C::NotifyIntroCinematicStarted(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.NotifyIntroCinematicStarted");

	ABP_MusicSystem_C_NotifyIntroCinematicStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MusicSystem.BP_MusicSystem_C.NotifyIntroCinematicCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MusicSystem_C::NotifyIntroCinematicCompleted(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.NotifyIntroCinematicCompleted");

	ABP_MusicSystem_C_NotifyIntroCinematicCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_MusicSystem.BP_MusicSystem_C.OnRep_MaxDangerActive
// (BlueprintCallable, BlueprintEvent)

void ABP_MusicSystem_C::OnRep_MaxDangerActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.OnRep_MaxDangerActive");

	ABP_MusicSystem_C_OnRep_MaxDangerActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MusicSystem.BP_MusicSystem_C.SetBehemothState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MusicSystem_C::SetBehemothState(TEnumAsByte<Ebehemoth_states_enum> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.SetBehemothState");

	ABP_MusicSystem_C_SetBehemothState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MusicSystem.BP_MusicSystem_C.OnRep_MusicState
// (BlueprintCallable, BlueprintEvent)

void ABP_MusicSystem_C::OnRep_MusicState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.OnRep_MusicState");

	ABP_MusicSystem_C_OnRep_MusicState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MusicSystem.BP_MusicSystem_C.OnRep_MatchState
// (BlueprintCallable, BlueprintEvent)

void ABP_MusicSystem_C::OnRep_MatchState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.OnRep_MatchState");

	ABP_MusicSystem_C_OnRep_MatchState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MusicSystem.BP_MusicSystem_C.OnRep_BehemothsState
// (BlueprintCallable, BlueprintEvent)

void ABP_MusicSystem_C::OnRep_BehemothsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.OnRep_BehemothsState");

	ABP_MusicSystem_C_OnRep_BehemothsState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MusicSystem.BP_MusicSystem_C.EvaluateMusicState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MusicSystem_C::EvaluateMusicState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.EvaluateMusicState");

	ABP_MusicSystem_C_EvaluateMusicState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MusicSystem.BP_MusicSystem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MusicSystem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.UserConstructionScript");

	ABP_MusicSystem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MusicSystem.BP_MusicSystem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MusicSystem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.ReceiveBeginPlay");

	ABP_MusicSystem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MusicSystem.BP_MusicSystem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MusicSystem_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.ReceiveTick");

	ABP_MusicSystem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MusicSystem.BP_MusicSystem_C.ExecuteUbergraph_BP_MusicSystem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MusicSystem_C::ExecuteUbergraph_BP_MusicSystem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MusicSystem.BP_MusicSystem_C.ExecuteUbergraph_BP_MusicSystem");

	ABP_MusicSystem_C_ExecuteUbergraph_BP_MusicSystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
