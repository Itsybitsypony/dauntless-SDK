#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_select_montage_from_angle_str_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct pivot_anim_set.pivot_anim_set
// 0x0018
struct Fpivot_anim_set
{
	struct FName                                       SetName_8_1CB3436846A71A9BF0FE1A9AC26C4FED;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct Fselect_montage_from_angle_str>      PivotData_4_3ED2CE954F32DECA748B0C8AB7B256DD;             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
