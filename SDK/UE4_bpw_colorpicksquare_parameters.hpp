#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_colorpicksquare_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.GetVisibility_1
struct Ubpw_colorpicksquare_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Get_SurfaceImage_Brush_1
struct Ubpw_colorpicksquare_C_Get_SurfaceImage_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.GetToolTipWidget_1
struct Ubpw_colorpicksquare_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Get Dye Info Row Name
struct Ubpw_colorpicksquare_C_Get_Dye_Info_Row_Name_Params
{
	struct FName                                       Row_Name;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.OnMouseButtonDown
struct Ubpw_colorpicksquare_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Get Button Color
struct Ubpw_colorpicksquare_C_Get_Button_Color_Params
{
	struct FLinearColor                                Button_Color;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.OnLoaded_A9C468A04127AE561891A0B24FE2D837
struct Ubpw_colorpicksquare_C_OnLoaded_A9C468A04127AE561891A0B24FE2D837_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.OnRightClick
struct Ubpw_colorpicksquare_C_OnRightClick_Params
{
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Set Button Color
struct Ubpw_colorpicksquare_C_Set_Button_Color_Params
{
	TAssetPtr<class UTexture2D>                        SwatchTexture;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Select
struct Ubpw_colorpicksquare_C_Select_Params
{
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Deselect
struct Ubpw_colorpicksquare_C_Deselect_Params
{
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature
struct Ubpw_colorpicksquare_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Highlight
struct Ubpw_colorpicksquare_C_Highlight_Params
{
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Set Dye Info Row
struct Ubpw_colorpicksquare_C_Set_Dye_Info_Row_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.ExecuteUbergraph_bpw_colorpicksquare
struct Ubpw_colorpicksquare_C_ExecuteUbergraph_bpw_colorpicksquare_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.ButtonPressed__DelegateSignature
struct Ubpw_colorpicksquare_C_ButtonPressed__DelegateSignature_Params
{
	class Ubpw_colorpicksquare_C*                      Color_Picker_Reference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
