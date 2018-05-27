// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_party_menu_member_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_party_menu_member_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.OnFocusReceived");

	Uw_party_menu_member_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.FillPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PartyMemberUniqueID            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                  PartyMemberName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsLeader                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_party_menu_member_bpw_C::FillPlayer(const struct FUniqueNetIdRepl& PartyMemberUniqueID, const class FString& PartyMemberName, bool IsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.FillPlayer");

	Uw_party_menu_member_bpw_C_FillPlayer_Params params;
	params.PartyMemberUniqueID = PartyMemberUniqueID;
	params.PartyMemberName = PartyMemberName;
	params.IsLeader = IsLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_party_menu_member_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.Construct");

	Uw_party_menu_member_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.OnLocalPlayerLeadershipChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LocalPlayerIsLeader            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_party_menu_member_bpw_C::OnLocalPlayerLeadershipChanged(bool LocalPlayerIsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.OnLocalPlayerLeadershipChanged");

	Uw_party_menu_member_bpw_C_OnLocalPlayerLeadershipChanged_Params params;
	params.LocalPlayerIsLeader = LocalPlayerIsLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.BndEvt__Background_InteractableSlot_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_party_menu_member_bpw_C::BndEvt__Background_InteractableSlot_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.BndEvt__Background_InteractableSlot_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature");

	Uw_party_menu_member_bpw_C_BndEvt__Background_InteractableSlot_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.ExecuteUbergraph_w_party_menu_member_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_party_menu_member_bpw_C::ExecuteUbergraph_w_party_menu_member_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.ExecuteUbergraph_w_party_menu_member_bpw");

	Uw_party_menu_member_bpw_C_ExecuteUbergraph_w_party_menu_member_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.OnPartyMemberClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PartyMemberID                  (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_party_menu_member_bpw_C::OnPartyMemberClicked__DelegateSignature(const struct FUniqueNetIdRepl& PartyMemberID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_bpw.w_party_menu_member_bpw_C.OnPartyMemberClicked__DelegateSignature");

	Uw_party_menu_member_bpw_C_OnPartyMemberClicked__DelegateSignature_Params params;
	params.PartyMemberID = PartyMemberID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
