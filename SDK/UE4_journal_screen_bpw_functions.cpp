// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_journal_screen_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function journal_screen_bpw.journal_screen_bpw_C.ShowTrackPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TrackName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ujournal_screen_bpw_C::ShowTrackPanel(const struct FName& TrackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.ShowTrackPanel");

	Ujournal_screen_bpw_C_ShowTrackPanel_Params params;
	params.TrackName = TrackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function journal_screen_bpw.journal_screen_bpw_C.RefreshRepTrackList
// (Public, BlueprintCallable, BlueprintEvent)

void Ujournal_screen_bpw_C::RefreshRepTrackList()
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.RefreshRepTrackList");

	Ujournal_screen_bpw_C_RefreshRepTrackList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function journal_screen_bpw.journal_screen_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ujournal_screen_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.GetDefaultFocusedWidget");

	Ujournal_screen_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function journal_screen_bpw.journal_screen_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ujournal_screen_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.OnKeyDown");

	Ujournal_screen_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function journal_screen_bpw.journal_screen_bpw_C.RefreshQuestList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ujournal_screen_bpw_C::RefreshQuestList()
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.RefreshQuestList");

	Ujournal_screen_bpw_C_RefreshQuestList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function journal_screen_bpw.journal_screen_bpw_C.ShowQuestPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ujournal_screen_bpw_C::ShowQuestPanel(class UQuest* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.ShowQuestPanel");

	Ujournal_screen_bpw_C_ShowQuestPanel_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function journal_screen_bpw.journal_screen_bpw_C.OnJournalEntrySelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_journal_entry_base_C* JournalEntry                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ujournal_screen_bpw_C::OnJournalEntrySelected(class Uw_journal_entry_base_C* JournalEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.OnJournalEntrySelected");

	Ujournal_screen_bpw_C_OnJournalEntrySelected_Params params;
	params.JournalEntry = JournalEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function journal_screen_bpw.journal_screen_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_18_On Back__DelegateSignature
// (BlueprintEvent)

void Ujournal_screen_bpw_C::BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_18_On_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_18_On Back__DelegateSignature");

	Ujournal_screen_bpw_C_BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_18_On_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function journal_screen_bpw.journal_screen_bpw_C.GTFO
// (BlueprintCallable, BlueprintEvent)

void Ujournal_screen_bpw_C::GTFO()
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.GTFO");

	Ujournal_screen_bpw_C_GTFO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function journal_screen_bpw.journal_screen_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ujournal_screen_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.Construct");

	Ujournal_screen_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function journal_screen_bpw.journal_screen_bpw_C.ChallengeListUpdated
// (BlueprintCallable, BlueprintEvent)

void Ujournal_screen_bpw_C::ChallengeListUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.ChallengeListUpdated");

	Ujournal_screen_bpw_C_ChallengeListUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function journal_screen_bpw.journal_screen_bpw_C.TracksUpdated
// (BlueprintCallable, BlueprintEvent)

void Ujournal_screen_bpw_C::TracksUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.TracksUpdated");

	Ujournal_screen_bpw_C_TracksUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function journal_screen_bpw.journal_screen_bpw_C.ExecuteUbergraph_journal_screen_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ujournal_screen_bpw_C::ExecuteUbergraph_journal_screen_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.ExecuteUbergraph_journal_screen_bpw");

	Ujournal_screen_bpw_C_ExecuteUbergraph_journal_screen_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function journal_screen_bpw.journal_screen_bpw_C.JournalClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ujournal_screen_bpw_C::JournalClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function journal_screen_bpw.journal_screen_bpw_C.JournalClosed__DelegateSignature");

	Ujournal_screen_bpw_C_JournalClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
