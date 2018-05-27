#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_paperdoll_scene_component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function paperdoll_scene_component.paperdoll_scene_component_C.HidePaperdollScene
struct Upaperdoll_scene_component_C_HidePaperdollScene_Params
{
};

// Function paperdoll_scene_component.paperdoll_scene_component_C.ShowPaperdollScene
struct Upaperdoll_scene_component_C_ShowPaperdollScene_Params
{
	bool                                               ShowCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Epaperdoll_camera_location>            CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
