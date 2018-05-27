// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mesh_swap_interaction_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.GetMarkerComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMarkerComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMarkerComponent* Amesh_swap_interaction_bp_C::GetMarkerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.GetMarkerComponent");

	Amesh_swap_interaction_bp_C_GetMarkerComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.SetInteractionAvailability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Amesh_swap_interaction_bp_C::SetInteractionAvailability(bool Active, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.SetInteractionAvailability");

	Amesh_swap_interaction_bp_C_SetInteractionAvailability_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.CanUserStartInteraction 
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Amesh_swap_interaction_bp_C::CanUserStartInteraction_(class UArchonInteractionUserComponent* User, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.CanUserStartInteraction ");

	Amesh_swap_interaction_bp_C_CanUserStartInteraction__Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.SwapMesh
// (Public, BlueprintCallable, BlueprintEvent)

void Amesh_swap_interaction_bp_C::SwapMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.SwapMesh");

	Amesh_swap_interaction_bp_C_SwapMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnRep_MeshSwappedToUsedState
// (BlueprintCallable, BlueprintEvent)

void Amesh_swap_interaction_bp_C::OnRep_MeshSwappedToUsedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnRep_MeshSwappedToUsedState");

	Amesh_swap_interaction_bp_C_OnRep_MeshSwappedToUsedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnSuccessfulInteraction - Server
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Successful_Interactor          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Amesh_swap_interaction_bp_C::OnSuccessfulInteraction___Server(class APawn* Successful_Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnSuccessfulInteraction - Server");

	Amesh_swap_interaction_bp_C_OnSuccessfulInteraction___Server_Params params;
	params.Successful_Interactor = Successful_Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnSuccessfulInteraction - Client
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Successful_Interactor          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Amesh_swap_interaction_bp_C::OnSuccessfulInteraction___Client(class APawn* Successful_Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnSuccessfulInteraction - Client");

	Amesh_swap_interaction_bp_C_OnSuccessfulInteraction___Client_Params params;
	params.Successful_Interactor = Successful_Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Amesh_swap_interaction_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.UserConstructionScript");

	Amesh_swap_interaction_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.Timeline__FinishedFunc
// (BlueprintEvent)

void Amesh_swap_interaction_bp_C::Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.Timeline__FinishedFunc");

	Amesh_swap_interaction_bp_C_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.Timeline__UpdateFunc
// (BlueprintEvent)

void Amesh_swap_interaction_bp_C::Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.Timeline__UpdateFunc");

	Amesh_swap_interaction_bp_C_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Amesh_swap_interaction_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.ReceiveBeginPlay");

	Amesh_swap_interaction_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnUserStartedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Amesh_swap_interaction_bp_C::OnUserStartedInteraction(class UArchonInteractionUserComponent* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnUserStartedInteraction");

	Amesh_swap_interaction_bp_C_OnUserStartedInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnUserCanceledInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Amesh_swap_interaction_bp_C::OnUserCanceledInteraction(class UArchonInteractionUserComponent* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnUserCanceledInteraction");

	Amesh_swap_interaction_bp_C_OnUserCanceledInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnUserCompletedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Amesh_swap_interaction_bp_C::OnUserCompletedInteraction(class UArchonInteractionUserComponent* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnUserCompletedInteraction");

	Amesh_swap_interaction_bp_C_OnUserCompletedInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnMeshSwap
// (BlueprintCallable, BlueprintEvent)

void Amesh_swap_interaction_bp_C::OnMeshSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnMeshSwap");

	Amesh_swap_interaction_bp_C_OnMeshSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.ClientOnUserRemainingUsesZero
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Amesh_swap_interaction_bp_C::ClientOnUserRemainingUsesZero(class UArchonInteractionUserComponent* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.ClientOnUserRemainingUsesZero");

	Amesh_swap_interaction_bp_C_ClientOnUserRemainingUsesZero_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.ExecuteUbergraph_mesh_swap_interaction_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Amesh_swap_interaction_bp_C::ExecuteUbergraph_mesh_swap_interaction_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.ExecuteUbergraph_mesh_swap_interaction_bp");

	Amesh_swap_interaction_bp_C_ExecuteUbergraph_mesh_swap_interaction_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
