#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_party_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function social_menu_party_bpw.social_menu_party_bpw_C.GetDefaultFocus
struct Usocial_menu_party_bpw_C_GetDefaultFocus_Params
{
	class UWidget*                                     DesiredFocusWidget;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.FixupNavRedirects
struct Usocial_menu_party_bpw_C_FixupNavRedirects_Params
{
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.Get_InviteButton_bIsEnabled_1
struct Usocial_menu_party_bpw_C_Get_InviteButton_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.LeaveParty
struct Usocial_menu_party_bpw_C_LeaveParty_Params
{
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.UpdatePartyLeadership
struct Usocial_menu_party_bpw_C_UpdatePartyLeadership_Params
{
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.CreateNewSlot
struct Usocial_menu_party_bpw_C_CreateNewSlot_Params
{
	class Uw_party_menu_member_bpw_C*                  Slot;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.AddEmptySlots
struct Usocial_menu_party_bpw_C_AddEmptySlots_Params
{
	struct FArchonParty                                Party;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.UpdatePartyMembers
struct Usocial_menu_party_bpw_C_UpdatePartyMembers_Params
{
	struct FArchonParty                                Party;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.UpdateLocalPartyMember
struct Usocial_menu_party_bpw_C_UpdateLocalPartyMember_Params
{
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.PruneRemovedPartyMembers
struct Usocial_menu_party_bpw_C_PruneRemovedPartyMembers_Params
{
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.AddOrUpdatePartyMemberWidget
struct Usocial_menu_party_bpw_C_AddOrUpdatePartyMemberWidget_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                      PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsLeader;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.GetPartyClient
struct Usocial_menu_party_bpw_C_GetPartyClient_Params
{
	class AArchonPartyClient*                          Party_Client;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.Construct
struct Usocial_menu_party_bpw_C_Construct_Params
{
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.OnPartyUpdated
struct Usocial_menu_party_bpw_C_OnPartyUpdated_Params
{
	struct FArchonParty                                Party;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.BndEvt__w_social_button_bpw_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct Usocial_menu_party_bpw_C_BndEvt__w_social_button_bpw_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.OnPartyMemberClicked
struct Usocial_menu_party_bpw_C_OnPartyMemberClicked_Params
{
	struct FUniqueNetIdRepl                            PartyMemberID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct Usocial_menu_party_bpw_C_BndEvt__InviteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.OnTabSelected
struct Usocial_menu_party_bpw_C_OnTabSelected_Params
{
	bool*                                              IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.InputSwap
struct Usocial_menu_party_bpw_C_InputSwap_Params
{
	bool*                                              IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.OnPartyPopupClosed
struct Usocial_menu_party_bpw_C_OnPartyPopupClosed_Params
{
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.SetDefaultFocus
struct Usocial_menu_party_bpw_C_SetDefaultFocus_Params
{
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.OnTabDeselected
struct Usocial_menu_party_bpw_C_OnTabDeselected_Params
{
};

// Function social_menu_party_bpw.social_menu_party_bpw_C.ExecuteUbergraph_social_menu_party_bpw
struct Usocial_menu_party_bpw_C_ExecuteUbergraph_social_menu_party_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
