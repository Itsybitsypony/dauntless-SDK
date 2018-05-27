#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_projectile_flame_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass eb_projectile_flame_ab.eb_projectile_flame_ab_C
// 0x0020 (0x05B0 - 0x0590)
class Ueb_projectile_flame_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	TArray<struct FStruct_TagToSpecialEffects>         Special_Effects;                                          // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       DamageKey;                                                // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eb_projectile_flame_ab.eb_projectile_flame_ab_C");
		return ptr;
	}


	void Spawn_Projectile(float Projectile_Rotation);
	void K2_ActivateAbility();
	void ExecuteUbergraph_eb_projectile_flame_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
