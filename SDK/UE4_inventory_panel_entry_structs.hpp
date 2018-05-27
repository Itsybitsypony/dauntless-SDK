#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_inventory_custom_filter_wrapper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct inventory_panel_entry.inventory_panel_entry
// 0x0038
struct Finventory_panel_entry
{
	struct FText                                       HeaderName_8_D299B3CA4E7E3E70AF3B8B9773AF2201;            // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<TEnumAsByte<EItemGroupType>>                ItemKinds_10_F3306CB1427AB2C43A173C82F8FE37E4;            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct Finventory_custom_filter_wrapper            CustomFilters_13_5154B28B41B46AE5D98DDB98AB79F7A1;        // 0x0028(0x0010) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
