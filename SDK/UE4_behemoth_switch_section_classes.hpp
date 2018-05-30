#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_switch_section_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_switch_section.behemoth_switch_section_C
// 0x00D8 (0x0110 - 0x0038)
class Ubehemoth_switch_section_C : public UAnimNotify
{
public:
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // 0x0038(0x00C8) (Edit, BlueprintVisible)
	struct FName                                       SectionIfPassed;                                          // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SectionIfFailed;                                          // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_switch_section.behemoth_switch_section_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
