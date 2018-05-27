#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_damage_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass damage_interface.damage_interface_C
// 0x0000 (0x0028 - 0x0028)
class Udamage_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass damage_interface.damage_interface_C");
		return ptr;
	}


	void GetDamageRow(const struct FName& DamageKey, struct FDamageTableData* DamageRow, float* DamageScale, bool* RowFound);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
