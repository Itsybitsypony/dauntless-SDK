// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_umg_spawn_interaction_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.GetMarkerComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMarkerComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMarkerComponent* Aumg_spawn_interaction_bp_C::GetMarkerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.GetMarkerComponent");

	Aumg_spawn_interaction_bp_C_GetMarkerComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.OnRep_LocallyAvailable
// (BlueprintCallable, BlueprintEvent)

void Aumg_spawn_interaction_bp_C::OnRep_LocallyAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.OnRep_LocallyAvailable");

	Aumg_spawn_interaction_bp_C_OnRep_LocallyAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.ChangeLocalAvailabilityOfActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Available_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aumg_spawn_interaction_bp_C::ChangeLocalAvailabilityOfActor(bool Available_)
{
	static auto fn = UObject::FindObject<UFunction>("Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.ChangeLocalAvailabilityOfActor");

	Aumg_spawn_interaction_bp_C_ChangeLocalAvailabilityOfActor_Params params;
	params.Available_ = Available_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.CanUserStartInteraction 
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aumg_spawn_interaction_bp_C::CanUserStartInteraction_(class UArchonInteractionUserComponent** User, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.CanUserStartInteraction ");

	Aumg_spawn_interaction_bp_C_CanUserStartInteraction__Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.CreateWidgetAndAddToViewport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aumg_spawn_interaction_bp_C::CreateWidgetAndAddToViewport(class AController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.CreateWidgetAndAddToViewport");

	Aumg_spawn_interaction_bp_C_CreateWidgetAndAddToViewport_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aumg_spawn_interaction_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.UserConstructionScript");

	Aumg_spawn_interaction_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aumg_spawn_interaction_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.ReceiveBeginPlay");

	Aumg_spawn_interaction_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.OnUserCompletedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aumg_spawn_interaction_bp_C::OnUserCompletedInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.OnUserCompletedInteraction");

	Aumg_spawn_interaction_bp_C_OnUserCompletedInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.ExecutePayload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   SuccessfulInteractor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aumg_spawn_interaction_bp_C::ExecutePayload(class APawn* SuccessfulInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.ExecutePayload");

	Aumg_spawn_interaction_bp_C_ExecutePayload_Params params;
	params.SuccessfulInteractor = SuccessfulInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.ExecuteUbergraph_umg_spawn_interaction_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aumg_spawn_interaction_bp_C::ExecuteUbergraph_umg_spawn_interaction_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.ExecuteUbergraph_umg_spawn_interaction_bp");

	Aumg_spawn_interaction_bp_C_ExecuteUbergraph_umg_spawn_interaction_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.OnWidgetSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Spawned_Widget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aumg_spawn_interaction_bp_C::OnWidgetSpawned__DelegateSignature(class UUserWidget* Spawned_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.OnWidgetSpawned__DelegateSignature");

	Aumg_spawn_interaction_bp_C_OnWidgetSpawned__DelegateSignature_Params params;
	params.Spawned_Widget = Spawned_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
