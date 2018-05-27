#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Notify_WeaponChargeDamageState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Notify_WeaponChargeDamageState.Notify_WeaponChargeDamageState_C
// 0x0000 (0x0068 - 0x0068)
class UNotify_WeaponChargeDamageState_C : public UDamageNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Notify_WeaponChargeDamageState.Notify_WeaponChargeDamageState_C");
		return ptr;
	}


	void ModifyWeaponDamageKeys(class AArchonWeapon** Weapon, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, TArray<struct FName>* InDamageKeys, TArray<struct FName>* OutDamageKeys);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
