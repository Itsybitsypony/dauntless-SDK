#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_core_opener_main_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function core_opener_main_bpw.core_opener_main_bpw_C.GetText_2
struct Ucore_opener_main_bpw_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.GetDefaultFocusedWidget
struct Ucore_opener_main_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.Get_TextBlock_55_Text_1
struct Ucore_opener_main_bpw_C_Get_TextBlock_55_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.GetText_1
struct Ucore_opener_main_bpw_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.Get_FullScreen_RarityColour_Brush_1
struct Ucore_opener_main_bpw_C_Get_FullScreen_RarityColour_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.MatchesLocalCore
struct Ucore_opener_main_bpw_C_MatchesLocalCore_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.OnPreviewKeyDown
struct Ucore_opener_main_bpw_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.ShowHide_Details
struct Ucore_opener_main_bpw_C_ShowHide_Details_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.ShowHide_DustBar
struct Ucore_opener_main_bpw_C_ShowHide_DustBar_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.SetupDetailsDustbarShowHide
struct Ucore_opener_main_bpw_C_SetupDetailsDustbarShowHide_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.Audio_GetCoreInfo
struct Ucore_opener_main_bpw_C_Audio_GetCoreInfo_Params
{
	class UArchonInventoryItem*                        self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.SpendDust
struct Ucore_opener_main_bpw_C_SpendDust_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.CanSpendDust
struct Ucore_opener_main_bpw_C_CanSpendDust_Params
{
	bool                                               CanRedeem;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.IsCurrentCoreBoostable
struct Ucore_opener_main_bpw_C_IsCurrentCoreBoostable_Params
{
	bool                                               IsBoostable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.GetVisibility_GamePadHints
struct Ucore_opener_main_bpw_C_GetVisibility_GamePadHints_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.OnKeyDown
struct Ucore_opener_main_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.OnKeyUp
struct Ucore_opener_main_bpw_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.Is Holding Crafting Key
struct Ucore_opener_main_bpw_C_Is_Holding_Crafting_Key_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.Is Crafting Button Key
struct Ucore_opener_main_bpw_C_Is_Crafting_Button_Key_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.UpdateNextCoreButton
struct Ucore_opener_main_bpw_C_UpdateNextCoreButton_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.UpdatePreviousCoreButton
struct Ucore_opener_main_bpw_C_UpdatePreviousCoreButton_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.SetQuantityText
struct Ucore_opener_main_bpw_C_SetQuantityText_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.SelectPreviousCore
struct Ucore_opener_main_bpw_C_SelectPreviousCore_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.SelectNextCore
struct Ucore_opener_main_bpw_C_SelectNextCore_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.BuildCoreList
struct Ucore_opener_main_bpw_C_BuildCoreList_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.OpenCurrentCore
struct Ucore_opener_main_bpw_C_OpenCurrentCore_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.HasCoresToOpen
struct Ucore_opener_main_bpw_C_HasCoresToOpen_Params
{
	bool                                               HasCores;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.UpdateCoreButtons
struct Ucore_opener_main_bpw_C_UpdateCoreButtons_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct Ucore_opener_main_bpw_C_BndEvt__LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__RightArrow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct Ucore_opener_main_bpw_C_BndEvt__RightArrow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.SetCurrentCoreDetails
struct Ucore_opener_main_bpw_C_SetCurrentCoreDetails_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_85_On Key Hold Complete__DelegateSignature
struct Ucore_opener_main_bpw_C_BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_85_On_Key_Hold_Complete__DelegateSignature_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_115_On Mouse Down__DelegateSignature
struct Ucore_opener_main_bpw_C_BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_115_On_Mouse_Down__DelegateSignature_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_127_On Mouse Up__DelegateSignature
struct Ucore_opener_main_bpw_C_BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_127_On_Mouse_Up__DelegateSignature_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.Construct
struct Ucore_opener_main_bpw_C_Construct_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.InputSwap
struct Ucore_opener_main_bpw_C_InputSwap_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.HideRewardBitsWindow
struct Ucore_opener_main_bpw_C_HideRewardBitsWindow_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.ResetCoreAfterOpening
struct Ucore_opener_main_bpw_C_ResetCoreAfterOpening_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.BackOut
struct Ucore_opener_main_bpw_C_BackOut_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.Tick
struct Ucore_opener_main_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.Destruct
struct Ucore_opener_main_bpw_C_Destruct_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.GrantChromaCore
struct Ucore_opener_main_bpw_C_GrantChromaCore_Params
{
	class FString                                      GrantChromaCore;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.GetCoreGranted
struct Ucore_opener_main_bpw_C_GetCoreGranted_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.CheckDustBar
struct Ucore_opener_main_bpw_C_CheckDustBar_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.OnGetContainerDataComplete
struct Ucore_opener_main_bpw_C_OnGetContainerDataComplete_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               DoesContainerHaveChampionBoost;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              PatronBoostPlayers;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.OpenedAllRewards
struct Ucore_opener_main_bpw_C_OpenedAllRewards_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.OpenAllBits
struct Ucore_opener_main_bpw_C_OpenAllBits_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.PrevCore
struct Ucore_opener_main_bpw_C_PrevCore_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.NextCore
struct Ucore_opener_main_bpw_C_NextCore_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.ExecuteUbergraph_core_opener_main_bpw
struct Ucore_opener_main_bpw_C_ExecuteUbergraph_core_opener_main_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.UpdateFXColour__DelegateSignature
struct Ucore_opener_main_bpw_C_UpdateFXColour__DelegateSignature_Params
{
	struct FLinearColor                                Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.UpdateCoreDecals__DelegateSignature
struct Ucore_opener_main_bpw_C_UpdateCoreDecals__DelegateSignature_Params
{
	bool                                               ShowPlayer1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Player1Champion;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowPlayer2;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowBoost3;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowBoost4;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.Update_ProgressComplete__DelegateSignature
struct Ucore_opener_main_bpw_C_Update_ProgressComplete__DelegateSignature_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.Camera_ResetToCoreOpener__DelegateSignature
struct Ucore_opener_main_bpw_C_Camera_ResetToCoreOpener__DelegateSignature_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.CurrentSelectedCore__DelegateSignature
struct Ucore_opener_main_bpw_C_CurrentSelectedCore__DelegateSignature_Params
{
	class UArchonInventoryItem*                        SelectedCore;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.HasNoCores__DelegateSignature
struct Ucore_opener_main_bpw_C_HasNoCores__DelegateSignature_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C._CoreOpenTransition__DelegateSignature
struct Ucore_opener_main_bpw_C__CoreOpenTransition__DelegateSignature_Params
{
};

// Function core_opener_main_bpw.core_opener_main_bpw_C.OnMenuClosed_Camera__DelegateSignature
struct Ucore_opener_main_bpw_C_OnMenuClosed_Camera__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
