// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_world_map_island_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_world_map_island_bpw.w_world_map_island_bpw_C.SetZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ZoomedIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_island_bpw_C::SetZoom(bool ZoomedIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_island_bpw.w_world_map_island_bpw_C.SetZoom");

	Uw_world_map_island_bpw_C_SetZoom_Params params;
	params.ZoomedIn = ZoomedIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_island_bpw.w_world_map_island_bpw_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_island_bpw_C::SetIsSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_island_bpw.w_world_map_island_bpw_C.SetIsSelected");

	Uw_world_map_island_bpw_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_island_bpw.w_world_map_island_bpw_C.PlayRevealIslandAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_world_map_island_bpw_C::PlayRevealIslandAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_island_bpw.w_world_map_island_bpw_C.PlayRevealIslandAnimation");

	Uw_world_map_island_bpw_C_PlayRevealIslandAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_island_bpw.w_world_map_island_bpw_C.HasDiscoveredIsland
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Discovered                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_island_bpw_C::HasDiscoveredIsland(bool* Discovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_island_bpw.w_world_map_island_bpw_C.HasDiscoveredIsland");

	Uw_world_map_island_bpw_C_HasDiscoveredIsland_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Discovered != nullptr)
		*Discovered = params.Discovered;
}


// Function w_world_map_island_bpw.w_world_map_island_bpw_C.OnLoaded_FF60CB4D43EB09E933A91BB5945A38FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_island_bpw_C::OnLoaded_FF60CB4D43EB09E933A91BB5945A38FB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_island_bpw.w_world_map_island_bpw_C.OnLoaded_FF60CB4D43EB09E933A91BB5945A38FB");

	Uw_world_map_island_bpw_C_OnLoaded_FF60CB4D43EB09E933A91BB5945A38FB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_island_bpw.w_world_map_island_bpw_C.OnLoaded_6EA8EB1046FC633F79AC3AAFFD635440
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_island_bpw_C::OnLoaded_6EA8EB1046FC633F79AC3AAFFD635440(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_island_bpw.w_world_map_island_bpw_C.OnLoaded_6EA8EB1046FC633F79AC3AAFFD635440");

	Uw_world_map_island_bpw_C_OnLoaded_6EA8EB1046FC633F79AC3AAFFD635440_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_island_bpw.w_world_map_island_bpw_C.LoadNormalIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    NormalIcon                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_world_map_island_bpw_C::LoadNormalIcon(TAssetPtr<class UTexture2D> NormalIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_island_bpw.w_world_map_island_bpw_C.LoadNormalIcon");

	Uw_world_map_island_bpw_C_LoadNormalIcon_Params params;
	params.NormalIcon = NormalIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_island_bpw.w_world_map_island_bpw_C.LoadSelectedIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    SelectedIcon                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_world_map_island_bpw_C::LoadSelectedIcon(TAssetPtr<class UTexture2D> SelectedIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_island_bpw.w_world_map_island_bpw_C.LoadSelectedIcon");

	Uw_world_map_island_bpw_C_LoadSelectedIcon_Params params;
	params.SelectedIcon = SelectedIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_island_bpw.w_world_map_island_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_world_map_island_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_island_bpw.w_world_map_island_bpw_C.Construct");

	Uw_world_map_island_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_island_bpw.w_world_map_island_bpw_C.UpdateTimer
// (BlueprintCallable, BlueprintEvent)

void Uw_world_map_island_bpw_C::UpdateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_island_bpw.w_world_map_island_bpw_C.UpdateTimer");

	Uw_world_map_island_bpw_C_UpdateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_island_bpw.w_world_map_island_bpw_C.ExecuteUbergraph_w_world_map_island_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_island_bpw_C::ExecuteUbergraph_w_world_map_island_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_island_bpw.w_world_map_island_bpw_C.ExecuteUbergraph_w_world_map_island_bpw");

	Uw_world_map_island_bpw_C_ExecuteUbergraph_w_world_map_island_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
