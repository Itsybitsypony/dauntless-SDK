#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_compass_marker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_compass_marker.w_compass_marker_C.Construct
struct Uw_compass_marker_C_Construct_Params
{
};

// Function w_compass_marker.w_compass_marker_C.New Brush
struct Uw_compass_marker_C_New_Brush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_compass_marker.w_compass_marker_C.ExecuteUbergraph_w_compass_marker
struct Uw_compass_marker_C_ExecuteUbergraph_w_compass_marker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
