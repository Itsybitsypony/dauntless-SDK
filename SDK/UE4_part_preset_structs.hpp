#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_behemoth_bodypart_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct part_preset.part_preset
// 0x001A
struct Fpart_preset
{
	float                                              PercentOfMaxHealth_2_2B983E954D721195347340B6FD743C85;    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlamePercentOfMaxHealth_33_DF0395A94260D62F237BE5B29A1743AE;// 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrostPercentOfMaxHealth_36_ABBFA0E048946D93CB72ED9A60B57988;// 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShockPercentOfMaxHealth_37_AE02A42147274BB09A9DD789CA92F103;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExposeThresholdPercentOfMaxHealth_26_857E84DA497C6A1427B315BFE95A41D2;// 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerMultiplier_19_A92E197D4CBEF000759654916B08881A;    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreThePresetValuesThisPartHasCustomProperties_21_961E56F34C3AE11B9A9F65A6F47E49F6;// 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_bodypart_type>               BodyPartType_30_83DE864F4C49415131F2EBBABD1C3AC8;         // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
