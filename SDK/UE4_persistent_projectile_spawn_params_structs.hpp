#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct persistent_projectile_spawn_params.persistent_projectile_spawn_params
// 0x0038
struct Fpersistent_projectile_spawn_params
{
	class UClass*                                      BaseProjectileClass_3_9D02523744EB476F553ADF9F81EE7AFC;   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FRotator                                    OffsetRotation_8_BF0F91F94B0A8C77D21F689CD8EE4A7C;        // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OffsetLocation_11_2704325C432258B25FEE128308769528;       // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       BoneName_14_D64B6C734008763D22EEEA9ABB890C32;             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InheritBoneRotation_19_44A6F29841194B75B1B52CBEFCF66B69;  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FName                                       DamageKey_16_288C297346B0777C725EA39B29D6B118;            // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
