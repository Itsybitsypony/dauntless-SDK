#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_guild_invite_entry_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.OnFocusReceived
struct Uw_guild_invite_entry_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.ContextMenu_Decline
struct Uw_guild_invite_entry_bpw_C_ContextMenu_Decline_Params
{
};

// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.ContextMenu_Accept
struct Uw_guild_invite_entry_bpw_C_ContextMenu_Accept_Params
{
};

// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.ContextMenu_Close
struct Uw_guild_invite_entry_bpw_C_ContextMenu_Close_Params
{
};

// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.On_ContextMenuAnchor_GetMenuContent_1
struct Uw_guild_invite_entry_bpw_C_On_ContextMenuAnchor_GetMenuContent_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.BndEvt__GuildInviteEntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct Uw_guild_invite_entry_bpw_C_BndEvt__GuildInviteEntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_76_OnMenuOpenChangedEvent__DelegateSignature
struct Uw_guild_invite_entry_bpw_C_BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_76_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.Construct
struct Uw_guild_invite_entry_bpw_C_Construct_Params
{
};

// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.ExecuteUbergraph_w_guild_invite_entry_bpw
struct Uw_guild_invite_entry_bpw_C_ExecuteUbergraph_w_guild_invite_entry_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.DeclinedInvite__DelegateSignature
struct Uw_guild_invite_entry_bpw_C_DeclinedInvite__DelegateSignature_Params
{
	struct FArchonGuildInvite                          Invite;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_guild_invite_entry_bpw.w_guild_invite_entry_bpw_C.AcceptedInvite__DelegateSignature
struct Uw_guild_invite_entry_bpw_C_AcceptedInvite__DelegateSignature_Params
{
	struct FArchonGuildInvite                          Invite;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
