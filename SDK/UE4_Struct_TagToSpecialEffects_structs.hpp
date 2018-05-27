#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_GameplayTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_TagToSpecialEffects.Struct_TagToSpecialEffects
// 0x0030
struct FStruct_TagToSpecialEffects
{
	struct FGameplayTagContainer                       Tag_20_47FEAF1C4F33007A6DAE32980A328B47;                  // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UParticleSystem*                             ProjectileParticle_60_339844D8436AE441F104D19022BBA22B;   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             HitParticle_64_E98DF9E246FF175802720389F4764767;          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
