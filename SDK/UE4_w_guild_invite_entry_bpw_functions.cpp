// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_guild_invite_entry_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_guild_invite_entry_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.OnFocusReceived");

	Uw_guild_invite_entry_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.ContextMenu_Decline
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_guild_invite_entry_bpw_C::ContextMenu_Decline()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.ContextMenu_Decline");

	Uw_guild_invite_entry_bpw_C_ContextMenu_Decline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.ContextMenu_Accept
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_guild_invite_entry_bpw_C::ContextMenu_Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.ContextMenu_Accept");

	Uw_guild_invite_entry_bpw_C_ContextMenu_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.ContextMenu_Close
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_guild_invite_entry_bpw_C::ContextMenu_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.ContextMenu_Close");

	Uw_guild_invite_entry_bpw_C_ContextMenu_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.On_ContextMenuAnchor_GetMenuContent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_guild_invite_entry_bpw_C::On_ContextMenuAnchor_GetMenuContent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.On_ContextMenuAnchor_GetMenuContent_1");

	Uw_guild_invite_entry_bpw_C_On_ContextMenuAnchor_GetMenuContent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.BndEvt__GuildInviteEntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_guild_invite_entry_bpw_C::BndEvt__GuildInviteEntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.BndEvt__GuildInviteEntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Uw_guild_invite_entry_bpw_C_BndEvt__GuildInviteEntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_76_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_guild_invite_entry_bpw_C::BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_76_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_76_OnMenuOpenChangedEvent__DelegateSignature");

	Uw_guild_invite_entry_bpw_C_BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_76_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_guild_invite_entry_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.Construct");

	Uw_guild_invite_entry_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.ExecuteUbergraph_w_guild_invite_entry_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_guild_invite_entry_bpw_C::ExecuteUbergraph_w_guild_invite_entry_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.ExecuteUbergraph_w_guild_invite_entry_bpw");

	Uw_guild_invite_entry_bpw_C_ExecuteUbergraph_w_guild_invite_entry_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.DeclinedInvite__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonGuildInvite      Invite                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_guild_invite_entry_bpw_C::DeclinedInvite__DelegateSignature(const struct FArchonGuildInvite& Invite)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.DeclinedInvite__DelegateSignature");

	Uw_guild_invite_entry_bpw_C_DeclinedInvite__DelegateSignature_Params params;
	params.Invite = Invite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.AcceptedInvite__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonGuildInvite      Invite                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_guild_invite_entry_bpw_C::AcceptedInvite__DelegateSignature(const struct FArchonGuildInvite& Invite)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.AcceptedInvite__DelegateSignature");

	Uw_guild_invite_entry_bpw_C_AcceptedInvite__DelegateSignature_Params params;
	params.Invite = Invite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
