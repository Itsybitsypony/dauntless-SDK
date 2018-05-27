#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Base_Pylon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_QuickItem_Base_Pylon.Ability_QuickItem_Base_Pylon_C
// 0x005C (0x0674 - 0x0618)
class UAbility_QuickItem_Base_Pylon_C : public UAbility_QuickItem_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0618(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     TrapOffsetHeight;                                         // 0x0620(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SetPylonDuration;                                         // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PylonOffsetForward;                                       // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PylonOffsetRight;                                         // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SecondMontageStarted;                                     // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0639(0x0007) MISSED OFFSET
	class UClass*                                      PylonClass;                                               // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PylonLifespan;                                            // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x064C(0x0004) MISSED OFFSET
	class AActor*                                      SpawnedActor;                                             // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DecalColor;                                               // 0x0660(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectRadius;                                             // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_QuickItem_Base_Pylon.Ability_QuickItem_Base_Pylon_C");
		return ptr;
	}


	void PylonActivate(const struct FVector& PylonLocation);
	void PylonDeactivate();
	void PylonTick(const struct FVector& PylonLocation);
	void OnCancelled_29C600D34CEFF39814F4ACA5A553994A();
	void OnInterrupted_29C600D34CEFF39814F4ACA5A553994A();
	void OnBlendOut_29C600D34CEFF39814F4ACA5A553994A();
	void OnCompleted_29C600D34CEFF39814F4ACA5A553994A();
	void OnCancelled_CCDE535447A43100A51CFC959ADE3102();
	void OnInterrupted_CCDE535447A43100A51CFC959ADE3102();
	void OnBlendOut_CCDE535447A43100A51CFC959ADE3102();
	void OnCompleted_CCDE535447A43100A51CFC959ADE3102();
	void DidNotSpawn_E94E81534274FC817104C9B88F11DA3D(class AActor* SpawnedActor);
	void Success_E94E81534274FC817104C9B88F11DA3D(class AActor* SpawnedActor);
	void K2_ActivateAbility();
	void PlaceDecal(const struct FVector& Placement);
	void ExecuteUbergraph_Ability_QuickItem_Base_Pylon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
