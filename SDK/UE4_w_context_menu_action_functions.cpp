// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_context_menu_action_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_context_menu_action.w_context_menu_action_C.Handle Action
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_C::Handle_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action.w_context_menu_action_C.Handle Action");

	Uw_context_menu_action_C_Handle_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action.w_context_menu_action_C.Selected
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_C::Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action.w_context_menu_action_C.Selected");

	Uw_context_menu_action_C_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action.w_context_menu_action_C.Unselected
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_C::Unselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action.w_context_menu_action_C.Unselected");

	Uw_context_menu_action_C_Unselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action.w_context_menu_action_C.Update Progress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_context_menu_action_C::Update_Progress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action.w_context_menu_action_C.Update Progress");

	Uw_context_menu_action_C_Update_Progress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action.w_context_menu_action_C.ExecuteUbergraph_w_context_menu_action
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_context_menu_action_C::ExecuteUbergraph_w_context_menu_action(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action.w_context_menu_action_C.ExecuteUbergraph_w_context_menu_action");

	Uw_context_menu_action_C_ExecuteUbergraph_w_context_menu_action_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action.w_context_menu_action_C.On Select__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_C::On_Select__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action.w_context_menu_action_C.On Select__DelegateSignature");

	Uw_context_menu_action_C_On_Select__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
