// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_GAMEPLAY_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.ApplyCurrentGenderIdentity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_GAMEPLAY_bpw_C::ApplyCurrentGenderIdentity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.ApplyCurrentGenderIdentity");

	UOptions_Menu_GAMEPLAY_bpw_C_ApplyCurrentGenderIdentity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.GetPlayerGenderIdentity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EArchonGender                  GenderId                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_GAMEPLAY_bpw_C::GetPlayerGenderIdentity(EArchonGender* GenderId, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.GetPlayerGenderIdentity");

	UOptions_Menu_GAMEPLAY_bpw_C_GetPlayerGenderIdentity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenderId != nullptr)
		*GenderId = params.GenderId;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.SetGenderIdentityAvailability
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_GAMEPLAY_bpw_C::SetGenderIdentityAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.SetGenderIdentityAvailability");

	UOptions_Menu_GAMEPLAY_bpw_C_SetGenderIdentityAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.ApplyState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonOptionUserWidget* RootMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_GAMEPLAY_bpw_C::ApplyState(class UArchonOptionUserWidget* RootMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.ApplyState");

	UOptions_Menu_GAMEPLAY_bpw_C_ApplyState_Params params;
	params.RootMenu = RootMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.RestoreState
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_GAMEPLAY_bpw_C::RestoreState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.RestoreState");

	UOptions_Menu_GAMEPLAY_bpw_C_RestoreState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.SaveState
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_GAMEPLAY_bpw_C::SaveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.SaveState");

	UOptions_Menu_GAMEPLAY_bpw_C_SaveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.HasStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasChanged                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_GAMEPLAY_bpw_C::HasStateChanged(bool* HasChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.HasStateChanged");

	UOptions_Menu_GAMEPLAY_bpw_C_HasStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasChanged != nullptr)
		*HasChanged = params.HasChanged;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.UpdateUI
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_GAMEPLAY_bpw_C::UpdateUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.UpdateUI");

	UOptions_Menu_GAMEPLAY_bpw_C_UpdateUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptions_Menu_GAMEPLAY_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.OnKeyDown");

	UOptions_Menu_GAMEPLAY_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__HideHelmet_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__HideHelmet_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__HideHelmet_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__HideHelmet_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Language_VO_K2Node_ComponentBoundEvent_1_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__Language_VO_K2Node_ComponentBoundEvent_1_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Language_VO_K2Node_ComponentBoundEvent_1_FocusReceived__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__Language_VO_K2Node_ComponentBoundEvent_1_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Language_Text_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__Language_Text_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Language_Text_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__Language_Text_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Subtitles_K2Node_ComponentBoundEvent_8_FocusReceived_Tooltip__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__Subtitles_K2Node_ComponentBoundEvent_8_FocusReceived_Tooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Subtitles_K2Node_ComponentBoundEvent_8_FocusReceived_Tooltip__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__Subtitles_K2Node_ComponentBoundEvent_8_FocusReceived_Tooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__NamePlates_K2Node_ComponentBoundEvent_21_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__NamePlates_K2Node_ComponentBoundEvent_21_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__NamePlates_K2Node_ComponentBoundEvent_21_FocusReceived__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__NamePlates_K2Node_ComponentBoundEvent_21_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.Gamepad Cancel
// (BlueprintCallable, BlueprintEvent)

void UOptions_Menu_GAMEPLAY_bpw_C::Gamepad_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.Gamepad Cancel");

	UOptions_Menu_GAMEPLAY_bpw_C_Gamepad_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Language_VO_K2Node_ComponentBoundEvent_60_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__Language_VO_K2Node_ComponentBoundEvent_60_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Language_VO_K2Node_ComponentBoundEvent_60_PickerUpdated__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__Language_VO_K2Node_ComponentBoundEvent_60_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Menu_GAMEPLAY_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.Construct");

	UOptions_Menu_GAMEPLAY_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Language_Text_K2Node_ComponentBoundEvent_75_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__Language_Text_K2Node_ComponentBoundEvent_75_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Language_Text_K2Node_ComponentBoundEvent_75_PickerUpdated__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__Language_Text_K2Node_ComponentBoundEvent_75_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Subtitles_K2Node_ComponentBoundEvent_85_OptionToggleStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ECheckBoxState                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__Subtitles_K2Node_ComponentBoundEvent_85_OptionToggleStateChange__DelegateSignature(ECheckBoxState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Subtitles_K2Node_ComponentBoundEvent_85_OptionToggleStateChange__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__Subtitles_K2Node_ComponentBoundEvent_85_OptionToggleStateChange__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__HideHelmet_K2Node_ComponentBoundEvent_106_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__HideHelmet_K2Node_ComponentBoundEvent_106_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__HideHelmet_K2Node_ComponentBoundEvent_106_PickerUpdated__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__HideHelmet_K2Node_ComponentBoundEvent_106_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__NamePlates_K2Node_ComponentBoundEvent_118_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__NamePlates_K2Node_ComponentBoundEvent_118_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__NamePlates_K2Node_ComponentBoundEvent_118_PickerUpdated__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__NamePlates_K2Node_ComponentBoundEvent_118_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_138_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_138_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_138_FocusReceived__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_138_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_155_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_155_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_155_PickerUpdated__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_155_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_82_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_82_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_82_FocusReceived__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_82_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_103_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_103_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_103_PickerUpdated__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_103_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_286_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_286_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_286_FocusReceived__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_286_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_290_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_GAMEPLAY_bpw_C::BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_290_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_290_PickerUpdated__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_290_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.ExecuteUbergraph_Options_Menu_GAMEPLAY_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_GAMEPLAY_bpw_C::ExecuteUbergraph_Options_Menu_GAMEPLAY_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.ExecuteUbergraph_Options_Menu_GAMEPLAY_bpw");

	UOptions_Menu_GAMEPLAY_bpw_C_ExecuteUbergraph_Options_Menu_GAMEPLAY_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BacktoRoot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_GAMEPLAY_bpw_C::BacktoRoot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BacktoRoot__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_BacktoRoot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.UpdateTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_GAMEPLAY_bpw_C::UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.UpdateTooltip__DelegateSignature");

	UOptions_Menu_GAMEPLAY_bpw_C_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
