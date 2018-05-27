#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_PartyHUD_Member_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_PartyHUD_Member.w_PartyHUD_Member_C.Get Party Client
struct Uw_PartyHUD_Member_C_Get_Party_Client_Params
{
	class AArchonPartyClient*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_PartyHUD_Member.w_PartyHUD_Member_C.From Party Member
struct Uw_PartyHUD_Member_C_From_Party_Member_Params
{
	struct FArchonPartyMember                          PartyMember;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_PartyHUD_Member.w_PartyHUD_Member_C.Construct
struct Uw_PartyHUD_Member_C_Construct_Params
{
};

// Function w_PartyHUD_Member.w_PartyHUD_Member_C.ExecuteUbergraph_w_PartyHUD_Member
struct Uw_PartyHUD_Member_C_ExecuteUbergraph_w_PartyHUD_Member_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
