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

// UserDefinedStruct VideoOptions.VideoOptions
// 0x0034
struct FVideoOptions
{
	int                                                Fullscreen_2_29594D21488BFF3B5629C48DA1AC600E;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Resolution_4_50115B614DAD2E0BF024F78C3F10B376;            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResolutionScale_7_7D971AE94A624DA1B40901924FD7CC3C;       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Brightness_9_808F3EE241A647E7F55CBD895C30A429;            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECheckBoxState>                        VSync_26_2891F240424BE3C5F93D548129A51D07;                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                GraphicQuality_15_B4ECB0994E2125F52DFA89AE796111AD;       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ViewDistance_17_D2D4BD0946075E23C658C0BCA5A466A2;         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AntiAliasing_19_D8D839D44CA3F85E75487AA5F75FEF9A;         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PostProcess_21_1769865145FA8B1032D385B118A1F6E3;          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Textures_23_2EE9D96E46EE38C4E3588EB35DC5A083;             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Effects_25_B3DAE1AE4D91D48A4F34DCAAB3EA1E4D;              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Shadows_30_A3A3331348E655F87F651EAF6ED3B9BC;              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlur_33_CF2F640B448B3CF47FB3D68ADC1958BD;           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
