#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_frost_debuff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_frost_debuff.behemoth_frost_debuff_C
// 0x001C (0x06F8 - 0x06DC)
class Abehemoth_frost_debuff_C : public Abase_debuff_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	float                                              PercentageOfPlayrate;                                     // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06EC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    VFX;                                                      // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_frost_debuff.behemoth_frost_debuff_C");
		return ptr;
	}


	void UserConstructionScript();
	void MulticastOnAdded();
	void OnAdded();
	void OnGameplayEffectRemoved();
	void Multicast_On_Gameplay_Effect_Removed();
	void ReceiveDestroyed();
	void ExecuteUbergraph_behemoth_frost_debuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
