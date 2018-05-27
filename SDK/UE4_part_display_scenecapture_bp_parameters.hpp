#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_part_display_scenecapture_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function part_display_scenecapture_bp.part_display_scenecapture_bp_C.UserConstructionScript
struct Apart_display_scenecapture_bp_C_UserConstructionScript_Params
{
};

// Function part_display_scenecapture_bp.part_display_scenecapture_bp_C.OnLoaded_CFD21DB141BFDFC07678EBAB8F7F29C4
struct Apart_display_scenecapture_bp_C_OnLoaded_CFD21DB141BFDFC07678EBAB8F7F29C4_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function part_display_scenecapture_bp.part_display_scenecapture_bp_C.ReceiveTick
struct Apart_display_scenecapture_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function part_display_scenecapture_bp.part_display_scenecapture_bp_C.ChangeDisplayedItem
struct Apart_display_scenecapture_bp_C_ChangeDisplayedItem_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EArchonBodyType                                    BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function part_display_scenecapture_bp.part_display_scenecapture_bp_C.ClearDisplayedItem
struct Apart_display_scenecapture_bp_C_ClearDisplayedItem_Params
{
};

// Function part_display_scenecapture_bp.part_display_scenecapture_bp_C.ExecuteUbergraph_part_display_scenecapture_bp
struct Apart_display_scenecapture_bp_C_ExecuteUbergraph_part_display_scenecapture_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
