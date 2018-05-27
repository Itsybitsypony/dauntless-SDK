#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_paperdoll_scene_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass paperdoll_scene_component.paperdoll_scene_component_C
// 0x0010 (0x01E0 - 0x01D0)
class Upaperdoll_scene_component_C : public UActorComponent
{
public:
	class AActor*                                      OriginalViewTarget;                                       // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AUI_paperdoll_bp_C*                          Paperdoll;                                                // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass paperdoll_scene_component.paperdoll_scene_component_C");
		return ptr;
	}


	void HidePaperdollScene();
	void ShowPaperdollScene(bool ShowCharacter, bool ShowWeapon, TEnumAsByte<Epaperdoll_camera_location> CameraLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
