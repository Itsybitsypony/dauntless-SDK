#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_ui_combo_input_concept_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ui_combo.ui_combo
// 0x0058
struct Fui_combo
{
	struct FText                                       ComboName_32_CD99B6B4402B7D7EDD3AB99C20FAC95F;            // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ComboDescription_33_ECCA37C84684DD0DAA9FB29A0FC86012;     // 0x0018(0x0018) (Edit, BlueprintVisible)
	TArray<struct Fui_combo_input_concept>             Inputs_31_72C9B3724175FC055FAA53BCC3A661A5;               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       SpecialNoteText_34_5E86A06642F4AEB70FC20CA5A44477B2;      // 0x0040(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
