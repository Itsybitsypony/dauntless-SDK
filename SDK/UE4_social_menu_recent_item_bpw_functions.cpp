// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_recent_item_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Usocial_menu_recent_item_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.OnFocusReceived");

	Usocial_menu_recent_item_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.CanInviteToGuild
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanInvite                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_recent_item_bpw_C::CanInviteToGuild(bool* CanInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.CanInviteToGuild");

	Usocial_menu_recent_item_bpw_C_CanInviteToGuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanInvite != nullptr)
		*CanInvite = params.CanInvite;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ContextMenu_AddToFriends
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Usocial_menu_recent_item_bpw_C::ContextMenu_AddToFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ContextMenu_AddToFriends");

	Usocial_menu_recent_item_bpw_C_ContextMenu_AddToFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ContextMenu_InviteToGuild
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Usocial_menu_recent_item_bpw_C::ContextMenu_InviteToGuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ContextMenu_InviteToGuild");

	Usocial_menu_recent_item_bpw_C_ContextMenu_InviteToGuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ContextMenu_Close
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_recent_item_bpw_C::ContextMenu_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ContextMenu_Close");

	Usocial_menu_recent_item_bpw_C_ContextMenu_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ContextMenu_InviteToParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Usocial_menu_recent_item_bpw_C::ContextMenu_InviteToParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ContextMenu_InviteToParty");

	Usocial_menu_recent_item_bpw_C_ContextMenu_InviteToParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.OnGetMenuContent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Usocial_menu_recent_item_bpw_C::OnGetMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.OnGetMenuContent");

	Usocial_menu_recent_item_bpw_C_OnGetMenuContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_recent_item_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.Construct");

	Usocial_menu_recent_item_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_recent_item_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.OnSynchronizeProperties");

	Usocial_menu_recent_item_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_recent_item_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.Tick");

	Usocial_menu_recent_item_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_recent_item_bpw_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature");

	Usocial_menu_recent_item_bpw_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.On Invite Sent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        ReceiverId                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  ReceiverDisplayName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Usocial_menu_recent_item_bpw_C::On_Invite_Sent(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.On Invite Sent");

	Usocial_menu_recent_item_bpw_C_On_Invite_Sent_Params params;
	params.bSuccess = bSuccess;
	params.ReceiverId = ReceiverId;
	params.ReceiverDisplayName = ReceiverDisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.BndEvt__MenuAnchor_203_K2Node_ComponentBoundEvent_10_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_recent_item_bpw_C::BndEvt__MenuAnchor_203_K2Node_ComponentBoundEvent_10_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.BndEvt__MenuAnchor_203_K2Node_ComponentBoundEvent_10_OnMenuOpenChangedEvent__DelegateSignature");

	Usocial_menu_recent_item_bpw_C_BndEvt__MenuAnchor_203_K2Node_ComponentBoundEvent_10_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.OnFriendAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FriendName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Usocial_menu_recent_item_bpw_C::OnFriendAdded(bool bWasSuccessful, const class FString& FriendName)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.OnFriendAdded");

	Usocial_menu_recent_item_bpw_C_OnFriendAdded_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ExecuteUbergraph_social_menu_recent_item_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_recent_item_bpw_C::ExecuteUbergraph_social_menu_recent_item_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ExecuteUbergraph_social_menu_recent_item_bpw");

	Usocial_menu_recent_item_bpw_C_ExecuteUbergraph_social_menu_recent_item_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
