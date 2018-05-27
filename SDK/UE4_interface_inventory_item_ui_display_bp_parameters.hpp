#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_interface_inventory_item_ui_display_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function interface_inventory_item_ui_display_bp.interface_inventory_item_ui_display_bp_C.GetDefaultSecondaryDye
struct Uinterface_inventory_item_ui_display_bp_C_GetDefaultSecondaryDye_Params
{
	struct FName                                       DyeRowName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function interface_inventory_item_ui_display_bp.interface_inventory_item_ui_display_bp_C.GetDefaultPrimaryDye
struct Uinterface_inventory_item_ui_display_bp_C_GetDefaultPrimaryDye_Params
{
	struct FName                                       DyeRowName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function interface_inventory_item_ui_display_bp.interface_inventory_item_ui_display_bp_C.GetPresentationInfo
struct Uinterface_inventory_item_ui_display_bp_C_GetPresentationInfo_Params
{
	EArchonBodyType                                    BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     SkeletalMesh;                                             // (Parm, OutParm)
	struct FVector                                     DisplayOffset;                                            // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
