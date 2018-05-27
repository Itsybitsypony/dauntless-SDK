#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_ui_combo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ui_comboArray.ui_comboArray
// 0x0028
struct Fui_comboArray
{
	struct FText                                       ComboArrayName_43_DF404FBA4E936C627A721F9A5D367726;       // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct Fui_combo>                           Combos_42_5E86A06642F4AEB70FC20CA5A44477B2;               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
