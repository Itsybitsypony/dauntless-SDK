#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cooldown_btdeco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cooldown_btdeco.cooldown_btdeco_C
// 0x00C8 (0x0168 - 0x00A0)
class Ucooldown_btdeco_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FName                                       CooldownStartTimeBlackboardName;                          // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct Fsimplified_blackboard_key_data             MinCooldown;                                              // 0x00B0(0x0040) (Edit, BlueprintVisible)
	struct Fsimplified_blackboard_key_data             MaxCooldown;                                              // 0x00F0(0x0040) (Edit, BlueprintVisible)
	float                                              LastCooldownFinishedTime;                                 // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Ecooldown_start_type>                  CooldownResetType;                                        // 0x0134(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	float                                              CurrentCooldown;                                          // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InitialCooldownSetup_Hack;                                // 0x013C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActive_Hack;                                            // 0x013D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x013E(0x0002) MISSED OFFSET
	struct FBlackboardKeySelector                      IgnoreThisGarbageVariable;                                // 0x0140(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cooldown_btdeco.cooldown_btdeco_C");
		return ptr;
	}


	void GetNewCooldown(class UBlackboardComponent* Blackboard, float* NewCooldown);
	void GetCooldownStartTime(class UBlackboardComponent* Blackboard, float* CooldownStartTime);
	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveObserverActivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveObserverDeactivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_cooldown_btdeco(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
