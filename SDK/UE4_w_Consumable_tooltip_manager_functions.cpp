// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Consumable_tooltip_manager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Consumable_tooltip_manager.w_Consumable_tooltip_manager_C.Internal_UpdateExistingTooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                ExistingTooltip                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 UpdatedTooltipInstanceID       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 UpdatedWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Consumable_tooltip_manager_C::Internal_UpdateExistingTooltip(class UWidget** ExistingTooltip, class FString* UpdatedTooltipInstanceID, class UWidget** UpdatedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Consumable_tooltip_manager.w_Consumable_tooltip_manager_C.Internal_UpdateExistingTooltip");

	Uw_Consumable_tooltip_manager_C_Internal_UpdateExistingTooltip_Params params;
	params.ExistingTooltip = ExistingTooltip;
	params.UpdatedTooltipInstanceID = UpdatedTooltipInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpdatedWidget != nullptr)
		*UpdatedWidget = params.UpdatedWidget;
}


// Function w_Consumable_tooltip_manager.w_Consumable_tooltip_manager_C.Internal_CreateNewTooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 NewTooltipInstanceID           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 CreatedWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Consumable_tooltip_manager_C::Internal_CreateNewTooltip(class FString* NewTooltipInstanceID, class UWidget** CreatedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Consumable_tooltip_manager.w_Consumable_tooltip_manager_C.Internal_CreateNewTooltip");

	Uw_Consumable_tooltip_manager_C_Internal_CreateNewTooltip_Params params;
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
