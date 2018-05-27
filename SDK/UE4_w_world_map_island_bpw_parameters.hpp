#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_world_map_island_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_world_map_island_bpw.w_world_map_island_bpw_C.SetZoom
struct Uw_world_map_island_bpw_C_SetZoom_Params
{
	bool                                               ZoomedIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_island_bpw.w_world_map_island_bpw_C.SetIsSelected
struct Uw_world_map_island_bpw_C_SetIsSelected_Params
{
	bool                                               IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_island_bpw.w_world_map_island_bpw_C.PlayRevealIslandAnimation
struct Uw_world_map_island_bpw_C_PlayRevealIslandAnimation_Params
{
};

// Function w_world_map_island_bpw.w_world_map_island_bpw_C.HasDiscoveredIsland
struct Uw_world_map_island_bpw_C_HasDiscoveredIsland_Params
{
	bool                                               Discovered;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_island_bpw.w_world_map_island_bpw_C.OnLoaded_FF60CB4D43EB09E933A91BB5945A38FB
struct Uw_world_map_island_bpw_C_OnLoaded_FF60CB4D43EB09E933A91BB5945A38FB_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_island_bpw.w_world_map_island_bpw_C.OnLoaded_6EA8EB1046FC633F79AC3AAFFD635440
struct Uw_world_map_island_bpw_C_OnLoaded_6EA8EB1046FC633F79AC3AAFFD635440_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_island_bpw.w_world_map_island_bpw_C.LoadNormalIcon
struct Uw_world_map_island_bpw_C_LoadNormalIcon_Params
{
	TAssetPtr<class UTexture2D>                        NormalIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_world_map_island_bpw.w_world_map_island_bpw_C.LoadSelectedIcon
struct Uw_world_map_island_bpw_C_LoadSelectedIcon_Params
{
	TAssetPtr<class UTexture2D>                        SelectedIcon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_world_map_island_bpw.w_world_map_island_bpw_C.Construct
struct Uw_world_map_island_bpw_C_Construct_Params
{
};

// Function w_world_map_island_bpw.w_world_map_island_bpw_C.UpdateTimer
struct Uw_world_map_island_bpw_C_UpdateTimer_Params
{
};

// Function w_world_map_island_bpw.w_world_map_island_bpw_C.ExecuteUbergraph_w_world_map_island_bpw
struct Uw_world_map_island_bpw_C_ExecuteUbergraph_w_world_map_island_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
