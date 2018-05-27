#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Loadout_GridItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GetContentColorAndOpacity_1
struct Uw_Loadout_GridItem_C_GetContentColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Get_StrokeHover_Visibility_1
struct Uw_Loadout_GridItem_C_Get_StrokeHover_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Get_RarityBG_ColorAndOpacity_1
struct Uw_Loadout_GridItem_C_Get_RarityBG_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.OnKeyDown
struct Uw_Loadout_GridItem_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.OnMouseButtonDown
struct Uw_Loadout_GridItem_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.SetEmptyIconBrokenIcon
struct Uw_Loadout_GridItem_C_SetEmptyIconBrokenIcon_Params
{
	class UImage*                                      InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemGroupType                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.SetStackCountVisibility
struct Uw_Loadout_GridItem_C_SetStackCountVisibility_Params
{
	EItemGroupType                                     Item_Kind;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GetText_1
struct Uw_Loadout_GridItem_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Visibility_StackCount
struct Uw_Loadout_GridItem_C_Visibility_StackCount_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GetVisibility_Equipped
struct Uw_Loadout_GridItem_C_GetVisibility_Equipped_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.OnFocusReceived
struct Uw_Loadout_GridItem_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.OnLoaded_A058EA6248D678A919D5DF91CDDD5514
struct Uw_Loadout_GridItem_C_OnLoaded_A058EA6248D678A919D5DF91CDDD5514_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Construct
struct Uw_Loadout_GridItem_C_Construct_Params
{
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Tick
struct Uw_Loadout_GridItem_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
struct Uw_Loadout_GridItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Hover_Show
struct Uw_Loadout_GridItem_C_Hover_Show_Params
{
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Hover_Hide
struct Uw_Loadout_GridItem_C_Hover_Hide_Params
{
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_104_OnButtonHoverEvent__DelegateSignature
struct Uw_Loadout_GridItem_C_BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_104_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct Uw_Loadout_GridItem_C_BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.SetNewEquippedState
struct Uw_Loadout_GridItem_C_SetNewEquippedState_Params
{
	bool                                               Equipped;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.Secondary Click
struct Uw_Loadout_GridItem_C_Secondary_Click_Params
{
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.ExecuteUbergraph_w_Loadout_GridItem
struct Uw_Loadout_GridItem_C_ExecuteUbergraph_w_Loadout_GridItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemSecondaryClicked__DelegateSignature
struct Uw_Loadout_GridItem_C_GridItemSecondaryClicked__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemUnFocused__DelegateSignature
struct Uw_Loadout_GridItem_C_GridItemUnFocused__DelegateSignature_Params
{
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemUnHovered__DelegateSignature
struct Uw_Loadout_GridItem_C_GridItemUnHovered__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemHovered__DelegateSignature
struct Uw_Loadout_GridItem_C_GridItemHovered__DelegateSignature_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemFocused__DelegateSignature
struct Uw_Loadout_GridItem_C_GridItemFocused__DelegateSignature_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_GridItem.w_Loadout_GridItem_C.GridItemClicked_Equip__DelegateSignature
struct Uw_Loadout_GridItem_C_GridItemClicked_Equip__DelegateSignature_Params
{
	class FString                                      ItemInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                GridIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
