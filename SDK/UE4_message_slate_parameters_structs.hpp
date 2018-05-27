#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_message_slate_image_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct message_slate_parameters.message_slate_parameters
// 0x0090
struct Fmessage_slate_parameters
{
	struct FText                                       Title_2_134A74CC4C9B1154A3A8629927BE8D9B;                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Subtitle_4_026580C74E0972D5596AB786BB864F00;              // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       PrimaryCopy_6_4A1B22D14D010154717EC59BDB5826FF;           // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SecondaryCopy_8_91E0A70F479E03A0EC06B38545F54DF5;         // 0x0048(0x0018) (Edit, BlueprintVisible)
	TArray<struct Fmessage_slate_image>                Images_12_82D9B0B845E3B7F7AD0F789FBC615EAB;               // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class UTexture2D>                        Background_16_A1E926244085A06A4ED7F39B95E14078;           // 0x0070(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
