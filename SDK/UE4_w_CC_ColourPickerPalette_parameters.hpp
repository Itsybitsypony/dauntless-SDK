#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_ColourPickerPalette_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Get Active Eye Dropper
struct Uw_CC_ColourPickerPalette_C_Get_Active_Eye_Dropper_Params
{
	class Uw_PaletteEyeDropper_C*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Set Active Slider
struct Uw_CC_ColourPickerPalette_C_Set_Active_Slider_Params
{
	bool                                               Primary_Active;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Get Secondary Dropper Viewport Location
struct Uw_CC_ColourPickerPalette_C_Get_Secondary_Dropper_Viewport_Location_Params
{
	struct FGeometry                                   Geometry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ViewportPosition;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Get Primary Dropper Viewport Location
struct Uw_CC_ColourPickerPalette_C_Get_Primary_Dropper_Viewport_Location_Params
{
	struct FGeometry                                   Geometry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ViewportPosition;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Handle Analog Slider Y
struct Uw_CC_ColourPickerPalette_C_Handle_Analog_Slider_Y_Params
{
	bool                                               Did_Move_Slider;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Handle Analog Slider X
struct Uw_CC_ColourPickerPalette_C_Handle_Analog_Slider_X_Params
{
	bool                                               Did_Move_Slider;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Refresh Secondary Colour
struct Uw_CC_ColourPickerPalette_C_Refresh_Secondary_Colour_Params
{
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Refresh Primary Colour
struct Uw_CC_ColourPickerPalette_C_Refresh_Primary_Colour_Params
{
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Get Dropper Viewport Position
struct Uw_CC_ColourPickerPalette_C_Get_Dropper_Viewport_Position_Params
{
	struct FGeometry                                   Geometry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ViewportPosition;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.IsLeftStickNavigation
struct Uw_CC_ColourPickerPalette_C_IsLeftStickNavigation_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Update Colour Picker Material
struct Uw_CC_ColourPickerPalette_C_Update_Colour_Picker_Material_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Slider_X;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Slider_Y;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LinearColor;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Should Handle Analog Stick
struct Uw_CC_ColourPickerPalette_C_Should_Handle_Analog_Stick_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Analog_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Analog Step Slider
struct Uw_CC_ColourPickerPalette_C_Analog_Step_Slider_Params
{
	float                                              Slider;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Analog_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Slider_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnAnalogValueChanged
struct Uw_CC_ColourPickerPalette_C_OnAnalogValueChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnKeyDown
struct Uw_CC_ColourPickerPalette_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnMouseMove
struct Uw_CC_ColourPickerPalette_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnMouseButtonDown
struct Uw_CC_ColourPickerPalette_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Update Sliders From Mouse
struct Uw_CC_ColourPickerPalette_C_Update_Sliders_From_Mouse_Params
{
	struct FGeometry                                   Geometry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               Mouse_Input;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnFocusReceived
struct Uw_CC_ColourPickerPalette_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnLoaded_A997719A43C51C81C2378EBE5815F692
struct Uw_CC_ColourPickerPalette_C_OnLoaded_A997719A43C51C81C2378EBE5815F692_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Construct
struct Uw_CC_ColourPickerPalette_C_Construct_Params
{
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnFocusLost
struct Uw_CC_ColourPickerPalette_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Tick
struct Uw_CC_ColourPickerPalette_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.On Sliders Changed
struct Uw_CC_ColourPickerPalette_C_On_Sliders_Changed_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnMouseEnter
struct Uw_CC_ColourPickerPalette_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnSynchronizeProperties
struct Uw_CC_ColourPickerPalette_C_OnSynchronizeProperties_Params
{
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.New Palette
struct Uw_CC_ColourPickerPalette_C_New_Palette_Params
{
	TAssetPtr<class UObject>                           Palette;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Destruct
struct Uw_CC_ColourPickerPalette_C_Destruct_Params
{
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.On Sliders Initialized
struct Uw_CC_ColourPickerPalette_C_On_Sliders_Initialized_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.ExecuteUbergraph_w_CC_ColourPickerPalette
struct Uw_CC_ColourPickerPalette_C_ExecuteUbergraph_w_CC_ColourPickerPalette_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Secondary Slider Color Changed__DelegateSignature
struct Uw_CC_ColourPickerPalette_C_Secondary_Slider_Color_Changed__DelegateSignature_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Primary Slider Color Changed__DelegateSignature
struct Uw_CC_ColourPickerPalette_C_Primary_Slider_Color_Changed__DelegateSignature_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
