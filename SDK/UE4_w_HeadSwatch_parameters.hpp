#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_HeadSwatch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_HeadSwatch.w_HeadSwatch_C.OnKeyDown
struct Uw_HeadSwatch_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_HeadSwatch.w_HeadSwatch_C.OnFocusReceived
struct Uw_HeadSwatch_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_HeadSwatch.w_HeadSwatch_C.SetSwatchIcon
struct Uw_HeadSwatch_C_SetSwatchIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_HeadSwatch.w_HeadSwatch_C.BndEvt__BU_HeadSwatch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct Uw_HeadSwatch_C_BndEvt__BU_HeadSwatch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_HeadSwatch.w_HeadSwatch_C.BndEvt__BU_HeadSwatch_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
struct Uw_HeadSwatch_C_BndEvt__BU_HeadSwatch_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_HeadSwatch.w_HeadSwatch_C.Tick
struct Uw_HeadSwatch_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_HeadSwatch.w_HeadSwatch_C.Construct
struct Uw_HeadSwatch_C_Construct_Params
{
};

// Function w_HeadSwatch.w_HeadSwatch_C.Button Gained Focus
struct Uw_HeadSwatch_C_Button_Gained_Focus_Params
{
	struct FGeometry                                   My_Geometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function w_HeadSwatch.w_HeadSwatch_C.Button Lost Focus
struct Uw_HeadSwatch_C_Button_Lost_Focus_Params
{
};

// Function w_HeadSwatch.w_HeadSwatch_C.Swatch Selected
struct Uw_HeadSwatch_C_Swatch_Selected_Params
{
};

// Function w_HeadSwatch.w_HeadSwatch_C.Scroll Into View
struct Uw_HeadSwatch_C_Scroll_Into_View_Params
{
};

// Function w_HeadSwatch.w_HeadSwatch_C.ExecuteUbergraph_w_HeadSwatch
struct Uw_HeadSwatch_C_ExecuteUbergraph_w_HeadSwatch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_HeadSwatch.w_HeadSwatch_C.HeadSwatchSelect__DelegateSignature
struct Uw_HeadSwatch_C_HeadSwatchSelect__DelegateSignature_Params
{
	struct FName                                       HeadMorphSelected;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SwatchIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Swatch_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
