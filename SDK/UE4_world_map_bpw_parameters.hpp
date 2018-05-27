#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_world_map_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function world_map_bpw.world_map_bpw_C.RefreshNoRegionsPanel
struct Uworld_map_bpw_C_RefreshNoRegionsPanel_Params
{
};

// Function world_map_bpw.world_map_bpw_C.OnKeyDown
struct Uworld_map_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function world_map_bpw.world_map_bpw_C.GetDefaultFocusedWidget
struct Uworld_map_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function world_map_bpw.world_map_bpw_C.CloseSilently
struct Uworld_map_bpw_C_CloseSilently_Params
{
};

// Function world_map_bpw.world_map_bpw_C.InputSwap
struct Uworld_map_bpw_C_InputSwap_Params
{
	bool                                               IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function world_map_bpw.world_map_bpw_C.Close
struct Uworld_map_bpw_C_Close_Params
{
};

// Function world_map_bpw.world_map_bpw_C.TryPlayRevealAnimationSequence
struct Uworld_map_bpw_C_TryPlayRevealAnimationSequence_Params
{
};

// Function world_map_bpw.world_map_bpw_C.BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_6_OnZoneClicked__DelegateSignature
struct Uworld_map_bpw_C_BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_6_OnZoneClicked__DelegateSignature_Params
{
	class Uw_world_map_zone_bpw_C*                     Zone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function world_map_bpw.world_map_bpw_C.BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_40_OnZoneFocused__DelegateSignature
struct Uworld_map_bpw_C_BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_40_OnZoneFocused__DelegateSignature_Params
{
	class Uw_world_map_zone_bpw_C*                     Zone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function world_map_bpw.world_map_bpw_C.BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_44_OnZoneUnfocused__DelegateSignature
struct Uworld_map_bpw_C_BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_44_OnZoneUnfocused__DelegateSignature_Params
{
	class Uw_world_map_zone_bpw_C*                     Zone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function world_map_bpw.world_map_bpw_C.Construct
struct Uworld_map_bpw_C_Construct_Params
{
};

// Function world_map_bpw.world_map_bpw_C.ExecuteUbergraph_world_map_bpw
struct Uworld_map_bpw_C_ExecuteUbergraph_world_map_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
