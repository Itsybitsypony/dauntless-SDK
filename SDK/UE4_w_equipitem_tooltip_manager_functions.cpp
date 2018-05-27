// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_equipitem_tooltip_manager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_equipitem_tooltip_manager.w_equipitem_tooltip_manager_C.GetItemIdFromInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)

void Uw_equipitem_tooltip_manager_C::GetItemIdFromInstance(const class FString& ItemInstanceId, class FString* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipitem_tooltip_manager.w_equipitem_tooltip_manager_C.GetItemIdFromInstance");

	Uw_equipitem_tooltip_manager_C_GetItemIdFromInstance_Params params;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function w_equipitem_tooltip_manager.w_equipitem_tooltip_manager_C.Internal_UpdateExistingTooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                ExistingTooltip                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 UpdatedTooltipInstanceID       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 UpdatedWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_equipitem_tooltip_manager_C::Internal_UpdateExistingTooltip(class UWidget** ExistingTooltip, class FString* UpdatedTooltipInstanceID, class UWidget** UpdatedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipitem_tooltip_manager.w_equipitem_tooltip_manager_C.Internal_UpdateExistingTooltip");

	Uw_equipitem_tooltip_manager_C_Internal_UpdateExistingTooltip_Params params;
	params.ExistingTooltip = ExistingTooltip;
	params.UpdatedTooltipInstanceID = UpdatedTooltipInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpdatedWidget != nullptr)
		*UpdatedWidget = params.UpdatedWidget;
}


// Function w_equipitem_tooltip_manager.w_equipitem_tooltip_manager_C.Internal_CreateNewTooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 NewTooltipInstanceID           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 CreatedWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_equipitem_tooltip_manager_C::Internal_CreateNewTooltip(class FString* NewTooltipInstanceID, class UWidget** CreatedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipitem_tooltip_manager.w_equipitem_tooltip_manager_C.Internal_CreateNewTooltip");

	Uw_equipitem_tooltip_manager_C_Internal_CreateNewTooltip_Params params;
	params.NewTooltipInstanceID = NewTooltipInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CreatedWidget != nullptr)
		*CreatedWidget = params.CreatedWidget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
