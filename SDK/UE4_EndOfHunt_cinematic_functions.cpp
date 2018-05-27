// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EndOfHunt_cinematic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.OnRep_SlayerActors
// (BlueprintCallable, BlueprintEvent)

void AEndOfHunt_cinematic_C::OnRep_SlayerActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.OnRep_SlayerActors");

	AEndOfHunt_cinematic_C_OnRep_SlayerActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEndOfHunt_cinematic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.UserConstructionScript");

	AEndOfHunt_cinematic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.BlendCameraOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEndOfHunt_cinematic_C::BlendCameraOut(float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.BlendCameraOut");

	AEndOfHunt_cinematic_C_BlendCameraOut_Params params;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ToggleShowSequenceTime
// (Public, BlueprintCallable, BlueprintEvent)

void AEndOfHunt_cinematic_C::ToggleShowSequenceTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ToggleShowSequenceTime");

	AEndOfHunt_cinematic_C_ToggleShowSequenceTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.SwapCineMatsOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Player_Char                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEndOfHunt_cinematic_C::SwapCineMatsOut(class AArchonCharacter* Player_Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.SwapCineMatsOut");

	AEndOfHunt_cinematic_C_SwapCineMatsOut_Params params;
	params.Player_Char = Player_Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.SetClientCinematicState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicPlayerState> CinematicState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEndOfHunt_cinematic_C::SetClientCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.SetClientCinematicState");

	AEndOfHunt_cinematic_C_SetClientCinematicState_Params params;
	params.CinematicState = CinematicState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.SetCinematicMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void AEndOfHunt_cinematic_C::SetCinematicMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.SetCinematicMaterials");

	AEndOfHunt_cinematic_C_SetCinematicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEndOfHunt_cinematic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ReceiveBeginPlay");

	AEndOfHunt_cinematic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.Play
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AEndOfHunt_cinematic_C::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.Play");

	AEndOfHunt_cinematic_C_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.Reload
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AEndOfHunt_cinematic_C::Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.Reload");

	AEndOfHunt_cinematic_C_Reload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.SkipCinematic
// (Public, BlueprintCallable, BlueprintEvent)

void AEndOfHunt_cinematic_C::SkipCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.SkipCinematic");

	AEndOfHunt_cinematic_C_SkipCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.OnServerStop
// (BlueprintCallable, BlueprintEvent)

void AEndOfHunt_cinematic_C::OnServerStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.OnServerStop");

	AEndOfHunt_cinematic_C_OnServerStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.OnClientStop
// (BlueprintCallable, BlueprintEvent)

void AEndOfHunt_cinematic_C::OnClientStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.OnClientStop");

	AEndOfHunt_cinematic_C_OnClientStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ExecuteUbergraph_EndOfHunt_cinematic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEndOfHunt_cinematic_C::ExecuteUbergraph_EndOfHunt_cinematic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ExecuteUbergraph_EndOfHunt_cinematic");

	AEndOfHunt_cinematic_C_ExecuteUbergraph_EndOfHunt_cinematic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ClientPlaybackComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AEndOfHunt_cinematic_C::ClientPlaybackComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ClientPlaybackComplete__DelegateSignature");

	AEndOfHunt_cinematic_C_ClientPlaybackComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ServerPlaybackComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AEndOfHunt_cinematic_C::ServerPlaybackComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_cinematic.EndOfHunt_cinematic_C.ServerPlaybackComplete__DelegateSignature");

	AEndOfHunt_cinematic_C_ServerPlaybackComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
