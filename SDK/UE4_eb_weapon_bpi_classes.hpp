#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_weapon_bpi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass eb_weapon_bpi.eb_weapon_bpi_C
// 0x0000 (0x0028 - 0x0028)
class Ueb_weapon_bpi_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eb_weapon_bpi.eb_weapon_bpi_C");
		return ptr;
	}


	void GetUsesBaseWeaponSuperMode(bool* Return);
	void GetIsInSuperMode(bool* Return);
	void GetMaxEmberCharge(float* MaxCharge);
	void GetCurrentEmberCharge(float* CurrentCharge);
	void Evaluate_Ember_Charge();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
