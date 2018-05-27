#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_SlateCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ControlsOptions.ControlsOptions
// 0x0008
struct FControlsOptions
{
	TEnumAsByte<ECheckBoxState>                        GamepadYInvert_11_E090F7184646D0F84A511AAC76E670FD;       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECheckBoxState>                        GamepadXInvert_10_FBA2EE3B432E45A89084CFA585F60F9B;       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECheckBoxState>                        MouseYInvert_9_5BA6A1034F75D5D084C0D182E5FDA59B;          // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECheckBoxState>                        MouseXInvert_8_349FB177454F6F5D2D39149C21938398;          // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraSensitivity_7_91394FA440ECB6CE5976AF8FEB6CEEA1;     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
