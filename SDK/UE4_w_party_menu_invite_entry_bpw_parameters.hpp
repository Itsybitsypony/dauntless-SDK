#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_party_menu_invite_entry_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_party_menu_invite_entry_bpw.w_party_menu_invite_entry_bpw_C.BndEvt__Button_158_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct Uw_party_menu_invite_entry_bpw_C_BndEvt__Button_158_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_party_menu_invite_entry_bpw.w_party_menu_invite_entry_bpw_C.OnInviteSent
struct Uw_party_menu_invite_entry_bpw_C_OnInviteSent_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_party_menu_invite_entry_bpw.w_party_menu_invite_entry_bpw_C.ExecuteUbergraph_w_party_menu_invite_entry_bpw
struct Uw_party_menu_invite_entry_bpw_C_ExecuteUbergraph_w_party_menu_invite_entry_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_party_menu_invite_entry_bpw.w_party_menu_invite_entry_bpw_C.OnPlayerInviteEntryClicked__DelegateSignature
struct Uw_party_menu_invite_entry_bpw_C_OnPlayerInviteEntryClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                      PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
