#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_Struct_DamageTagsPerKey_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_AttackWindowInfo.Struct_AttackWindowInfo
// 0x0028
struct FStruct_AttackWindowInfo
{
	struct FStruct_DamageTagsPerKey                    PartTagsPerDamageKey_11_D003424E410C4FECB3677CA080001351; // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<class AActor*>                              HitActors_13_71C93D1F4DE7CA6742F713B1195C4E86;            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
