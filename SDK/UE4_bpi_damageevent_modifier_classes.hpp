#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_damageevent_modifier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bpi_damageevent_modifier.bpi_damageevent_modifier_C
// 0x0000 (0x0028 - 0x0028)
class Ubpi_damageevent_modifier_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bpi_damageevent_modifier.bpi_damageevent_modifier_C");
		return ptr;
	}


	void GetModifyDamageEventPriority(int* Priority);
	void CustomModifyDamageEventData(const struct FDamageEventData& DamageEventData, class AActor* DamagedActor, const struct FGameplayTagContainer& DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
