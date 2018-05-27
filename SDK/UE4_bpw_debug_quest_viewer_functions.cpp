// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_quest_viewer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.RefreshQuestList
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_debug_quest_viewer_C::RefreshQuestList()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.RefreshQuestList");

	Ubpw_debug_quest_viewer_C_RefreshQuestList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.QueryQuests
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuest*>          Results                        (Parm, OutParm, ZeroConstructor)

void Ubpw_debug_quest_viewer_C::QueryQuests(TArray<class UQuest*>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.QueryQuests");

	Ubpw_debug_quest_viewer_C_QueryQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Results != nullptr)
		*Results = params.Results;
}


// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.ShowQuestPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_viewer_C::ShowQuestPanel(const struct FName& Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.ShowQuestPanel");

	Ubpw_debug_quest_viewer_C_ShowQuestPanel_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.OnButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_viewer_C::OnButtonClicked(const struct FName& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.OnButtonClicked");

	Ubpw_debug_quest_viewer_C_OnButtonClicked_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_debug_quest_viewer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.Construct");

	Ubpw_debug_quest_viewer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Redeemed_K2Node_ComponentBoundEvent_68_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_viewer_C::BndEvt__CheckBox_Redeemed_K2Node_ComponentBoundEvent_68_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Redeemed_K2Node_ComponentBoundEvent_68_OnCheckBoxComponentStateChanged__DelegateSignature");

	Ubpw_debug_quest_viewer_C_BndEvt__CheckBox_Redeemed_K2Node_ComponentBoundEvent_68_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Invisible_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_viewer_C::BndEvt__CheckBox_Invisible_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Invisible_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature");

	Ubpw_debug_quest_viewer_C_BndEvt__CheckBox_Invisible_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Unavailable_K2Node_ComponentBoundEvent_73_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_viewer_C::BndEvt__CheckBox_Unavailable_K2Node_ComponentBoundEvent_73_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Unavailable_K2Node_ComponentBoundEvent_73_OnCheckBoxComponentStateChanged__DelegateSignature");

	Ubpw_debug_quest_viewer_C_BndEvt__CheckBox_Unavailable_K2Node_ComponentBoundEvent_73_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Unlockable_K2Node_ComponentBoundEvent_77_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_viewer_C::BndEvt__CheckBox_Unlockable_K2Node_ComponentBoundEvent_77_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Unlockable_K2Node_ComponentBoundEvent_77_OnCheckBoxComponentStateChanged__DelegateSignature");

	Ubpw_debug_quest_viewer_C_BndEvt__CheckBox_Unlockable_K2Node_ComponentBoundEvent_77_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Unlocked_K2Node_ComponentBoundEvent_82_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_viewer_C::BndEvt__CheckBox_Unlocked_K2Node_ComponentBoundEvent_82_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Unlocked_K2Node_ComponentBoundEvent_82_OnCheckBoxComponentStateChanged__DelegateSignature");

	Ubpw_debug_quest_viewer_C_BndEvt__CheckBox_Unlocked_K2Node_ComponentBoundEvent_82_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Complete_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_viewer_C::BndEvt__CheckBox_Complete_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Complete_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature");

	Ubpw_debug_quest_viewer_C_BndEvt__CheckBox_Complete_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.ExecuteUbergraph_bpw_debug_quest_viewer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_viewer_C::ExecuteUbergraph_bpw_debug_quest_viewer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.ExecuteUbergraph_bpw_debug_quest_viewer");

	Ubpw_debug_quest_viewer_C_ExecuteUbergraph_bpw_debug_quest_viewer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
