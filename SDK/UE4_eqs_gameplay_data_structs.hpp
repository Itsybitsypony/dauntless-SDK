#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_arc_distribution_info_classes.hpp"
#include "UE4_spawn_location_type_classes.hpp"
#include "UE4_projectile_target_modifier_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_eqs_projectile_share_guid_type_classes.hpp"
#include "UE4_eqs_result_iteration_method_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct eqs_gameplay_data.eqs_gameplay_data
// 0x00A5
struct Feqs_gameplay_data
{
	struct FName                                       SpawnLocBoneName_14_9483EEFF4767E9CA01EE74B2B297B7CA;     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseBoneNameRotation_92_BF9AB5184986D53F6C498CA507D67334;  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Espawn_location_type>                  SpawnLocationType_77_5BA3021E4CC62B12D3B63DB5DFC0B345;    // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FTransform                                  SpawnLocationBoxDistribution_80_4872B0FF42AC16234C228D8D6440559C;// 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct Farc_distribution_info                      SpawnLocationArcDistribution_87_E28735B847A0D55B0478E7A6E9AF7ED9;// 0x0040(0x0014) (Edit, BlueprintVisible)
	struct FVector                                     SpawnOffset_84_95A2EE5945F27DA228A8EE96FEB9B6AE;          // 0x0054(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               ShareDamageGUID_16_457B59B04AEB80CC4DED1F8DB23F3236;      // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eeqs_projectile_share_guid_type>       ShareDamageGUIDType_74_0A397D664B929EEC62BAFB9AFDA5B2C3;  // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	struct FName                                       SharedDamageGUIDName_95_C8C073904EA789F64D0FD3BC2193B36C; // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageRowName_20_EBF1B3FC4090EE723F3904B62462F8AB;        // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ProjectilesPerTarget_47_B20535834A1C230F05BDADA737DAC3E8; // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxTargetsToConsider_48_AE3FE9D54A1DE0A93B5628A57753B9B1; // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct Fprojectile_target_modifier>         TargetModifiers_56_64C5F25F4A1273176B2B63B31D0BA415;      // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       HomingTargetBlackboardVar_59_DF9154094155EF0EEC7EA69E20644D5D;// 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HomeToEQSTargetIfActor_62_110A4D2F4CA0643C1C1373AE6A03A710;// 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              TimeBetweenSpawnTicks_65_8A5907904182D5754AEC40816465A6FC;// 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumToSpawnPerTick_68_98BED39C4D2040FC71E38F827DFC27FA;    // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eeqs_result_iteration_method>          ResultIterationMethod_71_B71DC62A4B5DD7CE617F5C9C405A297C;// 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
