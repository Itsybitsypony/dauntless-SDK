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

// UserDefinedStruct behemoth_anim_variables_struc.behemoth_anim_variables_struc
// 0x0054
struct Fbehemoth_anim_variables_struc
{
	float                                              Speed_2_C289792F49F47D26C6AD3FA322A096E1;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtTarget_6_6B74AC8245FF29C681C807A06116EFA0;          // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SmoothedLookAtTarget_21_F23C96814CF5E73C2CAC27B247A28BA3; // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LookAtAlpha_9_8DB1EFC143E1728209E6A5A4A0BF12B9;           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtInterSpeed_24_9457D01342617B2610B379B74D6146D0;     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInjured_11_AB21944E4095421EF46F53B424DED6F7;            // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InAir__13_E8B48D3C4556866CF667958C825BDE37;               // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableIkinema_15_A7E153BC455B31B91CD03081F8B7CBCF;        // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
	float                                              CurveAlpha_18_DF7504AB4C889685387854A1A524D01F;           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthPercentageForImpactScaleStart_31_2E2CDBC5418F2564DCBE899315CB782C;// 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthPercentageForImpactScaleEnd_32_A61AFE3F4BA1F9F5F43BEF9A1006439E;// 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxImpactScale_36_347352824A02F1F86A2BC49293D38550;       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactScale_39_7F61105E47C270FC61B522987BAFE258;          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InCombat_42_ADBE54FA40B70BD3C9E835820B5578A6;             // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              VoiceVolume_45_DD86E6F14A4F7E7071033C98F1DD0897;          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoiceVolumeAlpha_47_E27A484342E7DD952E0B2C8A4831F3EA;     // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IKinemaGlobalAlpha_52_CADEE95647F2A9B14AE4189213388B51;   // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnRadius_55_4C2732D84716757BC20DF59E87F29756;           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BehemothScale_58_4B3C83684EB998E2DED42385657EC2A9;        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
