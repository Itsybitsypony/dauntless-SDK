#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_GameplayTags_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_TagToTrailEffects.Struct_TagToTrailEffects
// 0x0068
struct FStruct_TagToTrailEffects
{
	struct FGameplayTagContainer                       Tag_20_47FEAF1C4F33007A6DAE32980A328B47;                  // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UParticleSystem*                             ParticleTrail_52_339844D8436AE441F104D19022BBA22B;        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TrailColor_54_9B8B188B4A3334F365F448A160E7343E;           // 0x0028(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Lifetime_35_A76F0DAF4927C917C4C19DB79132F8EF;             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FName                                       InFirstSocketName_30_CDD772394BEEE54C68A315ACBC189997;    // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSecondSocketName_28_4536B0C6461D03184E55659345CB67C7;   // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             SecondaryParticle_38_CB2575674915710A26852B9AA42CA1F4;    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SecondaryAttachPoint_41_12797DBD424A7ED493FCBD8CBA2C4C22; // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Audio_8_C435CE864A14417895F252B2A0DE6F16;                 // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
