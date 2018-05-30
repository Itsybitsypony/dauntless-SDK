#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_projectile_target_modifier_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct persistent_actor_spawn_params.persistent_actor_spawn_params
// 0x0040
struct Fpersistent_actor_spawn_params
{
	class UClass*                                      ActorClass_3_9D02523744EB476F553ADF9F81EE7AFC;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     SpawnOffset_6_E6111775452B1F60E3EDB498ACC3A042;           // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               SnapToGround_8_7576BFC946A5E15CF413D994BC5456EC;          // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OrientToGround_12_24240F324518B6D7FF8FDA95533663C0;       // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FVector                                     ActorScale_15_9DD1C5A84CCF938B0D879C8543B0B368;           // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct Fprojectile_target_modifier>         PositionModifiers_19_D715DEAF4AC27B48C11BECA3F9C9499C;    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       SpawnAtBoneName_23_CF702A744C3691AEF1EC7798A504A44E;      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
