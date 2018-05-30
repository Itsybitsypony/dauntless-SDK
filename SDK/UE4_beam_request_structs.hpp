#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_speed_or_duration_info_classes.hpp"
#include "UE4_relative_or_world_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_GameplayTags_classes.hpp"
#include "UE4_beam_type_classes.hpp"
#include "UE4_damage_guid_type_classes.hpp"
#include "UE4_beam_collision_behavior_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct beam_request.beam_request
// 0x0120
struct Fbeam_request
{
	struct FName                                       UniqueName_84_066C2B02419AEBBC5B7558AB15C9BAE5;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Erelative_or_world>                    StartPosType_62_135943E14ACB8461103BE8AD38CE0E77;         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     StartPos_64_3D9CAE864576FA1F1F993CBEB40CBD1C;             // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<Erelative_or_world>                    EndPosType_69_4CE824F547A32E95BDCC47A3EB70AAA5;           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector                                     EndPos_4_0ED4698E460251170F2EFFB59D4EA856;                // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UClass*                                      BeamClass_19_7BB6B82D4592A934DF094DB3E962FD7C;            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<Ebeam_type>                            BeamType_13_97E42EFF4DE0537C027D67AEE3FD21B7;             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FVector                                     RotatingBeam_Axis_44_7BF79CDE46D5659809BDACB432731915;    // 0x0034(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RotatingBeam_GoalAngle_47_91F6A373441EC214C7B3B98C8260D8CC;// 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotatingBeam_Radius_49_0575B55D430753231BB5E0ABFB198E38;  // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotatingBeam_RadiusChangePerSecond_52_21F993254B5AEBEB9647D1A1263FE078;// 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectedBeam_LateralAmount_103_EF88377042387A6C33E50FB736633122;// 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DirectedBeam_LateralCurve_106_F11B7B7C43BF757A47AFE6AF05CA87CF;// 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageRowName_38_20D5D28346D8E22276813AA6275B6081;        // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageInterval_114_81D0C9294A6CE15A32CF78BF2C81462E;      // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FName                                       SharedDamageGUIDName_78_48CE078240F3D6E4C10E47980BF7142A; // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Edamage_guid_type>                     DamageGUIDType_87_D9D416F34EC490987F42A1AB06CC84B7;       // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       IgnoreTargetsWithTags_99_D678A09F4992B89840A4C0BD1CB4B7BC;// 0x0078(0x0020) (Edit, BlueprintVisible)
	TArray<class UClass*>                              BuffsToApplyOnHit_100_BDE45A294DC399D428E3FC900FC85A43;   // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UCurveFloat*                                 BeamSpeedCurve_16_E122FE614E85F1FFDB2B6997D316D11A;       // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct Fspeed_or_duration_info                     BeamSpeedOrDuration_26_FE75C33D49249FD34F0F208E12239189;  // 0x00B0(0x0010) (Edit, BlueprintVisible)
	struct FName                                       BeamOriginBoneName_34_190452D6481E1997F95CDBAAB8B0CCF6;   // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebeam_collision_behavior>              BeamCollisionBehavior_118_9A9D60DF46E3CCD16EF2A2A303C155BD;// 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	struct FGuid                                       INTERNAL_DamageGUID_74_29A25DBC47227BCE156435B01F67252D;  // 0x00CC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     INTERNAL_StartPos_58_DF4DC6F94BFAD42141786B807C82B956;    // 0x00DC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     INTERNAL_EndPos_66_58F9A0C94CED236E85CE6B9E7558EDA8;      // 0x00E8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class Abase_beam_bp_C*                             INTERNAL_BeamRef_21_17C1D0404443102A2F14E2995249BD8D;     // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              INTERNAL_StartTimeStamp_36_82C299364383936A373E939D973883C4;// 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     INTERNAL_OwnerInitialPos_73_C819452A4A9B760D7F0118847BEB0CE8;// 0x0104(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FGuid                                       INTERNAL_BeamGUID_109_81EAC2D84C4C443CE4111BBCD1A810BD;   // 0x0110(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
