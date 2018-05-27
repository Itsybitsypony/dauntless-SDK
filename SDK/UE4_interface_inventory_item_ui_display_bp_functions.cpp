// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_interface_inventory_item_ui_display_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function interface_inventory_item_ui_display_bp.interface_inventory_item_ui_display_bp_C.GetDefaultSecondaryDye
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRowName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinterface_inventory_item_ui_display_bp_C::GetDefaultSecondaryDye(struct FName* DyeRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function interface_inventory_item_ui_display_bp.interface_inventory_item_ui_display_bp_C.GetDefaultSecondaryDye");

	Uinterface_inventory_item_ui_display_bp_C_GetDefaultSecondaryDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DyeRowName != nullptr)
		*DyeRowName = params.DyeRowName;
}


// Function interface_inventory_item_ui_display_bp.interface_inventory_item_ui_display_bp_C.GetDefaultPrimaryDye
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRowName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinterface_inventory_item_ui_display_bp_C::GetDefaultPrimaryDye(struct FName* DyeRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function interface_inventory_item_ui_display_bp.interface_inventory_item_ui_display_bp_C.GetDefaultPrimaryDye");

	Uinterface_inventory_item_ui_display_bp_C_GetDefaultPrimaryDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DyeRowName != nullptr)
		*DyeRowName = params.DyeRowName;
}


// Function interface_inventory_item_ui_display_bp.interface_inventory_item_ui_display_bp_C.GetPresentationInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class USkeletalMesh> SkeletalMesh                   (Parm, OutParm)
// struct FVector                 DisplayOffset                  (Parm, OutParm, IsPlainOldData)

void Uinterface_inventory_item_ui_display_bp_C::GetPresentationInfo(EArchonBodyType BodyType, TAssetPtr<class USkeletalMesh>* SkeletalMesh, struct FVector* DisplayOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function interface_inventory_item_ui_display_bp.interface_inventory_item_ui_display_bp_C.GetPresentationInfo");

	Uinterface_inventory_item_ui_display_bp_C_GetPresentationInfo_Params params;
	params.BodyType = BodyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
	if (DisplayOffset != nullptr)
		*DisplayOffset = params.DisplayOffset;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
