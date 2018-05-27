// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_quest_single_button_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_debug_quest_single_button.bpw_debug_quest_single_button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_debug_quest_single_button_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_single_button.bpw_debug_quest_single_button_C.Construct");

	Ubpw_debug_quest_single_button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_single_button.bpw_debug_quest_single_button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ubpw_debug_quest_single_button_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_single_button.bpw_debug_quest_single_button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature");

	Ubpw_debug_quest_single_button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_single_button.bpw_debug_quest_single_button_C.ExecuteUbergraph_bpw_debug_quest_single_button
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_single_button_C::ExecuteUbergraph_bpw_debug_quest_single_button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_single_button.bpw_debug_quest_single_button_C.ExecuteUbergraph_bpw_debug_quest_single_button");

	Ubpw_debug_quest_single_button_C_ExecuteUbergraph_bpw_debug_quest_single_button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_single_button.bpw_debug_quest_single_button_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_single_button_C::OnButtonClicked__DelegateSignature(const struct FName& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_single_button.bpw_debug_quest_single_button_C.OnButtonClicked__DelegateSignature");

	Ubpw_debug_quest_single_button_C_OnButtonClicked__DelegateSignature_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
