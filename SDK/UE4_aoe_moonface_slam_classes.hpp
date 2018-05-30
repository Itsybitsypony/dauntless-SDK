#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_moonface_slam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass aoe_moonface_slam.aoe_moonface_slam_C
// 0x000C (0x054C - 0x0540)
class Aaoe_moonface_slam_C : public Aaoe_base_slam_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (Transient, DuplicateTransient)
	float                                              WoundedDuration;                                          // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass aoe_moonface_slam.aoe_moonface_slam_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnActorHitByAoE(class AActor** HitActor);
	void ExecuteUbergraph_aoe_moonface_slam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
