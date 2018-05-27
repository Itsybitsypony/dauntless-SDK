#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_PartyHUD_Invites_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Has Active Prompt
struct Ubpw_PartyHUD_Invites_C_Has_Active_Prompt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Construct
struct Ubpw_PartyHUD_Invites_C_Construct_Params
{
};

// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Invites Updated
struct Ubpw_PartyHUD_Invites_C_Invites_Updated_Params
{
	TArray<struct FArchonPartyInvite>                  Invites;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Accepted Invite
struct Ubpw_PartyHUD_Invites_C_Accepted_Invite_Params
{
	struct FArchonPartyInvite                          Invite;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.On Invite Accept
struct Ubpw_PartyHUD_Invites_C_On_Invite_Accept_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Declined Invite
struct Ubpw_PartyHUD_Invites_C_Declined_Invite_Params
{
	struct FArchonPartyInvite                          Invite;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.On Invite Decline
struct Ubpw_PartyHUD_Invites_C_On_Invite_Decline_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Dismiss Active Prompt
struct Ubpw_PartyHUD_Invites_C_Dismiss_Active_Prompt_Params
{
};

// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Status Message
struct Ubpw_PartyHUD_Invites_C_Status_Message_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.ExecuteUbergraph_bpw_PartyHUD_Invites
struct Ubpw_PartyHUD_Invites_C_ExecuteUbergraph_bpw_PartyHUD_Invites_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
