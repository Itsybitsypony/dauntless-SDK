#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_debug_w_ArmourTinting_SubPanel_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.GetDyeInfo
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_GetDyeInfo_Params
{
	struct FName                                       DyeRow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemInstanceId;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                RemainingUses;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.UpdateDyeSwatches
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_UpdateDyeSwatches_Params
{
	bool                                               ShowAllTints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Init
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_Init_Params
{
};

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.GetSelectedArmourItem
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_GetSelectedArmourItem_Params
{
	class UArchonInventoryItem_Armour*                 ArmourItem;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Manage Selection Changes
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_Manage_Selection_Changes_Params
{
	bool                                               Primary_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Select Primary Slot
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_Select_Primary_Slot_Params
{
	class Ubpw_colorpicksquare_C*                      Color_Picker_Square;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Select Secondary Slot
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_Select_Secondary_Slot_Params
{
	class Ubpw_colorpicksquare_C*                      Color_Picker_Square;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Color Selection Made - Durable
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_Color_Selection_Made___Durable_Params
{
	class Ubpw_colorpicksquare_C*                      Color_Picker_Reference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Change Primary Color
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_Change_Primary_Color_Params
{
	class Ubpw_colorpicksquare_C*                      Reference;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Change Secondary Color
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_Change_Secondary_Color_Params
{
	class Ubpw_colorpicksquare_C*                      Reference;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Construct
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_Construct_Params
{
};

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.ExecuteUbergraph_debug_w_ArmourTinting_SubPanel_bpw
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_ExecuteUbergraph_debug_w_ArmourTinting_SubPanel_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.UpdatePaperdoll__DelegateSignature
struct Udebug_w_ArmourTinting_SubPanel_bpw_C_UpdatePaperdoll__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
