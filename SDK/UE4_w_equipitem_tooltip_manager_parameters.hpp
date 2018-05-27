#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_equipitem_tooltip_manager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_equipitem_tooltip_manager.w_equipitem_tooltip_manager_C.GetItemIdFromInstance
struct Uw_equipitem_tooltip_manager_C_GetItemIdFromInstance_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function w_equipitem_tooltip_manager.w_equipitem_tooltip_manager_C.Internal_UpdateExistingTooltip
struct Uw_equipitem_tooltip_manager_C_Internal_UpdateExistingTooltip_Params
{
	class UWidget**                                    ExistingTooltip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     UpdatedTooltipInstanceID;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     UpdatedWidget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipitem_tooltip_manager.w_equipitem_tooltip_manager_C.Internal_CreateNewTooltip
struct Uw_equipitem_tooltip_manager_C_Internal_CreateNewTooltip_Params
{
	class FString*                                     NewTooltipInstanceID;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     CreatedWidget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
