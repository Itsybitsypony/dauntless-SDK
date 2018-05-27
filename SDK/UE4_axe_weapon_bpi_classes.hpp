#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_axe_weapon_bpi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass axe_weapon_bpi.axe_weapon_bpi_C
// 0x0000 (0x0028 - 0x0028)
class Uaxe_weapon_bpi_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass axe_weapon_bpi.axe_weapon_bpi_C");
		return ptr;
	}


	void GetCurrentDetermination(int* Determination);
	void SetDeterminationOverride(int DeterminationLevel, bool* Success);
	void SetCurrentChargeLevel(int CurrentChargeLevel);
	void GetDeterminationOnHitPerChargeLevel(TArray<int>* DeterminationOnHitPerChargeLevel);
	void GetCurrentChargeLevel(int* ChargeLevel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
