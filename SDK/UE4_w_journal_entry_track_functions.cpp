// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_journal_entry_track_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_journal_entry_track.w_journal_entry_track_C.RefreshTrackData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_journal_entry_track_C::RefreshTrackData()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_track.w_journal_entry_track_C.RefreshTrackData");

	Uw_journal_entry_track_C_RefreshTrackData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_journal_entry_track.w_journal_entry_track_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_journal_entry_track_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_track.w_journal_entry_track_C.OnFocusReceived");

	Uw_journal_entry_track_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_journal_entry_track.w_journal_entry_track_C.OnLoaded_AB0386AB417A23ED020F8B8141BECF7E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_journal_entry_track_C::OnLoaded_AB0386AB417A23ED020F8B8141BECF7E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_track.w_journal_entry_track_C.OnLoaded_AB0386AB417A23ED020F8B8141BECF7E");

	Uw_journal_entry_track_C_OnLoaded_AB0386AB417A23ED020F8B8141BECF7E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_journal_entry_track.w_journal_entry_track_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_journal_entry_track_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_track.w_journal_entry_track_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature");

	Uw_journal_entry_track_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_journal_entry_track.w_journal_entry_track_C.SetIsSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_journal_entry_track_C::SetIsSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_track.w_journal_entry_track_C.SetIsSelected");

	Uw_journal_entry_track_C_SetIsSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_journal_entry_track.w_journal_entry_track_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_journal_entry_track_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_track.w_journal_entry_track_C.Construct");

	Uw_journal_entry_track_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_journal_entry_track.w_journal_entry_track_C.LoadIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       SoftIconTexture                (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_journal_entry_track_C::LoadIcon(TAssetPtr<class UObject> SoftIconTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_track.w_journal_entry_track_C.LoadIcon");

	Uw_journal_entry_track_C_LoadIcon_Params params;
	params.SoftIconTexture = SoftIconTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_journal_entry_track.w_journal_entry_track_C.ExecuteUbergraph_w_journal_entry_track
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_journal_entry_track_C::ExecuteUbergraph_w_journal_entry_track(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_track.w_journal_entry_track_C.ExecuteUbergraph_w_journal_entry_track");

	Uw_journal_entry_track_C_ExecuteUbergraph_w_journal_entry_track_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_journal_entry_track.w_journal_entry_track_C.OnQButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_journal_entry_quest_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_journal_entry_track_C::OnQButtonClicked__DelegateSignature(const struct FName& QuestID, class Uw_journal_entry_quest_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_track.w_journal_entry_track_C.OnQButtonClicked__DelegateSignature");

	Uw_journal_entry_track_C_OnQButtonClicked__DelegateSignature_Params params;
	params.QuestID = QuestID;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
