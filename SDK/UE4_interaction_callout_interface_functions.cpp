// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_interaction_callout_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function interaction_callout_interface.interaction_callout_interface_C.CancelFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinteraction_callout_interface_C::CancelFill(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function interaction_callout_interface.interaction_callout_interface_C.CancelFill");

	Uinteraction_callout_interface_C_CancelFill_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interaction_callout_interface.interaction_callout_interface_C.StartFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinteraction_callout_interface_C::StartFill(class APawn* UsingPawn, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function interaction_callout_interface.interaction_callout_interface_C.StartFill");

	Uinteraction_callout_interface_C_StartFill_Params params;
	params.UsingPawn = UsingPawn;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interaction_callout_interface.interaction_callout_interface_C.UnhighlightInteraction
// (Public, BlueprintCallable, BlueprintEvent)

void Uinteraction_callout_interface_C::UnhighlightInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function interaction_callout_interface.interaction_callout_interface_C.UnhighlightInteraction");

	Uinteraction_callout_interface_C_UnhighlightInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interaction_callout_interface.interaction_callout_interface_C.HighlightInteraction
// (Public, BlueprintCallable, BlueprintEvent)

void Uinteraction_callout_interface_C::HighlightInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function interaction_callout_interface.interaction_callout_interface_C.HighlightInteraction");

	Uinteraction_callout_interface_C_HighlightInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
