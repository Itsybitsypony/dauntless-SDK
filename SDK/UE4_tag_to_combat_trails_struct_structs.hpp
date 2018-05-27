#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_Archon_classes.hpp"
#include "UE4_GameplayTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct tag_to_combat_trails_struct.tag_to_combat_trails_struct
// 0x0038
struct Ftag_to_combat_trails_struct
{
	TEnumAsByte<EWeaponType>                           RequireWeaponType_103_1439147745DA07C8CFC6FAB1E2495568;   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EElementType>                          RequireElementType_107_B44A82094E77BCCEDB5A939A03C76A2B;  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       RequireExactTags_104_47FEAF1C4F33007A6DAE32980A328B47;    // 0x0008(0x0020) (Edit, BlueprintVisible)
	class UParticleSystem*                             CombatTrail_55_339844D8436AE441F104D19022BBA22B;          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             SecondaryParticle_38_CB2575674915710A26852B9AA42CA1F4;    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
