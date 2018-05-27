#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_guild_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshGuildCharterStatus
struct Usocial_menu_guild_bpw_C_RefreshGuildCharterStatus_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.Fixup Nav Redirects
struct Usocial_menu_guild_bpw_C_Fixup_Nav_Redirects_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.WaitForChangeTick
struct Usocial_menu_guild_bpw_C_WaitForChangeTick_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.UpdateGuildBindings
struct Usocial_menu_guild_bpw_C_UpdateGuildBindings_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.GetLocalGuildMemberInfo
struct Usocial_menu_guild_bpw_C_GetLocalGuildMemberInfo_Params
{
	struct FArchonGuildMember                          GuildMemberInfo;                                          // (Parm, OutParm)
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshGuildInfo
struct Usocial_menu_guild_bpw_C_RefreshGuildInfo_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnGuildDialogClosed
struct Usocial_menu_guild_bpw_C_OnGuildDialogClosed_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnGuildCreated
struct Usocial_menu_guild_bpw_C_OnGuildCreated_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshJoinGuildsAndCharterStatus
struct Usocial_menu_guild_bpw_C_RefreshJoinGuildsAndCharterStatus_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.HasGuildCharter
struct Usocial_menu_guild_bpw_C_HasGuildCharter_Params
{
	bool                                               HasCharter;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshState
struct Usocial_menu_guild_bpw_C_RefreshState_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshGuildHeader
struct Usocial_menu_guild_bpw_C_RefreshGuildHeader_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshGuildList
struct Usocial_menu_guild_bpw_C_RefreshGuildList_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.BndEvt__LeaveGuildButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature
struct Usocial_menu_guild_bpw_C_BndEvt__LeaveGuildButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.HandleLeaveGuild
struct Usocial_menu_guild_bpw_C_HandleLeaveGuild_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.AcceptGuildInvite
struct Usocial_menu_guild_bpw_C_AcceptGuildInvite_Params
{
	struct FArchonGuildInvite                          GuildInvite;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
struct Usocial_menu_guild_bpw_C_BndEvt__InviteButton_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.BndEvt__CreateGuildButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct Usocial_menu_guild_bpw_C_BndEvt__CreateGuildButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.DeclineGuildInvite
struct Usocial_menu_guild_bpw_C_DeclineGuildInvite_Params
{
	struct FArchonGuildInvite                          GuildInvite;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.InputSwap
struct Usocial_menu_guild_bpw_C_InputSwap_Params
{
	bool*                                              IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnTabSelected
struct Usocial_menu_guild_bpw_C_OnTabSelected_Params
{
	bool*                                              IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.SetDefaultFocus
struct Usocial_menu_guild_bpw_C_SetDefaultFocus_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.Construct
struct Usocial_menu_guild_bpw_C_Construct_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnTabDeselected
struct Usocial_menu_guild_bpw_C_OnTabDeselected_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.Destruct
struct Usocial_menu_guild_bpw_C_Destruct_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.HandleGuildInvitesUpdated
struct Usocial_menu_guild_bpw_C_HandleGuildInvitesUpdated_Params
{
	TArray<struct FArchonGuildInvite>                  Invites;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.HandleGuildChanged
struct Usocial_menu_guild_bpw_C_HandleGuildChanged_Params
{
	class AArchonGuild*                                Guild;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.BndEvt__PurchaseGuildCharterButton_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature
struct Usocial_menu_guild_bpw_C_BndEvt__PurchaseGuildCharterButton_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnInviteDialogClosed
struct Usocial_menu_guild_bpw_C_OnInviteDialogClosed_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.HandleInventoryChanged
struct Usocial_menu_guild_bpw_C_HandleInventoryChanged_Params
{
};

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.ExecuteUbergraph_social_menu_guild_bpw
struct Usocial_menu_guild_bpw_C_ExecuteUbergraph_social_menu_guild_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
