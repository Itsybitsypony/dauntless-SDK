#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_guild_member_entry_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.OnFocusReceived
struct Uw_guild_member_entry_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Disband_Confirmed
struct Uw_guild_member_entry_bpw_C_ContextMenu_Disband_Confirmed_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Disband
struct Uw_guild_member_entry_bpw_C_ContextMenu_Disband_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Kick_Confirmed
struct Uw_guild_member_entry_bpw_C_ContextMenu_Kick_Confirmed_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_MakeLeader_Confirmed
struct Uw_guild_member_entry_bpw_C_ContextMenu_MakeLeader_Confirmed_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_MakeLeader
struct Uw_guild_member_entry_bpw_C_ContextMenu_MakeLeader_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Kick
struct Uw_guild_member_entry_bpw_C_ContextMenu_Kick_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Demote
struct Uw_guild_member_entry_bpw_C_ContextMenu_Demote_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Promote
struct Uw_guild_member_entry_bpw_C_ContextMenu_Promote_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_AddToFriends
struct Uw_guild_member_entry_bpw_C_ContextMenu_AddToFriends_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_InviteToParty
struct Uw_guild_member_entry_bpw_C_ContextMenu_InviteToParty_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_Close
struct Uw_guild_member_entry_bpw_C_ContextMenu_Close_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_CancelGuildInvite
struct Uw_guild_member_entry_bpw_C_ContextMenu_CancelGuildInvite_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ContextMenu_GetMenuContent
struct Uw_guild_member_entry_bpw_C_ContextMenu_GetMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.Construct
struct Uw_guild_member_entry_bpw_C_Construct_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_84_OnMenuOpenChangedEvent__DelegateSignature
struct Uw_guild_member_entry_bpw_C_BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_84_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.BndEvt__GuildMemberEntryButton_K2Node_ComponentBoundEvent_146_OnButtonClickedEvent__DelegateSignature
struct Uw_guild_member_entry_bpw_C_BndEvt__GuildMemberEntryButton_K2Node_ComponentBoundEvent_146_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.OnFriendAdded
struct Uw_guild_member_entry_bpw_C_OnFriendAdded_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FriendName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_guild_member_entry_bpw.w_guild_member_entry_bpw_C.ExecuteUbergraph_w_guild_member_entry_bpw
struct Uw_guild_member_entry_bpw_C_ExecuteUbergraph_w_guild_member_entry_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
