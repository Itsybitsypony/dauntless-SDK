#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_armor_material_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass armor_material_interface.armor_material_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uarmor_material_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass armor_material_interface.armor_material_interface_C");
		return ptr;
	}


	void HideSkinUnderArmor(class UTexture2D* CutMask, EArmorType ArmourType, class Aarmour_part_base_bp_C* ArmourPart, class USkeletalMesh* SkinMesh, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats, bool* Success);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
