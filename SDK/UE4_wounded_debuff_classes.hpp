#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_wounded_debuff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wounded_debuff.wounded_debuff_C
// 0x0094 (0x0770 - 0x06DC)
class Awounded_debuff_C : public Abase_debuff_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	float                                              Timeline_0_NewTrack_0_BA351A2748A397FBBB5BD6B878C02B6D;   // 0x06E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_BA351A2748A397FBBB5BD6B878C02B6D;   // 0x06EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBPW_Wounded_Flash_C*                        WoundedUIFlash;                                           // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Healed;                                                   // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0701(0x0003) MISSED OFFSET
	int                                                StayedStillTest;                                          // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceMovementMaximum;                                 // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	TMap<struct FName, float>                          TimeSinceMovementPerType;                                 // 0x0710(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     PreviousLocation;                                         // 0x0760(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeOfLastMovement;                                       // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wounded_debuff.wounded_debuff_C");
		return ptr;
	}


	void GetInitialMitigatedDuration(float* Duration);
	void InitializeMovementCheckArray();
	void CheckMovementOverTime(bool* HasMoved);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnGameplayEventTriggered(struct FGameplayEventData* Payload);
	void MulticastPlayWoundedEffects();
	void OnAdded();
	void OnGameplayEffectRemoved();
	void AuthCheckMovement();
	void ReceiveDestroyed();
	void ExecuteUbergraph_wounded_debuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
