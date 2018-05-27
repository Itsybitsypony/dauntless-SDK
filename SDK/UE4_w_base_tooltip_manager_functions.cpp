// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_base_tooltip_manager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_base_tooltip_manager.w_base_tooltip_manager_C.GetItemWithInstanceID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UArchonInventoryItem*    Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_base_tooltip_manager_C::GetItemWithInstanceID(const class FString& ItemInstanceId, class UArchonInventoryItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_tooltip_manager.w_base_tooltip_manager_C.GetItemWithInstanceID");

	Uw_base_tooltip_manager_C_GetItemWithInstanceID_Params params;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function w_base_tooltip_manager.w_base_tooltip_manager_C.HasItemWithInstanceID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_base_tooltip_manager_C::HasItemWithInstanceID(const class FString& ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_tooltip_manager.w_base_tooltip_manager_C.HasItemWithInstanceID");

	Uw_base_tooltip_manager_C_HasItemWithInstanceID_Params params;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_base_tooltip_manager.w_base_tooltip_manager_C.GetCurrentTooltipInstanceID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                  CurrentInstanceID              (Parm, OutParm, ZeroConstructor)

void Uw_base_tooltip_manager_C::GetCurrentTooltipInstanceID(class FString* CurrentInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_tooltip_manager.w_base_tooltip_manager_C.GetCurrentTooltipInstanceID");

	Uw_base_tooltip_manager_C_GetCurrentTooltipInstanceID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentInstanceID != nullptr)
		*CurrentInstanceID = params.CurrentInstanceID;
}


// Function w_base_tooltip_manager.w_base_tooltip_manager_C.Internal_UpdateExistingTooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ExistingTooltip                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  UpdatedTooltipInstanceID       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 UpdatedWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_base_tooltip_manager_C::Internal_UpdateExistingTooltip(class UWidget* ExistingTooltip, const class FString& UpdatedTooltipInstanceID, class UWidget** UpdatedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_tooltip_manager.w_base_tooltip_manager_C.Internal_UpdateExistingTooltip");

	Uw_base_tooltip_manager_C_Internal_UpdateExistingTooltip_Params params;
	params.ExistingTooltip = ExistingTooltip;
	params.UpdatedTooltipInstanceID = UpdatedTooltipInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpdatedWidget != nullptr)
		*UpdatedWidget = params.UpdatedWidget;
}


// Function w_base_tooltip_manager.w_base_tooltip_manager_C.Internal_CreateNewTooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  NewTooltipInstanceID           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 CreatedWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_base_tooltip_manager_C::Internal_CreateNewTooltip(const class FString& NewTooltipInstanceID, class UWidget** CreatedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_tooltip_manager.w_base_tooltip_manager_C.Internal_CreateNewTooltip");

	Uw_base_tooltip_manager_C_Internal_CreateNewTooltip_Params params;
	params.NewTooltipInstanceID = NewTooltipInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CreatedWidget != nullptr)
		*CreatedWidget = params.CreatedWidget;
}


// Function w_base_tooltip_manager.w_base_tooltip_manager_C.SetTooltipInstanceID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  NewTooltipInstanceID           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_base_tooltip_manager_C::SetTooltipInstanceID(const class FString& NewTooltipInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_tooltip_manager.w_base_tooltip_manager_C.SetTooltipInstanceID");

	Uw_base_tooltip_manager_C_SetTooltipInstanceID_Params params;
	params.NewTooltipInstanceID = NewTooltipInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
