#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_InventoryItem_Flask_Healing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InventoryItem_Flask_Healing.InventoryItem_Flask_Healing_C
// 0x0000 (0x00F8 - 0x00F8)
class UInventoryItem_Flask_Healing_C : public UInventoryItem_Flask_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryItem_Flask_Healing.InventoryItem_Flask_Healing_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
