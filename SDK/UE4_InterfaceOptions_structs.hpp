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

// UserDefinedStruct InterfaceOptions.InterfaceOptions
// 0x0018
struct FInterfaceOptions
{
	int                                                UIDisplayMode_11_B48BE8AE41435CB9EF343E85A49659DC;        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Gamepad_14_E3CAD4334144BB7374CFFEA2EC7CD999;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECheckBoxState>                        Profantity_13_21229B1244CB1E62017BF7BCF45B3ABA;           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ChatWindowOpacity_15_1A553FA84AA2E79C12BFB390D56A6C44;    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChatTextSize_16_2E77620B44ADA192EC9785B74AF211EB;         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ColourBlindMode_17_9F49378D455E219995AA8CAAB20FE64C;      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
