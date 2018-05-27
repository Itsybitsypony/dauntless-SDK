#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_items_generic_struct_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_PlayerInventoryEntry.Struct_PlayerInventoryEntry
// 0x0024
struct FStruct_PlayerInventoryEntry
{
	struct Fitems_generic_struct                       ItemStruct_7_64E61E0C41F084F2E74333918B18CBA8;            // 0x0000(0x0020) (Edit, BlueprintVisible)
	int                                                Quantity_5_0D2E767747328FFA00D9C187FA163A9A;              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
