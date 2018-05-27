#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_WorldMap_Manager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldMap_Manager.WorldMap_Manager_C
// 0x0100 (0x02D0 - 0x01D0)
class UWorldMap_Manager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	class Aplayer_controller_bp_C*                     Controller;                                               // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWaypoint_C*                                 Waypoint_Actor;                                           // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class Ubpw_Compass_C*                              Compass_Widget;                                           // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Ubpw_WorldMap_C*                             World_Map_Widget;                                         // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UOverlay*                                    Map_Markers_Overlay;                                      // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    World_map;                                                // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      Player_Marker;                                            // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImage*                                      Waypoint_Marker;                                          // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AArchonWorldLocation_C*>              Locations_Discovered;                                     // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AArchonWorldLocation_C*>              Locations_Displayed;                                      // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector2D                                   WorldCenter;                                              // 0x0238(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WorldDimensions;                                          // 0x0240(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartZoomedIn;                                            // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	float                                              ZoomStep;                                                 // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomDeadZone;                                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PanStep;                                                  // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PanDeadZone;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DragDelay;                                                // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MouseWithinBounds;                                        // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVisible;                                                // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0262(0x0002) MISSED OFFSET
	struct FVector2D                                   MouseHitCoords;                                           // 0x0264(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Zoom;                                             // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MapSizeOffset;                                            // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseX;                                                    // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseY;                                                    // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseX;                                                     // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseY;                                                     // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadzoneX;                                                // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadzoneY;                                                // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              QuestNPCs;                                                // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              QuestRedeemers;                                           // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              QuestGivers;                                              // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldMap_Manager.WorldMap_Manager_C");
		return ptr;
	}


	void AdjustMapLocation_NPCs(class AActor* Actor, const struct FSlateBrush& MarkerBrush, struct FVector2D* Adjusted_Loc);
	void AddQuestGiverMarker(const TScriptInterface<class Uinteractable_npc_interface_C>& NPC, bool Has_Quests);
	void GetQuestGivers();
	void AddPlayerInfo();
	void UpdateMarkers();
	void CheckMarkerBounds(const struct FVector2D& Translation, bool* InBounds);
	void DetectGroundplane(float Vec_X, float Vec_Y, float* Vector_Zed);
	void AddWaypointInfo();
	void RemoveWaypoint();
	void UpdateWaypoint();
	void VectorReversal(const struct FVector2D& WaypointLocation, const struct FSlateBrush& MarkerBrush, float* WorldX, float* WorldY);
	void AddWayPoint();
	void ClampLimits(float XValue, float YValue, float* ClampedX, float* ClampedY);
	void CheckPanThreshold(const struct FVector2D& Location, bool X, bool* ExceedsDeadZone);
	void FastTravelOnClick(class AArchonWorldLocation_C* WorldLocation);
	void Remove_Waypoint();
	void AdjustmentMaths(float X, float Y, const struct FSlateBrush& MarkerBrush, struct FVector2D* AdjustorLocation);
	void AdjustMapLocation(class AActor* Actor, const struct FSlateBrush& MarkerBrush, struct FVector2D* Adjusted_Loc);
	void UpdatePlayerMarker();
	void CalcResetCoords(float* Adjusted_X, float* Adjusted_Y);
	void ResetDeadZone();
	void ResetMap();
	void MouseMoveCheck();
	void AdjusttoCursor();
	void GetWidgetBounds(float* MinX, float* MinY, float* MaxX, float* MaxY);
	void GetMapSizeOffset();
	void GetCoords(float* Coord_X, float* Coord_Y, float* Mouse_X, float* Mouse_Y);
	void Initialize();
	void DragMap(const struct FVector2D& LocationVector);
	void ZoomMap(float AxisInput);
	void ToggleOff();
	void ToggleOn();
	void AddLocationMarker(class AArchonWorldLocation_C* World_Location, bool Discovered);
	void AddMarkers();
	void GetLocations();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnQuestSystemReady();
	void OnPlayerControllerReady();
	void ExecuteUbergraph_WorldMap_Manager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
