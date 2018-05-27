#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_bpi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass weapon_bpi.weapon_bpi_C
// 0x0000 (0x0028 - 0x0028)
class Uweapon_bpi_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass weapon_bpi.weapon_bpi_C");
		return ptr;
	}


	void CreateGameplayCueFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters, class UParticleSystem* Particle, const struct FName& SocketLocation);
	void ActivateSpecialAbilities_Interface(bool* Success);
	void CallWeaponSpecificFunction(const struct FName& Function_Name);
	void GetBackSocketName(struct FName* BackSocket);
	void GetUsesAutoAttachment(bool* UsesAutoAttachment);
	void SpecialAttackReady(bool* QReady);
	void ActivateTrail(class UParticleSystem* InParticle_System, float InLifetime, const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, class UParticleSystem* InSecondaryParticle, const struct FName& InSecondarySocketName, const struct FLinearColor& InAspectColor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
