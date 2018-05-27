#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_inventory_custom_filter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct inventory_custom_filter_wrapper.inventory_custom_filter_wrapper
// 0x0010
struct Finventory_custom_filter_wrapper
{
	TArray<struct Finventory_custom_filter>            CustomFilters_5_6E31ABDC4EFF48184BB68E8215C4C8AE;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
