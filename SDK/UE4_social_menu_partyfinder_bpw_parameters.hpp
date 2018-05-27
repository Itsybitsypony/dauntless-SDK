#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_partyfinder_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnKeyDown
struct Usocial_menu_partyfinder_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.HideSearchOverlay
struct Usocial_menu_partyfinder_bpw_C_HideSearchOverlay_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.ShowSearchOverlay
struct Usocial_menu_partyfinder_bpw_C_ShowSearchOverlay_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.UpdateSearchResults
struct Usocial_menu_partyfinder_bpw_C_UpdateSearchResults_Params
{
	struct FText                                       SearchText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.DoesPartyMatchFilters
struct Usocial_menu_partyfinder_bpw_C_DoesPartyMatchFilters_Params
{
	struct FArchonPartyFinderEntry                     Entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Match;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.GetArmorResistance
struct Usocial_menu_partyfinder_bpw_C_GetArmorResistance_Params
{
	class AArchonLoadout*                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorType                                         ArmourType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Global_Resistance;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.GetAvailableHunts
struct Usocial_menu_partyfinder_bpw_C_GetAvailableHunts_Params
{
	TArray<struct FName>                               HuntIds;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.InitializeRecommendedHunts
struct Usocial_menu_partyfinder_bpw_C_InitializeRecommendedHunts_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.UpdatePartyList
struct Usocial_menu_partyfinder_bpw_C_UpdatePartyList_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.Construct
struct Usocial_menu_partyfinder_bpw_C_Construct_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_button_bpw_375_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct Usocial_menu_partyfinder_bpw_C_BndEvt__w_social_button_bpw_375_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_button_bpw_C_0_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct Usocial_menu_partyfinder_bpw_C_BndEvt__w_social_button_bpw_C_0_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnCreateCommit
struct Usocial_menu_partyfinder_bpw_C_OnCreateCommit_Params
{
	class FString                                      Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               RequireGather;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequireBreaks;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               HuntIds;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnCreateSuccess
struct Usocial_menu_partyfinder_bpw_C_OnCreateSuccess_Params
{
	struct FArchonPartyFinderEntry                     NewEntry;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnCreateFail
struct Usocial_menu_partyfinder_bpw_C_OnCreateFail_Params
{
	class FString                                      ErrorString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__ViewAllToggle_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature
struct Usocial_menu_partyfinder_bpw_C_BndEvt__ViewAllToggle_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_536_OnFocusText__DelegateSignature
struct Usocial_menu_partyfinder_bpw_C_BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_536_OnFocusText__DelegateSignature_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_547_OnFocusTextLost__DelegateSignature
struct Usocial_menu_partyfinder_bpw_C_BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_547_OnFocusTextLost__DelegateSignature_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_645_OnTextChanged__DelegateSignature
struct Usocial_menu_partyfinder_bpw_C_BndEvt__w_social_text_input_bpw_K2Node_ComponentBoundEvent_645_OnTextChanged__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnTabSelected
struct Usocial_menu_partyfinder_bpw_C_OnTabSelected_Params
{
	bool*                                              IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnPartyListUpdated
struct Usocial_menu_partyfinder_bpw_C_OnPartyListUpdated_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__SearchBlackout_K2Node_ComponentBoundEvent_461_OnButtonClickedEvent__DelegateSignature
struct Usocial_menu_partyfinder_bpw_C_BndEvt__SearchBlackout_K2Node_ComponentBoundEvent_461_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.RefreshPartyListTimer
struct Usocial_menu_partyfinder_bpw_C_RefreshPartyListTimer_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnJoinSuccess
struct Usocial_menu_partyfinder_bpw_C_OnJoinSuccess_Params
{
	struct FArchonPartyFinderEntry                     UpdatedEntry;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnJoinFail
struct Usocial_menu_partyfinder_bpw_C_OnJoinFail_Params
{
	class FString                                      ErrorString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnPartyClicked
struct Usocial_menu_partyfinder_bpw_C_OnPartyClicked_Params
{
	struct FArchonPartyFinderEntry                     PartyFinderEntry;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnDeleteSuccess
struct Usocial_menu_partyfinder_bpw_C_OnDeleteSuccess_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnDeleteFail
struct Usocial_menu_partyfinder_bpw_C_OnDeleteFail_Params
{
	class FString                                      ErrorString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnConfirmRemoveParty
struct Usocial_menu_partyfinder_bpw_C_OnConfirmRemoveParty_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnCommitFilters
struct Usocial_menu_partyfinder_bpw_C_OnCommitFilters_Params
{
	class FString                                      Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               RequireGather;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequireBreaks;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               HuntIds;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__SearchTextField_K2Node_ComponentBoundEvent_178_OnTextCommitted__DelegateSignature
struct Usocial_menu_partyfinder_bpw_C_BndEvt__SearchTextField_K2Node_ComponentBoundEvent_178_OnTextCommitted__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETextCommit>                           Commit_Method;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.BndEvt__MyPartyWidget_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
struct Usocial_menu_partyfinder_bpw_C_BndEvt__MyPartyWidget_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature_Params
{
	struct FArchonPartyFinderEntry                     PartyFinderEntry;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnConfirmJoin
struct Usocial_menu_partyfinder_bpw_C_OnConfirmJoin_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.OnConfirmCreateParty
struct Usocial_menu_partyfinder_bpw_C_OnConfirmCreateParty_Params
{
};

// Function social_menu_partyfinder_bpw.social_menu_partyfinder_bpw_C.ExecuteUbergraph_social_menu_partyfinder_bpw
struct Usocial_menu_partyfinder_bpw_C_ExecuteUbergraph_social_menu_partyfinder_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
