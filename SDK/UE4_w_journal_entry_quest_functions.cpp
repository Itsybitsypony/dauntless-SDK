// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_journal_entry_quest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_journal_entry_quest.w_journal_entry_quest_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_journal_entry_quest_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_quest.w_journal_entry_quest_C.OnFocusReceived");

	Uw_journal_entry_quest_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_journal_entry_quest.w_journal_entry_quest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_journal_entry_quest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_quest.w_journal_entry_quest_C.Construct");

	Uw_journal_entry_quest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_journal_entry_quest.w_journal_entry_quest_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_journal_entry_quest_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_quest.w_journal_entry_quest_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature");

	Uw_journal_entry_quest_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_journal_entry_quest.w_journal_entry_quest_C.SetIsSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_journal_entry_quest_C::SetIsSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_quest.w_journal_entry_quest_C.SetIsSelected");

	Uw_journal_entry_quest_C_SetIsSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_journal_entry_quest.w_journal_entry_quest_C.ExecuteUbergraph_w_journal_entry_quest
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_journal_entry_quest_C::ExecuteUbergraph_w_journal_entry_quest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_quest.w_journal_entry_quest_C.ExecuteUbergraph_w_journal_entry_quest");

	Uw_journal_entry_quest_C_ExecuteUbergraph_w_journal_entry_quest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
