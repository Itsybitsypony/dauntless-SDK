#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_PartyHUD_SentInvite_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_PartyHUD_SentInvite.w_PartyHUD_SentInvite_C.New Invite
struct Uw_PartyHUD_SentInvite_C_New_Invite_Params
{
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_PartyHUD_SentInvite.w_PartyHUD_SentInvite_C.Invite Sent
struct Uw_PartyHUD_SentInvite_C_Invite_Sent_Params
{
};

// Function w_PartyHUD_SentInvite.w_PartyHUD_SentInvite_C.Get Party Client
struct Uw_PartyHUD_SentInvite_C_Get_Party_Client_Params
{
	class AArchonPartyClient*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_PartyHUD_SentInvite.w_PartyHUD_SentInvite_C.Update
struct Uw_PartyHUD_SentInvite_C_Update_Params
{
	class FString                                      ReceiverName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
