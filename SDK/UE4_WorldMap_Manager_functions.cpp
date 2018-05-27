// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WorldMap_Manager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldMap_Manager.WorldMap_Manager_C.AdjustMapLocation_NPCs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             MarkerBrush                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               Adjusted_Loc                   (Parm, OutParm, IsPlainOldData)

void UWorldMap_Manager_C::AdjustMapLocation_NPCs(class AActor* Actor, const struct FSlateBrush& MarkerBrush, struct FVector2D* Adjusted_Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.AdjustMapLocation_NPCs");

	UWorldMap_Manager_C_AdjustMapLocation_NPCs_Params params;
	params.Actor = Actor;
	params.MarkerBrush = MarkerBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Adjusted_Loc != nullptr)
		*Adjusted_Loc = params.Adjusted_Loc;
}


// Function WorldMap_Manager.WorldMap_Manager_C.AddQuestGiverMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uinteractable_npc_interface_C> NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Has_Quests                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::AddQuestGiverMarker(const TScriptInterface<class Uinteractable_npc_interface_C>& NPC, bool Has_Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.AddQuestGiverMarker");

	UWorldMap_Manager_C_AddQuestGiverMarker_Params params;
	params.NPC = NPC;
	params.Has_Quests = Has_Quests;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.GetQuestGivers
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::GetQuestGivers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.GetQuestGivers");

	UWorldMap_Manager_C_GetQuestGivers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.AddPlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::AddPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.AddPlayerInfo");

	UWorldMap_Manager_C_AddPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.UpdateMarkers
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::UpdateMarkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.UpdateMarkers");

	UWorldMap_Manager_C_UpdateMarkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.CheckMarkerBounds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Translation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           InBounds                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::CheckMarkerBounds(const struct FVector2D& Translation, bool* InBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.CheckMarkerBounds");

	UWorldMap_Manager_C_CheckMarkerBounds_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBounds != nullptr)
		*InBounds = params.InBounds;
}


// Function WorldMap_Manager.WorldMap_Manager_C.DetectGroundplane
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Vec_X                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Vec_Y                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Vector_Zed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::DetectGroundplane(float Vec_X, float Vec_Y, float* Vector_Zed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.DetectGroundplane");

	UWorldMap_Manager_C_DetectGroundplane_Params params;
	params.Vec_X = Vec_X;
	params.Vec_Y = Vec_Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vector_Zed != nullptr)
		*Vector_Zed = params.Vector_Zed;
}


// Function WorldMap_Manager.WorldMap_Manager_C.AddWaypointInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::AddWaypointInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.AddWaypointInfo");

	UWorldMap_Manager_C_AddWaypointInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.RemoveWaypoint
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::RemoveWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.RemoveWaypoint");

	UWorldMap_Manager_C_RemoveWaypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.UpdateWaypoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::UpdateWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.UpdateWaypoint");

	UWorldMap_Manager_C_UpdateWaypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.VectorReversal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               WaypointLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FSlateBrush             MarkerBrush                    (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          WorldX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          WorldY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::VectorReversal(const struct FVector2D& WaypointLocation, const struct FSlateBrush& MarkerBrush, float* WorldX, float* WorldY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.VectorReversal");

	UWorldMap_Manager_C_VectorReversal_Params params;
	params.WaypointLocation = WaypointLocation;
	params.MarkerBrush = MarkerBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldX != nullptr)
		*WorldX = params.WorldX;
	if (WorldY != nullptr)
		*WorldY = params.WorldY;
}


// Function WorldMap_Manager.WorldMap_Manager_C.AddWayPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::AddWayPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.AddWayPoint");

	UWorldMap_Manager_C_AddWayPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.ClampLimits
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          XValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          YValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ClampedX                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ClampedY                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::ClampLimits(float XValue, float YValue, float* ClampedX, float* ClampedY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.ClampLimits");

	UWorldMap_Manager_C_ClampLimits_Params params;
	params.XValue = XValue;
	params.YValue = YValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClampedX != nullptr)
		*ClampedX = params.ClampedX;
	if (ClampedY != nullptr)
		*ClampedY = params.ClampedY;
}


// Function WorldMap_Manager.WorldMap_Manager_C.CheckPanThreshold
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExceedsDeadZone                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::CheckPanThreshold(const struct FVector2D& Location, bool X, bool* ExceedsDeadZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.CheckPanThreshold");

	UWorldMap_Manager_C_CheckPanThreshold_Params params;
	params.Location = Location;
	params.X = X;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExceedsDeadZone != nullptr)
		*ExceedsDeadZone = params.ExceedsDeadZone;
}


// Function WorldMap_Manager.WorldMap_Manager_C.FastTravelOnClick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonWorldLocation_C*  WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::FastTravelOnClick(class AArchonWorldLocation_C* WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.FastTravelOnClick");

	UWorldMap_Manager_C_FastTravelOnClick_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.Remove Waypoint
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::Remove_Waypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.Remove Waypoint");

	UWorldMap_Manager_C_Remove_Waypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.AdjustmentMaths
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             MarkerBrush                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               AdjustorLocation               (Parm, OutParm, IsPlainOldData)

void UWorldMap_Manager_C::AdjustmentMaths(float X, float Y, const struct FSlateBrush& MarkerBrush, struct FVector2D* AdjustorLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.AdjustmentMaths");

	UWorldMap_Manager_C_AdjustmentMaths_Params params;
	params.X = X;
	params.Y = Y;
	params.MarkerBrush = MarkerBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdjustorLocation != nullptr)
		*AdjustorLocation = params.AdjustorLocation;
}


