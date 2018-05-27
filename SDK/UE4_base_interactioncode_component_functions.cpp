// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_interactioncode_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function base_interactioncode_component.base_interactioncode_component_C.BlueprintCanUserStartInteraction
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubase_interactioncode_component_C::BlueprintCanUserStartInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component.base_interactioncode_component_C.BlueprintCanUserStartInteraction");

	Ubase_interactioncode_component_C_BlueprintCanUserStartInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function base_interactioncode_component.base_interactioncode_component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ubase_interactioncode_component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component.base_interactioncode_component_C.ReceiveBeginPlay");

	Ubase_interactioncode_component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interactioncode_component.base_interactioncode_component_C.UserStartedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interactioncode_component_C::UserStartedInteraction(class UArchonInteractionUserComponent* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component.base_interactioncode_component_C.UserStartedInteraction");

	Ubase_interactioncode_component_C_UserStartedInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interactioncode_component.base_interactioncode_component_C.UserCanceledInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interactioncode_component_C::UserCanceledInteraction(class UArchonInteractionUserComponent* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component.base_interactioncode_component_C.UserCanceledInteraction");

	Ubase_interactioncode_component_C_UserCanceledInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interactioncode_component.base_interactioncode_component_C.UserCompletedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interactioncode_component_C::UserCompletedInteraction(class UArchonInteractionUserComponent* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component.base_interactioncode_component_C.UserCompletedInteraction");

	Ubase_interactioncode_component_C_UserCompletedInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interactioncode_component.base_interactioncode_component_C.HighlightInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interactioncode_component_C::HighlightInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component.base_interactioncode_component_C.HighlightInteraction");

	Ubase_interactioncode_component_C_HighlightInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interactioncode_component.base_interactioncode_component_C.UnhighlightInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interactioncode_component_C::UnhighlightInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component.base_interactioncode_component_C.UnhighlightInteraction");

	Ubase_interactioncode_component_C_UnhighlightInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interactioncode_component.base_interactioncode_component_C.ExecuteUbergraph_base_interactioncode_component
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interactioncode_component_C::ExecuteUbergraph_base_interactioncode_component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component.base_interactioncode_component_C.ExecuteUbergraph_base_interactioncode_component");

	Ubase_interactioncode_component_C_ExecuteUbergraph_base_interactioncode_component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
