#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanternhold_fire_bomb_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lanternhold_fire_bomb_ab.lanternhold_fire_bomb_ab_C
// 0x000C (0x05BC - 0x05B0)
class Ulanternhold_fire_bomb_ab_C : public Ulanternhold_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B0(0x0008) (Transient, DuplicateTransient)
	float                                              ForwardOffset;                                            // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lanternhold_fire_bomb_ab.lanternhold_fire_bomb_ab_C");
		return ptr;
	}


	void DidNotSpawn_425A75904401FE80073938BECC2FAF33(class AActor* SpawnedActor);
	void Success_425A75904401FE80073938BECC2FAF33(class AActor* SpawnedActor);
	void K2_ActivateAbility();
	void ExecuteUbergraph_lanternhold_fire_bomb_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
