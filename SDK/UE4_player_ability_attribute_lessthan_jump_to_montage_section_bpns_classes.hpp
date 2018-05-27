#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_ability_attribute_lessthan_jump_to_montage_section_bpns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_ability_attribute_lessthan_jump_to_montage_section_bpns.player_ability_attribute_lessthan_jump_to_montage_section_bpns_C
// 0x0034 (0x0064 - 0x0030)
class Uplayer_ability_attribute_lessthan_jump_to_montage_section_bpns_C : public UAnimNotifyState
{
public:
	struct FName                                       SectionName;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          AbilitySystemAttribute;                                   // 0x0040(0x0020) (Edit, BlueprintVisible)
	float                                              AttributeLessThanOrEqualTo;                               // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_ability_attribute_lessthan_jump_to_montage_section_bpns.player_ability_attribute_lessthan_jump_to_montage_section_bpns_C");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
