// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_return_to_ramsgate_cinematic_trigger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.HasFinishedLoading
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Areturn_to_ramsgate_cinematic_trigger_C::HasFinishedLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.HasFinishedLoading");

	Areturn_to_ramsgate_cinematic_trigger_C_HasFinishedLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.OutputDebugInformation
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent, Const)

void Areturn_to_ramsgate_cinematic_trigger_C::OutputDebugInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.OutputDebugInformation");

	Areturn_to_ramsgate_cinematic_trigger_C_OutputDebugInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.PickSpawnLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              StartTransform                 (Parm, OutParm, IsPlainOldData)

void Areturn_to_ramsgate_cinematic_trigger_C::PickSpawnLocation(struct FTransform* StartTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.PickSpawnLocation");

	Areturn_to_ramsgate_cinematic_trigger_C_PickSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartTransform != nullptr)
		*StartTransform = params.StartTransform;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.RelevantToLocalController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Relevant                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Areturn_to_ramsgate_cinematic_trigger_C::RelevantToLocalController(bool* Relevant)
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.RelevantToLocalController");

	Areturn_to_ramsgate_cinematic_trigger_C_RelevantToLocalController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Relevant != nullptr)
		*Relevant = params.Relevant;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Areturn_to_ramsgate_cinematic_trigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.UserConstructionScript");

	Areturn_to_ramsgate_cinematic_trigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.SwapCineMatsOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Player_Char                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Areturn_to_ramsgate_cinematic_trigger_C::SwapCineMatsOut(class AArchonCharacter* Player_Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.SwapCineMatsOut");

	Areturn_to_ramsgate_cinematic_trigger_C_SwapCineMatsOut_Params params;
	params.Player_Char = Player_Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Areturn_to_ramsgate_cinematic_trigger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ReceiveBeginPlay");

	Areturn_to_ramsgate_cinematic_trigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Areturn_to_ramsgate_cinematic_trigger_C::Play(class AActor* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.Play");

	Areturn_to_ramsgate_cinematic_trigger_C_Play_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Areturn_to_ramsgate_cinematic_trigger_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ReceiveGameplayStart");

	Areturn_to_ramsgate_cinematic_trigger_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ClientSetCityNPCVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Areturn_to_ramsgate_cinematic_trigger_C::ClientSetCityNPCVisibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ClientSetCityNPCVisibility");

	Areturn_to_ramsgate_cinematic_trigger_C_ClientSetCityNPCVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.CacheCityNPCs
// (BlueprintCallable, BlueprintEvent)

void Areturn_to_ramsgate_cinematic_trigger_C::CacheCityNPCs()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.CacheCityNPCs");

	Areturn_to_ramsgate_cinematic_trigger_C_CacheCityNPCs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ClientStart
// (BlueprintCallable, BlueprintEvent)

void Areturn_to_ramsgate_cinematic_trigger_C::ClientStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ClientStart");

	Areturn_to_ramsgate_cinematic_trigger_C_ClientStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ClientStop
// (BlueprintCallable, BlueprintEvent)

void Areturn_to_ramsgate_cinematic_trigger_C::ClientStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ClientStop");

	Areturn_to_ramsgate_cinematic_trigger_C_ClientStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.SkipCinematic
// (Public, BlueprintCallable, BlueprintEvent)

void Areturn_to_ramsgate_cinematic_trigger_C::SkipCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.SkipCinematic");

	Areturn_to_ramsgate_cinematic_trigger_C_SkipCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.BlendCameraOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Areturn_to_ramsgate_cinematic_trigger_C::BlendCameraOut(float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.BlendCameraOut");

	Areturn_to_ramsgate_cinematic_trigger_C_BlendCameraOut_Params params;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.OnServerStop
// (BlueprintCallable, BlueprintEvent)

void Areturn_to_ramsgate_cinematic_trigger_C::OnServerStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.OnServerStop");

	Areturn_to_ramsgate_cinematic_trigger_C_OnServerStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ToggleShowSequenceTime
// (Public, BlueprintCallable, BlueprintEvent)

void Areturn_to_ramsgate_cinematic_trigger_C::ToggleShowSequenceTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ToggleShowSequenceTime");

	Areturn_to_ramsgate_cinematic_trigger_C_ToggleShowSequenceTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.HideActors
// (BlueprintCallable, BlueprintEvent)

void Areturn_to_ramsgate_cinematic_trigger_C::HideActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.HideActors");

	Areturn_to_ramsgate_cinematic_trigger_C_HideActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.HideActorsOnTick
// (BlueprintCallable, BlueprintEvent)

void Areturn_to_ramsgate_cinematic_trigger_C::HideActorsOnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.HideActorsOnTick");

	Areturn_to_ramsgate_cinematic_trigger_C_HideActorsOnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ExecuteUbergraph_return_to_ramsgate_cinematic_trigger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Areturn_to_ramsgate_cinematic_trigger_C::ExecuteUbergraph_return_to_ramsgate_cinematic_trigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ExecuteUbergraph_return_to_ramsgate_cinematic_trigger");

	Areturn_to_ramsgate_cinematic_trigger_C_ExecuteUbergraph_return_to_ramsgate_cinematic_trigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
