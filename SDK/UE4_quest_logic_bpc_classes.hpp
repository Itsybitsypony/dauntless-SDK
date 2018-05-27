#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_quest_logic_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass quest_logic_bpc.quest_logic_bpc_C
// 0x00DC (0x02AC - 0x01D0)
class Uquest_logic_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TArray<class AActor*>                              LActiveVolumes;                                           // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              BehemothFleeTime;                                         // 0x01E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WispGatherTime;                                           // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class FString, float>                         ConditionTimerMap;                                        // 0x01F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<Equest_button_input_types_enum>, float> InputLastPressedTimeMap;                                  // 0x0240(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                                    LPreviousViewRotation;                                    // 0x0290(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraPitchThreshold;                                     // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraYawThreshold;                                       // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTutorialHuntActive;                                    // 0x02A4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET
	int                                                PlayerHitCount;                                           // 0x02A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass quest_logic_bpc.quest_logic_bpc_C");
		return ptr;
	}


	void OnRep_bIsTutorialIsland();
	void GetInputLastRecordedTime(TEnumAsByte<Equest_button_input_types_enum> Input, float* LastRecordedTime);
	void SetInputLastRecordedTime(TEnumAsByte<Equest_button_input_types_enum> Input);
	void ClearConditionTimer(const class FString& ConditionGUID);
	void GetConditionTimerValue(const class FString& ConditionID, float* TimerValue, bool* IsValid);
	void StartConditionTimer(const class FString& ConditionGUID);
	void ReceiveBeginPlay();
	void BehemothFlee();
	void OnOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void CheckButtonInput();
	void ActorGameplayStart();
	void StartInputMonitorTimer();
	void OnPlayerTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void SetWispPickupTime(float Time);
	void ExecuteUbergraph_quest_logic_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
