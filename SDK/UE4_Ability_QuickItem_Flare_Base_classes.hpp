#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Flare_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_QuickItem_Flare_Base.Ability_QuickItem_Flare_Base_C
// 0x0070 (0x0688 - 0x0618)
class UAbility_QuickItem_Flare_Base_C : public UAbility_QuickItem_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0618(0x0008) (Transient, DuplicateTransient)
	class UParticleSystem*                             LaunchParticleTemplate;                                   // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TrailParticleTemplate;                                    // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BurstParticleTemplate;                                    // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    FlareTexture;                                             // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FlareColor;                                               // 0x0640(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UAkAudioEvent*                               LaunchSound;                                              // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ExplosionSound;                                           // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlareLaunchAngle;                                         // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRotationSpeed;                                         // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinRotationSpeed;                                         // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLaunchVelocity;                                        // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinLaunchVelocity;                                        // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShellMaxLife;                                             // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShellminLife;                                             // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBurstTime;                                             // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBurstTime;                                             // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndAbilityDelay;                                          // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_QuickItem_Flare_Base.Ability_QuickItem_Flare_Base_C");
		return ptr;
	}


	void OnCancelled_F0862342414A7EB5DE58A6A487B19E8E();
	void OnInterrupted_F0862342414A7EB5DE58A6A487B19E8E();
	void OnBlendOut_F0862342414A7EB5DE58A6A487B19E8E();
	void OnCompleted_F0862342414A7EB5DE58A6A487B19E8E();
	void OnFinish_9797F65948042F996A9663B1A16C2BC9();
	void K2_ActivateAbility();
	void LaunchFlare();
	void ExecuteUbergraph_Ability_QuickItem_Flare_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
