#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_GuildInvitePlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.Invite Character
struct Ubpw_GuildInvitePlayer_C_Invite_Character_Params
{
	class FString                                      CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.OnKeyUp
struct Ubpw_GuildInvitePlayer_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.Construct
struct Ubpw_GuildInvitePlayer_C_Construct_Params
{
};

// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.Close
struct Ubpw_GuildInvitePlayer_C_Close_Params
{
};

// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.BndEvt__SlayerNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct Ubpw_GuildInvitePlayer_C_BndEvt__SlayerNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.BndEvt__w_social_button_bpw_C_350_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature
struct Ubpw_GuildInvitePlayer_C_BndEvt__w_social_button_bpw_C_350_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature_Params
{
};

// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.BndEvt__w_social_button_bpw_C_1645_K2Node_ComponentBoundEvent_449_OnClicked__DelegateSignature
struct Ubpw_GuildInvitePlayer_C_BndEvt__w_social_button_bpw_C_1645_K2Node_ComponentBoundEvent_449_OnClicked__DelegateSignature_Params
{
};

// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.ExecuteUbergraph_bpw_GuildInvitePlayer
struct Ubpw_GuildInvitePlayer_C_ExecuteUbergraph_bpw_GuildInvitePlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_GuildInvitePlayer.bpw_GuildInvitePlayer_C.OnClosed__DelegateSignature
struct Ubpw_GuildInvitePlayer_C_OnClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
