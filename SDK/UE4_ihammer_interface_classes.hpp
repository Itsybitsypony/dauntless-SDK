#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ihammer_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ihammer_interface.ihammer_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uihammer_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ihammer_interface.ihammer_interface_C");
		return ptr;
	}


	void AuthBroadcastInstantReloadEffects();
	void ReloadVFX();
	void IsAmmoShellPrimed(bool* IsPrimed);
	bool RemovePrimedAmmoShell();
	bool PrimeAmmoShell();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
