#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_SlateCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct pickup_notification_coloration_struct.pickup_notification_coloration_struct
// 0x0048
struct Fpickup_notification_coloration_struct
{
	struct FLinearColor                                BackgroundColor_15_14DE8A3F45159A79A63A07A0C65FAD85;      // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                BorderColor_16_FAD5980E4420FCCCD5792499827959A7;          // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateColor                                 TextColor_18_699D482540298D176B4EBA974B23638F;            // 0x0020(0x0028) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
