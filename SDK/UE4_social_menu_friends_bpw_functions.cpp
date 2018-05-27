// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_friends_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.UpdateFriendList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Usocial_menu_friends_bpw_C::UpdateFriendList()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.UpdateFriendList");

	Usocial_menu_friends_bpw_C_UpdateFriendList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.OnNamedFriendAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FriendName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Usocial_menu_friends_bpw_C::OnNamedFriendAdded(bool bWasSuccessful, const class FString& FriendName)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.OnNamedFriendAdded");

	Usocial_menu_friends_bpw_C_OnNamedFriendAdded_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.Friends Updated
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_friends_bpw_C::Friends_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.Friends Updated");

	Usocial_menu_friends_bpw_C_Friends_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.BndEvt__w_social_button_bpw_375_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_friends_bpw_C::BndEvt__w_social_button_bpw_375_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.BndEvt__w_social_button_bpw_375_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Usocial_menu_friends_bpw_C_BndEvt__w_social_button_bpw_375_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_friends_bpw_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Usocial_menu_friends_bpw_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Usocial_menu_friends_bpw_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature");

	Usocial_menu_friends_bpw_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.Friend Removed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FriendName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Usocial_menu_friends_bpw_C::Friend_Removed(bool bWasSuccessful, const class FString& FriendName)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.Friend Removed");

	Usocial_menu_friends_bpw_C_Friend_Removed_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_friends_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.Construct");

	Usocial_menu_friends_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.OnTabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_friends_bpw_C::OnTabSelected(bool* IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.OnTabSelected");

	Usocial_menu_friends_bpw_C_OnTabSelected_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_friends_bpw_C::InputSwap(bool* IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.InputSwap");

	Usocial_menu_friends_bpw_C_InputSwap_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.SetDefaultFocus
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_friends_bpw_C::SetDefaultFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.SetDefaultFocus");

	Usocial_menu_friends_bpw_C_SetDefaultFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.OnTabDeselected
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_friends_bpw_C::OnTabDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.OnTabDeselected");

	Usocial_menu_friends_bpw_C_OnTabDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.OnPresenceUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UserId                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FArchonPresence         PresenceInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Usocial_menu_friends_bpw_C::OnPresenceUpdated(const struct FUniqueNetIdRepl& UserId, const struct FArchonPresence& PresenceInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.OnPresenceUpdated");

	Usocial_menu_friends_bpw_C_OnPresenceUpdated_Params params;
	params.UserId = UserId;
	params.PresenceInfo = PresenceInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_friends_bpw.social_menu_friends_bpw_C.ExecuteUbergraph_social_menu_friends_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_friends_bpw_C::ExecuteUbergraph_social_menu_friends_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_friends_bpw.social_menu_friends_bpw_C.ExecuteUbergraph_social_menu_friends_bpw");

	Usocial_menu_friends_bpw_C_ExecuteUbergraph_social_menu_friends_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
