#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_can_use_quick_slot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_can_use_quick_slot.BPI_can_use_quick_slot_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_can_use_quick_slot_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_can_use_quick_slot.BPI_can_use_quick_slot_C");
		return ptr;
	}


	void CanUseQuickSlotItem(bool CanUseInBleedout, bool* CanUse);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
