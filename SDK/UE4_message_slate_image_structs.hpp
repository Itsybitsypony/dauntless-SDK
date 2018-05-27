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

// UserDefinedStruct message_slate_image.message_slate_image
// 0x0038
struct Fmessage_slate_image
{
	TAssetPtr<class UTexture2D>                        Texture_2_125083654C067B0D458F6D84E472745F;               // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FText                                       Caption_5_8470709D4E80825899F1CF8A071088C4;               // 0x0020(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
