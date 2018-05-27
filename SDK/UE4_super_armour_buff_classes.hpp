#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_super_armour_buff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass super_armour_buff.super_armour_buff_C
// 0x0024 (0x0700 - 0x06DC)
class Asuper_armour_buff_C : public Abase_buff_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	float                                              Timeline_2_SuperArmourPlayerMaterial_95E881AC4B693DFD2D0EBA95D2D5FA8A;// 0x06E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_95E881AC4B693DFD2D0EBA95D2D5FA8A;   // 0x06EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LoopEffect;                                               // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass super_armour_buff.super_armour_buff_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void MulticastOnAdded();
	void End_Multicast();
	void OnDamageReceived(float* DamageReceived, class AController** InstigatedBy, class AActor** DamageCauser, struct FArchonAbilityDamageInfo* DamageInfo);
	void MultiShield(const struct FVector& Location, const struct FRotator& Rotation);
	void OnRemoved();
	void ExecuteUbergraph_super_armour_buff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
