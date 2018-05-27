#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_LocalMap_Manager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LocalMap_Manager.LocalMap_Manager_C
// 0x0048 (0x0218 - 0x01D0)
class ULocalMap_Manager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	class Aplayer_controller_city_bp_C*                Controller;                                               // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AArchonWorldLocation_C*                      ActiveLocation;                                           // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class Ubpw_Compass_C*                              CompassWidget;                                            // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Ubpw_LocalMap_C*                             LocalMapWidget;                                           // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Ubpw_WorldMap_C*                             WorldMapWidget;                                           // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LocalMap;                                                 // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Uw_PlayerMarker_C*                           PlayerMarker;                                             // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    PlayerMarkerMaterial;                                     // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LocalMap_Manager.LocalMap_Manager_C");
		return ptr;
	}


	void ToggleOff();
	void ToggleOn();
	void AddPlayerMarkerInfo();
	void GetMapScale(float* Scale);
	void Update_Location();
	void Initialize();
	void UpdatePlayerLocation();
	void UpdatePlayerRotation();
	void LocationCheck();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_LocalMap_Manager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
