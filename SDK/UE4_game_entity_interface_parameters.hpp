#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_game_entity_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function game_entity_interface.game_entity_interface_C.CanHitCBPushPullTarget
struct Ugame_entity_interface_C_CanHitCBPushPullTarget_Params
{
	bool                                               Hits_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function game_entity_interface.game_entity_interface_C.GetDefaultElementalAttackType
struct Ugame_entity_interface_C_GetDefaultElementalAttackType_Params
{
	EElementType                                       DefaultElementalAttackType;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function game_entity_interface.game_entity_interface_C.GetLookAtAlpha
struct Ugame_entity_interface_C_GetLookAtAlpha_Params
{
	float                                              LookAtAlpha;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function game_entity_interface.game_entity_interface_C.GetLookAtVector
struct Ugame_entity_interface_C_GetLookAtVector_Params
{
	struct FVector                                     LookAtVector;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function game_entity_interface.game_entity_interface_C.GetFallbackProjectileSpawnOffset
struct Ugame_entity_interface_C_GetFallbackProjectileSpawnOffset_Params
{
	struct FVector                                     Offset;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function game_entity_interface.game_entity_interface_C.GetMesh
struct Ugame_entity_interface_C_GetMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
