// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_PartyHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_PartyHUD.BPW_PartyHUD_C.Get Matchmaking Label
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_PartyHUD_C::Get_Matchmaking_Label()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PartyHUD.BPW_PartyHUD_C.Get Matchmaking Label");

	UBPW_PartyHUD_C_Get_Matchmaking_Label_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_PartyHUD.BPW_PartyHUD_C.Get Matchmaking Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPW_PartyHUD_C::Get_Matchmaking_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PartyHUD.BPW_PartyHUD_C.Get Matchmaking Visibility");

	UBPW_PartyHUD_C_Get_Matchmaking_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_PartyHUD.BPW_PartyHUD_C.Get Member Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FArchonPartyMember      Party_Member                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class Uw_PartyHUD_Member_C*    Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_PartyHUD_C::Get_Member_Widget(const struct FArchonPartyMember& Party_Member, class Uw_PartyHUD_Member_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PartyHUD.BPW_PartyHUD_C.Get Member Widget");

	UBPW_PartyHUD_C_Get_Member_Widget_Params params;
	params.Party_Member = Party_Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BPW_PartyHUD.BPW_PartyHUD_C.Remove Empty Member Widgets
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_PartyHUD_C::Remove_Empty_Member_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PartyHUD.BPW_PartyHUD_C.Remove Empty Member Widgets");

	UBPW_PartyHUD_C_Remove_Empty_Member_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PartyHUD.BPW_PartyHUD_C.Get Party Client
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AArchonPartyClient*      Party_Client                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_PartyHUD_C::Get_Party_Client(class AArchonPartyClient** Party_Client)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PartyHUD.BPW_PartyHUD_C.Get Party Client");

	UBPW_PartyHUD_C_Get_Party_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Party_Client != nullptr)
		*Party_Client = params.Party_Client;
}


// Function BPW_PartyHUD.BPW_PartyHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_PartyHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PartyHUD.BPW_PartyHUD_C.Construct");

	UBPW_PartyHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PartyHUD.BPW_PartyHUD_C.OnPartyUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonParty            CurrentParty                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPW_PartyHUD_C::OnPartyUpdated(const struct FArchonParty& CurrentParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PartyHUD.BPW_PartyHUD_C.OnPartyUpdated");

	UBPW_PartyHUD_C_OnPartyUpdated_Params params;
	params.CurrentParty = CurrentParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PartyHUD.BPW_PartyHUD_C.OnInvitesUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FArchonPartyInvite> Invites                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_PartyHUD_C::OnInvitesUpdated(TArray<struct FArchonPartyInvite> Invites)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PartyHUD.BPW_PartyHUD_C.OnInvitesUpdated");

	UBPW_PartyHUD_C_OnInvitesUpdated_Params params;
	params.Invites = Invites;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PartyHUD.BPW_PartyHUD_C.OnSentInvitesUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FArchonPartyInvite> SentInvites                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_PartyHUD_C::OnSentInvitesUpdated(TArray<struct FArchonPartyInvite> SentInvites)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PartyHUD.BPW_PartyHUD_C.OnSentInvitesUpdated");

	UBPW_PartyHUD_C_OnSentInvitesUpdated_Params params;
	params.SentInvites = SentInvites;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PartyHUD.BPW_PartyHUD_C.ExecuteUbergraph_BPW_PartyHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PartyHUD_C::ExecuteUbergraph_BPW_PartyHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PartyHUD.BPW_PartyHUD_C.ExecuteUbergraph_BPW_PartyHUD");

	UBPW_PartyHUD_C_ExecuteUbergraph_BPW_PartyHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PartyHUD.BPW_PartyHUD_C.updateplayernameplate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLeader                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PartyHUD_C::updateplayernameplate__DelegateSignature(bool IsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PartyHUD.BPW_PartyHUD_C.updateplayernameplate__DelegateSignature");

	UBPW_PartyHUD_C_updateplayernameplate__DelegateSignature_Params params;
	params.IsLeader = IsLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
