#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_interface_inventory_item_ui_display_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass interface_inventory_item_ui_display_bp.interface_inventory_item_ui_display_bp_C
// 0x0000 (0x0028 - 0x0028)
class Uinterface_inventory_item_ui_display_bp_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass interface_inventory_item_ui_display_bp.interface_inventory_item_ui_display_bp_C");
		return ptr;
	}


	void GetDefaultSecondaryDye(struct FName* DyeRowName);
	void GetDefaultPrimaryDye(struct FName* DyeRowName);
	void GetPresentationInfo(EArchonBodyType BodyType, TAssetPtr<class USkeletalMesh>* SkeletalMesh, struct FVector* DisplayOffset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
