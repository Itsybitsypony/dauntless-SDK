#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_nextsectionswitcher_target_not_in_front_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass nextsectionswitcher_target_not_in_front.nextsectionswitcher_target_not_in_front_C
// 0x00D8 (0x0110 - 0x0038)
class Unextsectionswitcher_target_not_in_front_C : public UAnimNotify
{
public:
	bool                                               SwitchIfTargetNotInFront;                                 // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FName                                       SectionName;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct Fbehemoth_requirement_struct                BehemothRequirement;                                      // 0x0048(0x00C8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass nextsectionswitcher_target_not_in_front.nextsectionswitcher_target_not_in_front_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
