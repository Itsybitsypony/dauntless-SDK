#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_eqs_base_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass weapon_eqs_base_ab.weapon_eqs_base_ab_C
// 0x04F0 (0x0A80 - 0x0590)
class Uweapon_eqs_base_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	bool                                               ManualAim;                                                // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Eenum_weapon_eqs_manual_target>        ManualAimTarget;                                          // 0x0599(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x059A(0x0006) MISSED OFFSET
	class UEnvQuery*                                   TargettingEQSQuery;                                       // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05B8(0x0008) MISSED OFFSET
	struct Feqs_lobbed_projectile_data                 LobbedProjectilesInfo;                                    // 0x05C0(0x00C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Feqs_aimed_projectile_data                  AimedProjectilesInfo;                                     // 0x0680(0x00C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Feqs_actor_data                             ActorInfo;                                                // 0x0740(0x00D0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct Fbeam_request>                       BeamRequests;                                             // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       L_WeaponAbilityDamageRowOverride;                         // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0828(0x0008) MISSED OFFSET
	struct Feqs_lobbed_projectile_data                 L_LobbedInfo;                                             // 0x0830(0x00C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Feqs_aimed_projectile_data                  L_AimedInfo;                                              // 0x08F0(0x00C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Feqs_actor_data                             L_ActorInfo;                                              // 0x09B0(0x00D0) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass weapon_eqs_base_ab.weapon_eqs_base_ab_C");
		return ptr;
	}


	void TryRegisterGameplayGUID(const struct FGuid& Guid);
	void GetManualTargets(const struct FName& SourceWeaponBoneName, TArray<struct FVector>* Targets);
	void K2_ActivateAbility();
	void ExecuteUbergraph_weapon_eqs_base_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
