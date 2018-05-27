// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_party_menu_invite_entry_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_party_menu_invite_entry_bpw.w_party_menu_invite_entry_bpw_C.BndEvt__Button_158_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_party_menu_invite_entry_bpw_C::BndEvt__Button_158_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_entry_bpw.w_party_menu_invite_entry_bpw_C.BndEvt__Button_158_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Uw_party_menu_invite_entry_bpw_C_BndEvt__Button_158_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_entry_bpw.w_party_menu_invite_entry_bpw_C.OnInviteSent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        ReceiverId                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  ReceiverDisplayName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_party_menu_invite_entry_bpw_C::OnInviteSent(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_entry_bpw.w_party_menu_invite_entry_bpw_C.OnInviteSent");

	Uw_party_menu_invite_entry_bpw_C_OnInviteSent_Params params;
	params.bSuccess = bSuccess;
	params.ReceiverId = ReceiverId;
	params.ReceiverDisplayName = ReceiverDisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_entry_bpw.w_party_menu_invite_entry_bpw_C.ExecuteUbergraph_w_party_menu_invite_entry_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_party_menu_invite_entry_bpw_C::ExecuteUbergraph_w_party_menu_invite_entry_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_entry_bpw.w_party_menu_invite_entry_bpw_C.ExecuteUbergraph_w_party_menu_invite_entry_bpw");

	Uw_party_menu_invite_entry_bpw_C_ExecuteUbergraph_w_party_menu_invite_entry_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_entry_bpw.w_party_menu_invite_entry_bpw_C.OnPlayerInviteEntryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                  PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_party_menu_invite_entry_bpw_C::OnPlayerInviteEntryClicked__DelegateSignature(const struct FUniqueNetIdRepl& PlayerId, const class FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_entry_bpw.w_party_menu_invite_entry_bpw_C.OnPlayerInviteEntryClicked__DelegateSignature");

	Uw_party_menu_invite_entry_bpw_C_OnPlayerInviteEntryClicked__DelegateSignature_Params params;
	params.PlayerId = PlayerId;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
