#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_friends_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.UpdateFriendList
struct Usocial_menu_friends_bpw_C_UpdateFriendList_Params
{
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.OnNamedFriendAdded
struct Usocial_menu_friends_bpw_C_OnNamedFriendAdded_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FriendName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.Friends Updated
struct Usocial_menu_friends_bpw_C_Friends_Updated_Params
{
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.BndEvt__w_social_button_bpw_375_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct Usocial_menu_friends_bpw_C_BndEvt__w_social_button_bpw_375_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
struct Usocial_menu_friends_bpw_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature
struct Usocial_menu_friends_bpw_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.Friend Removed
struct Usocial_menu_friends_bpw_C_Friend_Removed_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FriendName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.Construct
struct Usocial_menu_friends_bpw_C_Construct_Params
{
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.OnTabSelected
struct Usocial_menu_friends_bpw_C_OnTabSelected_Params
{
	bool*                                              IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.InputSwap
struct Usocial_menu_friends_bpw_C_InputSwap_Params
{
	bool*                                              IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.SetDefaultFocus
struct Usocial_menu_friends_bpw_C_SetDefaultFocus_Params
{
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.OnTabDeselected
struct Usocial_menu_friends_bpw_C_OnTabDeselected_Params
{
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.OnPresenceUpdated
struct Usocial_menu_friends_bpw_C_OnPresenceUpdated_Params
{
	struct FUniqueNetIdRepl                            UserId;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FArchonPresence                             PresenceInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function social_menu_friends_bpw.social_menu_friends_bpw_C.ExecuteUbergraph_social_menu_friends_bpw
struct Usocial_menu_friends_bpw_C_ExecuteUbergraph_social_menu_friends_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
