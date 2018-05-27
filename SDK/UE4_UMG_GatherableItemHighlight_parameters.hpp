#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_UMG_GatherableItemHighlight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UMG_GatherableItemHighlight.UMG_GatherableItemHighlight_C.Construct
struct UUMG_GatherableItemHighlight_C_Construct_Params
{
};

// Function UMG_GatherableItemHighlight.UMG_GatherableItemHighlight_C.Tick
struct UUMG_GatherableItemHighlight_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_GatherableItemHighlight.UMG_GatherableItemHighlight_C.ExecuteUbergraph_UMG_GatherableItemHighlight
struct UUMG_GatherableItemHighlight_C_ExecuteUbergraph_UMG_GatherableItemHighlight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
