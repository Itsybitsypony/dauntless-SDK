// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_partyfinder_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Usocial_menu_partyfinder_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnKeyDown");

	Usocial_menu_partyfinder_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.HideSearchOverlay
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::HideSearchOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.HideSearchOverlay");

	Usocial_menu_partyfinder_bpw_C_HideSearchOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.ShowSearchOverlay
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::ShowSearchOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.ShowSearchOverlay");

	Usocial_menu_partyfinder_bpw_C_ShowSearchOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.UpdateSearchResults
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   SearchText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Usocial_menu_partyfinder_bpw_C::UpdateSearchResults(const struct FText& SearchText)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.UpdateSearchResults");

	Usocial_menu_partyfinder_bpw_C_UpdateSearchResults_Params params;
	params.SearchText = SearchText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.DoesPartyMatchFilters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonPartyFinderEntry Entry                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Match                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_partyfinder_bpw_C::DoesPartyMatchFilters(const struct FArchonPartyFinderEntry& Entry, bool* Match)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.DoesPartyMatchFilters");

	Usocial_menu_partyfinder_bpw_C_DoesPartyMatchFilters_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Match != nullptr)
		*Match = params.Match;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.GetArmorResistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AArchonLoadout*          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorType                     ArmourType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Global_Resistance              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_partyfinder_bpw_C::GetArmorResistance(class AArchonLoadout* Target, EArmorType ArmourType, float* Global_Resistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.GetArmorResistance");

	Usocial_menu_partyfinder_bpw_C_GetArmorResistance_Params params;
	params.Target = Target;
	params.ArmourType = ArmourType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Global_Resistance != nullptr)
		*Global_Resistance = params.Global_Resistance;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.GetAvailableHunts
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           HuntIds                        (Parm, OutParm, ZeroConstructor)

