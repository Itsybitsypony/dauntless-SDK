#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CraftingComponent_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.GetVisibility_1
struct Uw_CraftingComponent_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.Get_Image_0_Brush_1
struct Uw_CraftingComponent_bpw_C_Get_Image_0_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.Get_IconDisplay_ToolTipWidget_1
struct Uw_CraftingComponent_bpw_C_Get_IconDisplay_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.From Component
struct Uw_CraftingComponent_bpw_C_From_Component_Params
{
	int                                                Inventory_Count;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCatalogRecipeComponent                     Recipe_Component;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.OnLoaded_7954BC0B4A8675FD89FA4FBA372CB599
struct Uw_CraftingComponent_bpw_C_OnLoaded_7954BC0B4A8675FD89FA4FBA372CB599_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.Construct
struct Uw_CraftingComponent_bpw_C_Construct_Params
{
};

// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.ExecuteUbergraph_w_CraftingComponent_bpw
struct Uw_CraftingComponent_bpw_C_ExecuteUbergraph_w_CraftingComponent_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
