// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_interaction_owner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_interaction_owner.BPI_interaction_owner_C.StartActorInteraction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Started                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_interaction_owner_C::StartActorInteraction(class APawn* Pawn, bool* Started)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_interaction_owner.BPI_interaction_owner_C.StartActorInteraction");

	UBPI_interaction_owner_C_StartActorInteraction_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Started != nullptr)
		*Started = params.Started;
}


// Function BPI_interaction_owner.BPI_interaction_owner_C.Unhighlight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unhighlighted                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_interaction_owner_C::Unhighlight(class APawn* Pawn, bool* Unhighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_interaction_owner.BPI_interaction_owner_C.Unhighlight");

	UBPI_interaction_owner_C_Unhighlight_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unhighlighted != nullptr)
		*Unhighlighted = params.Unhighlighted;
}


// Function BPI_interaction_owner.BPI_interaction_owner_C.Highlight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Highlighted                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_interaction_owner_C::Highlight(class APawn* Pawn, bool* Highlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_interaction_owner.BPI_interaction_owner_C.Highlight");

	UBPI_interaction_owner_C_Highlight_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Highlighted != nullptr)
		*Highlighted = params.Highlighted;
}


// Function BPI_interaction_owner.BPI_interaction_owner_C.TestUsability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Usable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_interaction_owner_C::TestUsability(class APawn* Pawn, bool* Usable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_interaction_owner.BPI_interaction_owner_C.TestUsability");

	UBPI_interaction_owner_C_TestUsability_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Usable != nullptr)
		*Usable = params.Usable;
}


// Function BPI_interaction_owner.BPI_interaction_owner_C.CancelInteraction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Cancelled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_interaction_owner_C::CancelInteraction(class APawn* UsingPawn, bool* Cancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_interaction_owner.BPI_interaction_owner_C.CancelInteraction");

	UBPI_interaction_owner_C_CancelInteraction_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cancelled != nullptr)
		*Cancelled = params.Cancelled;
}


// Function BPI_interaction_owner.BPI_interaction_owner_C.OnStopInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InteractionStillInProgress     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_interaction_owner_C::OnStopInteraction(bool Success, class APawn* UsingPawn, bool InteractionStillInProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_interaction_owner.BPI_interaction_owner_C.OnStopInteraction");

	UBPI_interaction_owner_C_OnStopInteraction_Params params;
	params.Success = Success;
	params.UsingPawn = UsingPawn;
	params.InteractionStillInProgress = InteractionStillInProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_interaction_owner.BPI_interaction_owner_C.OnStartInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_interaction_owner_C::OnStartInteraction(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_interaction_owner.BPI_interaction_owner_C.OnStartInteraction");

	UBPI_interaction_owner_C_OnStartInteraction_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_interaction_owner.BPI_interaction_owner_C.SetInteractionAvailabilty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_interaction_owner_C::SetInteractionAvailabilty(bool Active_, bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_interaction_owner.BPI_interaction_owner_C.SetInteractionAvailabilty");

	UBPI_interaction_owner_C_SetInteractionAvailabilty_Params params;
	params.Active_ = Active_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function BPI_interaction_owner.BPI_interaction_owner_C.ExecutePayload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   SuccessfulInteractor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_interaction_owner_C::ExecutePayload(class APawn* SuccessfulInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_interaction_owner.BPI_interaction_owner_C.ExecutePayload");

	UBPI_interaction_owner_C_ExecutePayload_Params params;
	params.SuccessfulInteractor = SuccessfulInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
