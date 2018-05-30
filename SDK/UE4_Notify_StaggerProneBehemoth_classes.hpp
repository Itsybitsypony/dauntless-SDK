#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Notify_StaggerProneBehemoth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Notify_StaggerProneBehemoth.Notify_StaggerProneBehemoth_C
// 0x00E9 (0x0119 - 0x0030)
class UNotify_StaggerProneBehemoth_C : public UAnimNotifyState
{
public:
	int                                                StaggerTypeOverride_Old;                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerProneDamageThreshold;                              // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               StaggerPronePartNames;                                    // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Estagger_type>                         StaggerTypeOverride;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // 0x0050(0x00C8) (Edit, BlueprintVisible)
	TEnumAsByte<Edamage_types>                         RequiredDamageType;                                       // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Notify_StaggerProneBehemoth.Notify_StaggerProneBehemoth_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
