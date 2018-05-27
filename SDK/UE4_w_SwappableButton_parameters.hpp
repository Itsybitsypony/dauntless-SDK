#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_SwappableButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_SwappableButton.w_SwappableButton_C.GetIconFromKey
struct Uw_SwappableButton_C_GetIconFromKey_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	TAssetPtr<class UTexture2D>                        Output_Get;                                               // (Parm, OutParm)
};

// Function w_SwappableButton.w_SwappableButton_C.Refresh Clickable Button Style
struct Uw_SwappableButton_C_Refresh_Clickable_Button_Style_Params
{
};

// Function w_SwappableButton.w_SwappableButton_C.Refresh Position
struct Uw_SwappableButton_C_Refresh_Position_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_SwappableButton.w_SwappableButton_C.Get Slot Position from Anchors
struct Uw_SwappableButton_C_Get_Slot_Position_from_Anchors_Params
{
	struct FVector2D                                   Position;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function w_SwappableButton.w_SwappableButton_C.Refresh Anchors
struct Uw_SwappableButton_C_Refresh_Anchors_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_SwappableButton.w_SwappableButton_C.Get Horizontal Alignment from Anchors
struct Uw_SwappableButton_C_Get_Horizontal_Alignment_from_Anchors_Params
{
	TEnumAsByte<EHorizontalAlignment>                  Alignment;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_SwappableButton.w_SwappableButton_C.Set Button Label
struct Uw_SwappableButton_C_Set_Button_Label_Params
{
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_SwappableButton.w_SwappableButton_C.OnKeyDown
struct Uw_SwappableButton_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_SwappableButton.w_SwappableButton_C.OnLoaded_A058EA6248D678A919D5DF918A0F256D
struct Uw_SwappableButton_C_OnLoaded_A058EA6248D678A919D5DF918A0F256D_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_SwappableButton.w_SwappableButton_C.Construct
struct Uw_SwappableButton_C_Construct_Params
{
};

// Function w_SwappableButton.w_SwappableButton_C.Refresh
struct Uw_SwappableButton_C_Refresh_Params
{
};

// Function w_SwappableButton.w_SwappableButton_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct Uw_SwappableButton_C_BndEvt__ClickableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_SwappableButton.w_SwappableButton_C.Input Swap
struct Uw_SwappableButton_C_Input_Swap_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_SwappableButton.w_SwappableButton_C.Show Hover
struct Uw_SwappableButton_C_Show_Hover_Params
{
};

// Function w_SwappableButton.w_SwappableButton_C.Hide Hover
struct Uw_SwappableButton_C_Hide_Hover_Params
{
};

// Function w_SwappableButton.w_SwappableButton_C.Tick
struct Uw_SwappableButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_SwappableButton.w_SwappableButton_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct Uw_SwappableButton_C_BndEvt__ClickableButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_SwappableButton.w_SwappableButton_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct Uw_SwappableButton_C_BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_SwappableButton.w_SwappableButton_C.Refresh Button Label Color
struct Uw_SwappableButton_C_Refresh_Button_Label_Color_Params
{
	bool                                               Is_Hovered;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_SwappableButton.w_SwappableButton_C.PreConstruct
struct Uw_SwappableButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_SwappableButton.w_SwappableButton_C.ExecuteUbergraph_w_SwappableButton
struct Uw_SwappableButton_C_ExecuteUbergraph_w_SwappableButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_SwappableButton.w_SwappableButton_C.OnClicked__DelegateSignature
struct Uw_SwappableButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