// Function WorldMap_Manager.WorldMap_Manager_C.AdjustMapLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             MarkerBrush                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               Adjusted_Loc                   (Parm, OutParm, IsPlainOldData)

void UWorldMap_Manager_C::AdjustMapLocation(class AActor* Actor, const struct FSlateBrush& MarkerBrush, struct FVector2D* Adjusted_Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.AdjustMapLocation");

	UWorldMap_Manager_C_AdjustMapLocation_Params params;
	params.Actor = Actor;
	params.MarkerBrush = MarkerBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Adjusted_Loc != nullptr)
		*Adjusted_Loc = params.Adjusted_Loc;
}


// Function WorldMap_Manager.WorldMap_Manager_C.UpdatePlayerMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::UpdatePlayerMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.UpdatePlayerMarker");

	UWorldMap_Manager_C_UpdatePlayerMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.CalcResetCoords
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Adjusted_X                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Adjusted_Y                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::CalcResetCoords(float* Adjusted_X, float* Adjusted_Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.CalcResetCoords");

	UWorldMap_Manager_C_CalcResetCoords_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Adjusted_X != nullptr)
		*Adjusted_X = params.Adjusted_X;
	if (Adjusted_Y != nullptr)
		*Adjusted_Y = params.Adjusted_Y;
}


// Function WorldMap_Manager.WorldMap_Manager_C.ResetDeadZone
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::ResetDeadZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.ResetDeadZone");

	UWorldMap_Manager_C_ResetDeadZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.ResetMap
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::ResetMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.ResetMap");

	UWorldMap_Manager_C_ResetMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.MouseMoveCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::MouseMoveCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.MouseMoveCheck");

	UWorldMap_Manager_C_MouseMoveCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.AdjusttoCursor
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::AdjusttoCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.AdjusttoCursor");

	UWorldMap_Manager_C_AdjusttoCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.GetWidgetBounds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MinX                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MinY                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxX                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxY                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::GetWidgetBounds(float* MinX, float* MinY, float* MaxX, float* MaxY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.GetWidgetBounds");

	UWorldMap_Manager_C_GetWidgetBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinX != nullptr)
		*MinX = params.MinX;
	if (MinY != nullptr)
		*MinY = params.MinY;
	if (MaxX != nullptr)
		*MaxX = params.MaxX;
	if (MaxY != nullptr)
		*MaxY = params.MaxY;
}


// Function WorldMap_Manager.WorldMap_Manager_C.GetMapSizeOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::GetMapSizeOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.GetMapSizeOffset");

	UWorldMap_Manager_C_GetMapSizeOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.GetCoords
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Coord_X                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Coord_Y                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Mouse_X                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Mouse_Y                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::GetCoords(float* Coord_X, float* Coord_Y, float* Mouse_X, float* Mouse_Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.GetCoords");

	UWorldMap_Manager_C_GetCoords_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Coord_X != nullptr)
		*Coord_X = params.Coord_X;
	if (Coord_Y != nullptr)
		*Coord_Y = params.Coord_Y;
	if (Mouse_X != nullptr)
		*Mouse_X = params.Mouse_X;
	if (Mouse_Y != nullptr)
		*Mouse_Y = params.Mouse_Y;
}


// Function WorldMap_Manager.WorldMap_Manager_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.Initialize");

	UWorldMap_Manager_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.DragMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               LocationVector                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWorldMap_Manager_C::DragMap(const struct FVector2D& LocationVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.DragMap");

	UWorldMap_Manager_C_DragMap_Params params;
	params.LocationVector = LocationVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.ZoomMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisInput                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::ZoomMap(float AxisInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.ZoomMap");

	UWorldMap_Manager_C_ZoomMap_Params params;
	params.AxisInput = AxisInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.ToggleOff
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::ToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.ToggleOff");

	UWorldMap_Manager_C_ToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.ToggleOn
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::ToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.ToggleOn");

	UWorldMap_Manager_C_ToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.AddLocationMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonWorldLocation_C*  World_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Discovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::AddLocationMarker(class AArchonWorldLocation_C* World_Location, bool Discovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.AddLocationMarker");

	UWorldMap_Manager_C_AddLocationMarker_Params params;
	params.World_Location = World_Location;
	params.Discovered = Discovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.AddMarkers
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::AddMarkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.AddMarkers");

	UWorldMap_Manager_C_AddMarkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.GetLocations
// (Public, BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::GetLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.GetLocations");

	UWorldMap_Manager_C_GetLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.ReceiveTick");

	UWorldMap_Manager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UWorldMap_Manager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.ReceiveBeginPlay");

	UWorldMap_Manager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.OnQuestSystemReady
// (BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::OnQuestSystemReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.OnQuestSystemReady");

	UWorldMap_Manager_C_OnQuestSystemReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.OnPlayerControllerReady
// (BlueprintCallable, BlueprintEvent)

void UWorldMap_Manager_C::OnPlayerControllerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.OnPlayerControllerReady");

	UWorldMap_Manager_C_OnPlayerControllerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldMap_Manager.WorldMap_Manager_C.ExecuteUbergraph_WorldMap_Manager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWorldMap_Manager_C::ExecuteUbergraph_WorldMap_Manager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Manager.WorldMap_Manager_C.ExecuteUbergraph_WorldMap_Manager");

	UWorldMap_Manager_C_ExecuteUbergraph_WorldMap_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
