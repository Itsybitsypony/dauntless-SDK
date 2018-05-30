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

// UserDefinedStruct projectile_data_struct.projectile_data_struct
// 0x0044
struct Fprojectile_data_struct
{
	class UClass*                                      ProjectileClass_2_51BFB6A847B2B457E9FB9680D7465CEF;       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       DamageKey_6_648E72C045CF4ABBAC1267917EF8DE95;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FacingAngleOffset_11_17FCC02E42024C56D0FFE7818EE8858B;    // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpawnOffset_12_797946B74DF3E3E8A4CC2FBDAFBCD0AD;          // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LocalProjectileRotation_15_12CDA0C943BCF385A52C4E9FA03C6E7C;// 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FloatModifier_19_DE1B6A93445E65E159DF2DB6DE2C2044;        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HomingOrAdjustedTargetBlackboardName_31_A6D60D7242B92E2496D58DBAB32AD655;// 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpawnAngleToTarget_30_A4ED92494290C84CB45A7B8F13C2BFCD;// 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
