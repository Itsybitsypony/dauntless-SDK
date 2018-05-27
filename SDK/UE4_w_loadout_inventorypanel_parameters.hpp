#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_loadout_inventorypanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GetVisibility_Sorting Button
struct Uw_loadout_inventorypanel_C_GetVisibility_Sorting_Button_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.OnKeyDown
struct Uw_loadout_inventorypanel_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GetVisibility_EquipWarning
struct Uw_loadout_inventorypanel_C_GetVisibility_EquipWarning_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GetText_GroupLabel
struct Uw_loadout_inventorypanel_C_GetText_GroupLabel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GetChild
struct Uw_loadout_inventorypanel_C_GetChild_Params
{
	int*                                               ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ChildWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.OnFocusReceived
struct Uw_loadout_inventorypanel_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.FocusEquippedItem
struct Uw_loadout_inventorypanel_C_FocusEquippedItem_Params
{
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.OnDataViewChanged
struct Uw_loadout_inventorypanel_C_OnDataViewChanged_Params
{
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.AddGridItem
struct Uw_loadout_inventorypanel_C_AddGridItem_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemClicked
struct Uw_loadout_inventorypanel_C_GridItemClicked_Params
{
	class FString                                      ItemInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                GridIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemFocused
struct Uw_loadout_inventorypanel_C_GridItemFocused_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemHovered
struct Uw_loadout_inventorypanel_C_GridItemHovered_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemUnHovered
struct Uw_loadout_inventorypanel_C_GridItemUnHovered_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.AddEmptyGridItem
struct Uw_loadout_inventorypanel_C_AddEmptyGridItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.FocusChildIndex
struct Uw_loadout_inventorypanel_C_FocusChildIndex_Params
{
	int*                                               ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemSecondaryClick
struct Uw_loadout_inventorypanel_C_GridItemSecondaryClick_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.SwitchSortMode
struct Uw_loadout_inventorypanel_C_SwitchSortMode_Params
{
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.SwitchSortOrder
struct Uw_loadout_inventorypanel_C_SwitchSortOrder_Params
{
};

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.ExecuteUbergraph_w_loadout_inventorypanel
struct Uw_loadout_inventorypanel_C_ExecuteUbergraph_w_loadout_inventorypanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
