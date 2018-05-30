#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_eqs_actor_data_classes.hpp"
#include "UE4_AIModule_classes.hpp"
#include "UE4_eqs_aimed_projectile_data_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_eqs_gameplay_type_classes.hpp"
#include "UE4_relative_or_world_classes.hpp"
#include "UE4_eqs_lobbed_projectile_data_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct timed_gameplay_event.timed_gameplay_event
// 0x0290
struct Ftimed_gameplay_event
{
	float                                              Delay_2_0F6FEF5E4DB6107E59994DB604FB9EA9;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UEnvQuery*                                   EQSTargetting_18_D3A83F2943DBCFF829F124A10BFA4803;        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      EQSTargettingParams_38_5FA7000D4DE61ADAAB39238BAB512ABC;  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             ManualTargetting_20_06ABC6B4463C399C7575658CA6622FB7;     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Erelative_or_world>                    ManualTargettingType_42_C3D45180476D4A6DB3BD3080C7F555A0; // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eeqs_gameplay_type>                    GameplayType_32_3EE299684A9BC408D65D888BCBBEB2EC;         // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0032(0x000E) MISSED OFFSET
	struct Feqs_lobbed_projectile_data                 LobbedProjectileInfo_23_EC0188BC4786F781D0D897A7DFB43D46; // 0x0040(0x00C0) (Edit, BlueprintVisible)
	struct Feqs_aimed_projectile_data                  AimedProjectileInfo_30_983C2C0343E6459A2221A9831F2A3508;  // 0x0100(0x00C0) (Edit, BlueprintVisible)
	struct Feqs_actor_data                             ActorInfo_31_0EEBB19C4EDD50DC292E4099BAEF8418;            // 0x01C0(0x00D0) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
