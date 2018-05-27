#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_eqs_gameplay_owner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.EQSActorSpawned
struct Ubpi_eqs_gameplay_owner_C_EQSActorSpawned_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.ModifyEQSGameplayData
struct Ubpi_eqs_gameplay_owner_C_ModifyEQSGameplayData_Params
{
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct Feqs_spawn_query                            NewEQSSpawnQuery;                                         // (Parm, OutParm)
	bool                                               ModifiedData;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.EQSProjectileSpawned
struct Ubpi_eqs_gameplay_owner_C_EQSProjectileSpawned_Params
{
	class Aprojectile_base_bp_C*                       Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProjectileTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.ModifyEQSGameplaySpawnPosPostCalc
struct Ubpi_eqs_gameplay_owner_C_ModifyEQSGameplaySpawnPosPostCalc_Params
{
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     StartPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     FinalTargetPosition;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      PossiblyNullTargetActor;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewPosition;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ModifiedPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.ModifyEQSGameplaySpawnPosPreCalc
struct Ubpi_eqs_gameplay_owner_C_ModifyEQSGameplaySpawnPosPreCalc_Params
{
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     InitialStartPosition;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InitialTargetPosition;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      PossiblyNullTargetActor;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewStartPosition;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ModifiedPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
