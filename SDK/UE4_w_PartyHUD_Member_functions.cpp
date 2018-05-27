// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_PartyHUD_Member_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_PartyHUD_Member.w_PartyHUD_Member_C.Get Party Client
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AArchonPartyClient*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AArchonPartyClient* Uw_PartyHUD_Member_C::Get_Party_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PartyHUD_Member.w_PartyHUD_Member_C.Get Party Client");

	Uw_PartyHUD_Member_C_Get_Party_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_PartyHUD_Member.w_PartyHUD_Member_C.From Party Member
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonPartyMember      PartyMember                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_PartyHUD_Member_C::From_Party_Member(struct FArchonPartyMember* PartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PartyHUD_Member.w_PartyHUD_Member_C.From Party Member");

	Uw_PartyHUD_Member_C_From_Party_Member_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyMember != nullptr)
		*PartyMember = params.PartyMember;
}


// Function w_PartyHUD_Member.w_PartyHUD_Member_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_PartyHUD_Member_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PartyHUD_Member.w_PartyHUD_Member_C.Construct");

	Uw_PartyHUD_Member_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_PartyHUD_Member.w_PartyHUD_Member_C.ExecuteUbergraph_w_PartyHUD_Member
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_PartyHUD_Member_C::ExecuteUbergraph_w_PartyHUD_Member(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PartyHUD_Member.w_PartyHUD_Member_C.ExecuteUbergraph_w_PartyHUD_Member");

	Uw_PartyHUD_Member_C_ExecuteUbergraph_w_PartyHUD_Member_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
