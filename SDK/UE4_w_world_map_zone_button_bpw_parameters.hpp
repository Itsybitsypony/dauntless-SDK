#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_world_map_zone_button_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C.SetZoneImage
struct Uw_world_map_zone_button_bpw_C_SetZoneImage_Params
{
	class UTexture2D*                                  SelectedTexture;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C.SetButtonEnabled
struct Uw_world_map_zone_button_bpw_C_SetButtonEnabled_Params
{
	bool                                               IsButtonEnabled;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C.OnFocusReceived
struct Uw_world_map_zone_button_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C.SetIsSelected
struct Uw_world_map_zone_button_bpw_C_SetIsSelected_Params
{
	bool                                               IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
