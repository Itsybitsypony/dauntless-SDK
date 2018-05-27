#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_onfire_debuff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_onfire_debuff.behemoth_onfire_debuff_C
// 0x0028 (0x0798 - 0x0770)
class Abehemoth_onfire_debuff_C : public Adot_base_debuff_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0770(0x0008) (Transient, DuplicateTransient)
	class UMonsterPartComponent*                       Part;                                                     // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlameDamagePerTick;                                       // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0784(0x0004) MISSED OFFSET
	class Umonsterpart_bpc_C*                          NewVar_1;                                                 // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageTickTime;                                           // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_onfire_debuff.behemoth_onfire_debuff_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnGameplayEffectRemoved();
	void MulticastOnAdded();
	void OnAdded();
	void AuthApplyPartDamage();
	void AuthDoDamage();
	void OnRemoved();
	void ExecuteUbergraph_behemoth_onfire_debuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
