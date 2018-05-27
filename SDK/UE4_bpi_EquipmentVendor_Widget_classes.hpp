#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_EquipmentVendor_Widget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bpi_EquipmentVendor_Widget.bpi_EquipmentVendor_Widget_C
// 0x0000 (0x0028 - 0x0028)
class Ubpi_EquipmentVendor_Widget_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bpi_EquipmentVendor_Widget.bpi_EquipmentVendor_Widget_C");
		return ptr;
	}


	void Setup_Vendor(const TScriptInterface<class Uinteractable_npc_interface_C>& Vendor_NPC);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
