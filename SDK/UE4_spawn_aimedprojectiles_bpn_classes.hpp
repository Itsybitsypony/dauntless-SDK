#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_spawn_aimedprojectiles_bpn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass spawn_aimedprojectiles_bpn.spawn_aimedprojectiles_bpn_C
// 0x01A8 (0x01E0 - 0x0038)
class Uspawn_aimedprojectiles_bpn_C : public UAnimNotify
{
public:
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // 0x0038(0x00C8) (Edit, BlueprintVisible)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UEnvQuery*                                   EQSQuery;                                                 // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct Feqs_aimed_projectile_data                  AimedProjectileData;                                      // 0x0120(0x00C0) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass spawn_aimedprojectiles_bpn.spawn_aimedprojectiles_bpn_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
