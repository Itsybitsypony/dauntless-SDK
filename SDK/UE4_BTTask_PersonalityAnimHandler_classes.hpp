#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTTask_PersonalityAnimHandler_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C
// 0x0068 (0x0108 - 0x00A0)
class UBTTask_PersonalityAnimHandler_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                  // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MontagePlayRate;                                          // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoveryTime;                                             // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ActionStartLocation;                                      // 0x00B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	class ABp_Behemoth_C*                              OwningBehemoth;                                           // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct Fstruct_montage_chance>              PersonalityAnims_Normal;                                  // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fstruct_montage_chance>              PersonalityAnims_Rage;                                    // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fstruct_montage_chance>              PersonalityAnims_Tired;                                   // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Roll;                                                     // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                State;                                                    // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C");
		return ptr;
	}


	void OuputLocation();
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ExecuteUbergraph_BTTask_PersonalityAnimHandler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
