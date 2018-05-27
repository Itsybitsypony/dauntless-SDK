#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_simple_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass aoe_simple.aoe_simple_C
// 0x0050 (0x04B0 - 0x0460)
class Aaoe_simple_C : public Aaoe_base_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	bool                                               DoDamageAutomatically;                                    // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	float                                              HitDelay;                                                 // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageRow;                                                // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time_To_Decay;                                            // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoDestroy;                                              // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eaoe_damage_distribution>              AoeDamageDistribution;                                    // 0x047D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x047E(0x0002) MISSED OFFSET
	struct FName                                       OverrideDamageRow;                                        // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              OverrideBuffsToApplyOnHit;                                // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Farchon_impulse>                     ImpulsesToSpawnOnExplode;                                 // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               OverrideDamageRadius;                                     // 0x04A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	float                                              DamageRadiusOverride;                                     // 0x04AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass aoe_simple.aoe_simple_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomAOELogic();
	void ExecuteUbergraph_aoe_simple(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
