#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_friends_item_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.Refresh
struct Usocial_menu_friends_item_bpw_C_Refresh_Params
{
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.OnMouseButtonDown_1
struct Usocial_menu_friends_item_bpw_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.On_Border_175_MouseDoubleClick_1
struct Usocial_menu_friends_item_bpw_C_On_Border_175_MouseDoubleClick_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.CanInviteToGuild
struct Usocial_menu_friends_item_bpw_C_CanInviteToGuild_Params
{
	bool                                               CanInvite;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.ContextMenu_Close
struct Usocial_menu_friends_item_bpw_C_ContextMenu_Close_Params
{
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.ContextMenu_InviteToGuild
struct Usocial_menu_friends_item_bpw_C_ContextMenu_InviteToGuild_Params
{
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.ContextMenu_RemoveFriend
struct Usocial_menu_friends_item_bpw_C_ContextMenu_RemoveFriend_Params
{
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.ContextMenu_InviteToParty
struct Usocial_menu_friends_item_bpw_C_ContextMenu_InviteToParty_Params
{
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.OnGetContextMenuContent
struct Usocial_menu_friends_item_bpw_C_OnGetContextMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.OnFocusReceived
struct Usocial_menu_friends_item_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.Construct
struct Usocial_menu_friends_item_bpw_C_Construct_Params
{
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.OnFocusLost
struct Usocial_menu_friends_item_bpw_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.OnMouseEnter
struct Usocial_menu_friends_item_bpw_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.OnMouseLeave
struct Usocial_menu_friends_item_bpw_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.BndEvt__MenuAnchor_203_K2Node_ComponentBoundEvent_22_OnMenuOpenChangedEvent__DelegateSignature
struct Usocial_menu_friends_item_bpw_C_BndEvt__MenuAnchor_203_K2Node_ComponentBoundEvent_22_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.BndEvt__Button_158_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature
struct Usocial_menu_friends_item_bpw_C_BndEvt__Button_158_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.On Invite Sent
struct Usocial_menu_friends_item_bpw_C_On_Invite_Sent_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.ButtonClick
struct Usocial_menu_friends_item_bpw_C_ButtonClick_Params
{
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.ExecuteUbergraph_social_menu_friends_item_bpw
struct Usocial_menu_friends_item_bpw_C_ExecuteUbergraph_social_menu_friends_item_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_friends_item_bpw.social_menu_friends_item_bpw_C.DoubleClick_Chat__DelegateSignature
struct Usocial_menu_friends_item_bpw_C_DoubleClick_Chat__DelegateSignature_Params
{
	class FString                                      PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
