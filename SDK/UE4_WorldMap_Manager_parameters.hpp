#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WorldMap_Manager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WorldMap_Manager.WorldMap_Manager_C.AdjustMapLocation_NPCs
struct UWorldMap_Manager_C_AdjustMapLocation_NPCs_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 MarkerBrush;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                                   Adjusted_Loc;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.AddQuestGiverMarker
struct UWorldMap_Manager_C_AddQuestGiverMarker_Params
{
	TScriptInterface<class Uinteractable_npc_interface_C> NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Has_Quests;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.GetQuestGivers
struct UWorldMap_Manager_C_GetQuestGivers_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.AddPlayerInfo
struct UWorldMap_Manager_C_AddPlayerInfo_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.UpdateMarkers
struct UWorldMap_Manager_C_UpdateMarkers_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.CheckMarkerBounds
struct UWorldMap_Manager_C_CheckMarkerBounds_Params
{
	struct FVector2D                                   Translation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               InBounds;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.DetectGroundplane
struct UWorldMap_Manager_C_DetectGroundplane_Params
{
	float                                              Vec_X;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Vec_Y;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Vector_Zed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.AddWaypointInfo
struct UWorldMap_Manager_C_AddWaypointInfo_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.RemoveWaypoint
struct UWorldMap_Manager_C_RemoveWaypoint_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.UpdateWaypoint
struct UWorldMap_Manager_C_UpdateWaypoint_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.VectorReversal
struct UWorldMap_Manager_C_VectorReversal_Params
{
	struct FVector2D                                   WaypointLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FSlateBrush                                 MarkerBrush;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              WorldX;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              WorldY;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.AddWayPoint
struct UWorldMap_Manager_C_AddWayPoint_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.ClampLimits
struct UWorldMap_Manager_C_ClampLimits_Params
{
	float                                              XValue;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              YValue;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClampedX;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ClampedY;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.CheckPanThreshold
struct UWorldMap_Manager_C_CheckPanThreshold_Params
{
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExceedsDeadZone;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.FastTravelOnClick
struct UWorldMap_Manager_C_FastTravelOnClick_Params
{
	class AArchonWorldLocation_C*                      WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.Remove Waypoint
struct UWorldMap_Manager_C_Remove_Waypoint_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.AdjustmentMaths
struct UWorldMap_Manager_C_AdjustmentMaths_Params
{
	float                                              X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 MarkerBrush;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                                   AdjustorLocation;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.AdjustMapLocation
struct UWorldMap_Manager_C_AdjustMapLocation_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 MarkerBrush;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                                   Adjusted_Loc;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.UpdatePlayerMarker
struct UWorldMap_Manager_C_UpdatePlayerMarker_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.CalcResetCoords
struct UWorldMap_Manager_C_CalcResetCoords_Params
{
	float                                              Adjusted_X;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Adjusted_Y;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.ResetDeadZone
struct UWorldMap_Manager_C_ResetDeadZone_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.ResetMap
struct UWorldMap_Manager_C_ResetMap_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.MouseMoveCheck
struct UWorldMap_Manager_C_MouseMoveCheck_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.AdjusttoCursor
struct UWorldMap_Manager_C_AdjusttoCursor_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.GetWidgetBounds
struct UWorldMap_Manager_C_GetWidgetBounds_Params
{
	float                                              MinX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MinY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.GetMapSizeOffset
struct UWorldMap_Manager_C_GetMapSizeOffset_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.GetCoords
struct UWorldMap_Manager_C_GetCoords_Params
{
	float                                              Coord_X;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Coord_Y;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Mouse_X;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Mouse_Y;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.Initialize
struct UWorldMap_Manager_C_Initialize_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.DragMap
struct UWorldMap_Manager_C_DragMap_Params
{
	struct FVector2D                                   LocationVector;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.ZoomMap
struct UWorldMap_Manager_C_ZoomMap_Params
{
	float                                              AxisInput;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.ToggleOff
struct UWorldMap_Manager_C_ToggleOff_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.ToggleOn
struct UWorldMap_Manager_C_ToggleOn_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.AddLocationMarker
struct UWorldMap_Manager_C_AddLocationMarker_Params
{
	class AArchonWorldLocation_C*                      World_Location;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Discovered;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.AddMarkers
struct UWorldMap_Manager_C_AddMarkers_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.GetLocations
struct UWorldMap_Manager_C_GetLocations_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.ReceiveTick
struct UWorldMap_Manager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorldMap_Manager.WorldMap_Manager_C.ReceiveBeginPlay
struct UWorldMap_Manager_C_ReceiveBeginPlay_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.OnQuestSystemReady
struct UWorldMap_Manager_C_OnQuestSystemReady_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.OnPlayerControllerReady
struct UWorldMap_Manager_C_OnPlayerControllerReady_Params
{
};

// Function WorldMap_Manager.WorldMap_Manager_C.ExecuteUbergraph_WorldMap_Manager
struct UWorldMap_Manager_C_ExecuteUbergraph_WorldMap_Manager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
