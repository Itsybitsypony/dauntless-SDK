// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_PartyHUD_SentInvite_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_PartyHUD_SentInvite.w_PartyHUD_SentInvite_C.New Invite
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        ReceiverId                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_PartyHUD_SentInvite_C::New_Invite(struct FUniqueNetIdRepl* ReceiverId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PartyHUD_SentInvite.w_PartyHUD_SentInvite_C.New Invite");

	Uw_PartyHUD_SentInvite_C_New_Invite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReceiverId != nullptr)
		*ReceiverId = params.ReceiverId;
}


// Function w_PartyHUD_SentInvite.w_PartyHUD_SentInvite_C.Invite Sent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_PartyHUD_SentInvite_C::Invite_Sent()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PartyHUD_SentInvite.w_PartyHUD_SentInvite_C.Invite Sent");

	Uw_PartyHUD_SentInvite_C_Invite_Sent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_PartyHUD_SentInvite.w_PartyHUD_SentInvite_C.Get Party Client
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AArchonPartyClient*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AArchonPartyClient* Uw_PartyHUD_SentInvite_C::Get_Party_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PartyHUD_SentInvite.w_PartyHUD_SentInvite_C.Get Party Client");

	Uw_PartyHUD_SentInvite_C_Get_Party_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_PartyHUD_SentInvite.w_PartyHUD_SentInvite_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ReceiverName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_PartyHUD_SentInvite_C::Update(const class FString& ReceiverName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PartyHUD_SentInvite.w_PartyHUD_SentInvite_C.Update");

	Uw_PartyHUD_SentInvite_C_Update_Params params;
	params.ReceiverName = ReceiverName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
