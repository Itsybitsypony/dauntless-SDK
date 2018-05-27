#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_eqs_gameplay_type_classes.hpp"
#include "UE4_eqs_lobbed_projectile_data_classes.hpp"
#include "UE4_eqs_aimed_projectile_data_classes.hpp"
#include "UE4_eqs_actor_data_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct eqs_spawn_query.eqs_spawn_query
// 0x0284
struct Feqs_spawn_query
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance_2_B649D69A4FDC360C9FC419AA1A4A4214;         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ugameplay_targetting_data_C*                 GameplayTargettingData_30_1D96AD6548888164636301BB679194B6;// 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eeqs_gameplay_type>                    GameplayType_10_4CD6666F475FD03BC1F7E2B6BBFB9D75;         // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	struct Feqs_lobbed_projectile_data                 LobbedProjectileInfo_19_AB7C4FC34B0ACEFBB48EAAB08234D4DF; // 0x0020(0x00C0) (Edit, BlueprintVisible)
	struct Feqs_aimed_projectile_data                  AimedProjectileInfo_17_E6E5141B4B8DF8369BE96BA33275D51E;  // 0x00E0(0x00C0) (Edit, BlueprintVisible)
	struct Feqs_actor_data                             ActorInfo_24_45AD2FA9422265E1B131EC816DFCE380;            // 0x01A0(0x00D0) (Edit, BlueprintVisible)
	struct FGuid                                       GUID_27_D83A2D274864C70BC64ED3AF2CE3F61F;                 // 0x0270(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Delay_33_26E9791249EAF3CACD0282AA536F7F8F;                // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
