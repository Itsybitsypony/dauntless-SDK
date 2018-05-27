#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_weapon_ihammer_activereload_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.Set Slider Color
struct Ubpw_weapon_ihammer_activereload_C_Set_Slider_Color_Params
{
	struct FLinearColor                                Slider_Color;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.Reset Colors
struct Ubpw_weapon_ihammer_activereload_C_Reset_Colors_Params
{
};

// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.OnAnimationFinished
struct Ubpw_weapon_ihammer_activereload_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.OnActiveReloadComplete
struct Ubpw_weapon_ihammer_activereload_C_OnActiveReloadComplete_Params
{
	bool                                               Active_Reload_Success_;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.Tick
struct Ubpw_weapon_ihammer_activereload_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.UpdateMeter
struct Ubpw_weapon_ihammer_activereload_C_UpdateMeter_Params
{
};

// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.Construct
struct Ubpw_weapon_ihammer_activereload_C_Construct_Params
{
};

// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.OnActiveReloadStarted
struct Ubpw_weapon_ihammer_activereload_C_OnActiveReloadStarted_Params
{
};

// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.ExecuteUbergraph_bpw_weapon_ihammer_activereload
struct Ubpw_weapon_ihammer_activereload_C_ExecuteUbergraph_bpw_weapon_ihammer_activereload_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
