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

// UserDefinedStruct ActorAnimRefPair.ActorAnimRefPair
// 0x0028
struct FActorAnimRefPair
{
	class AActor*                                      Actor_2_22252EEF46714B2B72FBC0AB81E0DBF3;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TAssetPtr<class UAnimSequenceBase>                 AnimSequenceRef_6_AD7D58A14B70D7CC65281B855F9C2596;       // 0x0008(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
