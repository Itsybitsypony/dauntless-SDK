#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_spawn_lobbed_projectile_ns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass spawn_lobbed_projectile_ns.spawn_lobbed_projectile_ns_C
// 0x01A8 (0x01D8 - 0x0030)
class Uspawn_lobbed_projectile_ns_C : public UAnimNotifyState
{
public:
	class UEnvQuery*                                   TargettingEQSQuery;                                       // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct Feqs_lobbed_projectile_data                 LobbedProjectilesInfo;                                    // 0x0050(0x00C0) (Edit, BlueprintVisible)
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // 0x0110(0x00C8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass spawn_lobbed_projectile_ns.spawn_lobbed_projectile_ns_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
