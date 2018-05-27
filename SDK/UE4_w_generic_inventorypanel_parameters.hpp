#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_generic_inventorypanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.GetChild
struct Uw_generic_inventorypanel_C_GetChild_Params
{
	int*                                               ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ChildWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.OnDataViewChanged
struct Uw_generic_inventorypanel_C_OnDataViewChanged_Params
{
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.AddItem
struct Uw_generic_inventorypanel_C_AddItem_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.ItemClicked
struct Uw_generic_inventorypanel_C_ItemClicked_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.FocusChildIndex
struct Uw_generic_inventorypanel_C_FocusChildIndex_Params
{
	int*                                               ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.DustButtonClicked
struct Uw_generic_inventorypanel_C_DustButtonClicked_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.GetTooltipWarning_Event_1
struct Uw_generic_inventorypanel_C_GetTooltipWarning_Event_1_Params
{
	class FString                                      TooltipString;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.ItemHovered
struct Uw_generic_inventorypanel_C_ItemHovered_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.ItemUnhovered
struct Uw_generic_inventorypanel_C_ItemUnhovered_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.Bind to ItemButtonClicked
struct Uw_generic_inventorypanel_C_Bind_to_ItemButtonClicked_Params
{
	class Uw_equipment_list_entry_bpw_C*               List_Entry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.Bind to ItemButtonSecondaryClicked
struct Uw_generic_inventorypanel_C_Bind_to_ItemButtonSecondaryClicked_Params
{
	class Uw_equipment_list_entry_bpw_C*               List_Entry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.ItemSecondaryClicked
struct Uw_generic_inventorypanel_C_ItemSecondaryClicked_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.ExecuteUbergraph_w_generic_inventorypanel
struct Uw_generic_inventorypanel_C_ExecuteUbergraph_w_generic_inventorypanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.OnTooltipWarningChanged__DelegateSignature
struct Uw_generic_inventorypanel_C_OnTooltipWarningChanged__DelegateSignature_Params
{
	class FString                                      TooltipString;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.OnSalvageButtonClicked__DelegateSignature
struct Uw_generic_inventorypanel_C_OnSalvageButtonClicked__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
