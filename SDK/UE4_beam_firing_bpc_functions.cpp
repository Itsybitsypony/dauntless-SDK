// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_beam_firing_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function beam_firing_bpc.beam_firing_bpc_C.AuthTryStopBeamByGUID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   BeamGUID                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ubeam_firing_bpc_C::AuthTryStopBeamByGUID(const struct FGuid& BeamGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function beam_firing_bpc.beam_firing_bpc_C.AuthTryStopBeamByGUID");

	Ubeam_firing_bpc_C_AuthTryStopBeamByGUID_Params params;
	params.BeamGUID = BeamGUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function beam_firing_bpc.beam_firing_bpc_C.INTERNAL_RemoveBeamByRef
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BeamRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubeam_firing_bpc_C::INTERNAL_RemoveBeamByRef(class AActor* BeamRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function beam_firing_bpc.beam_firing_bpc_C.INTERNAL_RemoveBeamByRef");

	Ubeam_firing_bpc_C_INTERNAL_RemoveBeamByRef_Params params;
	params.BeamRef = BeamRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function beam_firing_bpc.beam_firing_bpc_C.AuthTryStopBeamByUniqueName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   UniqueName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubeam_firing_bpc_C::AuthTryStopBeamByUniqueName(const struct FName& UniqueName)
{
	static auto fn = UObject::FindObject<UFunction>("Function beam_firing_bpc.beam_firing_bpc_C.AuthTryStopBeamByUniqueName");

	Ubeam_firing_bpc_C_AuthTryStopBeamByUniqueName_Params params;
	params.UniqueName = UniqueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function beam_firing_bpc.beam_firing_bpc_C.OnRep_ActiveServerBeamRequests
// (BlueprintCallable, BlueprintEvent)

void Ubeam_firing_bpc_C::OnRep_ActiveServerBeamRequests()
{
	static auto fn = UObject::FindObject<UFunction>("Function beam_firing_bpc.beam_firing_bpc_C.OnRep_ActiveServerBeamRequests");

	Ubeam_firing_bpc_C_OnRep_ActiveServerBeamRequests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function beam_firing_bpc.beam_firing_bpc_C.ValidateBeamRequest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fbeam_request           BeamRequest                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubeam_firing_bpc_C::ValidateBeamRequest(const struct Fbeam_request& BeamRequest, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function beam_firing_bpc.beam_firing_bpc_C.ValidateBeamRequest");

	Ubeam_firing_bpc_C_ValidateBeamRequest_Params params;
	params.BeamRequest = BeamRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function beam_firing_bpc.beam_firing_bpc_C.AuthRequestBeam
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fbeam_request           BeamRequest                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class Abase_beam_bp_C*         BeamRef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   BeamGUID                       (Parm, OutParm, IsPlainOldData)

void Ubeam_firing_bpc_C::AuthRequestBeam(const struct Fbeam_request& BeamRequest, class Abase_beam_bp_C** BeamRef, struct FGuid* BeamGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function beam_firing_bpc.beam_firing_bpc_C.AuthRequestBeam");

	Ubeam_firing_bpc_C_AuthRequestBeam_Params params;
	params.BeamRequest = BeamRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeamRef != nullptr)
		*BeamRef = params.BeamRef;
	if (BeamGUID != nullptr)
		*BeamGUID = params.BeamGUID;
}


// Function beam_firing_bpc.beam_firing_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubeam_firing_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function beam_firing_bpc.beam_firing_bpc_C.ReceiveTick");

	Ubeam_firing_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function beam_firing_bpc.beam_firing_bpc_C.RemoveTheBeamIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubeam_firing_bpc_C::RemoveTheBeamIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function beam_firing_bpc.beam_firing_bpc_C.RemoveTheBeamIndex");

	Ubeam_firing_bpc_C_RemoveTheBeamIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function beam_firing_bpc.beam_firing_bpc_C.OnABeamDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubeam_firing_bpc_C::OnABeamDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function beam_firing_bpc.beam_firing_bpc_C.OnABeamDestroyed");

	Ubeam_firing_bpc_C_OnABeamDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function beam_firing_bpc.beam_firing_bpc_C.BindDestroyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubeam_firing_bpc_C::BindDestroyEvent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function beam_firing_bpc.beam_firing_bpc_C.BindDestroyEvent");

	Ubeam_firing_bpc_C_BindDestroyEvent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function beam_firing_bpc.beam_firing_bpc_C.ExecuteUbergraph_beam_firing_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubeam_firing_bpc_C::ExecuteUbergraph_beam_firing_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function beam_firing_bpc.beam_firing_bpc_C.ExecuteUbergraph_beam_firing_bpc");

	Ubeam_firing_bpc_C_ExecuteUbergraph_beam_firing_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
