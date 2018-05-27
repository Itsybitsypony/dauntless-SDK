#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_PaletteEyeDropper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Set Inactive
struct Uw_PaletteEyeDropper_C_Set_Inactive_Params
{
};

// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Set Active
struct Uw_PaletteEyeDropper_C_Set_Active_Params
{
};

// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Update Secondary Colour
struct Uw_PaletteEyeDropper_C_Update_Secondary_Colour_Params
{
	struct FLinearColor                                Colour;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Update Primary Colour
struct Uw_PaletteEyeDropper_C_Update_Primary_Colour_Params
{
	struct FLinearColor                                Colour;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Set Position In Viewport
struct Uw_PaletteEyeDropper_C_Set_Position_In_Viewport_Params
{
	struct FVector2D                                   Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Construct
struct Uw_PaletteEyeDropper_C_Construct_Params
{
};

// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.ExecuteUbergraph_w_PaletteEyeDropper
struct Uw_PaletteEyeDropper_C_ExecuteUbergraph_w_PaletteEyeDropper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
