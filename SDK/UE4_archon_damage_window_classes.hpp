#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_archon_damage_window_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass archon_damage_window.archon_damage_window_C
// 0x00CA (0x0132 - 0x0068)
class Uarchon_damage_window_C : public UDamageNotifyState
{
public:
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // 0x0068(0x00C8) (Edit, BlueprintVisible)
	bool                                               DrawDebug;                                                // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugInGame;                                          // 0x0131(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass archon_damage_window.archon_damage_window_C");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime);
	bool ShouldApplyDamage(class USkeletalMeshComponent** MeshComp);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
