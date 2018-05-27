#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_world_map_zone_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.OnFocusReceived
struct Uw_world_map_zone_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.GetZone4CurrentIslands
struct Uw_world_map_zone_bpw_C_GetZone4CurrentIslands_Params
{
	TArray<class FString>                              MapNames;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<struct FName>                               AssociatedHuntIDs;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.PlayRevealIslandAnimation
struct Uw_world_map_zone_bpw_C_PlayRevealIslandAnimation_Params
{
	struct FName                                       IslandID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.PlayRevealZoneAnimation
struct Uw_world_map_zone_bpw_C_PlayRevealZoneAnimation_Params
{
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.HasDiscoveredIsland
struct Uw_world_map_zone_bpw_C_HasDiscoveredIsland_Params
{
	class FString                                      IslandID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsDiscovered;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.SetZoom
struct Uw_world_map_zone_bpw_C_SetZoom_Params
{
	bool                                               ZoomedIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.SetIsDiscovered
struct Uw_world_map_zone_bpw_C_SetIsDiscovered_Params
{
	bool                                               IsDiscovered;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.SetIsSelected
struct Uw_world_map_zone_bpw_C_SetIsSelected_Params
{
	bool                                               IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.PreConstruct
struct Uw_world_map_zone_bpw_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.LoadZoomedInVersionIcons
struct Uw_world_map_zone_bpw_C_LoadZoomedInVersionIcons_Params
{
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.Construct
struct Uw_world_map_zone_bpw_C_Construct_Params
{
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__w_world_map_zone_button_bpw_K2Node_ComponentBoundEvent_323_OnArchonUserButtonAction__DelegateSignature
struct Uw_world_map_zone_bpw_C_BndEvt__w_world_map_zone_button_bpw_K2Node_ComponentBoundEvent_323_OnArchonUserButtonAction__DelegateSignature_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_370_OnArchonUserButtonAction__DelegateSignature
struct Uw_world_map_zone_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_370_OnArchonUserButtonAction__DelegateSignature_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_386_OnArchonUserButtonAction__DelegateSignature
struct Uw_world_map_zone_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_386_OnArchonUserButtonAction__DelegateSignature_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_42_OnArchonUserButtonAction__DelegateSignature
struct Uw_world_map_zone_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_42_OnArchonUserButtonAction__DelegateSignature_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_48_OnArchonUserButtonAction__DelegateSignature
struct Uw_world_map_zone_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_48_OnArchonUserButtonAction__DelegateSignature_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.ExecuteUbergraph_w_world_map_zone_bpw
struct Uw_world_map_zone_bpw_C_ExecuteUbergraph_w_world_map_zone_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.OnZoneUnfocused__DelegateSignature
struct Uw_world_map_zone_bpw_C_OnZoneUnfocused__DelegateSignature_Params
{
	class Uw_world_map_zone_bpw_C*                     Zone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.OnZoneFocused__DelegateSignature
struct Uw_world_map_zone_bpw_C_OnZoneFocused__DelegateSignature_Params
{
	class Uw_world_map_zone_bpw_C*                     Zone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.OnZoneClicked__DelegateSignature
struct Uw_world_map_zone_bpw_C_OnZoneClicked__DelegateSignature_Params
{
	class Uw_world_map_zone_bpw_C*                     Zone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
