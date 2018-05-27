// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_paperdoll_scene_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function paperdoll_scene_component.paperdoll_scene_component_C.HidePaperdollScene
// (Public, BlueprintCallable, BlueprintEvent)

void Upaperdoll_scene_component_C::HidePaperdollScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function paperdoll_scene_component.paperdoll_scene_component_C.HidePaperdollScene");

	Upaperdoll_scene_component_C_HidePaperdollScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function paperdoll_scene_component.paperdoll_scene_component_C.ShowPaperdollScene
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Epaperdoll_camera_location> CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upaperdoll_scene_component_C::ShowPaperdollScene(bool ShowCharacter, bool ShowWeapon, TEnumAsByte<Epaperdoll_camera_location> CameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function paperdoll_scene_component.paperdoll_scene_component_C.ShowPaperdollScene");

	Upaperdoll_scene_component_C_ShowPaperdollScene_Params params;
	params.ShowCharacter = ShowCharacter;
	params.ShowWeapon = ShowWeapon;
	params.CameraLocation = CameraLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
