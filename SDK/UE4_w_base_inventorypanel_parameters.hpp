#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_base_inventorypanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_base_inventorypanel.w_base_inventorypanel_C.GetDesiredFocusWidget
struct Uw_base_inventorypanel_C_GetDesiredFocusWidget_Params
{
	class UWidget*                                     DesiredFocusWidget;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.FocusChildByItemOrInstanceID
struct Uw_base_inventorypanel_C_FocusChildByItemOrInstanceID_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ChildIndexFocused;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.GetChild
struct Uw_base_inventorypanel_C_GetChild_Params
{
	int                                                ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ChildWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.ResetLastFocusedIndex
struct Uw_base_inventorypanel_C_ResetLastFocusedIndex_Params
{
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.OnFocusReceived
struct Uw_base_inventorypanel_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.GetCurrentFocusedIndex
struct Uw_base_inventorypanel_C_GetCurrentFocusedIndex_Params
{
	int                                                CurrentFocusedIndex;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.FocusChildIndex
struct Uw_base_inventorypanel_C_FocusChildIndex_Params
{
	int                                                ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.SortInventoryPanel
struct Uw_base_inventorypanel_C_SortInventoryPanel_Params
{
	TEnumAsByte<Esort_type>                            SortType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Esort_direction>                       SortDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.Construct
struct Uw_base_inventorypanel_C_Construct_Params
{
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.Destruct
struct Uw_base_inventorypanel_C_Destruct_Params
{
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.OnDataViewChanged
struct Uw_base_inventorypanel_C_OnDataViewChanged_Params
{
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemFocused_Event_1
struct Uw_base_inventorypanel_C_OnItemFocused_Event_1_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.ExecuteUbergraph_w_base_inventorypanel
struct Uw_base_inventorypanel_C_ExecuteUbergraph_w_base_inventorypanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemSecondaryClicked__DelegateSignature
struct Uw_base_inventorypanel_C_OnItemSecondaryClicked__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemFocused__DelegateSignature
struct Uw_base_inventorypanel_C_OnItemFocused__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemUnHovered__DelegateSignature
struct Uw_base_inventorypanel_C_OnItemUnHovered__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                UnHoveredIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemHovered__DelegateSignature
struct Uw_base_inventorypanel_C_OnItemHovered__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                HoveredIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemClicked__DelegateSignature
struct Uw_base_inventorypanel_C_OnItemClicked__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ClickedIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
