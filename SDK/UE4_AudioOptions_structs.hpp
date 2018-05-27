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

// UserDefinedStruct AudioOptions.AudioOptions
// 0x000E
struct FAudioOptions
{
	float                                              VoiceVolume_9_2D36DC9144D1DD07F3E6DC953C5B75E8;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SFXVolume_11_2B04A8EC43961BC588753A8589969D6F;            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MusicVolume_13_B810F897485324F218639DA98942EC95;          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECheckBoxState>                        DynamicRange_19_1207DC764005F36C821A0C9291CE4707;         // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECheckBoxState>                        HeadphoneMode_20_4F6886D840DF7896A88D9C9D44A77A97;        // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
