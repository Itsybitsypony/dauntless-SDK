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

// UserDefinedStruct w_tabs_data_struct.w_tabs_data_struct
// 0x0058
struct Fw_tabs_data_struct
{
	struct FText                                       DisplayName_3_D7EF3848447CA437009A9182E297E03D;           // 0x0000(0x0018) (Edit, BlueprintVisible)
	class FString                                      RequiredInventoryItem_6_A19D4F7047E9126DC3E5C68E0A29D4F1; // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       LockedTooltipName_11_BBCED269419CEFA17E41D38A97BA1760;    // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       LockedTooltipDescription_9_900E76F34118140AD39E36AEE16A8522;// 0x0040(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
