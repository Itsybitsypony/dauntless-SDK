#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_party_menu_member_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.OnFocusReceived
struct Uw_party_menu_member_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.FillPlayer
struct Uw_party_menu_member_bpw_C_FillPlayer_Params
{
	struct FUniqueNetIdRepl                            PartyMemberUniqueID;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                      PartyMemberName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsLeader;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.Construct
struct Uw_party_menu_member_bpw_C_Construct_Params
{
};

// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.OnLocalPlayerLeadershipChanged
struct Uw_party_menu_member_bpw_C_OnLocalPlayerLeadershipChanged_Params
{
	bool                                               LocalPlayerIsLeader;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.BndEvt__Background_InteractableSlot_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
struct Uw_party_menu_member_bpw_C_BndEvt__Background_InteractableSlot_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.ExecuteUbergraph_w_party_menu_member_bpw
struct Uw_party_menu_member_bpw_C_ExecuteUbergraph_w_party_menu_member_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.OnPartyMemberClicked__DelegateSignature
struct Uw_party_menu_member_bpw_C_OnPartyMemberClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            PartyMemberID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
