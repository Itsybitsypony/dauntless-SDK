#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_Compass_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_Compass.bpw_Compass_C.Draw Compass Marker
struct Ubpw_Compass_C_Draw_Compass_Marker_Params
{
	class UMarkerComponent*                            Marker_Component;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_Compass.bpw_Compass_C.Construct
struct Ubpw_Compass_C_Construct_Params
{
};

// Function bpw_Compass.bpw_Compass_C.Tick
struct Ubpw_Compass_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_Compass.bpw_Compass_C.ExecuteUbergraph_bpw_Compass
struct Ubpw_Compass_C_ExecuteUbergraph_bpw_Compass_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
