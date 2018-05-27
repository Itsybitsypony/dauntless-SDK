#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_ui_combo_inputtype_classes.hpp"
#include "UE4_ui_combo_keytype_classes.hpp"
#include "UE4_ui_combo_effect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ui_combo_input_concept.ui_combo_input_concept
// 0x0003
struct Fui_combo_input_concept
{
	TEnumAsByte<Eui_combo_inputtype>                   InputType_2_0EAEF2854EC476A07FEFDE8F46EB1EE2;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eui_combo_keytype>                     KeyType_9_1581FD754709E540702D858CAE56476A;               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eui_combo_effect>                      Causes_AdditionalEffect_13_583DD69E498264C578627C9DB778B9E0;// 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
