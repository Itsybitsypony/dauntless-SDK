#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_reagent_entry_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.GetBackground_1
struct Uw_reagent_entry_bpw_C_GetBackground_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Get_Container_ToolTipWidget_1
struct Uw_reagent_entry_bpw_C_Get_Container_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.GetTextColor
struct Uw_reagent_entry_bpw_C_GetTextColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Clear Entry
struct Uw_reagent_entry_bpw_C_Clear_Entry_Params
{
};

// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Populate Component Data
struct Uw_reagent_entry_bpw_C_Populate_Component_Data_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.OnLoaded_BF94643A458279D263D441AA4B4164AD
struct Uw_reagent_entry_bpw_C_OnLoaded_BF94643A458279D263D441AA4B4164AD_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Tick
struct Uw_reagent_entry_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Construct
struct Uw_reagent_entry_bpw_C_Construct_Params
{
};

// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.LoadIcon
struct Uw_reagent_entry_bpw_C_LoadIcon_Params
{
};

// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.ExecuteUbergraph_w_reagent_entry_bpw
struct Uw_reagent_entry_bpw_C_ExecuteUbergraph_w_reagent_entry_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
