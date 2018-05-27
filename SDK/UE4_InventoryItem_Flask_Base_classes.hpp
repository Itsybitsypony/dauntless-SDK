#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_InventoryItem_Flask_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InventoryItem_Flask_Base.InventoryItem_Flask_Base_C
// 0x0008 (0x00F8 - 0x00F0)
class UInventoryItem_Flask_Base_C : public UArchonInventoryItem_Flask
{
public:
	class UClass*                                      HealAbility;                                              // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryItem_Flask_Base.InventoryItem_Flask_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
