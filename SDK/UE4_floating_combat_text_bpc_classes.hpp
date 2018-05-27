#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_floating_combat_text_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass floating_combat_text_bpc.floating_combat_text_bpc_C
// 0x0081 (0x0251 - 0x01D0)
class Ufloating_combat_text_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TArray<struct Ffloating_combat_text_item>          QueuedCombatText;                                         // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              NextAvailableTime;                                        // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeBetweenTexts;                                      // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeToCombineTexts;                                    // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	TArray<struct Ffloating_combat_text_item>          ActiveCombatTexts;                                        // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TextVerticalBurst;                                        // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextGravity;                                              // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextHorizontalBurst;                                      // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextLifeSpan;                                             // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LocalActiveIndex;                                         // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextFadeTime;                                             // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextOffsetFromInstigator;                                 // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTookDamageTime;                                       // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowComboDamageAfterDelay;                                // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x0230(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ComboDamage;                                              // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	TArray<struct Fdamage_text_threshold>              DamageTextThresholds;                                     // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsActivated;                                              // 0x0250(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass floating_combat_text_bpc.floating_combat_text_bpc_C");
		return ptr;
	}


	void OnRep_IsActivated();
	void GetThresholdIndexForDamage(float Damage, int* Index);
	void GetFontSizeForDamage(float DamageAmount, int* FontSize);
	void OnLoaded_6E69D648459A4512843B78B64E1B3C58(class UObject* Loaded);
	void OnLoaded_DFC6253B4EEAC3B789AB23A355833C02(class UObject* Loaded);
	void OnLoaded_11C3411B430F438505E76D9F7032A1AD(class UObject* Loaded);
	void OnLoaded_C06F42B4478FD6F77CA5A8A54E83B74F(class UObject* Loaded);
	void AddDamageText(float DamageAmount, class AActor* DamageInstigator, const struct FLinearColor& BaseColor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnComponentDeactivated_Event_1(class UActorComponent* Component);
	void AddText(const struct FText& Text, class AActor* DamageInstigator, const struct FLinearColor& BaseColor);
	void ReportTotalDamage();
	void AddMultitypeDamageText(class AActor* DamageInstigator, float CoreDamage, float PartDamage, float StaggerDamage, float ExposeDamage, bool HasImpactLocation, const struct FVector& ImpactLocation);
	void ExecuteUbergraph_floating_combat_text_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
