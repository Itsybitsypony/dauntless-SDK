#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_determination_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass determination_ab.determination_ab_C
// 0x001D (0x05AD - 0x0590)
class Udetermination_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	float                                              DeterminationMax;                                         // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 CurrentDeterminationHandle;                               // 0x059C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DeterminationDebuggingEnabled;                            // 0x05A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05A5(0x0003) MISSED OFFSET
	int                                                MaxDeterminationLevel;                                    // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDetermination;                                       // 0x05AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass determination_ab.determination_ab_C");
		return ptr;
	}


	void DebugOutputToLog(const class FString& Text);
	void GetDeterminationIncrease(class AActor* Actor, float* Val);
	void Removed_9BADC101483825FE95AEA9B62A1A611E();
	void EventReceived_3B0671084254644A328BCDA4F5E8E200(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void ExecuteUbergraph_determination_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
