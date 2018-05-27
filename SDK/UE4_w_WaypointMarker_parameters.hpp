#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_WaypointMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_WaypointMarker.w_WaypointMarker_C.OnMouseButtonDown
struct Uw_WaypointMarker_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_WaypointMarker.w_WaypointMarker_C.GetWOrldMapManager
struct Uw_WaypointMarker_C_GetWOrldMapManager_Params
{
};

// Function w_WaypointMarker.w_WaypointMarker_C.Construct
struct Uw_WaypointMarker_C_Construct_Params
{
};

// Function w_WaypointMarker.w_WaypointMarker_C.ExecuteUbergraph_w_WaypointMarker
struct Uw_WaypointMarker_C_ExecuteUbergraph_w_WaypointMarker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
