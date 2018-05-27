#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_LoadoutStatTypes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct LoadoutStat_Type_struct.LoadoutStat_Type_struct
// 0x0058
struct FLoadoutStat_Type_struct
{
	TEnumAsByte<ELoadoutStatTypes>                     StatType_3_F07A15034305594D76FC9391786F0131;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        Icon_6_5FB2F03C4C8CDA56BACD88BF2D616C0F;                  // 0x0008(0x0020) (Edit, BlueprintVisible)
	struct FText                                       Name_10_A297A7824A83579AB8B8FC922CE815CD;                 // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_12_DCB72DE7430C9B00770955ACA646472F;          // 0x0040(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
