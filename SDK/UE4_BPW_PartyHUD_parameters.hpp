#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_PartyHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_PartyHUD.BPW_PartyHUD_C.Get Matchmaking Label
struct UBPW_PartyHUD_C_Get_Matchmaking_Label_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_PartyHUD.BPW_PartyHUD_C.Get Matchmaking Visibility
struct UBPW_PartyHUD_C_Get_Matchmaking_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_PartyHUD.BPW_PartyHUD_C.Get Member Widget
struct UBPW_PartyHUD_C_Get_Member_Widget_Params
{
	struct FArchonPartyMember                          Party_Member;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class Uw_PartyHUD_Member_C*                        Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PartyHUD.BPW_PartyHUD_C.Remove Empty Member Widgets
struct UBPW_PartyHUD_C_Remove_Empty_Member_Widgets_Params
{
};

// Function BPW_PartyHUD.BPW_PartyHUD_C.Get Party Client
struct UBPW_PartyHUD_C_Get_Party_Client_Params
{
	class AArchonPartyClient*                          Party_Client;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PartyHUD.BPW_PartyHUD_C.Construct
struct UBPW_PartyHUD_C_Construct_Params
{
};

// Function BPW_PartyHUD.BPW_PartyHUD_C.OnPartyUpdated
struct UBPW_PartyHUD_C_OnPartyUpdated_Params
{
	struct FArchonParty                                CurrentParty;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPW_PartyHUD.BPW_PartyHUD_C.OnInvitesUpdated
struct UBPW_PartyHUD_C_OnInvitesUpdated_Params
{
	TArray<struct FArchonPartyInvite>                  Invites;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_PartyHUD.BPW_PartyHUD_C.OnSentInvitesUpdated
struct UBPW_PartyHUD_C_OnSentInvitesUpdated_Params
{
	TArray<struct FArchonPartyInvite>                  SentInvites;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_PartyHUD.BPW_PartyHUD_C.ExecuteUbergraph_BPW_PartyHUD
struct UBPW_PartyHUD_C_ExecuteUbergraph_BPW_PartyHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PartyHUD.BPW_PartyHUD_C.updateplayernameplate__DelegateSignature
struct UBPW_PartyHUD_C_updateplayernameplate__DelegateSignature_Params
{
	bool                                               IsLeader;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
