#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_AoE_IH_BigBlast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C
// 0x0060 (0x04C0 - 0x0460)
class ABP_AoE_IH_BigBlast_C : public Aaoe_base_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Secondary_Explosion_1;                                    // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Secondary_Explosion_2;                                    // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Secondary_Explosion_3;                                    // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule_1;                                                // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_742920C44E7547EBB5E92DBF3AEE923B;   // 0x0488(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AmmoSpentOnBlast;                                         // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	class USceneComponent*                             VFX_Spawn_Location_Component;                             // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBetweenVFX;                                          // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVFXDuration;                                           // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStruct_ElementToParticleSystem>     ElementalParticleParams;                                  // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C");
		return ptr;
	}


	void GetCustomDamageScale(class AActor** TargetActor, float* Scale);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__Secondary_Explosion_Timing__EventFunc();
	void ReceiveBeginPlay();
	void TriggerClientVFX(int AmmoSpent);
	void ExecuteUbergraph_BP_AoE_IH_BigBlast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
