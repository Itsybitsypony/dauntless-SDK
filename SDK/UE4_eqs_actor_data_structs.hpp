#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_eqs_gameplay_data_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct eqs_actor_data.eqs_actor_data
// 0x00C2
struct Feqs_actor_data
{
	class UClass*                                      ActorClass_7_8C276A5B4CE653A0EB2CB3A9C7796522;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct Feqs_gameplay_data                          EQSGameplayData_5_78325A4B497F5F9C59A62989CA00063C;       // 0x0010(0x00B0) (Edit, BlueprintVisible)
	bool                                               AttachToGround_10_9E1A694C4B04FE6246E0858D33E92872;       // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlignWithGround_12_010DD8C1450CF8F0EF2912803FDA1F58;      // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
