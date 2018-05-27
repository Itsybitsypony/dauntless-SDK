#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_party_menu_invite_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.GetDefaultFocusedWidget
struct Uw_party_menu_invite_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnMouseButtonDown
struct Uw_party_menu_invite_bpw_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnKeyDown
struct Uw_party_menu_invite_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__AddToPartyNameInput_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
struct Uw_party_menu_invite_bpw_C_BndEvt__AddToPartyNameInput_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.Construct
struct Uw_party_menu_invite_bpw_C_Construct_Params
{
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnAvailablePlayers
struct Uw_party_menu_invite_bpw_C_OnAvailablePlayers_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APlayerState*>                        AvailablePlayers;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.AddPlayerToQuickList
struct Uw_party_menu_invite_bpw_C_AddPlayerToQuickList_Params
{
	class FString                                      Player_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FUniqueNetIdRepl                            Player_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Invite_Sent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
struct Uw_party_menu_invite_bpw_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.Close
struct Uw_party_menu_invite_bpw_C_Close_Params
{
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
struct Uw_party_menu_invite_bpw_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnInviteSent
struct Uw_party_menu_invite_bpw_C_OnInviteSent_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__w_social_button_bpw_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature
struct Uw_party_menu_invite_bpw_C_BndEvt__w_social_button_bpw_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature_Params
{
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__AddToPartyNameInput_K2Node_ComponentBoundEvent_24_OnEditableTextBoxChangedEvent__DelegateSignature
struct Uw_party_menu_invite_bpw_C_BndEvt__AddToPartyNameInput_K2Node_ComponentBoundEvent_24_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.Tick
struct Uw_party_menu_invite_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.ExecuteUbergraph_w_party_menu_invite_bpw
struct Uw_party_menu_invite_bpw_C_ExecuteUbergraph_w_party_menu_invite_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnClosed__DelegateSignature
struct Uw_party_menu_invite_bpw_C_OnClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
