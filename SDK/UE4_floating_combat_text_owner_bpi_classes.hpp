#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_floating_combat_text_owner_bpi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass floating_combat_text_owner_bpi.floating_combat_text_owner_bpi_C
// 0x0000 (0x0028 - 0x0028)
class Ufloating_combat_text_owner_bpi_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass floating_combat_text_owner_bpi.floating_combat_text_owner_bpi_C");
		return ptr;
	}


	void TryAndDestroyWidgetComponentForFCT(class UWidgetComponent* WidgetComponentReference);
	void SpawnWidgetComponentForFCT(class UWidgetComponent** WidgetComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
