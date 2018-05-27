#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_meter_gaining_rules_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass meter_gaining_rules.meter_gaining_rules_C
// 0x0000 (0x0028 - 0x0028)
class Umeter_gaining_rules_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass meter_gaining_rules.meter_gaining_rules_C");
		return ptr;
	}


	void STATIC_CanWeaponBuildMeterOffTarget(class AActor* Target, class UObject* __WorldContext, bool* CanLifeStealFromThisTarget, bool* CanBuildLanternChargeFromThisTarget, bool* CanBuildWeaponMeterFromThisTarget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
