// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_npc_interact_choice_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_npc_interact_choice_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.OnKeyDown");

	Uw_npc_interact_choice_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.TryGetDialogEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuestEventData*> QuestEvents                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class Uquest_event_dialogue2_bp_C* ChosenEvent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_npc_interact_choice_bpw_C::TryGetDialogEvent(TArray<class UQuestEventData*>* QuestEvents, class Uquest_event_dialogue2_bp_C** ChosenEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.TryGetDialogEvent");

	Uw_npc_interact_choice_bpw_C_TryGetDialogEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestEvents != nullptr)
		*QuestEvents = params.QuestEvents;
	if (ChosenEvent != nullptr)
		*ChosenEvent = params.ChosenEvent;
}


// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.TryHandleAudioEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuestEventData*> QuestEvents                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_npc_interact_choice_bpw_C::TryHandleAudioEvent(TArray<class UQuestEventData*>* QuestEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.TryHandleAudioEvent");

	Uw_npc_interact_choice_bpw_C_TryHandleAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestEvents != nullptr)
		*QuestEvents = params.QuestEvents;
}


// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_npc_interact_choice_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.GetDefaultFocusedWidget");

	Uw_npc_interact_choice_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.OnQuestButtonSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fnpc_ui_struct          MenuInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_npc_interact_choice_bpw_C::OnQuestButtonSelected(class UQuest* Quest, const struct Fnpc_ui_struct& MenuInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.OnQuestButtonSelected");

	Uw_npc_interact_choice_bpw_C_OnQuestButtonSelected_Params params;
	params.Quest = Quest;
	params.MenuInfo = MenuInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.AddQuestButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fnpc_ui_struct          MenuInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_npc_interact_choice_bpw_C::AddQuestButton(class UQuest* Quest, const struct Fnpc_ui_struct& MenuInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.AddQuestButton");

	Uw_npc_interact_choice_bpw_C_AddQuestButton_Params params;
	params.Quest = Quest;
	params.MenuInfo = MenuInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.RefreshQuestButtons
// (BlueprintCallable, BlueprintEvent)

void Uw_npc_interact_choice_bpw_C::RefreshQuestButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.RefreshQuestButtons");

	Uw_npc_interact_choice_bpw_C_RefreshQuestButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_npc_interact_choice_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.Construct");

	Uw_npc_interact_choice_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.ExecuteUbergraph_w_npc_interact_choice_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_npc_interact_choice_bpw_C::ExecuteUbergraph_w_npc_interact_choice_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.ExecuteUbergraph_w_npc_interact_choice_bpw");

	Uw_npc_interact_choice_bpw_C_ExecuteUbergraph_w_npc_interact_choice_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
