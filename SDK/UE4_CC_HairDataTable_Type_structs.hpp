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

// UserDefinedStruct CC_HairDataTable_Type.CC_HairDataTable_Type
// 0x0088
struct FCC_HairDataTable_Type
{
	struct FText                                       SliderLabel_6_91D597394D15F311592A34AF973A31C3;           // 0x0000(0x0018) (Edit, BlueprintVisible)
	TMap<EArchonBodyType, TAssetPtr<class USkeletalMesh>> BodyTypeData_30_65B9FF3448BE642D1D70ED98CEAA49C3;         // 0x0018(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class UTexture2D>                        UI_Icon_16_F9C1C1CC4CA2645F09E2A78F32E6063E;              // 0x0068(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
