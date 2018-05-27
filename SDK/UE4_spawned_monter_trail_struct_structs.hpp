#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct spawned_monter_trail_struct.spawned_monter_trail_struct
// 0x0014
struct Fspawned_monter_trail_struct
{
	class UNotify_MonsterTrails_C*                     MonsterTrailNotify_17_6F47206D4D152AB85AC9ADAB3AC7C45D;   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemComponent_6_60606CF34CC1D8ED4F7A54B4225C6785;// 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Delay_9_570FE54844DAB8066A04AEB71764DE4C;                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
