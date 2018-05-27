// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_guild_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshGuildCharterStatus
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::RefreshGuildCharterStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshGuildCharterStatus");

	Usocial_menu_guild_bpw_C_RefreshGuildCharterStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.Fixup Nav Redirects
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::Fixup_Nav_Redirects()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.Fixup Nav Redirects");

	Usocial_menu_guild_bpw_C_Fixup_Nav_Redirects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.WaitForChangeTick
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::WaitForChangeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.WaitForChangeTick");

	Usocial_menu_guild_bpw_C_WaitForChangeTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.UpdateGuildBindings
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::UpdateGuildBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.UpdateGuildBindings");

	Usocial_menu_guild_bpw_C_UpdateGuildBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.GetLocalGuildMemberInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonGuildMember      GuildMemberInfo                (Parm, OutParm)

void Usocial_menu_guild_bpw_C::GetLocalGuildMemberInfo(struct FArchonGuildMember* GuildMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.GetLocalGuildMemberInfo");

	Usocial_menu_guild_bpw_C_GetLocalGuildMemberInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuildMemberInfo != nullptr)
		*GuildMemberInfo = params.GuildMemberInfo;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshGuildInfo
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::RefreshGuildInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshGuildInfo");

	Usocial_menu_guild_bpw_C_RefreshGuildInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnGuildDialogClosed
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::OnGuildDialogClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnGuildDialogClosed");

	Usocial_menu_guild_bpw_C_OnGuildDialogClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnGuildCreated
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::OnGuildCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnGuildCreated");

	Usocial_menu_guild_bpw_C_OnGuildCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshJoinGuildsAndCharterStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::RefreshJoinGuildsAndCharterStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshJoinGuildsAndCharterStatus");

	Usocial_menu_guild_bpw_C_RefreshJoinGuildsAndCharterStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.HasGuildCharter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasCharter                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_guild_bpw_C::HasGuildCharter(bool* HasCharter)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.HasGuildCharter");

	Usocial_menu_guild_bpw_C_HasGuildCharter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasCharter != nullptr)
		*HasCharter = params.HasCharter;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshState
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::RefreshState()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshState");

	Usocial_menu_guild_bpw_C_RefreshState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshGuildHeader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::RefreshGuildHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshGuildHeader");

	Usocial_menu_guild_bpw_C_RefreshGuildHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshGuildList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::RefreshGuildList()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.RefreshGuildList");

	Usocial_menu_guild_bpw_C_RefreshGuildList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.BndEvt__LeaveGuildButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_guild_bpw_C::BndEvt__LeaveGuildButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.BndEvt__LeaveGuildButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature");

	Usocial_menu_guild_bpw_C_BndEvt__LeaveGuildButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.HandleLeaveGuild
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::HandleLeaveGuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.HandleLeaveGuild");

	Usocial_menu_guild_bpw_C_HandleLeaveGuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.AcceptGuildInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonGuildInvite      GuildInvite                    (BlueprintVisible, BlueprintReadOnly, Parm)

void Usocial_menu_guild_bpw_C::AcceptGuildInvite(const struct FArchonGuildInvite& GuildInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.AcceptGuildInvite");

	Usocial_menu_guild_bpw_C_AcceptGuildInvite_Params params;
	params.GuildInvite = GuildInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_guild_bpw_C::BndEvt__InviteButton_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature");

	Usocial_menu_guild_bpw_C_BndEvt__InviteButton_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.BndEvt__CreateGuildButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_guild_bpw_C::BndEvt__CreateGuildButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.BndEvt__CreateGuildButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Usocial_menu_guild_bpw_C_BndEvt__CreateGuildButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.DeclineGuildInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonGuildInvite      GuildInvite                    (BlueprintVisible, BlueprintReadOnly, Parm)

void Usocial_menu_guild_bpw_C::DeclineGuildInvite(const struct FArchonGuildInvite& GuildInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.DeclineGuildInvite");

	Usocial_menu_guild_bpw_C_DeclineGuildInvite_Params params;
	params.GuildInvite = GuildInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_guild_bpw_C::InputSwap(bool* IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.InputSwap");

	Usocial_menu_guild_bpw_C_InputSwap_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnTabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_guild_bpw_C::OnTabSelected(bool* IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnTabSelected");

	Usocial_menu_guild_bpw_C_OnTabSelected_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.SetDefaultFocus
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::SetDefaultFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.SetDefaultFocus");

	Usocial_menu_guild_bpw_C_SetDefaultFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_guild_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.Construct");

	Usocial_menu_guild_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnTabDeselected
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::OnTabDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnTabDeselected");

	Usocial_menu_guild_bpw_C_OnTabDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_guild_bpw_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.Destruct");

	Usocial_menu_guild_bpw_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.HandleGuildInvitesUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FArchonGuildInvite> Invites                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Usocial_menu_guild_bpw_C::HandleGuildInvitesUpdated(TArray<struct FArchonGuildInvite> Invites)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.HandleGuildInvitesUpdated");

	Usocial_menu_guild_bpw_C_HandleGuildInvitesUpdated_Params params;
	params.Invites = Invites;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.HandleGuildChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonGuild*            Guild                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_guild_bpw_C::HandleGuildChanged(class AArchonGuild* Guild)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.HandleGuildChanged");

	Usocial_menu_guild_bpw_C_HandleGuildChanged_Params params;
	params.Guild = Guild;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.BndEvt__PurchaseGuildCharterButton_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_guild_bpw_C::BndEvt__PurchaseGuildCharterButton_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.BndEvt__PurchaseGuildCharterButton_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature");

	Usocial_menu_guild_bpw_C_BndEvt__PurchaseGuildCharterButton_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnInviteDialogClosed
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::OnInviteDialogClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.OnInviteDialogClosed");

	Usocial_menu_guild_bpw_C_OnInviteDialogClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.HandleInventoryChanged
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_guild_bpw_C::HandleInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.HandleInventoryChanged");

	Usocial_menu_guild_bpw_C_HandleInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_guild_bpw.social_menu_guild_bpw_C.ExecuteUbergraph_social_menu_guild_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_guild_bpw_C::ExecuteUbergraph_social_menu_guild_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_guild_bpw.social_menu_guild_bpw_C.ExecuteUbergraph_social_menu_guild_bpw");

	Usocial_menu_guild_bpw_C_ExecuteUbergraph_social_menu_guild_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
