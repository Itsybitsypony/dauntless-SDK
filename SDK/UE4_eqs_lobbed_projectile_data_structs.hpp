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

// UserDefinedStruct eqs_lobbed_projectile_data.eqs_lobbed_projectile_data
// 0x00C0
struct Feqs_lobbed_projectile_data
{
	class UClass*                                      LobbedProjectileClass_2_8C276A5B4CE653A0EB2CB3A9C7796522; // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct Feqs_gameplay_data                          EQSGameplayData_5_78325A4B497F5F9C59A62989CA00063C;       // 0x0010(0x00B0) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
