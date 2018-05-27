#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_active_base_buff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lantern_active_base_buff.lantern_active_base_buff_C
// 0x0058 (0x0734 - 0x06DC)
class Alantern_active_base_buff_C : public Abase_buff_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystem*                             DischargeStartedEffect;                                   // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DischargeLoopStartEffect;                                 // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DischargeEndedEffect;                                     // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DischargeStartedSound;                                    // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DischargeEndedSound;                                      // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DischargeLoopStartSound;                                  // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DischargeLoopEndSound;                                    // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CachedStartedEffect;                                      // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CachedLoopEffect;                                         // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbilityLevel;                                             // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lantern_active_base_buff.lantern_active_base_buff_C");
		return ptr;
	}


	void GetLantern(class AArchonLantern** Lantern);
	void UserConstructionScript();
	void ReceiveDestroyed();
	void MulticastOnAdded();
	void ExecuteUbergraph_lantern_active_base_buff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
