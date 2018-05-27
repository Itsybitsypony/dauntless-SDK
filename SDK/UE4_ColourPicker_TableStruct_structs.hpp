#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ColourPicker_TableStruct.ColourPicker_TableStruct
// 0x0088
struct FColourPicker_TableStruct
{
	struct FName                                       ColorPicker_EntitlementTag_48_E74AE9334D6AD1D3357E3FA7BAA94592;// 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      UIName_12_1E872EB84B780A2AC34D7098AC02107D;               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture*                                    UI_Icon_54_F787CDF5462698B1370D86B1EE77946F;              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ColourPalette_55_1A465B3C471843EA6FADDBBF261C732F;        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSwitchParam1_37_B56B364D4E8D053FEB41D8AEE9BAEA03; // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSwitchParam2_36_090A3C3F47FF846A32C455B3ACC0FAA6; // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultColour1_18_CCE9D10C4A9126D2A8C93B8E71180A17;       // 0x0038(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                DefaultColour2_20_0C9E8363453FED22320756A2CC379291;       // 0x0048(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                DefaultColour3_22_A3F60ECA4BCA6B574E121DAB26F11450;       // 0x0058(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                DefaultColour4_24_7E2FB2AC4A80BBE33C59F7B8CB93A5B6;       // 0x0068(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class UTexture*>                            ImageTable_50_8D64919340F833B77C90838F1D8697C2;           // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
