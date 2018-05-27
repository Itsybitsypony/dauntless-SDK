// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_GuildInvitePlayer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.Invite Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_GuildInvitePlayer_C::Invite_Character(const class FString& CharacterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.Invite Character");

	Ubpw_GuildInvitePlayer_C_Invite_Character_Params params;
	params.CharacterName = CharacterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_GuildInvitePlayer_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.OnKeyUp");

	Ubpw_GuildInvitePlayer_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_GuildInvitePlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.Construct");

	Ubpw_GuildInvitePlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.Close
// (BlueprintCallable, BlueprintEvent)

void Ubpw_GuildInvitePlayer_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.Close");

	Ubpw_GuildInvitePlayer_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.BndEvt__SlayerNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_GuildInvitePlayer_C::BndEvt__SlayerNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.BndEvt__SlayerNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Ubpw_GuildInvitePlayer_C_BndEvt__SlayerNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.BndEvt__w_social_button_bpw_C_350_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature
// (BlueprintEvent)

void Ubpw_GuildInvitePlayer_C::BndEvt__w_social_button_bpw_C_350_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.BndEvt__w_social_button_bpw_C_350_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature");

	Ubpw_GuildInvitePlayer_C_BndEvt__w_social_button_bpw_C_350_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.BndEvt__w_social_button_bpw_C_1645_K2Node_ComponentBoundEvent_449_OnClicked__DelegateSignature
// (BlueprintEvent)

void Ubpw_GuildInvitePlayer_C::BndEvt__w_social_button_bpw_C_1645_K2Node_ComponentBoundEvent_449_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.BndEvt__w_social_button_bpw_C_1645_K2Node_ComponentBoundEvent_449_OnClicked__DelegateSignature");

	Ubpw_GuildInvitePlayer_C_BndEvt__w_social_button_bpw_C_1645_K2Node_ComponentBoundEvent_449_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.ExecuteUbergraph_bpw_GuildInvitePlayer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_GuildInvitePlayer_C::ExecuteUbergraph_bpw_GuildInvitePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.ExecuteUbergraph_bpw_GuildInvitePlayer");

	Ubpw_GuildInvitePlayer_C_ExecuteUbergraph_bpw_GuildInvitePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ubpw_GuildInvitePlayer_C::OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.OnClosed__DelegateSignature");

	Ubpw_GuildInvitePlayer_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
