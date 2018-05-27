#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_recent_item_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.OnFocusReceived
struct Usocial_menu_recent_item_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.CanInviteToGuild
struct Usocial_menu_recent_item_bpw_C_CanInviteToGuild_Params
{
	bool                                               CanInvite;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ContextMenu_AddToFriends
struct Usocial_menu_recent_item_bpw_C_ContextMenu_AddToFriends_Params
{
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ContextMenu_InviteToGuild
struct Usocial_menu_recent_item_bpw_C_ContextMenu_InviteToGuild_Params
{
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ContextMenu_Close
struct Usocial_menu_recent_item_bpw_C_ContextMenu_Close_Params
{
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ContextMenu_InviteToParty
struct Usocial_menu_recent_item_bpw_C_ContextMenu_InviteToParty_Params
{
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.OnGetMenuContent
struct Usocial_menu_recent_item_bpw_C_OnGetMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.Construct
struct Usocial_menu_recent_item_bpw_C_Construct_Params
{
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.OnSynchronizeProperties
struct Usocial_menu_recent_item_bpw_C_OnSynchronizeProperties_Params
{
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.Tick
struct Usocial_menu_recent_item_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature
struct Usocial_menu_recent_item_bpw_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.On Invite Sent
struct Usocial_menu_recent_item_bpw_C_On_Invite_Sent_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.BndEvt__MenuAnchor_203_K2Node_ComponentBoundEvent_10_OnMenuOpenChangedEvent__DelegateSignature
struct Usocial_menu_recent_item_bpw_C_BndEvt__MenuAnchor_203_K2Node_ComponentBoundEvent_10_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.OnFriendAdded
struct Usocial_menu_recent_item_bpw_C_OnFriendAdded_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FriendName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function social_menu_recent_item_bpw.social_menu_recent_item_bpw_C.ExecuteUbergraph_social_menu_recent_item_bpw
struct Usocial_menu_recent_item_bpw_C_ExecuteUbergraph_social_menu_recent_item_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
