// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_PartyHUD_Invites_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Has Active Prompt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubpw_PartyHUD_Invites_C::Has_Active_Prompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Has Active Prompt");

	Ubpw_PartyHUD_Invites_C_Has_Active_Prompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_PartyHUD_Invites_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Construct");

	Ubpw_PartyHUD_Invites_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Invites Updated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FArchonPartyInvite> Invites                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ubpw_PartyHUD_Invites_C::Invites_Updated(TArray<struct FArchonPartyInvite> Invites)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Invites Updated");

	Ubpw_PartyHUD_Invites_C_Invites_Updated_Params params;
	params.Invites = Invites;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Accepted Invite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonPartyInvite      Invite                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_PartyHUD_Invites_C::Accepted_Invite(const struct FArchonPartyInvite& Invite)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Accepted Invite");

	Ubpw_PartyHUD_Invites_C_Accepted_Invite_Params params;
	params.Invite = Invite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.On Invite Accept
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        ReceiverId                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  ReceiverDisplayName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_PartyHUD_Invites_C::On_Invite_Accept(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.On Invite Accept");

	Ubpw_PartyHUD_Invites_C_On_Invite_Accept_Params params;
	params.bSuccess = bSuccess;
	params.ReceiverId = ReceiverId;
	params.ReceiverDisplayName = ReceiverDisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Declined Invite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonPartyInvite      Invite                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_PartyHUD_Invites_C::Declined_Invite(const struct FArchonPartyInvite& Invite)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Declined Invite");

	Ubpw_PartyHUD_Invites_C_Declined_Invite_Params params;
	params.Invite = Invite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.On Invite Decline
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        ReceiverId                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  ReceiverDisplayName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_PartyHUD_Invites_C::On_Invite_Decline(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.On Invite Decline");

	Ubpw_PartyHUD_Invites_C_On_Invite_Decline_Params params;
	params.bSuccess = bSuccess;
	params.ReceiverId = ReceiverId;
	params.ReceiverDisplayName = ReceiverDisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Dismiss Active Prompt
// (BlueprintCallable, BlueprintEvent)

void Ubpw_PartyHUD_Invites_C::Dismiss_Active_Prompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Dismiss Active Prompt");

	Ubpw_PartyHUD_Invites_C_Dismiss_Active_Prompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Status Message
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_PartyHUD_Invites_C::Status_Message(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.Status Message");

	Ubpw_PartyHUD_Invites_C_Status_Message_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.ExecuteUbergraph_bpw_PartyHUD_Invites
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_PartyHUD_Invites_C::ExecuteUbergraph_bpw_PartyHUD_Invites(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C.ExecuteUbergraph_bpw_PartyHUD_Invites");

	Ubpw_PartyHUD_Invites_C_ExecuteUbergraph_bpw_PartyHUD_Invites_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
