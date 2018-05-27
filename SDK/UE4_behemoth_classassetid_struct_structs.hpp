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

// UserDefinedStruct behemoth_classassetid_struct.behemoth_classassetid_struct
// 0x0028
struct Fbehemoth_classassetid_struct
{
	struct FName                                       BehemothName_3_86485695477D853212E8D38E3B18DC5C;          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            BehemothClassAssetID_11_143AFC274EBD5D5204A53FA6FF782B4E; // 0x0008(0x0020) (Edit, BlueprintVisible, DisableEditOnTemplate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
