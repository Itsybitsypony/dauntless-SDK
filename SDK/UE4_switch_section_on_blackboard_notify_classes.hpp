#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_switch_section_on_blackboard_notify_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass switch_section_on_blackboard_notify.switch_section_on_blackboard_notify_C
// 0x0060 (0x0098 - 0x0038)
class Uswitch_section_on_blackboard_notify_C : public UAnimNotify
{
public:
	struct Fblackboard_comparison                      BlackboardComparison;                                     // 0x0038(0x0050) (Edit, BlueprintVisible)
	struct FName                                       SectionIfCompareFailed;                                   // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SectionIfCompareSuccessful;                               // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass switch_section_on_blackboard_notify.switch_section_on_blackboard_notify_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
