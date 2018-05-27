#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_inventory_custom_filter_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct inventory_custom_filter.inventory_custom_filter
// 0x0028
struct Finventory_custom_filter
{
	TEnumAsByte<Einventory_custom_filter_type>         CustomFilterType_2_87D39E784114742575459B922F14AF79;      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                FilterIntData_5_ED2E4230475418A059D67685671E7790;         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              FilterRequireTags_14_B4585B6B4EEEE008679E21A2880B2699;    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              FilterExcludeTags_15_6A7069C449BE7933DADD14A147C3F6A4;    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
