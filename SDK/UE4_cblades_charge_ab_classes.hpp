#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cblades_charge_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cblades_charge_ab.cblades_charge_ab_C
// 0x0020 (0x05B0 - 0x0590)
class Ucblades_charge_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	bool                                               DeterminationDebuggingEnabled;                            // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	class Uammo_bpc_C*                                 AmmoComponent;                                            // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Acblades_weapon_bp_C*                        CachedWeapon;                                             // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cblades_charge_ab.cblades_charge_ab_C");
		return ptr;
	}


	void DebugOutputToLog(const class FString& Text);
	void OnChange_188098F342CEA3DF8EFDFDB89C89F3EC(bool bMatchesComparison, float CurrentValue);
	void K2_ActivateAbility();
	void OnPostMitigationHitWithWeapon_Event_1(class AActor* DamagedActor, const struct Fpostmit_damage_summary& PostMitigationDamageSummary, const struct FGameplayTagContainer& DamageTags);
	void ExecuteUbergraph_cblades_charge_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
