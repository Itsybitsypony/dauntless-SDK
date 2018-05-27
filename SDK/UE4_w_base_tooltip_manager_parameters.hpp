#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_base_tooltip_manager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_base_tooltip_manager.w_base_tooltip_manager_C.GetItemWithInstanceID
struct Uw_base_tooltip_manager_C_GetItemWithInstanceID_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UArchonInventoryItem*                        Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_tooltip_manager.w_base_tooltip_manager_C.HasItemWithInstanceID
struct Uw_base_tooltip_manager_C_HasItemWithInstanceID_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_base_tooltip_manager.w_base_tooltip_manager_C.GetCurrentTooltipInstanceID
struct Uw_base_tooltip_manager_C_GetCurrentTooltipInstanceID_Params
{
	class FString                                      CurrentInstanceID;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function w_base_tooltip_manager.w_base_tooltip_manager_C.Internal_UpdateExistingTooltip
struct Uw_base_tooltip_manager_C_Internal_UpdateExistingTooltip_Params
{
	class UWidget*                                     ExistingTooltip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      UpdatedTooltipInstanceID;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     UpdatedWidget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_tooltip_manager.w_base_tooltip_manager_C.Internal_CreateNewTooltip
struct Uw_base_tooltip_manager_C_Internal_CreateNewTooltip_Params
{
	class FString                                      NewTooltipInstanceID;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     CreatedWidget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_tooltip_manager.w_base_tooltip_manager_C.SetTooltipInstanceID
struct Uw_base_tooltip_manager_C_SetTooltipInstanceID_Params
{
	class FString                                      NewTooltipInstanceID;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
