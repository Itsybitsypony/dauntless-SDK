#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Morph_Blend_Slider2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.OnKeyDown
struct Uw_Morph_Blend_Slider2_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.GetVisibility_1
struct Uw_Morph_Blend_Slider2_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Get Morph Value
struct Uw_Morph_Blend_Slider2_C_Get_Morph_Value_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.OnFocusReceived
struct Uw_Morph_Blend_Slider2_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Reset Morph Value
struct Uw_Morph_Blend_Slider2_C_Reset_Morph_Value_Params
{
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Set Morph Value
struct Uw_Morph_Blend_Slider2_C_Set_Morph_Value_Params
{
	float                                              NewMorphValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Cancel Value
struct Uw_Morph_Blend_Slider2_C_Cancel_Value_Params
{
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Save Value
struct Uw_Morph_Blend_Slider2_C_Save_Value_Params
{
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Set Target Mesh Component
struct Uw_Morph_Blend_Slider2_C_Set_Target_Mesh_Component_Params
{
	class USkeletalMeshComponent*                      Skeletal_Mesh_Component;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFaceMorphTranslation                       Morph_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USkeletalMeshComponent*                      Beard_Mesh_Component;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Destruct
struct Uw_Morph_Blend_Slider2_C_Destruct_Params
{
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature
struct Uw_Morph_Blend_Slider2_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature
struct Uw_Morph_Blend_Slider2_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature
struct Uw_Morph_Blend_Slider2_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature
struct Uw_Morph_Blend_Slider2_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature
struct Uw_Morph_Blend_Slider2_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Tick
struct Uw_Morph_Blend_Slider2_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Slider Lost Focus
struct Uw_Morph_Blend_Slider2_C_Slider_Lost_Focus_Params
{
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Slider Gained Focus
struct Uw_Morph_Blend_Slider2_C_Slider_Gained_Focus_Params
{
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Construct
struct Uw_Morph_Blend_Slider2_C_Construct_Params
{
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.OnMouseEnter
struct Uw_Morph_Blend_Slider2_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.OnFocusLost
struct Uw_Morph_Blend_Slider2_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.InputSwap
struct Uw_Morph_Blend_Slider2_C_InputSwap_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.ExecuteUbergraph_w_Morph_Blend_Slider2
struct Uw_Morph_Blend_Slider2_C_ExecuteUbergraph_w_Morph_Blend_Slider2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.MorphValueChanged__DelegateSignature
struct Uw_Morph_Blend_Slider2_C_MorphValueChanged__DelegateSignature_Params
{
	float                                              NewMorphValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFaceMorphTranslation                       MorphInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
