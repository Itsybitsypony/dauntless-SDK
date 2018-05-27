// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_guild_member_entry_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_guild_member_entry_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.OnFocusReceived");

	Uw_guild_member_entry_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Disband_Confirmed
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::ContextMenu_Disband_Confirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Disband_Confirmed");

	Uw_guild_member_entry_bpw_C_ContextMenu_Disband_Confirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Disband
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::ContextMenu_Disband()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Disband");

	Uw_guild_member_entry_bpw_C_ContextMenu_Disband_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Kick_Confirmed
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::ContextMenu_Kick_Confirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Kick_Confirmed");

	Uw_guild_member_entry_bpw_C_ContextMenu_Kick_Confirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_MakeLeader_Confirmed
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::ContextMenu_MakeLeader_Confirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_MakeLeader_Confirmed");

	Uw_guild_member_entry_bpw_C_ContextMenu_MakeLeader_Confirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_MakeLeader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::ContextMenu_MakeLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_MakeLeader");

	Uw_guild_member_entry_bpw_C_ContextMenu_MakeLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Kick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::ContextMenu_Kick()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Kick");

	Uw_guild_member_entry_bpw_C_ContextMenu_Kick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Demote
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::ContextMenu_Demote()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Demote");

	Uw_guild_member_entry_bpw_C_ContextMenu_Demote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Promote
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::ContextMenu_Promote()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Promote");

	Uw_guild_member_entry_bpw_C_ContextMenu_Promote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_AddToFriends
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::ContextMenu_AddToFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_AddToFriends");

	Uw_guild_member_entry_bpw_C_ContextMenu_AddToFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_InviteToParty
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::ContextMenu_InviteToParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_InviteToParty");

	Uw_guild_member_entry_bpw_C_ContextMenu_InviteToParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Close
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::ContextMenu_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Close");

	Uw_guild_member_entry_bpw_C_ContextMenu_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_CancelGuildInvite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::ContextMenu_CancelGuildInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_CancelGuildInvite");

	Uw_guild_member_entry_bpw_C_ContextMenu_CancelGuildInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_GetMenuContent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_guild_member_entry_bpw_C::ContextMenu_GetMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_GetMenuContent");

	Uw_guild_member_entry_bpw_C_ContextMenu_GetMenuContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_guild_member_entry_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.Construct");

	Uw_guild_member_entry_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_84_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_guild_member_entry_bpw_C::BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_84_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_84_OnMenuOpenChangedEvent__DelegateSignature");

	Uw_guild_member_entry_bpw_C_BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_84_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.BndEvt__GuildMemberEntryButton_K2Node_ComponentBoundEvent_146_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_guild_member_entry_bpw_C::BndEvt__GuildMemberEntryButton_K2Node_ComponentBoundEvent_146_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.BndEvt__GuildMemberEntryButton_K2Node_ComponentBoundEvent_146_OnButtonClickedEvent__DelegateSignature");

	Uw_guild_member_entry_bpw_C_BndEvt__GuildMemberEntryButton_K2Node_ComponentBoundEvent_146_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.OnFriendAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FriendName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_guild_member_entry_bpw_C::OnFriendAdded(bool bWasSuccessful, const class FString& FriendName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.OnFriendAdded");

	Uw_guild_member_entry_bpw_C_OnFriendAdded_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ExecuteUbergraph_w_guild_member_entry_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_guild_member_entry_bpw_C::ExecuteUbergraph_w_guild_member_entry_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ExecuteUbergraph_w_guild_member_entry_bpw");

	Uw_guild_member_entry_bpw_C_ExecuteUbergraph_w_guild_member_entry_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
