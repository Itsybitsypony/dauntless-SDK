#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_core_opener_rewards_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.OpenBit
struct Ucore_opener_rewards_bpw_C_OpenBit_Params
{
	int                                                InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.Get_w_BU_Close_Visibility_1
struct Ucore_opener_rewards_bpw_C_Get_w_BU_Close_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.Set Stage
struct Ucore_opener_rewards_bpw_C_Set_Stage_Params
{
	int                                                Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.Get_TextBlock_264_Text_1
struct Ucore_opener_rewards_bpw_C_Get_TextBlock_264_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.GetText_1
struct Ucore_opener_rewards_bpw_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.Get_w_BU_OpenAll_ColorAndOpacity_1
struct Ucore_opener_rewards_bpw_C_Get_w_BU_OpenAll_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.Get_w_BU_OpenAll_Visibility_1
struct Ucore_opener_rewards_bpw_C_Get_w_BU_OpenAll_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.Get_w_BU_Close_bIsEnabled_1
struct Ucore_opener_rewards_bpw_C_Get_w_BU_Close_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.ClearSlots
struct Ucore_opener_rewards_bpw_C_ClearSlots_Params
{
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.Add New CORE ITEM
struct Ucore_opener_rewards_bpw_C_Add_New_CORE_ITEM_Params
{
	struct FGrantedItemNotification                    GrantedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.Find Empty Slot
struct Ucore_opener_rewards_bpw_C_Find_Empty_Slot_Params
{
	bool                                               Slot_Found;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Empty_Slot_ID;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.Construct
struct Ucore_opener_rewards_bpw_C_Construct_Params
{
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.Tick
struct Ucore_opener_rewards_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.OnContainerUnlocked
struct Ucore_opener_rewards_bpw_C_OnContainerUnlocked_Params
{
	TArray<struct FGrantedItemNotification>            Items;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.CoreItem_Clicked
struct Ucore_opener_rewards_bpw_C_CoreItem_Clicked_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.BndEvt__w_Button_0_K2Node_ComponentBoundEvent_5_Button Clicked__DelegateSignature
struct Ucore_opener_rewards_bpw_C_BndEvt__w_Button_0_K2Node_ComponentBoundEvent_5_Button_Clicked__DelegateSignature_Params
{
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.BndEvt__w_Button_K2Node_ComponentBoundEvent_7_Button Clicked__DelegateSignature
struct Ucore_opener_rewards_bpw_C_BndEvt__w_Button_K2Node_ComponentBoundEvent_7_Button_Clicked__DelegateSignature_Params
{
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.PlayButtonIntroAnim
struct Ucore_opener_rewards_bpw_C_PlayButtonIntroAnim_Params
{
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.CloseRewardsUI
struct Ucore_opener_rewards_bpw_C_CloseRewardsUI_Params
{
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.OpenAll
struct Ucore_opener_rewards_bpw_C_OpenAll_Params
{
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.SetFocusOnBit
struct Ucore_opener_rewards_bpw_C_SetFocusOnBit_Params
{
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.ExecuteUbergraph_core_opener_rewards_bpw
struct Ucore_opener_rewards_bpw_C_ExecuteUbergraph_core_opener_rewards_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.OpenedAll__DelegateSignature
struct Ucore_opener_rewards_bpw_C_OpenedAll__DelegateSignature_Params
{
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.UpdateChromaDustBar__DelegateSignature
struct Ucore_opener_rewards_bpw_C_UpdateChromaDustBar__DelegateSignature_Params
{
};

// Function core_opener_rewards_bpw.core_opener_rewards_bpw_C.CloseRewardWindow__DelegateSignature
struct Ucore_opener_rewards_bpw_C_CloseRewardWindow__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
