#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_loot_condition_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct pickup_notification_item_number_struct.pickup_notification_item_number_struct
// 0x0015
struct Fpickup_notification_item_number_struct
{
	class FString                                      ItemID_3_FB8C7F1A46D14DB656CDE7B0373A5A70;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Amount_5_051BE77849A355827087DE968E24FDC1;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eloot_condition_type>                  Condition_8_48EF5E3D45E0E908F3F66FB5D48ACBB8;             // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
