// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_party_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function social_menu_party_bpw.social_menu_party_bpw_C.GetDefaultFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 DesiredFocusWidget             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_party_bpw_C::GetDefaultFocus(class UWidget** DesiredFocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.GetDefaultFocus");

	Usocial_menu_party_bpw_C_GetDefaultFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredFocusWidget != nullptr)
		*DesiredFocusWidget = params.DesiredFocusWidget;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.FixupNavRedirects
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_party_bpw_C::FixupNavRedirects()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.FixupNavRedirects");

	Usocial_menu_party_bpw_C_FixupNavRedirects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.Get_InviteButton_bIsEnabled_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Usocial_menu_party_bpw_C::Get_InviteButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.Get_InviteButton_bIsEnabled_1");

	Usocial_menu_party_bpw_C_Get_InviteButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.LeaveParty
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_party_bpw_C::LeaveParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.LeaveParty");

	Usocial_menu_party_bpw_C_LeaveParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.UpdatePartyLeadership
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Usocial_menu_party_bpw_C::UpdatePartyLeadership()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.UpdatePartyLeadership");

	Usocial_menu_party_bpw_C_UpdatePartyLeadership_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.CreateNewSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_party_menu_member_bpw_C* Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_party_bpw_C::CreateNewSlot(class Uw_party_menu_member_bpw_C** Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.CreateNewSlot");

	Usocial_menu_party_bpw_C_CreateNewSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.AddEmptySlots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonParty            Party                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Usocial_menu_party_bpw_C::AddEmptySlots(struct FArchonParty* Party)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.AddEmptySlots");

	Usocial_menu_party_bpw_C_AddEmptySlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Party != nullptr)
		*Party = params.Party;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.UpdatePartyMembers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonParty            Party                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Usocial_menu_party_bpw_C::UpdatePartyMembers(struct FArchonParty* Party)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.UpdatePartyMembers");

	Usocial_menu_party_bpw_C_UpdatePartyMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Party != nullptr)
		*Party = params.Party;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.UpdateLocalPartyMember
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Usocial_menu_party_bpw_C::UpdateLocalPartyMember()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.UpdateLocalPartyMember");

	Usocial_menu_party_bpw_C_UpdateLocalPartyMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.PruneRemovedPartyMembers
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_party_bpw_C::PruneRemovedPartyMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.PruneRemovedPartyMembers");

	Usocial_menu_party_bpw_C_PruneRemovedPartyMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.AddOrUpdatePartyMemberWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                  PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsLeader                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_party_bpw_C::AddOrUpdatePartyMemberWidget(const struct FUniqueNetIdRepl& PlayerId, const class FString& PlayerName, bool IsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.AddOrUpdatePartyMemberWidget");

	Usocial_menu_party_bpw_C_AddOrUpdatePartyMemberWidget_Params params;
	params.PlayerId = PlayerId;
	params.PlayerName = PlayerName;
	params.IsLeader = IsLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.GetPartyClient
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AArchonPartyClient*      Party_Client                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_party_bpw_C::GetPartyClient(class AArchonPartyClient** Party_Client)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.GetPartyClient");

	Usocial_menu_party_bpw_C_GetPartyClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Party_Client != nullptr)
		*Party_Client = params.Party_Client;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_party_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.Construct");

	Usocial_menu_party_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.OnPartyUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonParty            Party                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Usocial_menu_party_bpw_C::OnPartyUpdated(const struct FArchonParty& Party)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.OnPartyUpdated");

	Usocial_menu_party_bpw_C_OnPartyUpdated_Params params;
	params.Party = Party;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.BndEvt__w_social_button_bpw_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_party_bpw_C::BndEvt__w_social_button_bpw_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.BndEvt__w_social_button_bpw_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Usocial_menu_party_bpw_C_BndEvt__w_social_button_bpw_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.OnPartyMemberClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PartyMemberID                  (BlueprintVisible, BlueprintReadOnly, Parm)

void Usocial_menu_party_bpw_C::OnPartyMemberClicked(const struct FUniqueNetIdRepl& PartyMemberID)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.OnPartyMemberClicked");

	Usocial_menu_party_bpw_C_OnPartyMemberClicked_Params params;
	params.PartyMemberID = PartyMemberID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_party_bpw_C::BndEvt__InviteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	Usocial_menu_party_bpw_C_BndEvt__InviteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.OnTabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_party_bpw_C::OnTabSelected(bool* IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.OnTabSelected");

	Usocial_menu_party_bpw_C_OnTabSelected_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_party_bpw_C::InputSwap(bool* IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.InputSwap");

	Usocial_menu_party_bpw_C_InputSwap_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.OnPartyPopupClosed
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_party_bpw_C::OnPartyPopupClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.OnPartyPopupClosed");

	Usocial_menu_party_bpw_C_OnPartyPopupClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.SetDefaultFocus
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_party_bpw_C::SetDefaultFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.SetDefaultFocus");

	Usocial_menu_party_bpw_C_SetDefaultFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.OnTabDeselected
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_party_bpw_C::OnTabDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.OnTabDeselected");

	Usocial_menu_party_bpw_C_OnTabDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_party_bpw.social_menu_party_bpw_C.ExecuteUbergraph_social_menu_party_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_party_bpw_C::ExecuteUbergraph_social_menu_party_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_party_bpw.social_menu_party_bpw_C.ExecuteUbergraph_social_menu_party_bpw");

	Usocial_menu_party_bpw_C_ExecuteUbergraph_social_menu_party_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
