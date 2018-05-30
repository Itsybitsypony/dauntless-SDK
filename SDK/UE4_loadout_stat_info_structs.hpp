#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_LoadoutStatTypes_classes.hpp"
#include "UE4_stat_value_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct loadout_stat_info.loadout_stat_info
// 0x0006
struct Floadout_stat_info
{
	float                                              Value_3_2C8D24714A8196477F2BB080469C2F37;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELoadoutStatTypes>                     LoadoutStat_6_8C4B4B5B4E631D837B234FADA252AD78;           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estat_value_type>                      StatValueType_9_B4440A4544AD581CAFF8C5AA1573D9F1;         // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