void Usocial_menu_partyfinder_bpw_C::GetAvailableHunts(TArray<struct FName>* HuntIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.GetAvailableHunts");

	Usocial_menu_partyfinder_bpw_C_GetAvailableHunts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HuntIds != nullptr)
		*HuntIds = params.HuntIds;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.InitializeRecommendedHunts
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::InitializeRecommendedHunts()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.InitializeRecommendedHunts");

	Usocial_menu_partyfinder_bpw_C_InitializeRecommendedHunts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.UpdatePartyList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::UpdatePartyList()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.UpdatePartyList");

	Usocial_menu_partyfinder_bpw_C_UpdatePartyList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.Construct");

	Usocial_menu_partyfinder_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_button_bpw_375_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::BndEvt__w_social_button_bpw_375_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_button_bpw_375_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Usocial_menu_partyfinder_bpw_C_BndEvt__w_social_button_bpw_375_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_button_bpw_C_0_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::BndEvt__w_social_button_bpw_C_0_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_button_bpw_C_0_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	Usocial_menu_partyfinder_bpw_C_BndEvt__w_social_button_bpw_C_0_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnCreateCommit
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Description                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           RequireGather                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequireBreaks                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           HuntIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Usocial_menu_partyfinder_bpw_C::OnCreateCommit(const class FString& Description, bool RequireGather, bool RequireBreaks, TArray<struct FName> HuntIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnCreateCommit");

	Usocial_menu_partyfinder_bpw_C_OnCreateCommit_Params params;
	params.Description = Description;
	params.RequireGather = RequireGather;
	params.RequireBreaks = RequireBreaks;
	params.HuntIds = HuntIds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnCreateSuccess
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonPartyFinderEntry NewEntry                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Usocial_menu_partyfinder_bpw_C::OnCreateSuccess(const struct FArchonPartyFinderEntry& NewEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnCreateSuccess");

	Usocial_menu_partyfinder_bpw_C_OnCreateSuccess_Params params;
	params.NewEntry = NewEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnCreateFail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ErrorString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Usocial_menu_partyfinder_bpw_C::OnCreateFail(const class FString& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnCreateFail");

	Usocial_menu_partyfinder_bpw_C_OnCreateFail_Params params;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__ViewAllToggle_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::BndEvt__ViewAllToggle_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__ViewAllToggle_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature");

	Usocial_menu_partyfinder_bpw_C_BndEvt__ViewAllToggle_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_536_OnFocusText__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_536_OnFocusText__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_536_OnFocusText__DelegateSignature");

	Usocial_menu_partyfinder_bpw_C_BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_536_OnFocusText__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_547_OnFocusTextLost__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_547_OnFocusTextLost__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_547_OnFocusTextLost__DelegateSignature");

	Usocial_menu_partyfinder_bpw_C_BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_547_OnFocusTextLost__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_645_OnTextChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Usocial_menu_partyfinder_bpw_C::BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_645_OnTextChanged__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_645_OnTextChanged__DelegateSignature");

	Usocial_menu_partyfinder_bpw_C_BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_645_OnTextChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnTabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_partyfinder_bpw_C::OnTabSelected(bool* IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnTabSelected");

	Usocial_menu_partyfinder_bpw_C_OnTabSelected_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnPartyListUpdated
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::OnPartyListUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnPartyListUpdated");

	Usocial_menu_partyfinder_bpw_C_OnPartyListUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__SearchBlackout_K2Node_ComponentBoundEvent_461_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::BndEvt__SearchBlackout_K2Node_ComponentBoundEvent_461_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__SearchBlackout_K2Node_ComponentBoundEvent_461_OnButtonClickedEvent__DelegateSignature");

	Usocial_menu_partyfinder_bpw_C_BndEvt__SearchBlackout_K2Node_ComponentBoundEvent_461_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.RefreshPartyListTimer
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::RefreshPartyListTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.RefreshPartyListTimer");

	Usocial_menu_partyfinder_bpw_C_RefreshPartyListTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnJoinSuccess
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonPartyFinderEntry UpdatedEntry                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Usocial_menu_partyfinder_bpw_C::OnJoinSuccess(const struct FArchonPartyFinderEntry& UpdatedEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnJoinSuccess");

	Usocial_menu_partyfinder_bpw_C_OnJoinSuccess_Params params;
	params.UpdatedEntry = UpdatedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnJoinFail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ErrorString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Usocial_menu_partyfinder_bpw_C::OnJoinFail(const class FString& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnJoinFail");

	Usocial_menu_partyfinder_bpw_C_OnJoinFail_Params params;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnPartyClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonPartyFinderEntry PartyFinderEntry               (BlueprintVisible, BlueprintReadOnly, Parm)

void Usocial_menu_partyfinder_bpw_C::OnPartyClicked(const struct FArchonPartyFinderEntry& PartyFinderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnPartyClicked");

	Usocial_menu_partyfinder_bpw_C_OnPartyClicked_Params params;
	params.PartyFinderEntry = PartyFinderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnDeleteSuccess
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::OnDeleteSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnDeleteSuccess");

	Usocial_menu_partyfinder_bpw_C_OnDeleteSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnDeleteFail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ErrorString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Usocial_menu_partyfinder_bpw_C::OnDeleteFail(const class FString& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnDeleteFail");

	Usocial_menu_partyfinder_bpw_C_OnDeleteFail_Params params;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnConfirmRemoveParty
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::OnConfirmRemoveParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnConfirmRemoveParty");

	Usocial_menu_partyfinder_bpw_C_OnConfirmRemoveParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnCommitFilters
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Description                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           RequireGather                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequireBreaks                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           HuntIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Usocial_menu_partyfinder_bpw_C::OnCommitFilters(const class FString& Description, bool RequireGather, bool RequireBreaks, TArray<struct FName> HuntIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnCommitFilters");

	Usocial_menu_partyfinder_bpw_C_OnCommitFilters_Params params;
	params.Description = Description;
	params.RequireGather = RequireGather;
	params.RequireBreaks = RequireBreaks;
	params.HuntIds = HuntIds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__SearchTextField_K2Node_ComponentBoundEvent_178_OnTextCommitted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETextCommit>       Commit_Method                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_partyfinder_bpw_C::BndEvt__SearchTextField_K2Node_ComponentBoundEvent_178_OnTextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> Commit_Method)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__SearchTextField_K2Node_ComponentBoundEvent_178_OnTextCommitted__DelegateSignature");

	Usocial_menu_partyfinder_bpw_C_BndEvt__SearchTextField_K2Node_ComponentBoundEvent_178_OnTextCommitted__DelegateSignature_Params params;
	params.Text = Text;
	params.Commit_Method = Commit_Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__MyPartyWidget_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FArchonPartyFinderEntry PartyFinderEntry               (BlueprintVisible, BlueprintReadOnly, Parm)

void Usocial_menu_partyfinder_bpw_C::BndEvt__MyPartyWidget_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature(const struct FArchonPartyFinderEntry& PartyFinderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__MyPartyWidget_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature");

	Usocial_menu_partyfinder_bpw_C_BndEvt__MyPartyWidget_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature_Params params;
	params.PartyFinderEntry = PartyFinderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnConfirmJoin
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::OnConfirmJoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnConfirmJoin");

	Usocial_menu_partyfinder_bpw_C_OnConfirmJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnConfirmCreateParty
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_partyfinder_bpw_C::OnConfirmCreateParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnConfirmCreateParty");

	Usocial_menu_partyfinder_bpw_C_OnConfirmCreateParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.ExecuteUbergraph_social_menu_partyfinder_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_partyfinder_bpw_C::ExecuteUbergraph_social_menu_partyfinder_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.ExecuteUbergraph_social_menu_partyfinder_bpw");

	Usocial_menu_partyfinder_bpw_C_ExecuteUbergraph_social_menu_partyfinder_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
