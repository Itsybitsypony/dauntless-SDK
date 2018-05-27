#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct CC_HeadBlendTargets.CC_HeadBlendTargets
// 0x0030
struct FCC_HeadBlendTargets
{
	struct FText                                       UI_Label_19_46CF9918418F06417E181AA59DD24A2F;             // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       HeadMorph_8_C0605E1B4B3D92564B0460AC45BDA90E;             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MorphRange_11_F869B1F641E96578F535ED836ED4B186;           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UTexture2D*                                  HeadSwatch_Icon_22_6410DD224A0DF2659D9F72A14537A31F;      // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
